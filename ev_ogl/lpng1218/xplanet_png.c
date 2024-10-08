/****************************************************************************
    png.c - read and write png images using libpng routines.
    Distributed with Xplanet.
    Copyright (C) 2002 Hari Nair <hari@alumni.caltech.edu>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "png.h"		//Changed by PSU. This file downloaded off the web and is not part of libpng, by the way.
#undef WIN32
#undef _DEBUG
#undef _CONSOLE

int read_png(const char *filename, int *width, int *height, unsigned char *rgb)
{
    FILE *infile = fopen(filename, "rb");

    png_structp png_ptr;
    png_infop info_ptr;
    png_bytepp row_pointers;
    unsigned char *ptr = NULL;
    png_uint_32 w, h;
    int bit_depth, color_type, interlace_type;
    int i;

    png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING, 
                                     (png_voidp) NULL, 
                                     (png_error_ptr) NULL, 
                                     (png_error_ptr) NULL);
    if (!png_ptr) 
    {
        fclose(infile);
        return(0);
    }
  
    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr)
    {
        png_destroy_read_struct(&png_ptr, (png_infopp) NULL, 
                                (png_infopp) NULL);
        fclose(infile);
        return(0);
    }
  
    if (setjmp(png_ptr->jmpbuf))
    {
        png_destroy_read_struct(&png_ptr, &info_ptr, (png_infopp) NULL);
        fclose(infile);
        return(0);
    }
  
    png_init_io(png_ptr, infile);
    png_read_info(png_ptr, info_ptr);

    png_get_IHDR(png_ptr, info_ptr, &w, &h, &bit_depth, &color_type,
                 &interlace_type, (int *) NULL, (int *) NULL);

    *width = (int) w;
    *height = (int) h;

    /* Change a paletted/grayscale image to RGB */
    if (color_type == PNG_COLOR_TYPE_PALETTE && bit_depth <= 8) 
        png_set_expand(png_ptr);

    /* Change a grayscale image to RGB */
    if (color_type == PNG_COLOR_TYPE_GRAY 
        || color_type == PNG_COLOR_TYPE_GRAY_ALPHA)
        png_set_gray_to_rgb(png_ptr);

    /* Don't need the alpha channel */
    if (color_type & PNG_COLOR_MASK_ALPHA) png_set_strip_alpha(png_ptr);
 
    /* If the PNG file has 16 bits per channel, strip them down to 8 */
    if (bit_depth == 16) png_set_strip_16(png_ptr);

    /* use 1 byte per pixel */
    png_set_packing(png_ptr);

    row_pointers = malloc(*height * sizeof(png_bytep));
    if (row_pointers == NULL)
    {
        fprintf(stderr, "Can't allocate memory for PNG file.\n");
        return(0);
    }

    for (i = 0; i < *height; i++)
    {
        row_pointers[i] = malloc(3 * *width * sizeof(png_byte));
        if (row_pointers == NULL)
        {
            fprintf(stderr, "Can't allocate memory for PNG line.\n");
            return(0);
        }
    }

    png_read_image(png_ptr, row_pointers);
  
    ptr = rgb;

    for (i = 0; i < *height; i++)
    {
        memcpy(ptr, row_pointers[i], 3 * *width);
        ptr += 3 * *width;
    }

    png_destroy_read_struct(&png_ptr, &info_ptr, (png_infopp) NULL);

    for (i = 0; i < *height; i++) free(row_pointers[i]);
    free(row_pointers);

    fclose(infile);
    return(1);
}

int
write_png(FILE *outfile, int width, int height, unsigned char *rgb,
	  unsigned char *alpha)
{
    png_structp png_ptr;
    png_infop info_ptr;
    png_bytep row_ptr;

    int i;

    png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, 
                                      (png_voidp) NULL, 
                                      (png_error_ptr) NULL, 
                                      (png_error_ptr) NULL);

    if (!png_ptr) return(0);
  
    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr)
    {
        png_destroy_write_struct(&png_ptr, (png_infopp) NULL);
        return(0);
    }
  
    png_init_io(png_ptr, outfile);

    if (alpha == NULL)
    {
	png_set_IHDR(png_ptr, info_ptr, width, height, 8, PNG_COLOR_TYPE_RGB,
		     PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT,
		     PNG_FILTER_TYPE_DEFAULT);
	
	png_write_info(png_ptr, info_ptr);
	
	for (i = 0; i < height; i++) 
	{
	    row_ptr = rgb + 3 * i * width;
	    png_write_rows(png_ptr, &row_ptr, 1);
	}
    }
    else
    {
	int irgb = 0;
	int irgba = 0;

	int area = width * height;
	unsigned char *rgba = malloc(4 * area);

	png_set_IHDR(png_ptr, info_ptr, width, height, 8, 
		     PNG_COLOR_TYPE_RGB_ALPHA,
		     PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT,
		     PNG_FILTER_TYPE_DEFAULT);
	
	png_write_info(png_ptr, info_ptr);
	
	for (i = 0; i < area; i++)
	{
	    rgba[irgba++] = rgb[irgb++];
	    rgba[irgba++] = rgb[irgb++];
	    rgba[irgba++] = rgb[irgb++];
	    rgba[irgba++] = alpha[i];
	}
	
	for (i = 0; i < height; i++) 
	{
	    row_ptr = rgba + 4 * i * width;
	    png_write_rows(png_ptr, &row_ptr, 1);
	}

	free(rgba);
    }

    png_write_end(png_ptr, info_ptr);
    png_destroy_write_struct(&png_ptr, &info_ptr);

    return(1);
}
