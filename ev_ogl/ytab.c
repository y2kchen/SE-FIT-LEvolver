/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted 
   "INFRINGES ON USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EXPRESSION_START_TOK = 258,
     COMMAND_START_TOK = 259,
     HISTORY_TOK = 260,
     GEOMVIEW_TOK = 261,
     VIEW_MATRIX_TOK = 262,
     ON_ASSIGN_CALL_TOK = 263,
     LEAD_INTEGER_TOK = 264,
     INTEGER_TOK = 265,
     REAL_TOK = 266,
     SIGNED_NUMBER_TOK = 267,
     NEWIDENT_TOK = 268,
     REDEFINE_TOK = 269,
     MATHFUNC_TOK = 270,
     MATHFUNC2_TOK = 271,
     POW_TOK = 272,
     IS_CONSTRAINT_TOK = 273,
     USERFUNC_TOK = 274,
     MIDV_TOK = 275,
     DATAFILENAME_TOK = 276,
     LOGFILE_TOK = 277,
     PI_TOK = 278,
     E_TOK = 279,
     G_TOK = 280,
     PARAM_TOK = 281,
     SYMBOL_TOK = 282,
     TOTAL_TOK = 283,
     EXTRA_ATTRIBUTE_TOK = 284,
     FIXEDVOL_TOK = 285,
     IDENT_TOK = 286,
     UMINUS_TOK = 287,
     SHELL_TOK = 288,
     COLOR_TOK = 289,
     HESSIAN_TOK = 290,
     VOLCONST_TOK = 291,
     TORUS_PERIODS_TOK = 292,
     VERTICES_TOK = 293,
     EDGES_TOK = 294,
     FACETS_TOK = 295,
     BODIES_TOK = 296,
     HESSIAN_MENU_TOK = 297,
     POSTSCRIPT_TOK = 298,
     NORMAL_TOK = 299,
     LENGTH_TOK = 300,
     AREA_TOK = 301,
     VOLUME_TOK = 302,
     ID_TOK = 303,
     OID_TOK = 304,
     TAG_TOK = 305,
     ORIGINAL_TOK = 306,
     FACETEDGES_TOK = 307,
     WRAP_TOK = 308,
     QUOTATION_TOK = 309,
     UNSET_TOK = 310,
     TOPINFO_TOK = 311,
     OPACITY_TOK = 312,
     VALENCE_TOK = 313,
     HESSIAN_SADDLE_TOK = 314,
     NO_DUMP_TOK = 315,
     SET_TOK = 316,
     FIXED_TOK = 317,
     DENSITY_TOK = 318,
     PRESSURE_TOK = 319,
     CONSTRAINT_TOK = 320,
     COORD_TOK = 321,
     DISSOLVE_TOK = 322,
     WHERE_TOK = 323,
     LIST_TOK = 324,
     SHOW_TOK = 325,
     DELETE_TOK = 326,
     REFINE_TOK = 327,
     RECALC_TOK = 328,
     SHOWQ_TOK = 329,
     EDGESWAP_TOK = 330,
     STRINGARRAY_TOK = 331,
     FIX_TOK = 332,
     UNFIX_TOK = 333,
     TOGGLENAME_TOK = 334,
     TOGGLEVALUE_TOK = 335,
     QUANTITY_NAME_TOK = 336,
     PAUSE_TOK = 337,
     VALUE_OF_CONSTRAINT_TOK = 338,
     GO_TOK = 339,
     SHOW_VOL_TOK = 340,
     CHECK_TOK = 341,
     READ_TOK = 342,
     ZOOM_TOK = 343,
     ON_TOK = 344,
     OFF_TOK = 345,
     GEOMPIPE_TOK = 346,
     SELF_TOK = 347,
     SINGLE_LETTER_TOK = 348,
     LONG_JIGGLE_TOK = 349,
     RAW_VERAVG_TOK = 350,
     COUNTS_TOK = 351,
     CHDIR_TOK = 352,
     QUOTED_LETTER_TOK = 353,
     ALICE_TOK = 354,
     STABILITY_TEST_TOK = 355,
     DEFINE_TOK = 356,
     UPLUS_TOK = 357,
     DATATYPE_TOK = 358,
     FLUSH_COUNTS_TOK = 359,
     NORMAL_VECTOR_TOK = 360,
     AUTOCHOP_TOK = 361,
     UTEST_TOK = 362,
     ATTRIBUTE_TOK = 363,
     RITZ_TOK = 364,
     MOVE_TOK = 365,
     VERTEXNORMAL_TOK = 366,
     POP_TOK = 367,
     SYSTEM_TOK = 368,
     TETRA_POINT_TOK = 369,
     TRIPLE_POINT_TOK = 370,
     LANCZOS_TOK = 371,
     EIGENPROBE_TOK = 372,
     EXEC_TOK = 373,
     NO_HESSIAN_NORMAL_TOK = 374,
     AREAWEED_TOK = 375,
     EDGEWEED_TOK = 376,
     GRAVITY_TOK = 377,
     EDGEDIVIDE_TOK = 378,
     LINEAR_TOK = 379,
     QUADRATIC_TOK = 380,
     EVOLVER_VERSION_TOK = 381,
     DIFFUSION_TOK = 382,
     EXTRAPOLATE_TOK = 383,
     TRANSFORM_DEPTH_TOK = 384,
     PRINTF_TOK = 385,
     ERRPRINTF_TOK = 386,
     NONPOSITIVE_TOK = 387,
     NONNEGATIVE_TOK = 388,
     PRINT_TOK = 389,
     MAX_TOK = 390,
     MIN_TOK = 391,
     COUNT_TOK = 392,
     SUM_TOK = 393,
     AVG_TOK = 394,
     BREAK_TOK = 395,
     CONTINUE_TOK = 396,
     SIZEOF_TOK = 397,
     TRANSFORM_EXPR_TOK = 398,
     BARE_TOK = 399,
     BOTTOMINFO_TOK = 400,
     METIS_TOK = 401,
     KMETIS_TOK = 402,
     KEYLOGFILE_TOK = 403,
     SCALE_TOK = 404,
     PSCALE_TOK = 405,
     BURCHARD_TOK = 406,
     REBODY_TOK = 407,
     BOUNDARY_TOK = 408,
     ORIENTATION_TOK = 409,
     OMETIS_TOK = 410,
     SQ_MEAN_CURV_TOK = 411,
     FRONTCOLOR_TOK = 412,
     SINGLE_REDEFD_TOK = 413,
     METHOD_NAME_TOK = 414,
     TASK_EXEC_TOK = 415,
     RAWEST_VERAVG_TOK = 416,
     SINGLE_LETTER_ARG_TOK = 417,
     BACKCOLOR_TOK = 418,
     LAGRANGE_TOK = 419,
     RETURN_TOK = 420,
     TRANSFORM_EXPR_VERB_TOK = 421,
     OOGLFILE_TOK = 422,
     PARALLEL_EXEC_TOK = 423,
     BINARY_OFF_FILE_TOK = 424,
     SPRINTF_TOK = 425,
     CONVERT_TO_QUANTS_TOK = 426,
     METIS_FACTOR_TOK = 427,
     FUNCTION_TOK = 428,
     EXPRINT_TOK = 429,
     DIHEDRAL_TOK = 430,
     WRAP_VERTEX_TOK = 431,
     ARRAYIDENT_TOK = 432,
     DATE_AND_TIME_TOK = 433,
     LOCAL_TOK = 434,
     SHOW_EXPR_TOK = 435,
     SHOW_TRANS_TOK = 436,
     AXIAL_POINT_TOK = 437,
     ENERGY_TOK = 438,
     CONSERVED_TOK = 439,
     INFO_ONLY_TOK = 440,
     ASSIGN_TOK = 441,
     PROCEDURE_TOK = 442,
     FOREACH_TOK = 443,
     STRINGGLOBAL_TOK = 444,
     EQUIANGULATE_TOK = 445,
     HISTOGRAM_TOK = 446,
     LOGHISTOGRAM_TOK = 447,
     AREA_FIXED_TOK = 448,
     QUIT_TOK = 449,
     WARNING_MESSAGES_TOK = 450,
     CENTEROFMASS_TOK = 451,
     IF_TOK = 452,
     WHILE_TOK = 453,
     DO_TOK = 454,
     NO_REFINE_TOK = 455,
     NO_TRANSFORM_TOK = 456,
     STRING_TOK = 457,
     NONCONTENT_TOK = 458,
     FOR_TOK = 459,
     HIT_PARTNER_TOK = 460,
     FRONTBODY_TOK = 461,
     BACKBODY_TOK = 462,
     COLORFILE_TOK = 463,
     PERM_STRINGGLOBAL_TOK = 464,
     FUNCTION_IDENT_TOK = 465,
     THICKEN_TOK = 466,
     COLORMAP_TOK = 467,
     REDIRECT_TOK = 468,
     NEWVERTEX_TOK = 469,
     NEWEDGE_TOK = 470,
     NEWFACET_TOK = 471,
     FACET_CROSSCUT_TOK = 472,
     MODULUS_TOK = 473,
     TARGET_TOK = 474,
     VALUE_TOK = 475,
     INVERSE_PERIODS_TOK = 476,
     NEWBODY_TOK = 477,
     PDELTA_TOK = 478,
     GAP_CONSTANT_TOK = 479,
     DUMP_TOK = 480,
     NOTCH_TOK = 481,
     QUANTITY_TOK = 482,
     LOAD_TOK = 483,
     PERM_PROCEDURE_TOK = 484,
     PROCEDURE_WORD_TOK = 485,
     DYNAMIC_LOAD_FUNC_TOK = 486,
     PERM_IDENT_TOK = 487,
     PERMLOAD_TOK = 488,
     HELP_TOK = 489,
     VERTEX_AVERAGE_TOK = 490,
     METHOD_INSTANCE_TOK = 491,
     RAW_VERTEX_AVERAGE_TOK = 492,
     REDIRECTOVER_ERR_TOK = 493,
     OPTIMIZE_TOK = 494,
     REDIRECTOVER_TOK = 495,
     TOLERANCE_TOK = 496,
     RAWEST_VERTEX_AVERAGE_TOK = 497,
     REDIRECT_ERR_TOK = 498,
     JIGGLE_TOK = 499,
     VIEW_TRANSFORMS_TOK = 500,
     CLOSE_SHOW_TOK = 501,
     IS_DEFINED_TOK = 502,
     NODISPLAY_TOK = 503,
     PERM_ASSIGN_TOK = 504,
     PHASE_TOK = 505,
     VIEW_TRANSFORM_SWAP_COLORS_TOK = 506,
     BACKQUOTE_COMMA_TOK = 507,
     P_FORCE_TOK = 508,
     P_VELOCITY_TOK = 509,
     INTERNAL_VARIABLE_TOK = 510,
     DIRICHLET_TOK = 511,
     SOBOLEV_TOK = 512,
     VIEW_TRANSFORM_PARITY_TOK = 513,
     SOBOLEV_SEEK_TOK = 514,
     DIRICHLET_SEEK_TOK = 515,
     HESSIAN_SEEK_TOK = 516,
     REORDER_STORAGE_TOK = 517,
     RENUMBER_ALL_TOK = 518,
     CONSTRAINT_NAME_TOK = 519,
     BOUNDARY_NAME_TOK = 520,
     PROCEDURE_IDENT_TOK = 521,
     POP_TRI_TO_EDGE_TOK = 522,
     POP_EDGE_TO_TRI_TOK = 523,
     POP_QUAD_TO_QUAD_TOK = 524,
     SHOWVERB_TOK = 525,
     PROCEDURES_TOK = 526,
     MPI_TASK_ATTR_TOK = 527,
     T1_EDGESWAP_TOK = 528,
     MERGE_EDGE_TOK = 529,
     MERGE_FACET_TOK = 530,
     MERGE_VERTEX_TOK = 531,
     RESET_COUNTS_TOK = 532,
     VALID_ELEMENT_TOK = 533,
     MID_EDGE_TOK = 534,
     MID_FACET_TOK = 535,
     GO_COUNT_TOK = 536,
     ELEMENT_IDENT_TOK = 537,
     BODY_METIS_TOK = 538,
     REVERSE_ORIENTATION_TOK = 539,
     MATRIX_MULTIPLY_TOK = 540,
     MATRIX_INVERSE_TOK = 541,
     BINARY_PRINTF_TOK = 542,
     DUMP_MEMLIST_TOK = 543,
     FREE_DISCARDS_TOK = 544,
     REPARTITION_TOK = 545,
     METIS_READJUST_TOK = 546,
     MEAN_CURVATURE_TOK = 547,
     GLOBAL_TOK = 548,
     LEAD_INTEGER_AT_TOK = 549,
     INTEGER_AT_TOK = 550,
     MATRIX_DETERMINANT_TOK = 551,
     SUBCOMMAND_TOK = 552,
     ABORT_TOK = 553,
     BREAKPOINT_TOK = 554,
     WHEREAMI_TOK = 555,
     ADDLOAD_TOK = 556,
     SIMPLEX_TO_FE_TOK = 557,
     REPLACE_LOAD_TOK = 558,
     DISPLAY_TEXT_TOK = 559,
     DELETE_TEXT_TOK = 560,
     SUPPRESS_WARNING_TOK = 561,
     UNSUPPRESS_WARNING_TOK = 562,
     RESET_PROFILING_TOK = 563,
     VALID_CONSTRAINT_TOK = 564,
     VALID_BOUNDARY_TOK = 565,
     ARRAY_ATTRIBUTE_TOK = 566,
     PROFILING_TOK = 567,
     DETORUS_TOK = 568,
     MAKE_THREAD_LISTS_TOK = 569,
     ASSIGNOP_TOK = 570,
     PIPE_TOK = 571,
     THEN_TOK = 572,
     ELSE_TOK = 573,
     OR_TOK = 574,
     AND_TOK = 575,
     NOT_TOK = 576,
     NE_TOK = 577,
     GE_TOK = 578,
     LE_TOK = 579,
     EQ_TOK = 580,
     ON_CONSTRAINT_TOK = 581,
     HIT_CONSTRAINT_TOK = 582,
     ON_BOUNDARY_TOK = 583,
     ON_QUANTITY_TOK = 584,
     ON_METHOD_INSTANCE_TOK = 585,
     IMOD_TOK = 586,
     DOT_TOK = 587,
     IDIV_TOK = 588,
     INCREMENT_TOK = 589,
     EPRINT_TOK = 590
   };
#endif
/* Tokens.  */
#define EXPRESSION_START_TOK 258
#define COMMAND_START_TOK 259
#define HISTORY_TOK 260
#define GEOMVIEW_TOK 261
#define VIEW_MATRIX_TOK 262
#define ON_ASSIGN_CALL_TOK 263
#define LEAD_INTEGER_TOK 264
#define INTEGER_TOK 265
#define REAL_TOK 266
#define SIGNED_NUMBER_TOK 267
#define NEWIDENT_TOK 268
#define REDEFINE_TOK 269
#define MATHFUNC_TOK 270
#define MATHFUNC2_TOK 271
#define POW_TOK 272
#define IS_CONSTRAINT_TOK 273
#define USERFUNC_TOK 274
#define MIDV_TOK 275
#define DATAFILENAME_TOK 276
#define LOGFILE_TOK 277
#define PI_TOK 278
#define E_TOK 279
#define G_TOK 280
#define PARAM_TOK 281
#define SYMBOL_TOK 282
#define TOTAL_TOK 283
#define EXTRA_ATTRIBUTE_TOK 284
#define FIXEDVOL_TOK 285
#define IDENT_TOK 286
#define UMINUS_TOK 287
#define SHELL_TOK 288
#define COLOR_TOK 289
#define HESSIAN_TOK 290
#define VOLCONST_TOK 291
#define TORUS_PERIODS_TOK 292
#define VERTICES_TOK 293
#define EDGES_TOK 294
#define FACETS_TOK 295
#define BODIES_TOK 296
#define HESSIAN_MENU_TOK 297
#define POSTSCRIPT_TOK 298
#define NORMAL_TOK 299
#define LENGTH_TOK 300
#define AREA_TOK 301
#define VOLUME_TOK 302
#define ID_TOK 303
#define OID_TOK 304
#define TAG_TOK 305
#define ORIGINAL_TOK 306
#define FACETEDGES_TOK 307
#define WRAP_TOK 308
#define QUOTATION_TOK 309
#define UNSET_TOK 310
#define TOPINFO_TOK 311
#define OPACITY_TOK 312
#define VALENCE_TOK 313
#define HESSIAN_SADDLE_TOK 314
#define NO_DUMP_TOK 315
#define SET_TOK 316
#define FIXED_TOK 317
#define DENSITY_TOK 318
#define PRESSURE_TOK 319
#define CONSTRAINT_TOK 320
#define COORD_TOK 321
#define DISSOLVE_TOK 322
#define WHERE_TOK 323
#define LIST_TOK 324
#define SHOW_TOK 325
#define DELETE_TOK 326
#define REFINE_TOK 327
#define RECALC_TOK 328
#define SHOWQ_TOK 329
#define EDGESWAP_TOK 330
#define STRINGARRAY_TOK 331
#define FIX_TOK 332
#define UNFIX_TOK 333
#define TOGGLENAME_TOK 334
#define TOGGLEVALUE_TOK 335
#define QUANTITY_NAME_TOK 336
#define PAUSE_TOK 337
#define VALUE_OF_CONSTRAINT_TOK 338
#define GO_TOK 339
#define SHOW_VOL_TOK 340
#define CHECK_TOK 341
#define READ_TOK 342
#define ZOOM_TOK 343
#define ON_TOK 344
#define OFF_TOK 345
#define GEOMPIPE_TOK 346
#define SELF_TOK 347
#define SINGLE_LETTER_TOK 348
#define LONG_JIGGLE_TOK 349
#define RAW_VERAVG_TOK 350
#define COUNTS_TOK 351
#define CHDIR_TOK 352
#define QUOTED_LETTER_TOK 353
#define ALICE_TOK 354
#define STABILITY_TEST_TOK 355
#define DEFINE_TOK 356
#define UPLUS_TOK 357
#define DATATYPE_TOK 358
#define FLUSH_COUNTS_TOK 359
#define NORMAL_VECTOR_TOK 360
#define AUTOCHOP_TOK 361
#define UTEST_TOK 362
#define ATTRIBUTE_TOK 363
#define RITZ_TOK 364
#define MOVE_TOK 365
#define VERTEXNORMAL_TOK 366
#define POP_TOK 367
#define SYSTEM_TOK 368
#define TETRA_POINT_TOK 369
#define TRIPLE_POINT_TOK 370
#define LANCZOS_TOK 371
#define EIGENPROBE_TOK 372
#define EXEC_TOK 373
#define NO_HESSIAN_NORMAL_TOK 374
#define AREAWEED_TOK 375
#define EDGEWEED_TOK 376
#define GRAVITY_TOK 377
#define EDGEDIVIDE_TOK 378
#define LINEAR_TOK 379
#define QUADRATIC_TOK 380
#define EVOLVER_VERSION_TOK 381
#define DIFFUSION_TOK 382
#define EXTRAPOLATE_TOK 383
#define TRANSFORM_DEPTH_TOK 384
#define PRINTF_TOK 385
#define ERRPRINTF_TOK 386
#define NONPOSITIVE_TOK 387
#define NONNEGATIVE_TOK 388
#define PRINT_TOK 389
#define MAX_TOK 390
#define MIN_TOK 391
#define COUNT_TOK 392
#define SUM_TOK 393
#define AVG_TOK 394
#define BREAK_TOK 395
#define CONTINUE_TOK 396
#define SIZEOF_TOK 397
#define TRANSFORM_EXPR_TOK 398
#define BARE_TOK 399
#define BOTTOMINFO_TOK 400
#define METIS_TOK 401
#define KMETIS_TOK 402
#define KEYLOGFILE_TOK 403
#define SCALE_TOK 404
#define PSCALE_TOK 405
#define BURCHARD_TOK 406
#define REBODY_TOK 407
#define BOUNDARY_TOK 408
#define ORIENTATION_TOK 409
#define OMETIS_TOK 410
#define SQ_MEAN_CURV_TOK 411
#define FRONTCOLOR_TOK 412
#define SINGLE_REDEFD_TOK 413
#define METHOD_NAME_TOK 414
#define TASK_EXEC_TOK 415
#define RAWEST_VERAVG_TOK 416
#define SINGLE_LETTER_ARG_TOK 417
#define BACKCOLOR_TOK 418
#define LAGRANGE_TOK 419
#define RETURN_TOK 420
#define TRANSFORM_EXPR_VERB_TOK 421
#define OOGLFILE_TOK 422
#define PARALLEL_EXEC_TOK 423
#define BINARY_OFF_FILE_TOK 424
#define SPRINTF_TOK 425
#define CONVERT_TO_QUANTS_TOK 426
#define METIS_FACTOR_TOK 427
#define FUNCTION_TOK 428
#define EXPRINT_TOK 429
#define DIHEDRAL_TOK 430
#define WRAP_VERTEX_TOK 431
#define ARRAYIDENT_TOK 432
#define DATE_AND_TIME_TOK 433
#define LOCAL_TOK 434
#define SHOW_EXPR_TOK 435
#define SHOW_TRANS_TOK 436
#define AXIAL_POINT_TOK 437
#define ENERGY_TOK 438
#define CONSERVED_TOK 439
#define INFO_ONLY_TOK 440
#define ASSIGN_TOK 441
#define PROCEDURE_TOK 442
#define FOREACH_TOK 443
#define STRINGGLOBAL_TOK 444
#define EQUIANGULATE_TOK 445
#define HISTOGRAM_TOK 446
#define LOGHISTOGRAM_TOK 447
#define AREA_FIXED_TOK 448
#define QUIT_TOK 449
#define WARNING_MESSAGES_TOK 450
#define CENTEROFMASS_TOK 451
#define IF_TOK 452
#define WHILE_TOK 453
#define DO_TOK 454
#define NO_REFINE_TOK 455
#define NO_TRANSFORM_TOK 456
#define STRING_TOK 457
#define NONCONTENT_TOK 458
#define FOR_TOK 459
#define HIT_PARTNER_TOK 460
#define FRONTBODY_TOK 461
#define BACKBODY_TOK 462
#define COLORFILE_TOK 463
#define PERM_STRINGGLOBAL_TOK 464
#define FUNCTION_IDENT_TOK 465
#define THICKEN_TOK 466
#define COLORMAP_TOK 467
#define REDIRECT_TOK 468
#define NEWVERTEX_TOK 469
#define NEWEDGE_TOK 470
#define NEWFACET_TOK 471
#define FACET_CROSSCUT_TOK 472
#define MODULUS_TOK 473
#define TARGET_TOK 474
#define VALUE_TOK 475
#define INVERSE_PERIODS_TOK 476
#define NEWBODY_TOK 477
#define PDELTA_TOK 478
#define GAP_CONSTANT_TOK 479
#define DUMP_TOK 480
#define NOTCH_TOK 481
#define QUANTITY_TOK 482
#define LOAD_TOK 483
#define PERM_PROCEDURE_TOK 484
#define PROCEDURE_WORD_TOK 485
#define DYNAMIC_LOAD_FUNC_TOK 486
#define PERM_IDENT_TOK 487
#define PERMLOAD_TOK 488
#define HELP_TOK 489
#define VERTEX_AVERAGE_TOK 490
#define METHOD_INSTANCE_TOK 491
#define RAW_VERTEX_AVERAGE_TOK 492
#define REDIRECTOVER_ERR_TOK 493
#define OPTIMIZE_TOK 494
#define REDIRECTOVER_TOK 495
#define TOLERANCE_TOK 496
#define RAWEST_VERTEX_AVERAGE_TOK 497
#define REDIRECT_ERR_TOK 498
#define JIGGLE_TOK 499
#define VIEW_TRANSFORMS_TOK 500
#define CLOSE_SHOW_TOK 501
#define IS_DEFINED_TOK 502
#define NODISPLAY_TOK 503
#define PERM_ASSIGN_TOK 504
#define PHASE_TOK 505
#define VIEW_TRANSFORM_SWAP_COLORS_TOK 506
#define BACKQUOTE_COMMA_TOK 507
#define P_FORCE_TOK 508
#define P_VELOCITY_TOK 509
#define INTERNAL_VARIABLE_TOK 510
#define DIRICHLET_TOK 511
#define SOBOLEV_TOK 512
#define VIEW_TRANSFORM_PARITY_TOK 513
#define SOBOLEV_SEEK_TOK 514
#define DIRICHLET_SEEK_TOK 515
#define HESSIAN_SEEK_TOK 516
#define REORDER_STORAGE_TOK 517
#define RENUMBER_ALL_TOK 518
#define CONSTRAINT_NAME_TOK 519
#define BOUNDARY_NAME_TOK 520
#define PROCEDURE_IDENT_TOK 521
#define POP_TRI_TO_EDGE_TOK 522
#define POP_EDGE_TO_TRI_TOK 523
#define POP_QUAD_TO_QUAD_TOK 524
#define SHOWVERB_TOK 525
#define PROCEDURES_TOK 526
#define MPI_TASK_ATTR_TOK 527
#define T1_EDGESWAP_TOK 528
#define MERGE_EDGE_TOK 529
#define MERGE_FACET_TOK 530
#define MERGE_VERTEX_TOK 531
#define RESET_COUNTS_TOK 532
#define VALID_ELEMENT_TOK 533
#define MID_EDGE_TOK 534
#define MID_FACET_TOK 535
#define GO_COUNT_TOK 536
#define ELEMENT_IDENT_TOK 537
#define BODY_METIS_TOK 538
#define REVERSE_ORIENTATION_TOK 539
#define MATRIX_MULTIPLY_TOK 540
#define MATRIX_INVERSE_TOK 541
#define BINARY_PRINTF_TOK 542
#define DUMP_MEMLIST_TOK 543
#define FREE_DISCARDS_TOK 544
#define REPARTITION_TOK 545
#define METIS_READJUST_TOK 546
#define MEAN_CURVATURE_TOK 547
#define GLOBAL_TOK 548
#define LEAD_INTEGER_AT_TOK 549
#define INTEGER_AT_TOK 550
#define MATRIX_DETERMINANT_TOK 551
#define SUBCOMMAND_TOK 552
#define ABORT_TOK 553
#define BREAKPOINT_TOK 554
#define WHEREAMI_TOK 555
#define ADDLOAD_TOK 556
#define SIMPLEX_TO_FE_TOK 557
#define REPLACE_LOAD_TOK 558
#define DISPLAY_TEXT_TOK 559
#define DELETE_TEXT_TOK 560
#define SUPPRESS_WARNING_TOK 561
#define UNSUPPRESS_WARNING_TOK 562
#define RESET_PROFILING_TOK 563
#define VALID_CONSTRAINT_TOK 564
#define VALID_BOUNDARY_TOK 565
#define ARRAY_ATTRIBUTE_TOK 566
#define PROFILING_TOK 567
#define DETORUS_TOK 568
#define MAKE_THREAD_LISTS_TOK 569
#define ASSIGNOP_TOK 570
#define PIPE_TOK 571
#define THEN_TOK 572
#define ELSE_TOK 573
#define OR_TOK 574
#define AND_TOK 575
#define NOT_TOK 576
#define NE_TOK 577
#define GE_TOK 578
#define LE_TOK 579
#define EQ_TOK 580
#define ON_CONSTRAINT_TOK 581
#define HIT_CONSTRAINT_TOK 582
#define ON_BOUNDARY_TOK 583
#define ON_QUANTITY_TOK 584
#define ON_METHOD_INSTANCE_TOK 585
#define IMOD_TOK 586
#define DOT_TOK 587
#define IDIV_TOK 588
#define INCREMENT_TOK 589
#define EPRINT_TOK 590




/* Copy the first part of user declarations.  */
#line 32 "command.yac"
  
#include "include.h"
#include "lex.h"

#define YYSTYPE yystype
#define gettxt(a,b) (b)
#define yylex kb_yylex

int assignbacktrack (void);
int temp_array_number = 1;


#ifndef __GNUC__TOK
#ifdef YYBISON
/* for Bison */
#ifndef __yy_memcpy
static void __yy_memcpy (char *, char *, int );
#endif
#endif
#endif

/* for bison version 2.1 output */
#define __STDC__TOK 1

/* for non-ANSI compilers */
#define const

#ifndef NO_YACC_DEBUG
#define YYDEBUG 1
#endif
int help_flag; /* avoid error message while doing help */

// for checking type of rexpr; argument should be $n ref to rhs term
#define REAL_CHECK(term)   if ( term.datatype != REAL_TYPE && term.datatype != INTEGER_TYPE && term.datatype != STRING_TYPE) \
      { if ( term.datatype == ARRAY_TYPE ) \
          kb_error(6001,"Expecting single number, not array.\n",Q_ERROR); \
        else \
          kb_error(6000,"Expecting single number.\n",Q_ERROR); \
      }

/* Backtrack to previous := in inputbuffer */
int assignbacktrack ()
{ int spot;
  for ( spot = inputbufferspot - 1; spot > 0 ; spot-- )
    if ( inputbuffer[spot-1] == ':' && inputbuffer[spot] == '=' )
       return spot+1;
  return 0;
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 816 "ytab.c"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   43079

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  358
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  114
/* YYNRULES -- Number of rules. */
#define YYNRULES  973
/* YYNRULES -- Number of states. */
#define YYNSTATES  1412

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   590

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short int yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   348,     2,     2,
     322,   323,   350,   346,   315,   347,   316,   351,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   331,   317,
     336,   329,   335,   330,   357,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   318,     2,   319,   354,     2,   324,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   320,     2,   321,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     325,   326,   327,   328,   332,   333,   334,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   349,   352,   353,   355,
     356
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    12,    14,    18,    22,
      26,    30,    34,    38,    42,    46,    50,    54,    58,    62,
      66,    69,    72,    74,    76,    78,    81,    84,    86,    89,
      92,    95,    97,    99,   100,   105,   108,   112,   114,   116,
     118,   121,   124,   126,   129,   131,   133,   135,   138,   141,
     142,   148,   151,   153,   157,   160,   162,   165,   168,   170,
     173,   176,   179,   181,   184,   187,   190,   192,   195,   198,
     201,   203,   206,   209,   212,   215,   218,   221,   224,   226,
     229,   231,   234,   237,   239,   242,   245,   247,   250,   253,
     255,   257,   260,   263,   264,   269,   272,   275,   276,   280,
     284,   287,   290,   294,   298,   301,   305,   308,   311,   314,
     318,   321,   324,   326,   328,   330,   332,   335,   338,   340,
     343,   346,   349,   352,   354,   357,   360,   363,   367,   370,
     373,   377,   380,   383,   386,   389,   392,   395,   398,   403,
     406,   409,   412,   415,   418,   421,   424,   427,   430,   433,
     436,   439,   441,   444,   447,   450,   453,   456,   459,   462,
     469,   472,   475,   482,   485,   492,   495,   498,   501,   504,
     506,   509,   512,   514,   517,   520,   522,   524,   527,   529,
     531,   533,   535,   537,   539,   541,   543,   545,   547,   549,
     551,   553,   557,   560,   563,   566,   569,   571,   573,   576,
     578,   580,   582,   584,   586,   588,   590,   592,   594,   596,
     598,   600,   602,   604,   606,   608,   610,   612,   614,   616,
     618,   620,   622,   624,   627,   630,   633,   636,   640,   643,
     647,   650,   654,   657,   661,   664,   666,   669,   671,   674,
     676,   679,   681,   683,   685,   688,   692,   693,   698,   701,
     705,   706,   711,   715,   719,   723,   727,   730,   735,   740,
     745,   750,   754,   758,   762,   766,   770,   774,   778,   782,
     786,   789,   792,   795,   798,   802,   805,   811,   817,   823,
     829,   835,   839,   843,   848,   853,   858,   863,   868,   872,
     876,   880,   884,   888,   891,   894,   897,   900,   903,   906,
     909,   912,   915,   918,   921,   924,   927,   930,   933,   936,
     939,   942,   944,   947,   951,   954,   957,   960,   963,   967,
     970,   974,   978,   981,   985,   988,   991,   994,   997,  1003,
    1007,  1011,  1016,  1021,  1026,  1031,  1036,  1041,  1045,  1047,
    1051,  1055,  1059,  1061,  1065,  1070,  1074,  1077,  1080,  1084,
    1087,  1090,  1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,
    1109,  1111,  1113,  1115,  1117,  1120,  1124,  1129,  1132,  1135,
    1139,  1144,  1147,  1150,  1152,  1154,  1155,  1157,  1159,  1160,
    1161,  1169,  1171,  1173,  1174,  1175,  1182,  1186,  1189,  1192,
    1194,  1198,  1202,  1205,  1208,  1211,  1215,  1220,  1224,  1229,
    1234,  1239,  1244,  1246,  1248,  1250,  1252,  1255,  1263,  1267,
    1270,  1273,  1277,  1281,  1284,  1288,  1292,  1295,  1297,  1299,
    1301,  1303,  1307,  1311,  1314,  1318,  1322,  1324,  1326,  1332,
    1338,  1341,  1342,  1343,  1351,  1353,  1356,  1359,  1362,  1365,
    1368,  1371,  1374,  1375,  1380,  1383,  1386,  1389,  1393,  1396,
    1399,  1402,  1405,  1408,  1409,  1413,  1414,  1420,  1424,  1425,
    1431,  1435,  1436,  1441,  1442,  1447,  1451,  1455,  1458,  1461,
    1463,  1467,  1469,  1471,  1473,  1475,  1477,  1479,  1481,  1483,
    1485,  1487,  1489,  1490,  1495,  1496,  1501,  1502,  1507,  1510,
    1513,  1517,  1521,  1523,  1527,  1531,  1533,  1536,  1539,  1542,
    1545,  1548,  1551,  1553,  1557,  1561,  1563,  1567,  1571,  1573,
    1577,  1578,  1583,  1585,  1588,  1591,  1594,  1597,  1600,  1603,
    1606,  1610,  1613,  1616,  1619,  1622,  1625,  1628,  1631,  1633,
    1634,  1640,  1643,  1647,  1652,  1655,  1659,  1664,  1667,  1674,
    1677,  1682,  1685,  1692,  1699,  1706,  1709,  1720,  1723,  1725,
    1730,  1733,  1738,  1741,  1748,  1751,  1756,  1759,  1764,  1767,
    1769,  1772,  1774,  1778,  1780,  1783,  1785,  1788,  1796,  1799,
    1804,  1807,  1812,  1815,  1822,  1825,  1832,  1835,  1842,  1845,
    1854,  1857,  1865,  1871,  1875,  1880,  1887,  1890,  1896,  1900,
    1902,  1905,  1907,  1910,  1912,  1914,  1916,  1919,  1922,  1925,
    1927,  1930,  1932,  1935,  1937,  1940,  1942,  1945,  1947,  1950,
    1952,  1955,  1957,  1960,  1962,  1965,  1967,  1970,  1972,  1975,
    1977,  1979,  1982,  1985,  1988,  1991,  1994,  1997,  1999,  2001,
    2003,  2005,  2007,  2009,  2012,  2017,  2021,  2026,  2028,  2030,
    2032,  2035,  2037,  2043,  2048,  2054,  2056,  2059,  2061,  2064,
    2067,  2070,  2073,  2076,  2080,  2084,  2086,  2088,  2090,  2093,
    2095,  2097,  2099,  2101,  2103,  2105,  2107,  2109,  2112,  2115,
    2117,  2121,  2125,  2127,  2129,  2131,  2133,  2135,  2137,  2139,
    2141,  2143,  2145,  2147,  2149,  2151,  2153,  2155,  2157,  2159,
    2161,  2163,  2165,  2167,  2169,  2171,  2173,  2175,  2177,  2179,
    2181,  2183,  2185,  2187,  2189,  2191,  2193,  2195,  2197,  2199,
    2201,  2203,  2205,  2207,  2209,  2211,  2213,  2215,  2217,  2219,
    2221,  2224,  2227,  2230,  2233,  2236,  2239,  2242,  2245,  2248,
    2251,  2254,  2257,  2260,  2263,  2266,  2269,  2271,  2274,  2277,
    2282,  2285,  2289,  2294,  2299,  2304,  2307,  2309,  2311,  2313,
    2316,  2319,  2323,  2326,  2328,  2330,  2332,  2334,  2338,  2342,
    2344,  2347,  2351,  2355,  2359,  2363,  2367,  2371,  2375,  2379,
    2383,  2387,  2391,  2395,  2398,  2402,  2406,  2409,  2411,  2413,
    2415,  2417,  2419,  2421,  2423,  2425,  2427,  2432,  2435,  2442,
    2444,  2448,  2452,  2456,  2460,  2464,  2468,  2472,  2476,  2480,
    2484,  2488,  2492,  2496,  2500,  2504,  2508,  2512,  2517,  2522,
    2526,  2530,  2534,  2538,  2542,  2546,  2550,  2554,  2558,  2562,
    2566,  2570,  2574,  2578,  2582,  2586,  2590,  2593,  2596,  2599,
    2602,  2605,  2606,  2607,  2615,  2619,  2621,  2623,  2625,  2627,
    2629,  2631,  2633,  2636,  2639,  2641,  2646,  2649,  2650,  2654,
    2656,  2659,  2660,  2664,  2667,  2668,  2676,  2677,  2685,  2686,
    2690,  2692,  2694,  2696,  2698,  2700,  2702,  2704,  2706,  2708,
    2710,  2712,  2714,  2716,  2720,  2726,  2728,  2730,  2732,  2734,
    2736,  2738,  2740,  2742,  2744,  2746,  2748,  2750,  2752,  2754,
    2756,  2758,  2760,  2762,  2764,  2766,  2769,  2771,  2773,  2775,
    2777,  2778,  2785,  2786,  2794,  2795,  2801,  2802,  2809,  2814,
    2820,  2822,  2825,  2831,  2836,  2843,  2851,  2858,  2865,  2873,
    2878,  2883,  2890,  2897,  2902,  2907,  2914,  2921,  2925,  2929,
    2935,  2941,  2945,  2949,  2955,  2961,  2964,  2966,  2968,  2970,
    2972,  2974,  2976,  2978,  2980,  2982,  2984,  2986,  2988,  2990,
    2992,  2994,  2996,  2998,  3000,  3002,  3004,  3008,  3014,  3016,
    3020,  3022,  3027,  3034,  3040,  3042,  3046,  3048,  3053,  3059,
    3066,  3069,  3071,  3074
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     359,     0,    -1,     4,    -1,    -1,     4,   360,   361,    -1,
     364,    -1,   363,    -1,   362,   326,   442,    -1,   362,   326,
       1,    -1,   362,   213,   442,    -1,   362,   213,     1,    -1,
     362,   243,   442,    -1,   362,   243,     1,    -1,   362,   240,
     442,    -1,   362,   240,     1,    -1,   362,   238,   442,    -1,
     362,   238,     1,    -1,   299,   187,   389,    -1,   299,   210,
     389,    -1,   299,   266,   389,    -1,   299,     1,    -1,    55,
     299,    -1,   300,    -1,     1,    -1,   187,    -1,   187,   389,
      -1,   187,     1,    -1,   229,    -1,   229,   389,    -1,   229,
       1,    -1,   362,     1,    -1,   370,    -1,   371,    -1,    -1,
     320,   366,   364,   321,    -1,   320,   321,    -1,   320,     1,
     321,    -1,   368,    -1,   362,    -1,   365,    -1,   365,   389,
      -1,   365,     1,    -1,   317,    -1,   362,   317,    -1,   368,
      -1,   362,    -1,   369,    -1,   371,   362,    -1,   371,   369,
      -1,    -1,   197,   389,   373,   327,   362,    -1,   197,     1,
      -1,   372,    -1,   372,   328,   362,    -1,   328,     1,    -1,
     330,    -1,     6,   442,    -1,     6,   440,    -1,     6,    -1,
       6,     1,    -1,    91,   442,    -1,    91,   440,    -1,    91,
      -1,    91,     1,    -1,    22,   442,    -1,    22,   440,    -1,
      22,    -1,    22,     1,    -1,   148,   442,    -1,   148,   440,
      -1,   148,    -1,   148,     1,    -1,    43,   442,    -1,    43,
       1,    -1,   169,   442,    -1,   169,     1,    -1,   167,   442,
      -1,   167,     1,    -1,     5,    -1,     5,     1,    -1,   165,
      -1,   165,   389,    -1,   165,     1,    -1,   140,    -1,   140,
      10,    -1,   140,     1,    -1,   141,    -1,   141,    10,    -1,
     141,     1,    -1,    84,    -1,   281,    -1,    84,   389,    -1,
      84,     1,    -1,    -1,   198,   389,   375,   199,    -1,   374,
     362,    -1,   198,     1,    -1,    -1,   199,   377,   367,    -1,
     376,   198,   389,    -1,   376,     1,    -1,   199,     1,    -1,
     204,   322,   368,    -1,   378,   389,   317,    -1,   378,   317,
      -1,   379,   362,   323,    -1,   379,   323,    -1,   380,   362,
      -1,   204,     1,    -1,   204,   322,     1,    -1,   378,     1,
      -1,   379,     1,    -1,    93,    -1,    98,    -1,   381,    -1,
     158,    -1,   158,   389,    -1,   158,     1,    -1,   162,    -1,
     381,   389,    -1,   381,     1,    -1,   162,   389,    -1,   162,
       1,    -1,    87,    -1,    87,   442,    -1,    87,     1,    -1,
     129,   389,    -1,   129,   186,   389,    -1,   129,     1,    -1,
     166,   442,    -1,   166,   186,   442,    -1,   166,     1,    -1,
     113,   442,    -1,   113,     1,    -1,   118,   442,    -1,   118,
       1,    -1,   168,   442,    -1,   168,     1,    -1,   160,   389,
     315,   442,    -1,   160,     1,    -1,    97,   442,    -1,    97,
       1,    -1,   146,   389,    -1,   146,     1,    -1,   147,   389,
      -1,   147,     1,    -1,   291,   389,    -1,   291,     1,    -1,
     283,   389,    -1,   283,     1,    -1,   155,   389,    -1,   155,
      -1,   155,     1,    -1,   121,   389,    -1,   121,     1,    -1,
     120,   389,    -1,   120,     1,    -1,   123,   389,    -1,   123,
       1,    -1,   116,   322,   389,   315,   389,   323,    -1,   116,
     389,    -1,   116,     1,    -1,   109,   322,   389,   315,   389,
     323,    -1,   109,     1,    -1,   117,   322,   389,   315,   389,
     323,    -1,   117,   389,    -1,   117,     1,    -1,   110,   389,
      -1,   110,     1,    -1,    59,    -1,    59,   389,    -1,    59,
       1,    -1,   261,    -1,   261,   389,    -1,   261,     1,    -1,
      96,    -1,   194,    -1,   194,   389,    -1,   297,    -1,   298,
      -1,   313,    -1,   314,    -1,   302,    -1,   262,    -1,   263,
      -1,   288,    -1,   289,    -1,   290,    -1,   128,    -1,   152,
      -1,    88,    -1,    88,   389,   389,    -1,    88,     1,    -1,
     151,    10,    -1,   164,   389,    -1,   164,     1,    -1,    85,
      -1,    82,    -1,   134,   312,    -1,   308,    -1,   104,    -1,
     277,    -1,    86,    -1,    74,    -1,    94,    -1,    95,    -1,
     161,    -1,    99,    -1,   124,    -1,   125,    -1,   100,    -1,
     107,    -1,    33,    -1,   171,    -1,   172,    -1,   256,    -1,
     260,    -1,   257,    -1,   259,    -1,    35,    -1,    42,    -1,
     234,    -1,    73,    -1,    69,    56,    -1,    69,   145,    -1,
      69,   108,    -1,    69,   271,    -1,    69,   153,   389,    -1,
      69,   265,    -1,    69,    65,   389,    -1,    69,   264,    -1,
      69,   227,    81,    -1,    69,    81,    -1,    69,   236,   159,
      -1,    69,   159,    -1,   246,    -1,    79,   440,    -1,    79,
      -1,   239,   440,    -1,   239,    -1,   106,   440,    -1,   106,
      -1,   244,    -1,     3,    -1,   382,   389,    -1,   382,   389,
     315,    -1,    -1,   255,   462,   383,   389,    -1,   255,   355,
      -1,   255,   462,     1,    -1,    -1,    61,   255,   384,   389,
      -1,    61,   255,     1,    -1,    61,   122,   389,    -1,    61,
     122,     1,    -1,   122,   462,   389,    -1,   122,     1,    -1,
      61,    65,   389,   293,    -1,    55,    65,   389,   293,    -1,
      61,    65,   264,   293,    -1,    55,    65,   264,   293,    -1,
      61,   264,   293,    -1,    55,   264,   293,    -1,    61,   149,
     389,    -1,    61,   149,     1,    -1,   149,   462,   389,    -1,
     149,   462,     1,    -1,    61,   127,   389,    -1,    61,   127,
       1,    -1,   224,   462,   389,    -1,   224,     1,    -1,   226,
     389,    -1,   226,     1,    -1,   106,   389,    -1,   106,   186,
     389,    -1,   106,     1,    -1,    81,   316,   219,   462,   389,
      -1,    81,   316,   218,   462,   389,    -1,    81,   316,   241,
     462,   389,    -1,   159,   316,   218,   462,   389,    -1,    81,
     316,    36,   462,   389,    -1,    81,   316,     1,    -1,   159,
     316,     1,    -1,    61,    81,   219,   389,    -1,    61,    81,
     218,   389,    -1,    61,    81,   241,   389,    -1,    61,   159,
     218,   389,    -1,    61,    81,    36,   389,    -1,    61,    81,
      62,    -1,    61,    81,   185,    -1,    61,    81,   183,    -1,
      61,    81,   184,    -1,    61,    81,     1,    -1,   306,   389,
      -1,   306,     1,    -1,   307,   389,    -1,   307,     1,    -1,
     228,   442,    -1,   228,   389,    -1,   228,     1,    -1,   301,
     442,    -1,   301,   389,    -1,   301,     1,    -1,   303,   442,
      -1,   303,   389,    -1,   303,     1,    -1,   233,   442,    -1,
     233,   389,    -1,   233,     1,    -1,   225,   442,    -1,   225,
     389,    -1,   225,    -1,   225,     1,    -1,   208,   186,   442,
      -1,   239,   389,    -1,   239,     1,    -1,    31,   186,    -1,
     232,   249,    -1,   189,   186,   442,    -1,   385,   442,    -1,
     189,   186,   389,    -1,   209,   249,   442,    -1,   189,   249,
      -1,   209,   186,   442,    -1,   385,   389,    -1,   386,   389,
      -1,   282,   186,    -1,   387,   389,    -1,    31,   316,     8,
     186,   266,    -1,    31,   316,   223,    -1,    31,   316,   150,
      -1,    31,   316,    60,    89,    -1,    31,   316,    60,    90,
      -1,    31,   316,    60,     1,    -1,   177,   316,    60,    89,
      -1,   177,   316,    60,    90,    -1,   177,   316,    60,     1,
      -1,   388,   462,   389,    -1,    98,    -1,    31,   316,    62,
      -1,    31,   316,   254,    -1,    31,   316,   253,    -1,   388,
      -1,    31,   316,     1,    -1,    31,   316,     8,     1,    -1,
      31,   325,   389,    -1,    31,   355,    -1,   355,    31,    -1,
      31,   186,     1,    -1,    31,   340,    -1,    13,   340,    -1,
      31,     1,    -1,   103,    -1,   202,    -1,    13,    -1,    31,
      -1,   177,    -1,   187,    -1,   210,    -1,   189,    -1,    81,
      -1,   159,    -1,   264,    -1,   265,    -1,   322,   323,    -1,
     322,   390,   391,    -1,   393,   315,   390,   391,    -1,   322,
       1,    -1,   322,   390,    -1,   393,   315,     1,    -1,   393,
     315,   390,     1,    -1,   393,     1,    -1,   393,   323,    -1,
     365,    -1,   317,    -1,    -1,    13,    -1,   210,    -1,    -1,
      -1,   173,   390,   395,   396,   392,   397,   394,    -1,    13,
      -1,   266,    -1,    -1,    -1,   230,   398,   399,   392,   400,
     394,    -1,   173,   390,     1,    -1,   173,     1,    -1,   230,
       1,    -1,   173,    -1,   101,    31,   390,    -1,   101,    13,
     390,    -1,   101,    31,    -1,   101,    13,    -1,   101,   189,
      -1,   318,   389,   319,    -1,   401,   318,   389,   319,    -1,
     318,   389,   319,    -1,   402,   318,   389,   319,    -1,   101,
     177,   390,   402,    -1,   101,    13,   390,   402,    -1,   101,
      31,   390,   402,    -1,   403,    -1,   177,    -1,   111,    -1,
     311,    -1,   438,   311,    -1,   438,    65,   318,   389,   319,
     316,    44,    -1,   438,    65,     1,    -1,   438,     1,    -1,
     404,   401,    -1,   405,   462,   389,    -1,   405,   186,   442,
      -1,   405,   355,    -1,   404,   462,   389,    -1,   404,   352,
     404,    -1,   404,   401,    -1,   404,    -1,   389,    -1,   442,
      -1,   406,    -1,   407,   315,   406,    -1,   320,   407,   321,
      -1,   320,   321,    -1,   404,   462,   406,    -1,   405,   462,
     406,    -1,    29,    -1,   311,    -1,   101,   435,   108,   408,
     390,    -1,   101,   435,   108,    13,   390,    -1,   409,   402,
      -1,    -1,    -1,   409,   173,   410,   320,   411,   364,   321,
      -1,   409,    -1,   101,   227,    -1,   101,   236,    -1,   101,
      65,    -1,   101,   153,    -1,   101,     1,    -1,    13,   186,
      -1,    13,   249,    -1,    -1,    61,    13,   414,   186,    -1,
      61,    13,    -1,    13,     1,    -1,    13,     1,    -1,    13,
     186,     1,    -1,   412,   442,    -1,   412,   389,    -1,   412,
       1,    -1,   413,   442,    -1,   413,   389,    -1,    -1,   412,
     415,   363,    -1,    -1,   412,   320,   416,   364,   321,    -1,
     412,   320,   321,    -1,    -1,   413,   320,   417,   364,   321,
      -1,   413,   320,   321,    -1,    -1,   187,   186,   418,   362,
      -1,    -1,   229,   249,   419,   362,    -1,   187,   186,     1,
      -1,   187,   249,     1,    -1,   385,   320,    -1,   179,   420,
      -1,   421,    -1,   420,   315,   421,    -1,    13,    -1,    31,
      -1,   177,    -1,   187,    -1,   210,    -1,   189,    -1,    81,
      -1,   159,    -1,   264,    -1,   265,    -1,     1,    -1,    -1,
      93,    14,   422,   362,    -1,    -1,   162,    14,   423,   362,
      -1,    -1,   158,    14,   424,   362,    -1,    93,    14,    -1,
     158,    14,    -1,   389,   315,   425,    -1,   389,   315,     1,
      -1,   389,    -1,   442,   315,   425,    -1,   442,   315,     1,
      -1,   442,    -1,   130,   442,    -1,   130,     1,    -1,   287,
     442,    -1,   287,     1,    -1,   131,   442,    -1,   131,     1,
      -1,   426,    -1,   426,   315,   425,    -1,   426,   315,     1,
      -1,   427,    -1,   427,   315,   425,    -1,   427,   315,     1,
      -1,   428,    -1,   428,   315,   425,    -1,    -1,   428,   315,
       1,   429,    -1,   134,    -1,   430,   230,    -1,   430,   442,
      -1,   430,   187,    -1,   430,   210,    -1,   430,   266,    -1,
     430,   229,    -1,   174,   187,    -1,   430,   438,   445,    -1,
     430,   389,    -1,   430,    93,    -1,   430,   162,    -1,   430,
     158,    -1,   430,     1,    -1,   181,   442,    -1,   181,     1,
      -1,   324,    -1,    -1,   431,   364,   252,   432,   389,    -1,
     431,     1,    -1,   210,   322,   323,    -1,   210,   322,   425,
     323,    -1,   210,     1,    -1,   266,   322,   323,    -1,   266,
     322,   425,   323,    -1,   266,     1,    -1,   176,   322,   389,
     315,   389,   323,    -1,   176,     1,    -1,   258,   318,   389,
     319,    -1,   258,     1,    -1,    18,   318,   389,   319,   316,
     132,    -1,    18,   318,   389,   319,   316,   133,    -1,    18,
     318,   389,   319,   316,    62,    -1,    18,     1,    -1,   304,
     322,   389,   315,   389,   315,   389,   315,   442,   323,    -1,
     304,     1,    -1,   304,    -1,   305,   322,   389,   323,    -1,
     305,     1,    -1,   214,   322,   425,   323,    -1,   214,     1,
      -1,   215,   322,   389,   315,   389,   323,    -1,   215,     1,
      -1,   217,   322,   425,   323,    -1,   217,     1,    -1,   216,
     322,   425,   323,    -1,   216,     1,    -1,   222,    -1,   222,
       1,    -1,   389,    -1,   389,   357,   389,    -1,   295,    -1,
      32,   295,    -1,   294,    -1,    32,   294,    -1,   278,   322,
     435,   318,   433,   319,   323,    -1,   278,     1,    -1,   309,
     322,   389,   323,    -1,   309,     1,    -1,   310,   322,   389,
     323,    -1,   310,     1,    -1,   276,   322,   389,   315,   389,
     323,    -1,   276,     1,    -1,   274,   322,   389,   315,   389,
     323,    -1,   274,     1,    -1,   275,   322,   389,   315,   389,
     323,    -1,   275,     1,    -1,   285,   322,   404,   315,   404,
     315,   404,   323,    -1,   285,     1,    -1,   285,   322,   404,
     315,   404,   315,     1,    -1,   285,   322,   404,   315,     1,
      -1,   285,   322,     1,    -1,   296,   322,   404,   323,    -1,
     286,   322,   404,   315,   404,   323,    -1,   286,     1,    -1,
     286,   322,   404,   315,     1,    -1,   286,   322,     1,    -1,
      69,    -1,    69,     1,    -1,    71,    -1,    71,     1,    -1,
     235,    -1,   237,    -1,   242,    -1,   235,     1,    -1,   237,
       1,    -1,   242,     1,    -1,    67,    -1,    67,     1,    -1,
     284,    -1,   284,     1,    -1,    72,    -1,    72,     1,    -1,
      75,    -1,    75,     1,    -1,   273,    -1,   273,     1,    -1,
     190,    -1,   190,     1,    -1,   112,    -1,   112,     1,    -1,
     267,    -1,   267,     1,    -1,   268,    -1,   268,     1,    -1,
     269,    -1,   269,     1,    -1,    77,    -1,    78,    -1,    77,
      31,    -1,    78,    31,    -1,    77,    81,    -1,    78,    81,
      -1,    77,     1,    -1,    78,     1,    -1,    38,    -1,    39,
      -1,    40,    -1,    41,    -1,    52,    -1,   435,    -1,   438,
     435,    -1,   435,   318,   433,   319,    -1,   435,   318,     1,
      -1,   435,   318,   389,     1,    -1,    27,    -1,    92,    -1,
     282,    -1,   437,   316,    -1,   437,    -1,   438,   435,   318,
     389,   319,    -1,   438,   435,   318,     1,    -1,   438,   435,
     318,   389,     1,    -1,   438,    -1,   437,    13,    -1,   436,
      -1,   436,    13,    -1,   437,   187,    -1,   436,   187,    -1,
     437,    31,    -1,   436,    31,    -1,   439,    68,   389,    -1,
     439,    68,     1,    -1,    89,    -1,    90,    -1,    54,    -1,
     441,    54,    -1,   441,    -1,   189,    -1,   209,    -1,    21,
      -1,   195,    -1,   178,    -1,   143,    -1,   126,    -1,   170,
     442,    -1,   170,     1,    -1,   443,    -1,   443,   315,   425,
      -1,   443,   315,     1,    -1,    66,    -1,    26,    -1,    45,
      -1,   292,    -1,    70,    -1,   154,    -1,   156,    -1,   175,
      -1,    58,    -1,    46,    -1,    47,    -1,    36,    -1,   219,
      -1,   272,    -1,    63,    -1,    64,    -1,    48,    -1,    49,
      -1,    34,    -1,   157,    -1,   163,    -1,   207,    -1,   206,
      -1,    51,    -1,    62,    -1,   196,    -1,   200,    -1,   201,
      -1,   205,    -1,   203,    -1,   248,    -1,    30,    -1,   119,
      -1,   182,    -1,   115,    -1,   114,    -1,    20,    -1,    53,
      -1,   279,    -1,   280,    -1,   144,    -1,   250,    -1,    81,
      -1,   159,    -1,    57,    -1,    29,    -1,   444,    -1,   445,
      -1,   445,   401,    -1,   341,   264,    -1,   341,   389,    -1,
     341,     1,    -1,    83,   264,    -1,    83,   389,    -1,   343,
     265,    -1,   343,   389,    -1,   343,     1,    -1,   342,   264,
      -1,   342,   389,    -1,   342,     1,    -1,   344,    81,    -1,
     344,     1,    -1,   345,   159,    -1,   345,     1,    -1,   446,
      -1,   438,   446,    -1,   438,    13,    -1,   247,   322,   442,
     323,    -1,   247,     1,    -1,   247,   322,   442,    -1,   142,
     322,   311,   323,    -1,   142,   322,   177,   323,    -1,   142,
     322,   442,   323,    -1,   142,     1,    -1,    80,    -1,   106,
      -1,   164,    -1,   356,   389,    -1,   356,     1,    -1,   322,
     389,   323,    -1,   322,     1,    -1,   255,    -1,   149,    -1,
      31,    -1,   232,    -1,    31,   316,    29,    -1,    31,   316,
       1,    -1,   231,    -1,    28,    81,    -1,    81,   316,    64,
      -1,    81,   316,   218,    -1,    81,   316,   241,    -1,   159,
     316,   218,    -1,    81,   316,   219,    -1,    81,   316,   220,
      -1,   159,   316,   220,    -1,    81,   316,    36,    -1,    81,
     316,    62,    -1,    81,   316,   183,    -1,    81,   316,   185,
      -1,    81,   316,   184,    -1,    81,     1,    -1,    81,   316,
       1,    -1,   159,   316,     1,    -1,   159,     1,    -1,    10,
      -1,     9,    -1,    11,    -1,    12,    -1,   447,    -1,    23,
      -1,    24,    -1,    25,    -1,    19,    -1,    15,   322,   389,
     323,    -1,    15,     1,    -1,    16,   322,   389,   315,   389,
     323,    -1,    16,    -1,   389,   346,   389,    -1,   389,   347,
     389,    -1,   389,   329,   389,    -1,   389,   351,   389,    -1,
     389,   350,   389,    -1,   389,   348,   389,    -1,   389,   349,
     389,    -1,   389,   353,   389,    -1,   389,   354,   389,    -1,
     389,   336,   389,    -1,   389,   335,   389,    -1,   389,   337,
     389,    -1,   389,   340,   389,    -1,   389,   339,   389,    -1,
     389,   338,   389,    -1,   389,   333,   389,    -1,   389,   332,
     389,    -1,   389,   346,   404,     1,    -1,   389,   347,   404,
       1,    -1,   389,   346,     1,    -1,   389,   347,     1,    -1,
     389,   329,     1,    -1,   389,   351,     1,    -1,   389,   350,
       1,    -1,   389,   348,     1,    -1,   389,   349,     1,    -1,
     389,   353,     1,    -1,   389,   354,     1,    -1,   389,   336,
       1,    -1,   389,   335,     1,    -1,   389,   337,     1,    -1,
     389,   340,     1,    -1,   389,   339,     1,    -1,   389,   338,
       1,    -1,   389,   333,     1,    -1,   389,   332,     1,    -1,
      32,   389,    -1,    32,     1,    -1,   102,   389,    -1,   334,
     389,    -1,   334,     1,    -1,    -1,    -1,   389,   330,   448,
     389,   331,   449,   389,    -1,   389,   330,     1,    -1,   135,
      -1,   136,    -1,   138,    -1,   139,    -1,   137,    -1,   191,
      -1,   192,    -1,   191,     1,    -1,   192,     1,    -1,   188,
      -1,   452,   439,   199,   362,    -1,   188,     1,    -1,    -1,
     270,   453,   439,    -1,   270,    -1,   270,     1,    -1,    -1,
     180,   454,   439,    -1,   180,     1,    -1,    -1,   451,   455,
     322,   439,   315,   389,   323,    -1,    -1,   450,   456,   322,
     439,   315,   389,   323,    -1,    -1,   434,   457,   439,    -1,
      61,    -1,   200,    -1,   201,    -1,   196,    -1,   205,    -1,
      62,    -1,   144,    -1,   203,    -1,   248,    -1,   182,    -1,
     114,    -1,   119,    -1,   115,    -1,   458,   439,   459,    -1,
     458,   439,   459,    68,   389,    -1,   206,    -1,   207,    -1,
      34,    -1,   157,    -1,   163,    -1,    63,    -1,    51,    -1,
      36,    -1,    47,    -1,   219,    -1,    64,    -1,    57,    -1,
      65,    -1,   153,    -1,    66,    -1,    26,    -1,   250,    -1,
      29,    -1,   154,    -1,    53,    -1,   316,   460,    -1,   460,
      -1,   186,    -1,   325,    -1,   340,    -1,    -1,   437,   316,
     460,   463,   462,   389,    -1,    -1,   437,   316,   460,   464,
     401,   462,   389,    -1,    -1,   437,   316,   460,   465,   355,
      -1,    -1,   437,   316,   460,   466,   401,   355,    -1,   458,
     439,   461,   389,    -1,   458,   439,   461,   401,   389,    -1,
     311,    -1,   316,   311,    -1,   458,   439,   467,   401,   389,
      -1,   458,   439,   467,   389,    -1,   458,   439,   467,   389,
      68,   389,    -1,   458,   439,   467,   401,   389,    68,   389,
      -1,   458,   439,   467,   404,    68,   389,    -1,   458,   439,
     461,   389,    68,   389,    -1,   458,   439,   461,   401,   389,
      68,   389,    -1,   458,   439,   227,    81,    -1,   468,   439,
     227,    81,    -1,   458,   439,   227,    81,    68,   389,    -1,
     468,   439,   227,    81,    68,   389,    -1,   458,   439,   236,
     159,    -1,   468,   439,   236,   159,    -1,   458,   439,   236,
     159,    68,   389,    -1,   468,   439,   236,   159,    68,   389,
      -1,   458,   439,    81,    -1,   468,   439,    81,    -1,   458,
     439,    81,    68,   389,    -1,   468,   439,    81,    68,   389,
      -1,   458,   439,   159,    -1,   468,   439,   159,    -1,   458,
     439,   159,    68,   389,    -1,   468,   439,   159,    68,   389,
      -1,   458,     1,    -1,    55,    -1,    62,    -1,   196,    -1,
     205,    -1,   144,    -1,   200,    -1,   201,    -1,   203,    -1,
     248,    -1,    63,    -1,    47,    -1,   219,    -1,    64,    -1,
     115,    -1,   119,    -1,   114,    -1,   182,    -1,   206,    -1,
     207,    -1,    41,    -1,   468,   439,   469,    -1,   468,   439,
     469,    68,   389,    -1,   264,    -1,   468,   439,   470,    -1,
     264,    -1,   468,   439,    65,   389,    -1,   468,   439,    65,
     389,    68,   389,    -1,   468,   439,   470,    68,   389,    -1,
     265,    -1,   468,   439,   471,    -1,   265,    -1,   468,   439,
     153,   389,    -1,   468,   439,   471,    68,   389,    -1,   468,
     439,   153,   389,    68,   389,    -1,    55,     1,    -1,     3,
      -1,   234,   198,    -1,   234,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   221,   221,   223,   222,   225,   227,   230,   235,   239,
     245,   249,   255,   259,   265,   269,   275,   280,   283,   286,
     289,   293,   295,   298,   300,   302,   310,   316,   318,   326,
     331,   333,   335,   337,   337,   340,   342,   346,   348,   350,
     352,   360,   368,   369,   371,   373,   375,   377,   380,   383,
     383,   386,   389,   391,   393,   395,   400,   401,   402,   403,
     406,   407,   408,   409,   412,   413,   414,   415,   418,   419,
     420,   421,   424,   425,   428,   429,   432,   433,   436,   437,
     440,   445,   450,   453,   454,   455,   458,   459,   460,   463,
     465,   473,   480,   483,   482,   488,   490,   494,   494,   498,
     501,   504,   507,   510,   512,   519,   520,   524,   526,   529,
     532,   535,   540,   541,   543,   545,   547,   555,   558,   560,
     568,   571,   594,   599,   601,   603,   607,   610,   613,   616,
     618,   620,   623,   625,   628,   630,   633,   635,   638,   641,
     644,   646,   649,   651,   653,   655,   657,   660,   662,   664,
     666,   668,   670,   673,   675,   678,   680,   683,   685,   688,
     691,   693,   697,   700,   703,   706,   707,   711,   712,   715,
     716,   717,   721,   722,   723,   727,   729,   730,   732,   734,
     736,   738,   740,   742,   744,   746,   748,   750,   752,   754,
     757,   758,   759,   762,   765,   766,   769,   770,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   802,   807,
     809,   814,   816,   818,   820,   822,   823,   824,   825,   826,
     827,   828,   829,   832,   834,   836,   839,   839,   842,   850,
     853,   853,   856,   859,   860,   863,   866,   870,   872,   874,
     876,   878,   880,   883,   885,   888,   890,   893,   895,   899,
     902,   906,   907,   910,   911,   912,   916,   918,   920,   922,
     924,   926,   929,   933,   935,   937,   940,   942,   945,   947,
     949,   951,   954,   967,   969,   971,   973,   977,   978,   983,
     986,   987,   992,   995,   996,  1001,  1004,  1005,  1010,  1013,
    1014,  1019,  1020,  1023,  1026,  1027,  1030,  1032,  1034,  1036,
    1044,  1047,  1049,  1052,  1055,  1058,  1061,  1063,  1066,  1068,
    1069,  1071,  1072,  1073,  1074,  1075,  1076,  1078,  1098,  1104,
    1107,  1109,  1112,  1115,  1118,  1122,  1135,  1138,  1141,  1144,
    1149,  1154,  1158,  1160,  1162,  1163,  1171,  1179,  1187,  1195,
    1203,  1211,  1219,  1227,  1237,  1240,  1243,  1246,  1253,  1256,
    1260,  1263,  1266,  1270,  1271,  1272,  1277,  1278,  1281,  1286,
    1280,  1324,  1325,  1328,  1332,  1327,  1351,  1353,  1355,  1357,
    1361,  1362,  1367,  1368,  1372,  1375,  1376,  1378,  1379,  1382,
    1389,  1396,  1403,  1413,  1421,  1433,  1459,  1492,  1515,  1520,
    1526,  1531,  1546,  1561,  1571,  1616,  1623,  1678,  1689,  1701,
    1710,  1719,  1729,  1739,  1749,  1763,  1781,  1782,  1784,  1801,
    1815,  1820,  1825,  1819,  1841,  1844,  1845,  1847,  1848,  1851,
    1854,  1862,  1870,  1870,  1877,  1886,  1889,  1893,  1896,  1900,
    1905,  1909,  1915,  1921,  1921,  1933,  1933,  1945,  1952,  1952,
    1965,  1973,  1973,  1986,  1985,  2000,  2003,  2007,  2016,  2017,
    2018,  2021,  2024,  2033,  2042,  2051,  2060,  2069,  2078,  2087,
    2096,  2106,  2112,  2111,  2119,  2118,  2127,  2126,  2133,  2135,
    2139,  2140,  2142,  2143,  2144,  2146,  2150,  2151,  2153,  2154,
    2156,  2158,  2160,  2165,  2175,  2178,  2183,  2191,  2194,  2200,
    2208,  2208,  2212,  2213,  2214,  2215,  2216,  2217,  2218,  2220,
    2222,  2296,  2308,  2309,  2310,  2311,  2316,  2317,  2320,  2327,
    2326,  2336,  2344,  2350,  2356,  2360,  2365,  2370,  2375,  2378,
    2384,  2389,  2394,  2400,  2406,  2412,  2418,  2427,  2431,  2435,
    2439,  2445,  2448,  2452,  2458,  2462,  2470,  2473,  2476,  2479,
    2480,  2483,  2484,  2485,  2486,  2487,  2488,  2490,  2492,  2496,
    2498,  2503,  2505,  2510,  2513,  2517,  2520,  2524,  2527,  2531,
    2534,  2539,  2544,  2549,  2554,  2558,  2561,  2565,  2569,  2575,
    2577,  2591,  2593,  2597,  2598,  2599,  2601,  2604,  2607,  2611,
    2612,  2616,  2617,  2621,  2622,  2627,  2628,  2633,  2634,  2638,
    2640,  2644,  2645,  2649,  2650,  2655,  2656,  2660,  2661,  2665,
    2666,  2668,  2669,  2670,  2673,  2676,  2680,  2685,  2686,  2687,
    2688,  2689,  2690,  2696,  2711,  2715,  2717,  2721,  2723,  2732,
    2736,  2737,  2738,  2743,  2745,  2752,  2764,  2781,  2796,  2813,
    2815,  2817,  2819,  2821,  2825,  2829,  2830,  2832,  2833,  2841,
    2842,  2844,  2845,  2846,  2847,  2848,  2849,  2850,  2852,  2854,
    2859,  2867,  2871,  2872,  2873,  2874,  2875,  2876,  2877,  2878,
    2879,  2880,  2881,  2882,  2883,  2884,  2885,  2886,  2887,  2888,
    2889,  2890,  2891,  2892,  2893,  2894,  2895,  2896,  2897,  2898,
    2899,  2900,  2901,  2902,  2903,  2904,  2905,  2906,  2907,  2908,
    2909,  2910,  2911,  2912,  2913,  2914,  2915,  2917,  2926,  2930,
    2944,  2972,  2976,  2981,  2985,  2989,  2995,  2999,  3004,  3008,
    3012,  3017,  3021,  3025,  3029,  3033,  3037,  3054,  3061,  3067,
    3069,  3071,  3076,  3084,  3086,  3088,  3096,  3097,  3098,  3099,
    3100,  3103,  3104,  3106,  3107,  3108,  3109,  3111,  3113,  3118,
    3119,  3120,  3121,  3122,  3123,  3124,  3125,  3126,  3127,  3128,
    3129,  3130,  3131,  3133,  3142,  3148,  3152,  3160,  3161,  3166,
    3167,  3168,  3169,  3170,  3171,  3172,  3173,  3174,  3178,  3180,
    3186,  3202,  3217,  3222,  3240,  3264,  3265,  3266,  3267,  3268,
    3269,  3270,  3271,  3272,  3273,  3274,  3275,  3276,  3278,  3280,
    3282,  3284,  3286,  3288,  3290,  3292,  3294,  3296,  3298,  3300,
    3302,  3304,  3306,  3308,  3310,  3312,  3316,  3330,  3332,  3333,
    3334,  3339,  3341,  3338,  3351,  3357,  3358,  3359,  3360,  3361,
    3362,  3363,  3364,  3366,  3369,  3371,  3378,  3382,  3382,  3387,
    3388,  3391,  3391,  3396,  3400,  3399,  3409,  3408,  3421,  3420,
    3431,  3434,  3435,  3436,  3437,  3438,  3439,  3440,  3441,  3442,
    3443,  3444,  3445,  3447,  3454,  3465,  3466,  3467,  3468,  3469,
    3470,  3471,  3472,  3473,  3474,  3475,  3476,  3486,  3487,  3488,
    3489,  3490,  3491,  3495,  3496,  3497,  3498,  3499,  3500,  3501,
    3505,  3505,  3523,  3523,  3542,  3542,  3561,  3561,  3580,  3593,
    3608,  3609,  3611,  3637,  3660,  3696,  3739,  3770,  3792,  3814,
    3824,  3834,  3851,  3869,  3879,  3889,  3905,  3923,  3933,  3943,
    3960,  3978,  3988,  3998,  4015,  4033,  4044,  4045,  4046,  4047,
    4048,  4049,  4050,  4051,  4052,  4053,  4054,  4055,  4056,  4057,
    4058,  4059,  4060,  4061,  4062,  4063,  4064,  4071,  4081,  4083,
    4094,  4097,  4106,  4122,  4138,  4139,  4149,  4151,  4160,  4176,
    4193,  4198,  4200,  4203
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EXPRESSION_START_TOK",
  "COMMAND_START_TOK", "HISTORY_TOK", "GEOMVIEW_TOK", "VIEW_MATRIX_TOK",
  "ON_ASSIGN_CALL_TOK", "LEAD_INTEGER_TOK", "INTEGER_TOK", "REAL_TOK",
  "SIGNED_NUMBER_TOK", "NEWIDENT_TOK", "REDEFINE_TOK", "MATHFUNC_TOK",
  "MATHFUNC2_TOK", "POW_TOK", "IS_CONSTRAINT_TOK", "USERFUNC_TOK",
  "MIDV_TOK", "DATAFILENAME_TOK", "LOGFILE_TOK", "PI_TOK", "E_TOK",
  "G_TOK", "PARAM_TOK", "SYMBOL_TOK", "TOTAL_TOK", "EXTRA_ATTRIBUTE_TOK",
  "FIXEDVOL_TOK", "IDENT_TOK", "UMINUS_TOK", "SHELL_TOK", "COLOR_TOK",
  "HESSIAN_TOK", "VOLCONST_TOK", "TORUS_PERIODS_TOK", "VERTICES_TOK",
  "EDGES_TOK", "FACETS_TOK", "BODIES_TOK", "HESSIAN_MENU_TOK",
  "POSTSCRIPT_TOK", "NORMAL_TOK", "LENGTH_TOK", "AREA_TOK", "VOLUME_TOK",
  "ID_TOK", "OID_TOK", "TAG_TOK", "ORIGINAL_TOK", "FACETEDGES_TOK",
  "WRAP_TOK", "QUOTATION_TOK", "UNSET_TOK", "TOPINFO_TOK", "OPACITY_TOK",
  "VALENCE_TOK", "HESSIAN_SADDLE_TOK", "NO_DUMP_TOK", "SET_TOK",
  "FIXED_TOK", "DENSITY_TOK", "PRESSURE_TOK", "CONSTRAINT_TOK",
  "COORD_TOK", "DISSOLVE_TOK", "WHERE_TOK", "LIST_TOK", "SHOW_TOK",
  "DELETE_TOK", "REFINE_TOK", "RECALC_TOK", "SHOWQ_TOK", "EDGESWAP_TOK",
  "STRINGARRAY_TOK", "FIX_TOK", "UNFIX_TOK", "TOGGLENAME_TOK",
  "TOGGLEVALUE_TOK", "QUANTITY_NAME_TOK", "PAUSE_TOK",
  "VALUE_OF_CONSTRAINT_TOK", "GO_TOK", "SHOW_VOL_TOK", "CHECK_TOK",
  "READ_TOK", "ZOOM_TOK", "ON_TOK", "OFF_TOK", "GEOMPIPE_TOK", "SELF_TOK",
  "SINGLE_LETTER_TOK", "LONG_JIGGLE_TOK", "RAW_VERAVG_TOK", "COUNTS_TOK",
  "CHDIR_TOK", "QUOTED_LETTER_TOK", "ALICE_TOK", "STABILITY_TEST_TOK",
  "DEFINE_TOK", "UPLUS_TOK", "DATATYPE_TOK", "FLUSH_COUNTS_TOK",
  "NORMAL_VECTOR_TOK", "AUTOCHOP_TOK", "UTEST_TOK", "ATTRIBUTE_TOK",
  "RITZ_TOK", "MOVE_TOK", "VERTEXNORMAL_TOK", "POP_TOK", "SYSTEM_TOK",
  "TETRA_POINT_TOK", "TRIPLE_POINT_TOK", "LANCZOS_TOK", "EIGENPROBE_TOK",
  "EXEC_TOK", "NO_HESSIAN_NORMAL_TOK", "AREAWEED_TOK", "EDGEWEED_TOK",
  "GRAVITY_TOK", "EDGEDIVIDE_TOK", "LINEAR_TOK", "QUADRATIC_TOK",
  "EVOLVER_VERSION_TOK", "DIFFUSION_TOK", "EXTRAPOLATE_TOK",
  "TRANSFORM_DEPTH_TOK", "PRINTF_TOK", "ERRPRINTF_TOK", "NONPOSITIVE_TOK",
  "NONNEGATIVE_TOK", "PRINT_TOK", "MAX_TOK", "MIN_TOK", "COUNT_TOK",
  "SUM_TOK", "AVG_TOK", "BREAK_TOK", "CONTINUE_TOK", "SIZEOF_TOK",
  "TRANSFORM_EXPR_TOK", "BARE_TOK", "BOTTOMINFO_TOK", "METIS_TOK",
  "KMETIS_TOK", "KEYLOGFILE_TOK", "SCALE_TOK", "PSCALE_TOK",
  "BURCHARD_TOK", "REBODY_TOK", "BOUNDARY_TOK", "ORIENTATION_TOK",
  "OMETIS_TOK", "SQ_MEAN_CURV_TOK", "FRONTCOLOR_TOK", "SINGLE_REDEFD_TOK",
  "METHOD_NAME_TOK", "TASK_EXEC_TOK", "RAWEST_VERAVG_TOK",
  "SINGLE_LETTER_ARG_TOK", "BACKCOLOR_TOK", "LAGRANGE_TOK", "RETURN_TOK",
  "TRANSFORM_EXPR_VERB_TOK", "OOGLFILE_TOK", "PARALLEL_EXEC_TOK",
  "BINARY_OFF_FILE_TOK", "SPRINTF_TOK", "CONVERT_TO_QUANTS_TOK",
  "METIS_FACTOR_TOK", "FUNCTION_TOK", "EXPRINT_TOK", "DIHEDRAL_TOK",
  "WRAP_VERTEX_TOK", "ARRAYIDENT_TOK", "DATE_AND_TIME_TOK", "LOCAL_TOK",
  "SHOW_EXPR_TOK", "SHOW_TRANS_TOK", "AXIAL_POINT_TOK", "ENERGY_TOK",
  "CONSERVED_TOK", "INFO_ONLY_TOK", "ASSIGN_TOK", "PROCEDURE_TOK",
  "FOREACH_TOK", "STRINGGLOBAL_TOK", "EQUIANGULATE_TOK", "HISTOGRAM_TOK",
  "LOGHISTOGRAM_TOK", "AREA_FIXED_TOK", "QUIT_TOK", "WARNING_MESSAGES_TOK",
  "CENTEROFMASS_TOK", "IF_TOK", "WHILE_TOK", "DO_TOK", "NO_REFINE_TOK",
  "NO_TRANSFORM_TOK", "STRING_TOK", "NONCONTENT_TOK", "FOR_TOK",
  "HIT_PARTNER_TOK", "FRONTBODY_TOK", "BACKBODY_TOK", "COLORFILE_TOK",
  "PERM_STRINGGLOBAL_TOK", "FUNCTION_IDENT_TOK", "THICKEN_TOK",
  "COLORMAP_TOK", "REDIRECT_TOK", "NEWVERTEX_TOK", "NEWEDGE_TOK",
  "NEWFACET_TOK", "FACET_CROSSCUT_TOK", "MODULUS_TOK", "TARGET_TOK",
  "VALUE_TOK", "INVERSE_PERIODS_TOK", "NEWBODY_TOK", "PDELTA_TOK",
  "GAP_CONSTANT_TOK", "DUMP_TOK", "NOTCH_TOK", "QUANTITY_TOK", "LOAD_TOK",
  "PERM_PROCEDURE_TOK", "PROCEDURE_WORD_TOK", "DYNAMIC_LOAD_FUNC_TOK",
  "PERM_IDENT_TOK", "PERMLOAD_TOK", "HELP_TOK", "VERTEX_AVERAGE_TOK",
  "METHOD_INSTANCE_TOK", "RAW_VERTEX_AVERAGE_TOK", "REDIRECTOVER_ERR_TOK",
  "OPTIMIZE_TOK", "REDIRECTOVER_TOK", "TOLERANCE_TOK",
  "RAWEST_VERTEX_AVERAGE_TOK", "REDIRECT_ERR_TOK", "JIGGLE_TOK",
  "VIEW_TRANSFORMS_TOK", "CLOSE_SHOW_TOK", "IS_DEFINED_TOK",
  "NODISPLAY_TOK", "PERM_ASSIGN_TOK", "PHASE_TOK",
  "VIEW_TRANSFORM_SWAP_COLORS_TOK", "BACKQUOTE_COMMA_TOK", "P_FORCE_TOK",
  "P_VELOCITY_TOK", "INTERNAL_VARIABLE_TOK", "DIRICHLET_TOK",
  "SOBOLEV_TOK", "VIEW_TRANSFORM_PARITY_TOK", "SOBOLEV_SEEK_TOK",
  "DIRICHLET_SEEK_TOK", "HESSIAN_SEEK_TOK", "REORDER_STORAGE_TOK",
  "RENUMBER_ALL_TOK", "CONSTRAINT_NAME_TOK", "BOUNDARY_NAME_TOK",
  "PROCEDURE_IDENT_TOK", "POP_TRI_TO_EDGE_TOK", "POP_EDGE_TO_TRI_TOK",
  "POP_QUAD_TO_QUAD_TOK", "SHOWVERB_TOK", "PROCEDURES_TOK",
  "MPI_TASK_ATTR_TOK", "T1_EDGESWAP_TOK", "MERGE_EDGE_TOK",
  "MERGE_FACET_TOK", "MERGE_VERTEX_TOK", "RESET_COUNTS_TOK",
  "VALID_ELEMENT_TOK", "MID_EDGE_TOK", "MID_FACET_TOK", "GO_COUNT_TOK",
  "ELEMENT_IDENT_TOK", "BODY_METIS_TOK", "REVERSE_ORIENTATION_TOK",
  "MATRIX_MULTIPLY_TOK", "MATRIX_INVERSE_TOK", "BINARY_PRINTF_TOK",
  "DUMP_MEMLIST_TOK", "FREE_DISCARDS_TOK", "REPARTITION_TOK",
  "METIS_READJUST_TOK", "MEAN_CURVATURE_TOK", "GLOBAL_TOK",
  "LEAD_INTEGER_AT_TOK", "INTEGER_AT_TOK", "MATRIX_DETERMINANT_TOK",
  "SUBCOMMAND_TOK", "ABORT_TOK", "BREAKPOINT_TOK", "WHEREAMI_TOK",
  "ADDLOAD_TOK", "SIMPLEX_TO_FE_TOK", "REPLACE_LOAD_TOK",
  "DISPLAY_TEXT_TOK", "DELETE_TEXT_TOK", "SUPPRESS_WARNING_TOK",
  "UNSUPPRESS_WARNING_TOK", "RESET_PROFILING_TOK", "VALID_CONSTRAINT_TOK",
  "VALID_BOUNDARY_TOK", "ARRAY_ATTRIBUTE_TOK", "PROFILING_TOK",
  "DETORUS_TOK", "MAKE_THREAD_LISTS_TOK", "','", "'.'", "';'", "'['",
  "']'", "'{'", "'}'", "'('", "')'", "'`'", "ASSIGNOP_TOK", "PIPE_TOK",
  "THEN_TOK", "ELSE_TOK", "'='", "'?'", "':'", "OR_TOK", "AND_TOK",
  "NOT_TOK", "'>'", "'<'", "NE_TOK", "GE_TOK", "LE_TOK", "EQ_TOK",
  "ON_CONSTRAINT_TOK", "HIT_CONSTRAINT_TOK", "ON_BOUNDARY_TOK",
  "ON_QUANTITY_TOK", "ON_METHOD_INSTANCE_TOK", "'+'", "'-'", "'%'",
  "IMOD_TOK", "'*'", "'/'", "DOT_TOK", "IDIV_TOK", "'^'", "INCREMENT_TOK",
  "EPRINT_TOK", "'@'", "$accept", "whole", "@1", "commandline", "command",
  "vcommand", "commands", "commandblock", "@2", "onecommand",
  "commandsemic", "commandterm", "commandlist", "commandlistterm",
  "ifhead", "@3", "whilehead", "@4", "dohead", "@5", "forentry", "forhead",
  "fortop", "single_letter_cmd", "estart", "@6", "@7", "identassign",
  "permidentassign", "elidassign", "lvalue", "rexpr", "datatype",
  "argident", "arglist", "argliststart", "protobody", "functionname", "@8",
  "@9", "procedurename", "@10", "@11", "indexset", "dimensionset",
  "arraydecl", "arraylvalue", "arraylvalueindexset", "arrayrexpr",
  "arraylist", "extraat", "defextra", "@12", "@13", "newlvalue",
  "new_permlvalue", "@14", "@15", "@16", "@17", "@18", "@19",
  "localidlist", "localid", "@20", "@21", "@22", "exprlist", "printfhead",
  "binaryprintfhead", "errprintfhead", "@23", "print", "backquote", "@24",
  "elindex", "verb", "eltype", "multiple", "single", "singlep",
  "element_gen", "toggle", "quotation_concat", "stringexpr", "sprintfhead",
  "getattrib", "ggetattrib", "fullattrib", "signed_expr", "@25", "@26",
  "aggregate", "histotype", "foreachhead", "@27", "@28", "@29", "@30",
  "@31", "set", "set_attrib", "setattrib", "setattribb", "assignop", "@32",
  "@33", "@34", "@35", "array_attr", "unset", "unsetattrib", "conname",
  "bdryname", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,    44,    46,    59,    91,    93,
     123,   125,    40,    41,    96,   570,   571,   572,   573,    61,
      63,    58,   574,   575,   576,    62,    60,   577,   578,   579,
     580,   581,   582,   583,   584,   585,    43,    45,    37,   586,
      42,    47,   587,   588,    94,   589,   590,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   358,   359,   360,   359,   361,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     362,   364,   364,   366,   365,   365,   365,   367,   367,   362,
     362,   362,   368,   368,   369,   370,   371,   370,   371,   373,
     372,   363,   363,   363,   363,   363,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   375,   374,   363,   363,   377,   376,   363,
     363,   362,   378,   379,   379,   380,   380,   363,   363,   363,
     379,   380,   381,   381,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   362,   362,   362,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     362,   362,   362,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   382,   359,   359,   383,   362,   362,   362,
     384,   363,   363,   363,   363,   362,   362,   363,   363,   363,
     363,   363,   363,   363,   363,   362,   362,   363,   363,   362,
     362,   363,   363,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   362,   363,   362,   385,   386,   362,   362,
     362,   362,   362,   362,   362,   362,   387,   362,   362,   388,
     388,   362,   362,   362,   362,   362,   362,   362,   389,   389,
     389,   389,   389,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   390,   390,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   392,   393,   393,   392,   393,   393,
     393,   393,   392,   394,   394,   394,   395,   395,   396,   397,
     363,   398,   398,   399,   400,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   401,   401,   402,   402,   403,
     403,   403,   363,   404,   404,   404,   404,   404,   404,   404,
     405,   363,   363,   363,   363,   389,   389,   389,   406,   406,
     407,   407,   406,   406,   363,   363,   408,   408,   409,   409,
     363,   410,   411,   363,   363,   363,   363,   363,   363,   363,
     412,   413,   414,   412,   412,   362,   389,   362,   362,   362,
     362,   362,   362,   415,   362,   416,   362,   362,   417,   362,
     362,   418,   362,   419,   362,   362,   362,   362,   363,   420,
     420,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   422,   363,   423,   363,   424,   363,   363,   363,
     425,   425,   425,   425,   425,   425,   426,   426,   427,   427,
     428,   428,   363,   363,   363,   363,   363,   363,   363,   363,
     429,   363,   430,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   431,   432,
     389,   389,   389,   389,   389,   363,   363,   363,   363,   363,
     389,   389,   389,   389,   389,   389,   389,   389,   362,   362,
     362,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   433,   433,   433,   433,   433,   433,   389,   389,   389,
     389,   389,   389,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   389,   389,   389,   389,   389,   434,
     363,   434,   363,   434,   434,   434,   363,   363,   363,   434,
     363,   434,   363,   434,   363,   434,   363,   434,   363,   434,
     363,   434,   363,   434,   363,   434,   363,   434,   363,   434,
     434,   363,   363,   363,   363,   363,   363,   435,   435,   435,
     435,   435,   436,   436,   437,   437,   437,   437,   437,   437,
     438,   438,   437,   437,   437,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   440,   440,   441,   441,   442,
     442,   442,   442,   442,   442,   442,   442,   443,   443,   442,
     442,   442,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   445,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     447,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   448,   449,   389,   389,   450,   450,   450,   450,   450,
     451,   451,   363,   363,   452,   363,   363,   453,   363,   363,
     363,   454,   363,   363,   455,   363,   456,   389,   457,   363,
     458,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   363,   363,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   461,   461,   462,   462,   462,
     463,   362,   464,   362,   465,   362,   466,   362,   363,   363,
     467,   467,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   468,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   363,   363,   470,   363,
     389,   363,   363,   363,   471,   363,   389,   363,   363,   363,
     363,   359,   363,   363
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     1,     2,     2,     1,     2,     2,
       2,     1,     1,     0,     4,     2,     3,     1,     1,     1,
       2,     2,     1,     2,     1,     1,     1,     2,     2,     0,
       5,     2,     1,     3,     2,     1,     2,     2,     1,     2,
       2,     2,     1,     2,     2,     2,     1,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       1,     2,     2,     0,     4,     2,     2,     0,     3,     3,
       2,     2,     3,     3,     2,     3,     2,     2,     2,     3,
       2,     2,     1,     1,     1,     1,     2,     2,     1,     2,
       2,     2,     2,     1,     2,     2,     2,     3,     2,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     4,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     6,
       2,     2,     6,     2,     6,     2,     2,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     2,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     2,     3,
       2,     3,     2,     3,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     2,     3,     0,     4,     2,     3,
       0,     4,     3,     3,     3,     3,     2,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     2,     5,     5,     5,     5,
       5,     3,     3,     4,     4,     4,     4,     4,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     3,     2,     2,     2,     2,     3,     2,
       3,     3,     2,     3,     2,     2,     2,     2,     5,     3,
       3,     4,     4,     4,     4,     4,     4,     3,     1,     3,
       3,     3,     1,     3,     4,     3,     2,     2,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     4,     2,     2,     3,
       4,     2,     2,     1,     1,     0,     1,     1,     0,     0,
       7,     1,     1,     0,     0,     6,     3,     2,     2,     1,
       3,     3,     2,     2,     2,     3,     4,     3,     4,     4,
       4,     4,     1,     1,     1,     1,     2,     7,     3,     2,
       2,     3,     3,     2,     3,     3,     2,     1,     1,     1,
       1,     3,     3,     2,     3,     3,     1,     1,     5,     5,
       2,     0,     0,     7,     1,     2,     2,     2,     2,     2,
       2,     2,     0,     4,     2,     2,     2,     3,     2,     2,
       2,     2,     2,     0,     3,     0,     5,     3,     0,     5,
       3,     0,     4,     0,     4,     3,     3,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     0,     4,     0,     4,     2,     2,
       3,     3,     1,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     1,     3,     3,     1,     3,     3,     1,     3,
       0,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     1,     0,
       5,     2,     3,     4,     2,     3,     4,     2,     6,     2,
       4,     2,     6,     6,     6,     2,    10,     2,     1,     4,
       2,     4,     2,     6,     2,     4,     2,     4,     2,     1,
       2,     1,     3,     1,     2,     1,     2,     7,     2,     4,
       2,     4,     2,     6,     2,     6,     2,     6,     2,     8,
       2,     7,     5,     3,     4,     6,     2,     5,     3,     1,
       2,     1,     2,     1,     1,     1,     2,     2,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     4,     3,     4,     1,     1,     1,
       2,     1,     5,     4,     5,     1,     2,     1,     2,     2,
       2,     2,     2,     3,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     4,
       2,     3,     4,     4,     4,     2,     1,     1,     1,     2,
       2,     3,     2,     1,     1,     1,     1,     3,     3,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     6,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     0,     0,     7,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     4,     2,     0,     3,     1,
       2,     0,     3,     2,     0,     7,     0,     7,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       0,     6,     0,     7,     0,     5,     0,     6,     4,     5,
       1,     2,     5,     4,     6,     7,     6,     6,     7,     4,
       4,     6,     6,     4,     4,     6,     6,     3,     3,     5,
       5,     3,     3,     5,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     1,     3,
       1,     4,     6,     5,     1,     3,     1,     4,     5,     6,
       2,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,   243,     3,     0,     0,     0,     1,   778,   777,   779,
     780,     0,     0,   789,     0,   785,   708,   782,   783,   784,
     673,   637,     0,   717,   703,   755,     0,   690,   683,   627,
     628,   629,   630,   674,   681,   682,   688,   689,   695,   631,
     709,   716,   680,   696,   686,   687,   672,   676,   746,     0,
       0,   638,   338,     0,   747,   404,   707,   706,   704,   835,
     836,   839,   837,   838,     0,   712,   754,   677,   678,   691,
       0,   692,   748,   679,   403,   705,   697,   698,   699,   701,
     700,   694,   693,     0,     0,     0,     0,     0,   684,     0,
     759,   756,     0,   702,   713,   753,     0,   960,   966,   685,
       0,   710,   711,   639,     0,   675,     0,     0,     0,     0,
     405,     0,   528,     0,     0,     0,     0,     0,     0,     0,
     342,   244,   417,     0,     0,   641,     0,   718,   719,   736,
     781,   856,    23,     0,     0,     0,     0,     0,   212,   219,
     220,     0,     0,     0,   860,     0,     0,     0,     0,   222,
     203,     0,     0,     0,   237,     0,   197,     0,   196,   202,
       0,     0,     0,   112,   204,   205,   175,     0,   113,   207,
     210,     0,   200,     0,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   208,   209,   188,     0,
       0,     0,   512,     0,     0,     0,     0,     0,     0,     0,
     189,     0,     0,     0,     0,   206,     0,     0,     0,     0,
       0,     0,     0,   213,   214,     0,     0,     0,   403,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,   235,
       0,   215,   217,   218,   216,     0,   183,   184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,    90,   639,
       0,     0,     0,     0,   185,   186,   187,     0,   178,   179,
       0,    22,     0,   182,     0,   548,     0,     0,     0,   199,
     180,   181,    42,     0,     0,    55,     0,     4,     0,     6,
       5,     0,    44,    46,    31,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,     0,     0,
     434,     0,     0,   502,   505,   508,     0,   858,   641,     0,
     854,     0,     0,     0,   446,   787,     0,     0,   545,     0,
     760,     0,   827,   826,   773,     0,   724,   725,   828,   745,
       0,   776,     0,   534,     0,   552,     0,   554,     0,   558,
       0,   556,     0,   560,   740,     0,   541,     0,   568,     0,
     586,     0,     0,   547,     0,   570,     0,   572,     0,   752,
       0,   830,   829,   723,   721,   722,   731,   729,   730,   728,
     726,   727,   733,   732,   735,   734,   750,   749,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   416,
     531,     0,     0,   640,   409,   738,     0,   714,   715,   406,
       0,   737,   720,     0,    79,    59,   662,   657,   655,   656,
     666,   665,     0,   664,   660,   663,   661,    57,   659,    56,
     669,   445,     0,   441,   350,    67,    65,    64,   351,     0,
       0,     0,   349,   346,    73,    72,   970,     0,     0,    21,
     171,   170,   444,     0,     0,     0,     0,     0,     0,     0,
       0,   600,   590,   223,     0,   232,   225,   224,     0,   234,
       0,     0,   230,   228,   226,   592,   604,   606,   625,   621,
     623,   626,   622,   624,   236,     0,    92,    91,   125,   124,
     192,     0,    63,    61,    60,   482,   141,   140,   439,   393,
     392,   437,   438,     0,   394,   435,   436,     0,   275,     0,
     273,   240,   163,     0,   168,   167,   612,   133,   132,   161,
       0,   160,   166,     0,   165,   135,   134,   156,   155,   154,
     153,   256,   897,   898,   899,     0,   158,   157,   128,     0,
     126,   497,   496,   501,   500,   198,    85,    84,    88,    87,
     143,   142,   145,   144,    71,    69,    68,     0,   193,   152,
     150,   117,   486,   116,     0,   139,     0,   122,   484,   121,
     195,   194,    82,    81,   131,     0,   129,    77,    76,   137,
     136,    75,    74,   387,   352,   353,     0,   519,   539,     0,
       0,   481,   471,   472,   477,   478,   473,   474,   476,   475,
     479,   480,   468,   469,   853,     0,   527,   526,    26,     0,
       0,    25,   846,     0,   322,   610,   842,   843,   177,    51,
      49,    96,    93,   101,     0,   108,     0,     0,     0,     0,
     270,     0,   312,   310,   309,   272,   271,   299,   298,   297,
      29,   463,    28,   388,   381,   382,   383,   317,   308,   307,
     306,   973,   972,   596,   597,   315,   314,   238,   598,   248,
       0,   174,   173,   537,     0,   614,   616,   618,   850,     0,
     608,   576,     0,   578,     0,   574,     0,   326,   149,   148,
     602,   580,     0,   499,   498,   147,   146,    20,     0,     0,
       0,   302,   301,   300,   305,   304,   303,   550,     0,   294,
     293,   296,   295,     0,    35,     0,    54,   347,    30,     0,
       0,     0,     0,    43,     0,    41,    40,     0,    48,     0,
       0,   100,     0,   110,   104,     0,   111,   106,     0,     0,
     120,   119,   467,   324,   319,   325,   327,     0,   410,     0,
     897,   413,     0,   431,     0,   430,   450,   455,   449,     0,
     448,   458,   452,   451,     0,     0,     0,   525,   522,   524,
     523,   515,     0,   518,   513,   517,   521,     0,   514,     0,
     640,     0,   632,   647,   641,   645,     0,   935,     0,     0,
       0,     0,     0,   758,   757,   339,   330,   329,   341,   340,
     774,   768,   769,   761,   770,   772,   771,   762,   765,   766,
     763,     0,     0,     0,   775,   764,   767,   532,   492,     0,
     495,     0,     0,     0,     0,   741,     0,     0,   588,     0,
       0,     0,     0,     0,   751,   811,   792,   834,     0,   825,
     806,   824,   805,   819,   800,   818,   799,   820,   801,   823,
     804,   822,   803,   821,   802,   809,   790,     0,   810,   791,
       0,   814,   795,   815,   796,   813,   794,   812,   793,   816,
     797,   817,   798,     0,   415,     0,   529,   635,     0,   565,
     563,     0,     0,   408,     0,     0,     0,   668,   667,   658,
       0,   447,   348,   343,     0,     0,   345,   960,     0,   262,
       0,   960,     0,   292,     0,   288,   290,   291,   289,     0,
       0,     0,   254,   253,   268,   267,   264,   263,     0,   252,
       0,   261,   229,   227,   231,   233,   281,     0,     0,     0,
       0,   191,     0,   391,   390,     0,     0,   274,     0,     0,
       0,   255,   127,   266,   265,     0,   282,     0,     0,     0,
     130,   386,   376,   377,   378,     0,     0,     0,   852,   465,
       0,   466,   320,   318,     0,     0,     0,    98,    37,    23,
       0,   102,   313,   323,   321,   269,     0,     0,   249,     0,
     535,     0,   848,     0,     0,     0,   583,     0,    17,    18,
      19,     0,    36,     0,    10,     9,    16,    15,    14,    13,
      12,    11,     8,     7,     0,    99,   103,   105,   337,     0,
     414,   424,   419,   412,   411,   425,     0,     0,     0,   457,
       0,   860,   241,     0,    97,     0,   239,   454,   460,     0,
     504,   503,   507,   506,   510,   509,   719,   859,   890,   892,
     877,   882,   883,   881,   894,   886,   880,   885,   887,   889,
     888,   893,   878,   879,   875,   876,   884,   891,   900,     0,
     648,   652,   650,   646,   651,   649,   633,     0,     0,   865,
     927,   870,   872,   871,   866,   931,   869,   863,   861,   862,
     867,   864,     0,     0,   868,   910,     0,   873,   896,     0,
       0,   955,   946,   937,   945,   948,     0,   928,   951,   949,
     950,   940,     0,   932,   952,   938,   941,   942,   943,   939,
     953,   954,   947,     0,     0,   944,   958,   964,   956,   959,
     965,   786,     0,     0,   743,   742,   744,     0,   533,     0,
     551,     0,   557,   555,   739,   540,     0,     0,   584,     0,
     569,   571,     0,   807,   808,   395,     0,     0,   566,   564,
     636,     0,   634,     0,   643,     0,     0,   671,   670,   344,
       0,   333,   331,   332,   260,   258,   443,   259,   257,   287,
     284,   283,   285,   286,   251,     0,     0,     0,     0,     0,
     400,   401,   399,     0,   426,   427,     0,     0,     0,     0,
       0,     0,   138,     0,     0,     0,   336,   334,   335,   470,
       0,     0,    94,     0,     0,   384,     0,   247,   536,     0,
       0,     0,     0,   549,    34,   423,   418,   420,     0,   432,
     397,     0,     0,     0,   511,     0,     0,     0,     0,     0,
     654,   653,     0,     0,     0,   919,   923,   911,   895,     0,
     908,     0,   913,     0,   417,   961,     0,   967,     0,   920,
     924,     0,     0,     0,     0,     0,   491,   490,   494,   493,
       0,   561,     0,   587,     0,     0,   832,   396,   530,   562,
       0,   644,   642,     0,   328,   280,   277,   276,   278,   429,
     428,     0,     0,     0,   279,   379,     0,     0,   367,   364,
     368,   375,   371,     0,   372,     0,     0,     0,   582,     0,
       0,   422,     0,   398,   456,   459,     0,     0,   905,     0,
       0,   929,   933,     0,     0,   874,     0,   909,     0,   912,
       0,     0,   930,     0,   934,     0,     0,   957,   963,   968,
     788,   544,   542,   543,   553,     0,   585,     0,     0,     0,
       0,   162,   159,   164,   375,   538,   354,   355,   360,   361,
     356,   357,   359,   358,   362,   363,   365,   374,   373,   385,
     369,     0,   575,   577,   573,     0,   421,     0,   901,     0,
     907,     0,   921,   925,   917,     0,   914,     0,   916,   962,
     969,   922,   926,   567,     0,   833,   407,   857,   380,   370,
     366,   581,     0,   433,   903,   855,   918,   915,     0,   579,
       0,   546
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     5,   297,   298,   299,   300,   301,   725,   977,
     302,   303,   304,   305,   306,   974,   307,   975,   308,   644,
     309,   310,   311,   312,     4,   989,   930,   313,   314,   315,
     120,   828,   606,  1366,  1215,  1216,  1369,   964,  1204,  1354,
     666,   987,  1301,   419,   765,   317,   122,   319,  1021,  1228,
    1196,   320,  1026,  1312,   321,   322,   910,   769,  1030,  1039,
     970,   986,   622,   623,   942,   959,   955,   829,   323,   324,
     325,  1234,   326,   123,  1157,   892,   327,   124,   793,   125,
     126,   796,   531,   448,   830,   450,   127,   128,   129,   130,
     848,  1348,   131,   330,   331,   689,   625,   791,   433,   789,
     332,  1097,  1068,  1099,   555,  1235,  1236,  1237,  1238,  1100,
     333,  1128,  1129,  1130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1226
static const int yypact[] =
{
     138,   103,   150,   152, 39141, 32848, -1226, -1226, -1226, -1226,
   -1226,   112,    16,  -203,    12, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226,    79, -1226, -1226,  -162, 15595, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,  2329,
   39480, -1226, -1226, 39141, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226,    17, -1226, -1226, -1226, -1226, -1226,
    2687, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226,    26,    30,    31,    47,    57, -1226,  3045,
   -1226, -1226,    58, -1226, -1226, -1226,    29, -1226, -1226, -1226,
      59, -1226, -1226, -1226,    64, -1226,  -167,    69,    71,    72,
   -1226, 15934, -1226, 16273, 16612, 16951, 17290,    70,    53, 17629,
   -1226, 41660,  -234, 33166,  -145,  -139, 40492, -1226,  -136, -1226,
   -1226, -1226, -1226,  1500, 40420,    15, 41003,    35, -1226, -1226,
   -1226,  4192,  1173,  5776,   821,   427, 41630,   898,   959, -1226,
   -1226,  1079,  1247,  1468,    73,  -132, -1226,  6115, -1226, -1226,
    1230,  6454, 41101,   172, -1226, -1226, -1226,  4858, -1226, -1226,
   -1226,  4656, -1226,  3742, -1226,    93, 17968,  1483,  4870, 18307,
   18646,  5190, 18985, 19324,    19, 19663, -1226, -1226, -1226, 14917,
    5197,  5529,  -122,   243,   749, 20002, 20341, 41124,   -46,   183,
   -1226,  6793,  4759,  -121, 20680, -1226,  5098, 21019,  7132,  3514,
    5536,  5875,  5887, -1226, -1226,    61,    27,   101,  -120,  5061,
    1757,  6207,  4081,  2589,  -119,  2947,   105,   107, 39141, 21358,
   21697, 33484,   113,    13,  -101,    25,  3403, 22036, 10849,  5437,
      22,   -30, 11188,  2257,  3138,  3230,  4420,  3305, -1226, -1226,
     -48, -1226, -1226, -1226, -1226,  7471, -1226, -1226,   115,  3452,
    3531,  3536,   451,  3625,   121,   124,   125, -1226, -1226,    50,
   22375,  4130,   126,  6388, -1226, -1226, -1226, 22714, -1226, -1226,
      36, -1226, 11527, -1226, 11866, -1226,   127, 23053, 23392, -1226,
   -1226, -1226, -1226, 32530,   219, -1226,   209, -1226,   345, -1226,
   -1226,  7810, -1226, -1226, -1226,  9849,   -83, 34431,    62, 15256,
   33802, 34431,  8149, 35751, 39141, 39141,   -46, -1226,  -112,   264,
    -131,  9175, 36090,   -68,   -67,   -65, 10171, -1226,   -62,   555,
   -1226,  1374,  4209,  1374, -1226, -1226, 39141, 39141, -1226, 39141,
   -1226,  1405, -1226,   -92, -1226,  5974, -1226,   369,   -92, -1226,
     763, -1226,    37, -1226, 36429, -1226, 37446, -1226, 39141, -1226,
   37446, -1226, 37446, -1226, -1226,  3095, -1226, 39141, -1226,   106,
   -1226,  1255,  2769, -1226, 39141, -1226, 39141, -1226, 39141, -1226,
   42209, -1226,  1613, -1226, -1226,   369, -1226, -1226,   369, -1226,
   -1226,   369, -1226, -1226, -1226, -1226, -1226, -1226, -1226, 23731,
   24070, 24409, 24748, 25087, 25426, 25765, 26104, 26443, 26782, 27121,
   27460, 27799, 28138, 28477, 28816, 29155, 29494, 39141,  2769,   -53,
     179,    24, 14239, -1226, -1226, -1226,    49, -1226, -1226, -1226,
     -49, -1226,   -53,   -40, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226,  6546, -1226, -1226, -1226, -1226, -1226,   232, -1226,
     -28, -1226,  9523, -1226, -1226, -1226, -1226, -1226, -1226, 10510,
      89, 39141, -1226, -1226, -1226, -1226, -1226, 39819,    -3, -1226,
   -1226, 42725,   114, 40158,   458, 29833, 30172, 30511,    85, 30850,
      75, -1226, -1226, -1226, 39141, -1226, -1226, -1226, 39141, -1226,
     225,   165, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226,    52, -1226, 42725, -1226, -1226,
   -1226, 35064, -1226, -1226, -1226,   804, -1226, -1226, -1226,   -59,
     -59, -1226, -1226,   -59, -1226, -1226, -1226,   221, -1226, 39141,
   42725, -1226, -1226, 39141, -1226, 42725, -1226, -1226, -1226, -1226,
   15934, 42725, -1226, 15934, 42725, -1226, -1226, -1226, 42725, -1226,
   42725, -1226, -1226, -1226, -1226, 39141, -1226, 42725, -1226, 39141,
   42725, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, 42725, -1226, 42725, -1226, -1226, -1226, 31189, -1226, -1226,
   42725, -1226,   911, 42725,    67, -1226, 41686, -1226, -1226, 42725,
   -1226, 42725, -1226, 42725, -1226,  3095, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226,    65, -1226, -1226, 39141,
     289, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226,    42, -1226, -1226,  1374, -1226, -1226, -1226, 34742,
     372, 42725, -1226, 37446, -1226, -1226, -1226, -1226, 42725, -1226,
   42725, -1226, 42725, -1226, 32848, -1226, 34113,  3095,  3095,  3095,
   -1226, 39141, -1226, 42725, -1226, -1226, 42725, -1226, 42725, -1226,
   -1226, -1226, 42725, -1226, -1226, -1226, -1226, -1226, -1226, 42725,
   -1226, -1226, -1226, -1226, -1226, -1226, 42725, -1226, -1226, -1226,
   31528, -1226, 42725, -1226, 36768, -1226, -1226, -1226, -1226,  1374,
   -1226, -1226, 39141, -1226, 39141, -1226, 39141, -1226, -1226, 42725,
   -1226, -1226,  1450, -1226, -1226, -1226, 42725, -1226, 39141, 39141,
   39141, -1226, 42725, -1226, -1226, 42725, -1226, -1226, 39141, -1226,
   42725, -1226, 42725,    55, -1226, 32848, -1226, -1226, -1226,  6553,
    6885,  6892,  7224, -1226,  7231, -1226, 42725,   420, -1226, 34431,
    2274, -1226, 39141, -1226, -1226, 41998,   314, -1226,   387,  3498,
   -1226, 42725, -1226, 42725, -1226, 42725, 42725, 39141,   -53, 37107,
    3095, -1226, 37107, -1226, 39141,    78, -1226,   109, 42725, 40786,
   -1226,   111, 42725, -1226, 12205, 12544, 12883, -1226, -1226, -1226,
   -1226, -1226,  1222, -1226, -1226, -1226, 42725, 40492, -1226,  1374,
   41729,   116,  -145,    74,    20,   106,    18, -1226, 41321, 41625,
   42238, 41712, 42024, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226,    60,   110,   122, -1226, -1226, -1226, -1226, 41738,   130,
     143,   141, 41764,   147,   153,   154, 42050,   157, -1226,   167,
     164, 41790, 42267, 42296, -1226, -1226, 10059, -1226, 39141, -1226,
   10150, -1226,  1613, -1226,  1613, -1226,  1613, -1226,  1613, -1226,
    1613, -1226,  1613, -1226,  1613, -1226,  -183,  1572, -1226,  -183,
    1968, -1226,   191, -1226,   191, -1226,   -92, -1226,   -92, -1226,
     -92, -1226, -1226, 42076, -1226, 39141, -1226, -1226, 14578, -1226,
   -1226,   473,   123, -1226, 39141, 31867,  1374, -1226, -1226, -1226,
   13222, -1226, -1226, -1226,    63,    99, 42725,   151, 41061, -1226,
     302,   204, 41380, -1226, 39141, -1226, -1226, -1226, -1226, 39141,
   39141, 39141, -1226, 42725, -1226, 42725, -1226, 42725, 39141, -1226,
   39141, -1226, 42725, 42725, -1226, -1226, -1226,   -46,   -46,   -46,
     -46, 42725, 34431,   180,   180,   180,    66, 42725, 41816, 41591,
   41634, 42725, 42725, -1226, 42725, 34431, -1226,   -46,  3095, 34431,
   -1226, -1226, -1226, -1226, -1226, 41842,   119,  5061,   431, -1226,
   34431, -1226, 42725, -1226,   175,   305,   295, -1226, -1226,    43,
     765, -1226, -1226, -1226, -1226, 42725, 34431,   184, -1226, 39141,
   -1226,   188,   431, 41868, 41894, 41920, -1226,   198, 42725, 42725,
   42725, 42325, -1226,   193, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226,  3670, 42725, -1226, -1226, 42725, 35412,
   42725, -1226, -1226, -1226, 42725, -1226,   197, 42102, 39141, -1226,
   32848,    34,    73,  8488, -1226,  8827, 37785, -1226, -1226, 32848,
   -1226, -1226, -1226, -1226, -1226, -1226,   815,   431, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,  -266,  1374,
   -1226, -1226, -1226, -1226, -1226, -1226,   -49, 32206, 34431, -1226,
     450, -1226, -1226, -1226, -1226,   453, -1226, -1226, -1226, -1226,
   -1226, -1226,   441,   367, -1226, -1226, 41599,   460, -1226, 38463,
   38463, -1226, -1226, -1226, -1226, -1226, 39141,   462, -1226, -1226,
   -1226, -1226, 39141,   463, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226,   456,   373, -1226, -1226, -1226,   466,   472,
     478, -1226, 39141,   233, -1226, -1226, -1226, 13561, -1226, 13900,
   -1226, 39141, -1226, -1226, -1226, -1226, 38124,  1665, -1226, 39141,
   -1226, -1226, 42699, -1226, -1226, -1226, 42128, 39141, -1226, -1226,
   -1226, 39141, -1226, 42154, -1226,   523,   -43, -1226, -1226, -1226,
     282, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, 42725,
   42725, 42725, 42725, 42725, 42725, 39141, 39141, 39141, 39141,  3687,
      78,    78,    78,   -59, -1226, -1226,   -59, 39141, 39141, 39141,
    3837, 39141, -1226,  4026,   184, 39141, -1226, -1226, -1226, -1226,
    4176, 34431, -1226,  4365,    14, -1226,     8, 42725, -1226, 39141,
   39141, 39141,  2061, -1226, -1226, -1226, 42725, -1226,  -223, -1226,
   -1226, 42180,   240,   241, -1226,   -46,  -136,   208,  -136,   -34,
   -1226, 42725,  4515, 39141, 39141,   485,   497, -1226, -1226, 39141,
   40377, 38802, 40821, 38802,   -27, 41158, 39141, 41214, 39141,   499,
     500, 39141, 39141, 39141, 42354,   194, -1226, -1226, -1226, -1226,
   42383, 42670,   251, -1226,   249, 41946, -1226, -1226, 42725, 42725,
     258, -1226, -1226, 39141, -1226, 42725, 42725, 42725, 42725, -1226,
   -1226, 42412, 42441, 42470, 42725, -1226, 42499,  4704, -1226, -1226,
    5739,  -216, -1226,    56, -1226, 42528, 42557, 42586, -1226,   260,
   37107, -1226, 32848, -1226, -1226, -1226, 39141,  -103, -1226,  -222,
   39141, 42725, 42725, 39141, 39141, 42725, 39141, 41243, 39141, 41270,
   39141, 39141, 42725, 39141, 42725, 39141, 39141, 42725, 42725, 42725,
   -1226, -1226, -1226, -1226, -1226,   255, -1226, 39141, 39141,   535,
   42615, -1226, -1226, -1226,  -216, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226,  5400, -1226, -1226, -1226,  2818, -1226,   259, 42725, 39141,
   -1226, 42644, 42725, 42725, 42725, 39141, 42725, 39141, 42725, 42725,
   42725, 42725, 42725, -1226, 41972, 10059, -1226, -1226, -1226, -1226,
   -1226, -1226,   261, -1226, 42725, -1226, 42725, 42725,  3095, -1226,
     263, -1226
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1226, -1226, -1226, -1226,  -230,  -188,  -116, -1225, -1226, -1226,
    -553,   277, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
      51,    -4,  -518,  -781,  -613, -1226,  -756, -1226, -1226, -1226,
   -1226, -1226, -1226,  -124,  -808, -1226,   205, -1226,  -751, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226,  -368, -1226, -1226, -1226,  -350, -1226, -1226,
   -1226, -1226, -1226, -1226, -1226,  -545, -1226,  -102, -1226,     9,
     129,  -304,  -115, -1226,  1212, -1226, -1226,  -185,  -118, -1226,
   -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226,  -753, -1226,  -195, -1226, -1226, -1226, -1226, -1226,
   -1226, -1226, -1226, -1226
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -972
static const short int yytable[] =
{
     121,   943,   944,   577,   432,   945,   831,   421,   431,  1302,
     833,  1025,   834,   338,   328,  1298,   451,   335,   349,   447,
     551,   456,   343,   663,   430,  1077,   650,   353,   798,   799,
     366,   355,   357,  1073,  1077,   664,   458,   707,   824,   504,
     651,  1330,   763,  -109,   604,  1098,   347,   513,   359,   348,
     893,  1074,  -902,   936,   394,   680,   316,  1370,   361,   364,
     368,  -389,   603,   741,  1169,   370,   961,   633,   956,   527,
     373,   392,   375,   377,   552,   737,  1368,   740,   962,  1193,
     748,   749,   575,   552,   417,   648,  1077,  1070,   937,  -904,
     903,   978,  1310,   981,   532,  1194,   885,   904,  1311,   473,
    1171,  1367,   608,  -971,   293,  1071,   636,   380,   637,   382,
     385,   388,   391,   334,   645,   397,   683,   604,   418,   337,
    1206,   757,   691,   759,   762,   693,   695,   701,   717,  1368,
     634,   677,   328,  1380,   329,  1190,  1191,  1192,   552,   471,
     552,     1,     2,   605,    29,    30,    31,    32,   649,   905,
      -2,   393,     6,   507,   341,   372,   475,   511,    39,   604,
     340,   476,   438,   439,   604,   411,   412,   413,   414,   530,
     415,   416,   535,   422,   316,   541,   544,   423,   548,   550,
     -23,   557,   417,   477,   505,   560,   515,   764,  1172,  1173,
     565,   571,   573,   578,   758,   584,   610,   580,   583,   647,
     586,   452,   589,   591,   593,   552,   417,  1075,  1207,  1208,
     318,   552,   395,   553,   607,   885,   605,  1078,   631,   667,
     726,   459,   553,   708,   638,   640,   642,   430,   554,   792,
     792,   792,   653,   656,   658,   662,   697,   554,   669,   806,
     727,  -109,   676,   -83,   566,   739,   709,   774,   775,  1170,
     776,   682,   329,   567,   790,   825,  1341,   826,   605,  -389,
     742,  1072,   416,   605,   453,   885,   699,   837,  1227,   895,
     938,   939,  1283,   706,  -389,   963,   886,   553,   712,   553,
     715,  1320,   896,   720,   722,   957,   899,   900,   665,   479,
     909,   417,   554,   940,   554,  -109,   728,   736,   480,  -389,
    -442,  -389,   710,   928,  -389,   745,   934,   679,   751,   753,
     755,   756,   807,  -389,   328,   -23,   328,   768,   772,   328,
     328,   968,   786,  1303,   935,   418,  1342,  1343,   318,   946,
     339,  1304,   800,   801,   991,   802,   423,  1299,   336,   350,
     794,   794,   794,  1248,   553,   -45,   728,   367,   354,   966,
     553,   460,   356,   358,   832,   454,   316,   967,   316,   554,
     461,   316,   316,   836,  -109,   554,  -109,   894,   931,   360,
     841,  -109,   842,   971,   843,   462,  1002,  1195,  -389,   362,
     365,   369,  -389,  1134,  -389,   992,   371,  -389,   728,  -389,
     463,   374,   -23,   376,   378,   846,  1028,   850,   852,   854,
     856,   858,   860,   862,   864,   866,   869,   872,   874,   876,
     878,   880,   882,   883,   976,   533,   980,   -23,   891,   -23,
     -47,   728,   -23,   609,  1041,  1043,  1045,  -840,   481,  -841,
    1029,   -23,  1038,  1135,   329,   646,   329,   684,  1069,   329,
     329,   -83,  1162,   692,  1174,  1136,   694,   696,   702,   718,
     760,  -849,   688,  1138,  -599,   787,   -83,   906,  1139,   913,
     795,   795,   795,   908,  1140,  -599,  -599,  -599,  -599,   912,
    1142,   923,   925,   927,  1160,  1146,  1143,  1144,  -847,  -599,
     932,   -83,  1147,   -83,   933,  1047,   -83,  1148,  1176,  -847,
    -847,  -847,  -847,   -38,   914,   -83,   -23,  1177,   764,  1077,
     329,   329,  1211,  -847,  1212,   -23,  1214,   941,   729,  1014,
     318,  1218,   318,  1222,  1224,   318,   318,  1229,  1243,  -599,
     915,  1244,  1245,   792,  1281,   947,  1246,   -23,  1249,   948,
    1256,  1258,  1260,   730,  1261,   731,   949,  1259,   732,   950,
    1262,   413,   414,  -847,   415,   416,  1263,   329,  1284,  1265,
    1168,   951,   -23,  1323,   -23,   952,   424,   -23,   729,  1376,
     -83,  1314,  1315,  1318,   -83,  1324,   -83,  1335,  1336,   -83,
    1345,   -83,  1346,   954,  1349,  1375,   839,   840,  1393,  1396,
    1403,  1037,   738,   730,  1409,   731,  1411,   792,   732,   553,
    1400,  1295,  1166,    29,    30,    31,    32,   -45,  1398,  1209,
     729,  1272,  1046,     0,   554,   965,     0,    39,     0,  1003,
       0,     0,   733,     0,   867,   870,     0,     0,     0,   761,
     426,   734,     0,   884,     0,   730,     0,   731,     0,   972,
     732,     0,     0,   729,   794,     0,     0,   -23,     0,     0,
     -23,   916,   917,   918,     0,     0,     0,   985,     0,  -849,
       0,     0,     0,   328,     0,   328,     0,     0,   730,     0,
     731,     0,   733,   732,  -849,     0,   -45,     0,     0,   431,
       0,   734,   -47,     0,     0,  1289,   919,   920,  1290,     0,
       0,     0,     0,     0,     0,   430,     0,   792,   993,  -849,
     994,  -849,   995,  1076,  -849,   316,  1300,   316,   794,   921,
       0,     0,     0,  -849,   998,   999,  1000,     0,     0,  -599,
    1017,     0,  1189,   734,  1001,   409,   410,   411,   412,   413,
     414,     0,   415,   416,     0,  1200,     0,     0,     0,  1203,
       0,     0,     0,  -847,   328,     0,     0,   733,  1015,     0,
    1210,   -47,  1185,  1186,  1187,  1188,   734,     0,   328,   -86,
     568,     0,     0,  1018,   795,  1020,  1213,     0,  1024,   569,
    1027,     0,  1201,     0,     0,  1239,   728,     0,  -849,     0,
       0,     0,  -849,   329,  -849,   329,   316,  -849,     0,  -849,
       0,     0,     0,     0,   436,  1371,     0,  1267,     0,  1269,
     316,     0,  -561,     0,   792,     0,     0,     0,   794,     0,
       0,     0,   399,   400,  -488,   401,   402,     0,   403,   404,
     405,   406,   407,   408,     0,  -520,  -520,   437,   795,   409,
     410,   411,   412,   413,   414,     0,   415,   416,     0,     0,
    1161,   329,     0,     0,   472,     0,     0,     0,     0,     0,
       0,     0,  1282,     0,  1152,     0,     0,     0,  1242,   318,
       0,   318,   399,   400,   329,   401,   402,     0,   403,   404,
     405,   406,   407,   408,     0,     0,   429,     0,   329,   409,
     410,   411,   412,   413,   414,     0,   415,   416,     0,     0,
       0,  1156,     0,     0,   343,     0,   473,     0,     0,   440,
    1163,  1165,     0,     0,     0,     0,     0,     0,   329,   495,
       0,     0,   474,     0,     0,   794,   441,   997,     0,     0,
    1179,  -489,     0,     0,  1232,  1180,  1181,  1182,   795,     0,
       0,   677,   432,  1233,  1183,  -591,  1184,     0,     0,     0,
     318,     0,     0,   442,     0,     0,  -591,  -591,  -591,  -591,
     821,   443,     0,   475,   318,     0,     0,   -86,   476,     0,
    -591,   328,   444,     0,     0,     0,     0,     0,   445,     0,
     496,     0,   -86,     0,   328,     0,     0,   792,   328,     0,
     477,     0,   446,     0,   318,  1251,  1253,     0,   729,   328,
     478,  1297,     0,     0,     0,  1217,  -603,   -86,     0,   -86,
    -591,     0,   -86,   316,     0,   328,     0,  -603,  -603,  -603,
    -603,   -86,     0,   730,     0,   731,   316,     0,   732,     0,
     316,  -603,     0,  -520,     0,  1226,     0,  -488,     0,     0,
       0,   316,     0,     0,  1231,   795,     0,     0,  -520,   631,
       0,   662,   676,     0,     0,     0,     0,   316,     0,   328,
    1316,     0,  -488,     0,  -488,     0,     0,  -488,   328,     0,
       0,  -603,     0,  -520,     0,  -520,  -488,     0,  -520,     0,
       0,     0,     0,     0,     0,     0,   -86,  -520,     0,     0,
     -86,   329,   -86,  1241,   822,   -86,   479,   -86,   794,     0,
     497,   316,   733,     0,   329,   480,     0,   328,   329,     0,
     316,   734,     0,     0,     0,  1250,  1252,     0,     0,   329,
       0,     0,  1255,     0,     0,     0,  -605,     0,  1257,     0,
       0,     0,  1317,     0,  1319,   329,     0,  -605,  -605,  -605,
    -605,  -488,  1379,     0,  -489,  -488,     0,  -488,  1264,   316,
    -488,  -605,  -520,   417,     0,     0,  -520,  1270,  -520,     0,
       0,  -520,  1271,  -520,     0,  1275,     0,   318,     0,  -489,
       0,  -489,     0,  1278,  -489,     0,     0,  1279,     0,   329,
     318,     0,     0,  -489,   318,     0,     0,     0,   329,     0,
       0,  -605,     0,     0,   466,   318,     0,     0,     0,     0,
    -591,  1285,  1286,  1287,  1288,     0,     0,     0,     0,     0,
       0,   318,     0,  1291,  1292,  1293,  1377,  1294,   795,     0,
    -936,  1296,     0,     0,     0,     0,     0,   329,     0,     0,
       0,  -936,  -936,  -936,  -936,  1305,  1306,  1307,     0,     0,
     328,     0,  -516,   353,     0,  -936,     0,     0,  -489,     0,
    -123,   508,  -489,     0,  -489,   318,     0,  -489,   467,  1321,
    1322,  -603,     0,     0,   318,  1325,     0,  1327,   498,  1329,
       0,   436,  1332,     0,  1334,     0,   838,  1337,  1338,  1339,
       0,     0,   316,     0,     0,  -936,     0,     0,     0,     0,
       0,     0,     0,     0,  -619,     0,   329,     0,   499,  1350,
       0,     0,    21,   318,   437,  -619,  -619,  -619,  -619,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,  -619,
       0,     0,     0,     0,     0,  1254,  1226,    39,     0,     0,
       0,     0,  1378,     0,     0,     0,  1381,     0,     0,  1382,
    1383,   328,  1384,     0,  1386,     0,  1388,  1389,   500,  1390,
       0,  1391,  1392,     0,     0,     0,     0,     0,     0,  -619,
     329,     0,     0,  1394,  1395,     0,   449,    51,   457,     0,
       0,   329,  1274,   465,     0,     0,   440,     0,     0,     0,
       0,  -605,     0,   316,     0,     0,    55,     0,     0,     0,
       0,     0,   509,   441,   514,  1404,     0,     0,     0,   517,
       0,  1406,     0,  1407,     0,     0,     0,     0,     0,     0,
     538,     0,     0,   546,     0,     0,     0,     0,     0,     0,
     442,    21,   562,   564,     0,     0,   803,     0,   443,   576,
       0,     0,    29,    30,    31,    32,   318,     0,     0,   444,
    -516,   596,   598,   600,   602,   445,    39,  1309,  -123,     0,
       0,     0,    74,   627,   804,  -516,     0,   468,     0,   446,
       0,   329,     0,  -123,     0,     0,     0,     0,   654,     0,
     659,   996,     0,     0,   670,  -936,     0,     0,     0,     0,
    -516,     0,  -516,     0,     0,  -516,    51,   805,  -123,   501,
    -123,     0,   469,  -123,  -516,     0,     0,    21,     0,     0,
       0,     0,  -123,     0,   536,   704,     0,     0,    29,    30,
      31,    32,     0,     0,   713,  -620,   716,     0,     0,   502,
     -78,   434,    39,     0,   329,     0,  -620,  -620,  -620,  -620,
    -611,     0,     0,     0,     0,     0,     0,   318,     0,     0,
    -620,  -611,  -611,  -611,  -611,   754,     0,     0,     0,  -619,
       0,     0,     0,   770,   773,  -611,     0,   103,   788,  -516,
       0,     0,    51,  -516,   354,  -516,     0,  -123,  -516,   503,
    -516,  -123,     0,  -123,     0,   806,  -123,     0,  -123,     0,
    -620,    55,   823,     0,     0,     0,   110,     0,     0,     0,
       0,     0,  -417,  1153,     0,  -611,     0,   835,     0,     0,
    1402,  -417,  -417,  -417,  -417,  -417,     0,  -417,  -417,     0,
    -417,  -417,  -417,     0,     0,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,     0,  -417,     0,  -417,     0,
    -417,  -417,  -417,  -417,     0,     0,     0,  -417,  -417,  -417,
    -417,  -417,     0,  -417,  -417,  -417,     0,    74,   807,  -417,
    -417,     0,     0,     0,  -417,  -417,  -417,  -417,  -417,     0,
    -417,     0,  -417,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -417,  -417,   898,  -417,   103,     0,   808,   809,
       0,     0,     0,     0,  -417,     0,  1273,     0,     0,     0,
    -417,     0,     0,     0,  -417,     0,     0,     0,  -417,     0,
       0,     0,     0,  -417,     0,     0,  -417,  -417,     0,     0,
       0,  -417,    21,     0,     0,     0,     0,     0,   -78,     0,
       0,     0,     0,    29,    30,    31,    32,  -417,  -417,  -417,
    -417,  -417,     0,   -78,  -417,     0,  -417,    39,     0,     0,
       0,  -417,     0,     0,     0,  -417,  -417,     0,  -417,  -417,
       0,  -417,   103,     0,     0,  -417,  -417,     0,   -78,     0,
     -78,     0,     0,   -78,     0,     0,     0,  -417,     0,  -417,
    -620,     0,   -78,     0,  -417,     0,     0,    51,   624,     0,
       0,   110,     0,     0,     0,  -611,     0,     0,  -417,     0,
    -417,  -417,  -417,  -417,     0,  -417,    55,  -417,  -417,  -417,
       0,     0,  -417,     0,  -851,  -417,  -417,  -417,  -417,  -417,
       0,  -417,     0,     0,  -417,  -851,  -851,  -851,  -851,  -417,
       0,     0,     0,  -417,  -417,     0,     0,   960,  -417,  -851,
    -417,     0,  -417,     0,     0,  -417,     0,   -78,     0,  -417,
    -417,   -78,  -417,   -78,  -417,     0,   -78,  -417,   -78,     0,
    -417,     0,     0,     0,     0,     0,  -417,  -417,     0,     0,
       0,     0,    74,     0,  -417,   973,     0,     0,     0,  -851,
    -417,  -417,  -417,     0,  -417,     0,     0,     0,  -417,   982,
     983,   984,     0,     0,  -417,  -417,     0,     0,  -417,     0,
       0,     0,     0,     0,     0,     0,  -417,     0,     0,     0,
       0,  -417,  -417,  -417,     0,     0,     0,  -417,  -417,  -417,
     417,  -417,     0,  -417,  -417,  -417,  -417,     0,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,   418,  -417,  -417,     0,  -417,  -417,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1005,  1007,  1009,  1011,     0,  1013,   103,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,   409,
     410,   411,   412,   413,   414,     0,   415,   416,  -417,  1154,
       0,  1022,  1023,     0,  1022,     0,   110,  -417,  -417,  -417,
    -417,  -417,     0,  -417,  -417,     0,  -417,  -417,  -417,     0,
       0,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,     0,  -417,     0,  -417,     0,  -417,  -417,  -417,  -417,
       0,     0,     0,  -417,  -417,  -417,  -417,  -417,     0,  -417,
    -417,  -417,     0,     0,     0,  -417,  -417,     0,     0,     0,
    -417,  -417,  -417,  -417,  -417,     0,  -417,     0,  -417,  -851,
       0,     0,     0,     0,     0,     0,     0,     0,  -417,  -417,
       0,  -417,     0,     0,     0,     0,     0,     0,     0,     0,
    -417,     0,  1308,     0,     0,     0,  -417,     0,     0,     0,
    -417,     0,     0,     0,  -417,     0,     0,     0,     0,  -417,
       0,     0,  -417,  -417,     0,     0,     0,  -417,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,  -417,  -417,  -417,  -417,  -417,     0,     0,
    -417,     0,  -417,    39,     0,     0,     0,  -417,     0,     0,
       0,  -417,  -417,     0,  -417,  -417,     0,  -417,     0,     0,
       0,  -417,  -417,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -417,     0,  -417,     0,     0,     0,     0,
    -417,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -417,     0,  -417,  -417,  -417,  -417,
    1202,  -417,    55,  -417,  -417,  -417,     0,     0,  -417,     0,
       0,  -417,  -417,  -417,  -417,  -417,     0,  -417,     0,     0,
    -417,     0,     0,     0,     0,  -417,     0,     0,     0,  -417,
    -417,     0,     0,     0,  -417,     0,  -417,     0,  -417,     0,
       0,  -417,     0,     0,     0,  -417,  -417,     0,  -417,     0,
    -417,     0,     0,  -417,     0,     0,  -417,     0,     0,     0,
       0,  1022,  -417,  -417,     0,     0,     0,     0,    74,     0,
    -417,     0,     0,     0,     0,     0,  -417,  -417,  -417,     0,
    -417,     0,     0,     0,  -417,     0,     0,  -221,   671,     0,
    -417,  -417,     0,     0,  -417,     0,     0,     0,     0,     0,
       0,     0,  -417,     0,   -95,   728,     0,  -417,  -417,  -417,
       0,     0,     0,  -417,  -417,  -417,   417,  -417,     0,  -417,
    -417,  -417,  -417,     0,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
     418,  -417,  -417,     0,  -417,  -417,     0,     0,     0,  -714,
     344,     0,     0,     0,     0,     0,     0,     0,  -714,  -714,
    -714,  -714,  -714,   103,  -714,  -714,     0,  -714,  -714,  -714,
       0,     0,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,     0,  -714,     0,  -714,     0,  -714,  -714,  -714,
    -714,     0,   110,     0,  -714,  -714,  -714,  -714,  -714,     0,
    -714,  -714,  -714,     0,     0,     0,  -714,  -714,     0,     0,
       0,  -714,  -714,  -714,  -714,  -714,     0,  -714,     0,  -714,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -714,
    -714,     0,  -714,     0,     0,     0,     0,     0,     0,     0,
       0,  -714,     0,     0,     0,     0,     0,  -714,     0,     0,
       0,  -714,     0,     0,     0,  -714,     0,     0,     0,     0,
    -714,     0,     0,  -714,  -714,     0,     0,     0,  -714,     0,
       0,     0,     0,     0,     0,   672,     0,     0,     0,     0,
       0,     0,     0,     0,  -714,  -714,  -714,  -714,  -714,     0,
    -221,  -714,   -95,  -714,     0,     0,     0,     0,  -714,     0,
       0,     0,  -714,  -714,     0,  -714,  -714,   729,  -714,     0,
       0,     0,  -714,  -714,     0,  -221,     0,  -221,     0,     0,
    -221,     0,     0,     0,  -714,     0,  -714,     0,     0,  -221,
       0,  -714,   730,     0,   731,     0,     0,   732,     0,     0,
       0,     0,  1022,     0,     0,  -714,   -95,  -714,  -714,  -714,
    -714,     0,  -714,     0,  -714,  -714,  -714,     0,     0,  -714,
       0,     0,  -714,  -714,  -714,  -714,  -714,     0,  -714,     0,
       0,  -714,     0,     0,     0,     0,  -714,     0,     0,     0,
    -714,  -714,     0,     0,     0,  -714,     0,  -714,     0,  -714,
       0,     0,  -714,     0,  -221,     0,  -714,  -714,  -221,  -714,
    -221,  -714,     0,  -221,  -714,  -221,     0,  -714,     0,     0,
     632,   -95,     0,  -714,  -714,   -95,     0,   -95,     0,     0,
     734,  -714,   -95,     0,     0,     0,     0,  -714,  -714,  -714,
       0,  -714,     0,     0,     0,  -714,  -844,     0,     0,     0,
    1410,  -714,  -714,     0,     0,  -714,     0,  -844,  -844,  -844,
    -844,     0,     0,  -714,     0,     0,     0,     0,  -714,  -714,
    -714,  -844,     0,     0,  -714,   345,  -714,  -714,  -714,     0,
    -714,  -714,  -714,  -714,     0,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -844,  -714,  -714,     0,  -714,  -714,  -715,   351,     0,
       0,     0,     0,     0,     0,     0,  -715,  -715,  -715,  -715,
    -715,     0,  -715,  -715,     0,  -715,  -715,  -715,     0,     0,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
       0,  -715,     0,  -715,     0,  -715,  -715,  -715,  -715,     0,
       0,     0,  -715,  -715,  -715,  -715,  -715,     0,  -715,  -715,
    -715,     0,     0,     0,  -715,  -715,     0,     0,     0,  -715,
    -715,  -715,  -715,  -715,     0,  -715,     0,  -715,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -715,  -715,     0,
    -715,     0,     0,     0,     0,     0,     0,     0,     0,  -715,
       0,     0,     0,     0,     0,  -715,     0,     0,     0,  -715,
       0,     0,     0,  -715,     0,     0,    21,     0,  -715,     0,
       0,  -715,  -715,     0,     0,     0,  -715,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,  1401,
       0,    39,  -715,  -715,  -715,  -715,  -715,     0,     0,  -715,
       0,  -715,     0,     0,     0,     0,  -715,     0,     0,     0,
    -715,  -715,     0,  -715,  -715,    21,  -715,     0,     0,     0,
    -715,  -715,     0,     0,     0,     0,    29,    30,    31,    32,
       0,    51,  -715,     0,  -715,     0,     0,     0,     0,  -715,
      39,  -844,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,  -715,     0,  -715,  -715,  -715,  -715,     0,
    -715,     0,  -715,  -715,  -715,     0,     0,  -715,     0,     0,
    -715,  -715,  -715,  -715,  -715,     0,  -715,     0,     0,  -715,
      51,     0,     0,     0,  -715,     0,     0,     0,  -715,  -715,
       0,     0,     0,  -715,     0,  -715,     0,  -715,     0,    55,
    -715,     0,     0,     0,  -715,  -715,     0,  -715,     0,  -715,
       0,     0,  -715,     0,     0,  -715,    74,     0,   635,     0,
       0,  -715,  -715,     0,     0,     0,     0,     0,     0,  -715,
       0,     0,     0,     0,     0,  -715,  -715,  -715,     0,  -715,
       0,     0,     0,  -715,  -609,     0,     0,     0,     0,  -715,
    -715,     0,     0,  -715,     0,  -609,  -609,  -609,  -609,     0,
       0,  -715,     0,     0,     0,    74,  -715,  -715,  -715,  -609,
       0,     0,  -715,   352,  -715,  -715,  -715,     0,  -715,  -715,
    -715,  -715,     0,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -609,
    -715,  -715,     0,  -715,  -715,  -559,   363,     0,     0,     0,
       0,   103,     0,     0,  -559,  -559,  -559,  -559,  -559,     0,
    -559,  -559,     0,  -559,  -559,  -559,     0,     0,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,     0,  -559,
     110,  -559,     0,  -559,  -559,  -559,  -559,     0,     0,     0,
    -559,  -559,  -559,  -559,  -559,     0,  -559,  -559,  -559,     0,
     103,     0,  -559,  -559,     0,     0,     0,  -559,  -559,  -559,
    -559,  -559,     0,  -559,     0,  -559,   436,     0,     0,     0,
       0,     0,     0,     0,     0,  -559,  -559,     0,  -559,   110,
       0,     0,     0,     0,     0,     0,     0,  -559,     0,   673,
       0,     0,     0,  -559,     0,     0,     0,  -559,     0,   437,
       0,  -559,     0,     0,     0,     0,  -559,     0,     0,  -559,
    -559,     0,     0,     0,  -559,  -593,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -593,  -593,  -593,  -593,
    -559,  -559,  -559,  -559,  -559,     0,     0,  -559,     0,  -559,
    -593,     0,     0,     0,  -559,     0,     0,     0,  -559,  -559,
       0,  -559,  -559,     0,  -559,     0,     0,     0,  -559,  -559,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -559,   440,  -559,     0,     0,     0,     0,  -559,     0,  -609,
    -593,   674,     0,     0,     0,     0,     0,     0,   441,     0,
       0,  -559,     0,  -559,  -559,  -559,  -559,     0,  -559,     0,
    -559,  -559,  -559,     0,     0,  -559,     0,  -594,  -559,  -559,
    -559,  -559,  -559,     0,  -559,   442,     0,  -559,  -594,  -594,
    -594,  -594,  -559,   443,     0,     0,  -559,  -559,     0,     0,
       0,  -559,  -594,  -559,   444,  -559,     0,     0,  -559,     0,
     445,     0,  -559,  -559,     0,  -559,     0,  -559,     0,     0,
    -559,     0,     0,  -559,   446,     0,   678,     0,     0,  -559,
    -559,     0,     0,     0,     0,     0,     0,  -559,     0,     0,
       0,     0,  -594,  -559,  -559,  -559,     0,  -559,     0,     0,
       0,  -559,  -595,     0,     0,     0,     0,  -559,  -559,     0,
       0,  -559,     0,  -595,  -595,  -595,  -595,     0,     0,  -559,
       0,     0,     0,     0,  -559,  -559,  -559,  -595,     0,     0,
    -559,  -559,  -559,     0,  -559,     0,  -559,  -559,  -559,  -559,
       0,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,  -559,  -559,  -595,  -559,  -559,
       0,  -559,  -559,  -311,   652,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
    -593,    14,    15,    16,   436,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,   685,    38,    39,    40,   437,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,  -613,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
    -613,  -613,  -613,  -613,     0,    51,     0,     0,  -107,   728,
       0,    52,     0,     0,  -613,    53,     0,     0,     0,    54,
       0,     0,  -594,     0,    55,   594,     0,    56,    57,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,   440,
       0,     0,   686,     0,     0,   436,     0,   687,    59,    60,
      61,    62,    63,     0,  -613,    64,   441,    65,     0,     0,
       0,     0,    66,     0,     0,     0,     0,    67,  -615,    68,
      69,     0,    70,  -617,     0,     0,    71,    72,   437,  -615,
    -615,  -615,  -615,   442,  -617,  -617,  -617,  -617,    73,     0,
      74,   443,     0,  -615,     0,    75,     0,  -595,  -617,     0,
       0,     0,   444,     0,     0,     0,     0,     0,   445,    76,
       0,  -311,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,   446,    83,     0,     0,  -311,    84,    85,    86,
      87,     0,    88,  -615,     0,    89,   690,     0,  -617,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
     440,  -311,     0,  -311,     0,     0,  -311,     0,     0,     0,
      92,    93,  -607,    94,     0,  -311,     0,   441,    95,     0,
       0,    96,     0,  -607,  -607,  -607,  -607,    97,    98,     0,
     -53,   728,     0,     0,     0,    99,     0,  -607,     0,     0,
       0,   100,   101,   102,   442,   103,     0,  -483,   728,   104,
       0,     0,   443,     0,     0,   105,  -107,     0,     0,   106,
     595,     0,     0,   444,     0,     0,     0,   107,     0,   445,
       0,   729,   108,   109,   110,     0,     0,  -607,     0,     0,
    -311,     0,     0,   446,  -311,   111,  -311,   112,     0,  -311,
       0,  -311,     0,     0,  -613,     0,   730,   113,   731,     0,
       0,   732,  -241,   528,   114,   115,   116,   117,   118,     0,
    -107,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,  -615,     0,  -107,     0,     0,  -617,  -107,
       0,  -107,    48,    49,   734,    50,  -107,     0,     0,     0,
       0,   438,   439,     0,    51,     0,     0,  -487,   728,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,   -53,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,   729,    64,  -483,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
     729,    70,     0,     0,     0,    71,    72,  -607,   730,     0,
     731,     0,     0,   732,     0,     0,     0,    73,     0,    74,
       0,     0,   -53,     0,    75,   730,     0,   731,   529,     0,
     732,     0,     0,     0,     0,     0,     0,     0,    76,  -483,
    -241,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,    83,     0,     0,  -241,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
    -241,     0,  -241,     0,     0,  -241,     0,   -53,     0,    92,
      93,   -53,    94,   -53,  -241,     0,   -53,    95,   -53,     0,
      96,     0,     0,     0,  -483,     0,    97,    98,  -483,     0,
    -483,     0,     0,   734,    99,  -483,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,  -485,   728,   104,     0,
       0,     0,     0,     0,   105,  -487,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
     729,   108,   109,   110,     0,     0,     0,     0,     0,  -241,
       0,     0,     0,  -241,   111,  -241,   112,     0,  -241,     0,
    -241,     0,     0,     0,     0,   730,   113,   731,     0,     0,
     732,   -24,   628,   114,   115,   116,   117,   118,     0,  -487,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,   700,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,  -487,     0,     0,  -601,  -487,     0,
    -487,    48,    49,   734,    50,  -487,     0,     0,  -601,  -601,
    -601,  -601,     0,    51,     0,     0,  -462,   728,     0,    52,
       0,     0,  -601,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,   464,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     797,     0,     0,   436,     0,     0,    59,    60,    61,    62,
      63,     0,  -601,    64,  -485,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,    21,    68,    69,   729,
      70,     0,     0,     0,    71,    72,   437,    29,    30,    31,
      32,     0,     0,     0,     0,     0,    73,     0,    74,     0,
       0,    39,     0,    75,   730,     0,   731,   629,     0,   732,
       0,     0,     0,     0,     0,     0,     0,    76,  -485,   -24,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
       0,    83,     0,     0,   -24,    84,    85,    86,    87,     0,
      88,    51,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,   440,   -24,
       0,   -24,     0,     0,   -24,     0,     0,     0,    92,    93,
     630,    94,     0,   -24,     0,   441,    95,     0,     0,    96,
       0,     0,     0,  -485,     0,    97,    98,  -485,     0,  -485,
       0,     0,   734,    99,  -485,     0,     0,     0,     0,   100,
     101,   102,   442,   103,     0,  -464,   728,   104,     0,     0,
     443,     0,     0,   105,  -462,     0,     0,   106,     0,     0,
       0,   444,     0,     0,     0,   107,     0,   445,     0,   729,
     108,   109,   110,     0,     0,     0,     0,     0,   -24,     0,
       0,   446,   -24,   111,   -24,   112,     0,   -24,     0,   -24,
       0,     0,  -601,     0,   730,   113,   731,     0,     0,   732,
    -239,   675,   114,   115,   116,   117,   118,     0,  -462,     7,
       8,     9,    10,    11,     0,    12,    13,   119,    14,    15,
      16,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,     0,    28,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
      47,   103,     0,  -462,     0,     0,     0,  -462,     0,  -462,
      48,    49,   734,    50,  -462,     0,     0,     0,     0,   438,
     439,     0,    51,     0,     0,  -845,   728,     0,    52,     0,
       0,     0,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    55,     0,     0,    56,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    64,  -464,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,    68,    69,   729,    70,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    74,     0,     0,
       0,     0,    75,   730,     0,   731,     0,     0,   732,     0,
       0,     0,     0,     0,     0,     0,    76,  -464,  -239,     0,
      77,    78,     0,    79,     0,    80,    81,    82,     0,     0,
      83,     0,     0,  -239,    84,    85,    86,    87,     0,    88,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,   518,  -239,     0,
    -239,     0,     0,  -239,     0,     0,     0,    92,    93,   519,
      94,     0,  -239,     0,     0,    95,     0,     0,    96,     0,
       0,     0,  -464,     0,    97,    98,  -464,   520,  -464,     0,
       0,   734,    99,  -464,    29,    30,    31,    32,   100,   101,
     102,     0,   103,     0,   -50,   728,   104,     0,    39,     0,
       0,     0,   105,  -845,     0,     0,   106,     0,     0,     0,
       0,   521,     0,     0,   107,     0,     0,     0,   729,   108,
     109,   110,     0,     0,     0,     0,     0,  -239,     0,     0,
       0,  -239,   111,  -239,   112,     0,  -239,     0,  -239,     0,
       0,     0,     0,   730,   113,   731,     0,     0,   732,  -115,
     581,   114,   115,   116,   117,   118,     0,  -845,     7,     8,
       9,    10,    11,   582,    12,    13,   119,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,   522,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,  -845,   523,     0,     0,  -845,     0,  -845,    48,
      49,   734,    50,  -845,     0,   524,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,   516,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,   537,     0,    56,    57,     0,     0,     0,    58,   436,
       0,     0,     0,   525,     0,     0,     0,     0,     0,     0,
       0,   436,   526,     0,    59,    60,    61,    62,    63,     0,
       0,    64,   -50,    65,     0,     0,     0,     0,    66,     0,
       0,     0,   437,    67,     0,    68,    69,   729,    70,     0,
       0,     0,    71,    72,   437,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,   730,     0,   731,     0,     0,   732,     0,     0,
       0,     0,     0,     0,     0,    76,   -50,  -115,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,  -115,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,   440,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,   440,  -115,     0,  -115,
       0,   441,  -115,     0,     0,     0,    92,    93,     0,    94,
       0,  -115,     0,   441,    95,     0,     0,    96,     0,     0,
       0,   -50,     0,    97,    98,   -50,     0,   -50,   442,     0,
     -50,    99,   -50,     0,     0,     0,   443,   100,   101,   102,
     442,   103,     0,     0,     0,   104,     0,   444,   443,     0,
       0,   105,     0,   445,     0,   106,     0,     0,     0,   444,
       0,     0,   611,   107,     0,   445,     0,   446,   108,   109,
     110,     0,     0,     0,   612,     0,  -115,     0,     0,   446,
    -115,   111,  -115,   112,     0,  -115,     0,  -115,     0,     0,
       0,     0,   613,   113,     0,     0,     0,     0,  -118,   587,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,   588,    12,    13,   119,    14,    15,    16,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,   614,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,   545,     0,     0,     0,     0,    52,     0,   561,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,   436,    56,    57,     0,     0,     0,    58,   436,     0,
     615,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,   616,     0,
      64,     0,    65,     0,   437,     0,     0,    66,   617,     0,
     618,   437,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,   619,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,  -118,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,     0,    83,     0,
       0,  -118,    84,    85,    86,    87,   440,    88,     0,     0,
      89,     0,     0,   440,     0,   620,   621,     0,     0,    90,
      91,     0,     0,   441,     0,     0,  -118,     0,  -118,     0,
     441,  -118,     0,     0,     0,    92,    93,     0,    94,     0,
    -118,     0,     0,    95,     0,     0,    96,     0,     0,     0,
     442,     0,    97,    98,     0,     0,     0,   442,   443,     0,
      99,     0,     0,     0,     0,   443,   100,   101,   102,   444,
     103,     0,     0,     0,   104,   445,   444,     0,     0,     0,
     105,     0,   445,     0,   106,     0,     0,     0,     0,   446,
       0,  1399,   107,     0,     0,     0,   446,   108,   109,   110,
       0,     0,     0,  1356,     0,  -118,     0,     0,     0,  -118,
     111,  -118,   112,     0,  -118,     0,  -118,     0,     0,     0,
       0,  1357,   113,     0,     0,     0,     0,   -27,   660,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,  1358,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
     563,     0,     0,     0,     0,    52,     0,   597,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
     436,    56,    57,     0,     0,     0,    58,   436,     0,  1359,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,  1360,     0,    64,
       0,    65,     0,   437,     0,     0,    66,  1361,     0,  1362,
     437,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
    1363,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,   -27,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,     0,    83,     0,     0,
     -27,    84,    85,    86,    87,   440,    88,     0,     0,    89,
       0,     0,   440,     0,  1364,  1365,     0,     0,    90,    91,
       0,     0,   441,     0,     0,   -27,     0,   -27,     0,   441,
     -27,     0,     0,     0,    92,    93,   661,    94,     0,   -27,
       0,     0,    95,     0,     0,    96,     0,     0,     0,   442,
       0,    97,    98,     0,     0,     0,   442,   443,     0,    99,
       0,     0,     0,     0,   443,   100,   101,   102,   444,   103,
       0,     0,     0,   104,   445,   444,     0,     0,     0,   105,
       0,   445,     0,   106,     0,     0,     0,     0,   446,     0,
       0,   107,     0,     0,     0,   446,   108,   109,   110,     0,
       0,     0,  1356,     0,   -27,     0,     0,     0,   -27,   111,
     -27,   112,     0,   -27,     0,   -27,     0,     0,     0,     0,
    1357,   113,     0,     0,     0,     0,  -169,   470,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,     0,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
    1358,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,   599,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,   601,     0,
      56,    57,     0,     0,     0,    58,   436,     0,  1359,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   436,     0,
       0,    59,    60,    61,    62,    63,  1360,     0,    64,     0,
      65,     0,     0,     0,     0,    66,  1361,     0,  1362,   437,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,   437,     0,     0,     0,     0,     0,     0,     0,  1363,
       0,    73,     0,    74,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,  -169,   810,    77,    78,     0,    79,
       0,    80,    81,    82,     0,     0,    83,     0,     0,  -169,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,   440,     0,  1364,  1365,     0,     0,    90,    91,     0,
     811,     0,     0,   440,  -169,     0,  -169,     0,   441,  -169,
       0,     0,     0,    92,    93,     0,    94,     0,  -169,     0,
     441,    95,     0,     0,    96,     0,   812,     0,   813,     0,
      97,    98,     0,     0,     0,   442,     0,     0,    99,     0,
       0,     0,     0,   443,   100,   101,   102,   442,   103,     0,
       0,     0,   104,     0,   444,   443,     0,     0,   105,     0,
     445,     0,   106,     0,     0,     0,   444,     0,     0,     0,
     107,     0,   445,     0,   446,   108,   109,   110,     0,     0,
       0,     0,     0,  -169,     0,     0,   446,  -169,   111,  -169,
     112,     0,  -169,     0,  -169,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,   -89,   506,   114,   115,   116,
     117,   118,     0,     0,     7,     8,     9,    10,    11,     0,
      12,    13,   119,    14,    15,    16,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,    28,     0,    29,    30,    31,    32,   814,   815,   816,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    44,    45,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,   817,   818,   819,    48,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    51,   626,     0,
       0,     0,     0,    52,     0,   820,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,    55,     0,   436,    56,
      57,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    64,     0,    65,
       0,   437,     0,     0,    66,     0,     0,     0,     0,    67,
       0,    68,    69,     0,    70,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,   -89,     0,    77,    78,     0,    79,     0,
      80,    81,    82,     0,     0,    83,     0,     0,   -89,    84,
      85,    86,    87,   440,    88,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
     441,     0,     0,   -89,     0,   -89,     0,     0,   -89,     0,
       0,     0,    92,    93,     0,    94,     0,   -89,     0,     0,
      95,     0,     0,    96,     0,     0,     0,   442,     0,    97,
      98,     0,     0,     0,     0,   443,     0,    99,     0,   703,
       0,     0,     0,   100,   101,   102,   444,   103,     0,     0,
       0,   104,   445,     0,     0,     0,     0,   105,     0,   436,
       0,   106,     0,     0,     0,     0,   446,     0,     0,   107,
       0,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,   -89,     0,     0,     0,   -89,   111,   -89,   112,
       0,   -89,   437,   -89,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,  -190,   510,   114,   115,   116,   117,
     118,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,   119,    14,    15,    16,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,   440,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,   441,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,   897,     0,     0,
       0,     0,    52,     0,  1004,     0,    53,     0,   442,     0,
      54,     0,     0,     0,     0,    55,   443,   436,    56,    57,
       0,     0,     0,    58,   436,     0,     0,   444,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,   446,    65,     0,
     437,     0,     0,    66,     0,     0,     0,   437,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,  -190,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,     0,    83,     0,     0,  -190,    84,    85,
      86,    87,   440,    88,     0,     0,    89,     0,     0,   440,
       0,     0,     0,     0,     0,    90,    91,     0,     0,   441,
       0,     0,  -190,     0,  -190,     0,   441,  -190,     0,     0,
       0,    92,    93,     0,    94,     0,  -190,     0,     0,    95,
       0,     0,    96,     0,     0,     0,   442,     0,    97,    98,
       0,     0,     0,   442,   443,     0,    99,     0,     0,     0,
       0,   443,   100,   101,   102,   444,   103,     0,     0,     0,
     104,   445,   444,     0,     0,     0,   105,     0,   445,     0,
     106,     0,     0,     0,     0,   446,     0,     0,   107,     0,
       0,     0,   446,   108,   109,   110,     0,     0,     0,     0,
       0,  -190,     0,     0,     0,  -190,   111,  -190,   112,     0,
    -190,     0,  -190,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,  -151,   579,   114,   115,   116,   117,   118,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
     119,    14,    15,    16,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    51,  1006,     0,     0,     0,
       0,    52,     0,  1008,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,    55,     0,   436,    56,    57,     0,
       0,     0,    58,   436,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    64,     0,    65,     0,   437,
       0,     0,    66,     0,     0,     0,   437,    67,     0,    68,
      69,     0,    70,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,  -151,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,     0,    83,     0,     0,  -151,    84,    85,    86,
      87,   440,    88,     0,     0,    89,     0,     0,   440,     0,
       0,     0,     0,     0,    90,    91,     0,     0,   441,     0,
       0,  -151,     0,  -151,     0,   441,  -151,     0,     0,     0,
      92,    93,     0,    94,     0,  -151,     0,     0,    95,     0,
       0,    96,     0,     0,     0,   442,     0,    97,    98,     0,
       0,     0,   442,   443,     0,    99,     0,     0,     0,     0,
     443,   100,   101,   102,   444,   103,     0,     0,     0,   104,
     445,   444,     0,     0,     0,   105,     0,   445,     0,   106,
       0,     0,     0,     0,   446,     0,     0,   107,     0,     0,
       0,   446,   108,   109,   110,     0,     0,     0,     0,     0,
    -151,     0,     0,     0,  -151,   111,  -151,   112,     0,  -151,
       0,  -151,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,   -80,   592,   114,   115,   116,   117,   118,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,  1010,     0,     0,     0,     0,
      52,     0,  1012,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,   436,    56,    57,     0,     0,
       0,    58,   436,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,     0,    65,     0,   437,     0,
       0,    66,     0,     0,     0,   437,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
     -80,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,    83,     0,     0,   -80,    84,    85,    86,    87,
     440,    88,     0,     0,    89,     0,     0,   440,     0,     0,
       0,     0,     0,    90,    91,     0,     0,   441,     0,     0,
     -80,     0,   -80,     0,   441,   -80,     0,     0,     0,    92,
      93,     0,    94,     0,   -80,     0,     0,    95,     0,     0,
      96,     0,     0,     0,   442,     0,    97,    98,     0,     0,
       0,   442,   443,     0,    99,     0,     0,     0,     0,   443,
     100,   101,   102,   444,   103,     0,     0,     0,   104,   445,
     444,     0,     0,     0,   105,     0,   445,     0,   106,     0,
       0,     0,     0,   446,     0,     0,   107,     0,     0,     0,
     446,   108,   109,   110,     0,     0,     0,     0,     0,   -80,
       0,     0,     0,   -80,   111,   -80,   112,     0,   -80,     0,
     -80,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,  -172,   681,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,     0,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,  -172,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
       0,    83,     0,     0,  -172,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,  -172,
       0,  -172,     0,     0,  -172,     0,     0,     0,    92,    93,
       0,    94,     0,  -172,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,  -172,     0,
       0,     0,  -172,   111,  -172,   112,     0,  -172,     0,  -172,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
     -39,   735,   114,   115,   116,   117,   118,     0,     0,     7,
       8,     9,    10,    11,     0,    12,    13,   119,    14,    15,
      16,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,     0,    28,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    55,     0,     0,    56,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    64,     0,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    74,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,   -39,     0,
      77,    78,     0,    79,     0,    80,    81,    82,     0,     0,
      83,     0,     0,   -39,    84,    85,    86,    87,     0,    88,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,     0,   -39,     0,
     -39,     0,     0,   -39,     0,     0,     0,    92,    93,     0,
      94,     0,   -39,     0,     0,    95,     0,     0,    96,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,   108,
     109,   110,     0,     0,     0,     0,     0,   -39,     0,     0,
       0,   -39,   111,   -39,   112,     0,   -39,     0,   -39,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,  -114,
     750,   114,   115,   116,   117,   118,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,   119,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,  -114,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,  -114,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,  -114,     0,  -114,
       0,     0,  -114,     0,     0,     0,    92,    93,     0,    94,
       0,  -114,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,  -114,     0,     0,     0,
    -114,   111,  -114,   112,     0,  -114,     0,  -114,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,   -24,   628,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,     0,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,   -24,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,     0,    83,     0,
       0,   -24,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,   -24,     0,   -24,     0,
       0,   -24,     0,     0,     0,    92,    93,     0,    94,     0,
     -24,     0,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,   -24,     0,     0,     0,   -24,
     111,   -24,   112,     0,   -24,     0,   -24,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,   -27,   660,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
       0,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,   -27,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,     0,    83,     0,     0,
     -27,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,   -27,     0,   -27,     0,     0,
     -27,     0,     0,     0,    92,    93,     0,    94,     0,   -27,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,   -27,     0,     0,     0,   -27,   111,
     -27,   112,     0,   -27,     0,   -27,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,   114,   115,
     116,   117,   118,     0,     0,     0,   766,     0,     0,     0,
    -453,     0,     0,   119,     7,     8,     9,    10,    11,     0,
      12,    13,     0,    14,    15,    16,   436,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,  -453,    27,
    -453,    28,     0,    29,    30,    31,    32,  -453,  -453,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,   437,
    -453,     0,    41,    42,  -453,     0,  -453,    43,    44,    45,
       0,    46,  -453,     0,  -453,    47,  -453,  -453,  -453,  -453,
    -453,     0,  -453,  -453,  -453,    48,    49,  -453,    50,  -453,
    -453,  -453,  -453,  -453,     0,     0,     0,    51,  -453,  -453,
    -453,  -453,  -453,    52,  -453,  -453,  -453,    53,     0,  -453,
       0,    54,  -453,     0,  -453,  -453,    55,  -453,  -453,    56,
      57,  -453,  -453,  -453,    58,  -453,  -453,     0,  -453,  -453,
    -453,   440,     0,  -453,     0,  -453,  -453,     0,     0,  -453,
      59,    60,    61,    62,    63,  -453,  -453,    64,   441,    65,
       0,  -453,  -453,     0,    66,     0,  -453,  -453,     0,    67,
       0,    68,    69,  -453,    70,  -453,  -453,  -453,    71,    72,
    -453,  -453,  -453,  -453,  -453,   442,  -453,  -453,  -453,  -453,
      73,  -453,    74,   443,  -453,  -453,  -453,    75,     0,     0,
       0,     0,  -453,  -453,   444,  -453,  -453,  -453,     0,  -453,
     445,    76,  -453,  -453,  -453,    77,    78,     0,    79,  -453,
      80,    81,    82,     0,   446,    83,     0,     0,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,     0,     0,
    -453,  -453,     0,  -453,  -453,  -453,    90,    91,  -453,  -453,
    -453,     0,  -453,     0,  -453,     0,     0,  -453,     0,  -453,
       0,  -453,    92,    93,     0,    94,     0,     0,     0,     0,
      95,  -453,  -453,    96,  -453,  -453,  -453,  -453,  -453,    97,
      98,  -453,  -453,  -453,  -453,  -453,     0,    99,  -453,  -453,
    -453,  -453,  -453,   100,   101,   102,  -453,   103,  -453,  -453,
    -453,   104,  -453,  -453,  -453,  -453,  -453,   105,     0,     0,
       0,   106,  -453,  -453,  -453,  -453,  -453,  -453,  -453,   107,
       0,     0,     0,  -453,   108,   109,   110,     0,  -453,  -453,
       0,     0,     0,     0,     0,   767,     0,   111,     0,   112,
       0,     0,     0,  -453,     0,  -453,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,   114,   115,   116,   117,
     118,     0,     0,     0,   901,     0,     0,     0,  -440,     0,
       0,   119,  -440,  -440,  -440,  -440,  -440,     0,  -440,  -440,
       0,  -440,  -440,  -440,  -440,     0,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
       0,  -440,  -440,  -440,  -440,  -440,  -440,     0,  -440,  -440,
    -440,  -440,  -440,     0,  -440,  -440,  -440,  -440,  -440,     0,
    -440,  -440,  -440,     0,  -440,  -440,  -440,  -440,     0,  -440,
    -440,     0,  -440,  -440,  -440,  -440,  -440,  -440,  -440,     0,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,     0,     0,     0,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,     0,  -440,     0,  -440,
    -440,     0,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,     0,  -440,  -440,  -440,  -440,
       0,  -440,     0,  -440,  -440,     0,     0,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,     0,  -440,
    -440,     0,  -440,     0,  -440,  -440,     0,  -440,     0,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,     0,     0,     0,     0,
    -440,  -440,  -440,  -440,  -440,  -440,     0,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,     0,  -440,  -440,  -440,  -440,
    -440,     0,  -440,  -440,     0,     0,     0,  -440,  -440,  -440,
    -440,     0,  -440,     0,     0,  -440,     0,     0,  -440,  -440,
       0,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,     0,
    -440,     0,  -440,     0,     0,  -440,     0,  -440,     0,  -440,
    -440,  -440,     0,  -440,     0,     0,     0,     0,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,     0,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,     0,     0,     0,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,     0,     0,
       0,  -440,  -440,  -440,  -440,     0,  -440,  -440,     0,     0,
       0,     0,     0,  -440,     0,  -440,     0,  -440,     0,   -32,
     132,  -440,     0,  -440,   133,   134,     0,  -440,     0,     0,
       0,     0,   135,     0,  -440,  -440,  -440,  -440,  -440,     0,
       0,   136,     0,     0,     0,     0,    21,     0,     0,  -440,
     137,     0,   138,     0,   139,     0,     0,    29,    30,    31,
      32,   140,   141,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,   142,     0,     0,     0,   143,     0,
     144,     0,     0,     0,     0,     0,   145,     0,   146,     0,
     147,   148,   149,   150,   151,     0,   152,   153,   154,     0,
     155,   156,     0,   157,   158,   159,   160,   161,     0,     0,
     162,    51,   163,   164,   165,   166,   167,   168,   169,   170,
     171,     0,     0,   172,     0,   173,   174,     0,   175,   176,
      55,   177,   178,     0,     0,   179,   180,   181,     0,   182,
     183,   184,   185,   186,   187,     0,     0,   188,   189,   190,
     191,     0,     0,   192,     0,     0,     0,     0,     0,   193,
     194,     0,     0,     0,     0,   195,   196,   197,   198,     0,
     199,   200,     0,     0,   201,     0,     0,   202,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,   212,     0,
     213,   214,   215,   216,     0,   217,   218,     0,   219,   220,
     221,     0,     0,     0,     0,     0,   222,   223,   224,   225,
     226,   227,     0,   228,     0,     0,   229,   230,   231,     0,
       0,     0,     0,   232,     0,     0,     0,   233,   234,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,   236,   237,     0,   238,   239,   240,
       0,   241,   242,   243,   244,     0,   245,     0,   246,     0,
       0,   247,     0,   248,     0,   249,     0,     0,     0,     0,
       0,   -32,     0,     0,   250,   251,   252,     0,   253,   254,
     255,   256,   257,     0,     0,   258,   259,   260,   261,   262,
       0,     0,   263,   264,   265,   266,   267,     0,     0,     0,
     268,   269,   270,   271,   272,     0,   273,   274,   275,   276,
     277,     0,     0,     0,     0,     0,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,     0,     0,
     110,     0,   290,   291,     0,     0,   292,     0,     0,   293,
     -32,     0,   777,     0,     0,     0,     0,   294,     0,   295,
       7,     8,     9,    10,    11,     0,    12,    13,     0,    14,
      15,    16,   436,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   296,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,   437,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,   778,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,   441,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,   779,
      70,     0,     0,   780,    71,    72,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,    73,     0,    74,   443,
       0,     0,     0,    75,     0,     0,     0,     0,   781,     0,
     444,     0,     0,     0,     0,     0,   445,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
     446,   782,     0,     0,     0,    84,    85,    86,    87,   400,
      88,   401,   402,    89,   403,   404,   405,   406,   407,   408,
     783,   784,    90,    91,     0,   409,   410,   411,   412,   413,
     414,     0,   415,   416,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,   785,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,   402,     0,   403,   404,   405,   406,   407,
     408,     0,     0,   111,     0,   112,   409,   410,   411,   412,
     413,   414,     0,   415,   416,   113,     0,     0,     0,     0,
       0,   902,   114,   115,   116,   117,   118,     0,     0,  -316,
    -316,  -316,  -316,  -316,     0,  -316,  -316,   119,  -316,  -316,
    -316,  -316,     0,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,     0,  -316,     0,  -316,     0,  -316,  -316,
    -316,  -316,     0,     0,     0,  -316,  -316,  -316,  -316,  -316,
       0,  -316,  -316,  -316,  -316,     0,     0,  -316,  -316,     0,
       0,     0,  -316,  -316,  -316,     0,  -316,     0,     0,     0,
    -316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -316,  -316,     0,  -316,     0,     0,     0,     0,     0,     0,
       0,     0,  -316,     0,     0,     0,     0,     0,  -316,     0,
       0,     0,  -316,     0,     0,     0,  -316,     0,     0,     0,
       0,  -316,     0,     0,  -316,  -316,     0,     0,     0,  -316,
       0,     0,     0,     0,     0,     0,  -316,     0,     0,     0,
       0,     0,     0,     0,     0,  -316,  -316,  -316,  -316,  -316,
       0,     0,  -316,  -316,  -316,     0,     0,     0,     0,  -316,
       0,     0,     0,     0,  -316,     0,  -316,  -316,     0,  -316,
       0,     0,     0,  -316,  -316,     0,     0,     0,     0,     0,
    -316,     0,     0,     0,     0,  -316,     0,  -316,  -316,     0,
       0,     0,  -316,     0,     0,     0,     0,     0,     0,  -316,
       0,     0,     0,     0,     0,  -316,  -316,     0,     0,     0,
    -316,  -316,     0,  -316,     0,  -316,  -316,  -316,     0,  -316,
    -316,     0,     0,     0,  -316,  -316,  -316,  -316,     0,  -316,
       0,     0,  -316,     0,     0,     0,     0,     0,     0,     0,
       0,  -316,  -316,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -316,  -316,     0,
    -316,     0,     0,     0,     0,  -316,     0,     0,  -316,     0,
       0,     0,     0,     0,  -316,  -316,     0,     0,     0,     0,
       0,     0,  -316,     0,     0,     0,     0,     0,  -316,  -316,
    -316,     0,  -316,     0,     0,     0,  -316,     0,     0,     0,
       0,     0,  -316,     0,     0,     0,  -316,     0,     0,     0,
       0,     0,     0,     0,  -316,     0,     0,     0,     0,  -316,
    -316,  -316,     0,     0,     0,     0,     0,     0,     0,     0,
    -316,     0,  -316,     0,  -316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -316,     0,     0,     0,     0,     0,
     657,  -316,  -316,  -316,  -316,  -316,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,  -316,    14,    15,    16,
     436,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,   437,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,   440,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,   441,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,    73,     0,    74,   443,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,   444,     0,
       0,     0,     0,     0,   445,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,   446,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,   668,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,   436,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,   437,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,   440,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,   441,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,    73,     0,    74,   443,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,   444,     0,     0,
       0,     0,     0,   445,    76,     0,     0,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,   446,    83,     0,
       0,     0,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,    94,     0,
       0,     0,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,   711,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,   436,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,   437,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,   440,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
     441,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,    73,     0,    74,   443,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
       0,     0,   445,    76,     0,     0,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,   446,    83,     0,     0,
       0,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,    94,     0,     0,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,   714,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,   436,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,     0,    38,    39,    40,
     437,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,     0,     0,
      56,    57,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,   440,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    64,   441,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,    73,     0,    74,   443,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,   444,     0,     0,     0,     0,
       0,   445,    76,     0,     0,     0,    77,    78,     0,    79,
       0,    80,    81,    82,     0,   446,    83,     0,     0,     0,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,     0,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,  1040,   114,   115,   116,
     117,   118,     0,     0,     7,     8,     9,    10,    11,     0,
      12,    13,   119,    14,    15,    16,   436,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,    28,     0,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,   437,
       0,     0,    41,    42,     0,     0,     0,    43,    44,    45,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,    55,     0,     0,    56,
      57,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,   440,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    64,   441,    65,
       0,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,    68,    69,     0,    70,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,   442,     0,     0,     0,     0,
      73,     0,    74,   443,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,   444,     0,     0,     0,     0,     0,
     445,    76,     0,     0,     0,    77,    78,     0,    79,     0,
      80,    81,    82,     0,   446,    83,     0,     0,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,     0,    94,     0,     0,     0,     0,
      95,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   105,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,  1042,   114,   115,   116,   117,
     118,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,   119,    14,    15,    16,   436,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,   437,     0,
       0,    41,    42,     0,     0,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,    55,     0,     0,    56,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
     440,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,   441,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,    73,
       0,    74,   443,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,   444,     0,     0,     0,     0,     0,   445,
      76,     0,     0,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,   446,    83,     0,     0,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,    94,     0,     0,     0,     0,    95,
       0,     0,    96,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,   105,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,  1044,   114,   115,   116,   117,   118,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
     119,    14,    15,    16,   436,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,   437,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,    55,     0,     0,    56,    57,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,   440,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    64,   441,    65,     0,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,    68,
      69,     0,    70,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,    73,     0,
      74,   443,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,   444,     0,     0,     0,     0,     0,   445,    76,
       0,     0,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,   446,    83,     0,     0,     0,    84,    85,    86,
      87,     0,    88,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,    94,     0,     0,     0,     0,    95,     0,
       0,    96,     0,     0,     0,     0,     0,    97,    98,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,  1167,   114,   115,   116,   117,   118,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,   436,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,   437,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,   440,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,   441,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,    73,     0,    74,
     443,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,     0,     0,   445,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,   446,    83,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    94,     0,     0,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,  1266,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,   436,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,   437,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,   441,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,    73,     0,    74,   443,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
     444,     0,     0,     0,     0,     0,   445,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
     446,    83,     0,     0,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,  1268,   114,   115,   116,   117,   118,     0,     0,     7,
       8,     9,    10,    11,     0,    12,    13,   119,    14,    15,
      16,   436,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,     0,    28,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,   437,     0,     0,    41,    42,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    55,     0,     0,    56,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,   440,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    64,   441,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,    73,     0,    74,   443,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,   444,
       0,     0,     0,     0,     0,   445,    76,     0,     0,     0,
      77,    78,     0,    79,     0,    80,    81,    82,     0,   446,
      83,     0,     0,     0,    84,    85,    86,    87,     0,    88,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,     0,
      94,     0,     0,     0,     0,    95,     0,     0,    96,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
     887,   114,   115,   116,   117,   118,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,   119,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   888,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,   889,   890,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,   342,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,     0,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,     0,    83,     0,
       0,     0,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,    94,     0,
       0,     0,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     105,     0,  1158,  1159,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,   558,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
       0,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,   559,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,     0,    83,     0,     0,
       0,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,    94,     0,     0,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,   743,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,     0,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,     0,     0,
      56,    57,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    64,     0,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    74,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    77,    78,     0,    79,
       0,    80,    81,    82,     0,     0,    83,     0,     0,     0,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,     0,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   108,   109,   110,     0,     0,
       0,     0,     0,   744,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,   342,   114,   115,   116,
     117,   118,     0,     0,     7,     8,     9,    10,    11,     0,
      12,    13,   119,    14,    15,    16,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,    28,     0,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    44,    45,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,    55,     0,     0,    56,
      57,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    64,     0,    65,
       0,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,    68,    69,     0,    70,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,    77,    78,     0,    79,     0,
      80,    81,    82,     0,     0,    83,     0,     0,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,     0,    94,     0,     0,     0,     0,
      95,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   105,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,   379,   114,   115,   116,   117,
     118,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,   119,    14,    15,    16,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,    55,     0,     0,    56,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,     0,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,     0,    83,     0,     0,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,    94,     0,     0,     0,     0,    95,
       0,     0,    96,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,   105,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,   381,   114,   115,   116,   117,   118,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
     119,    14,    15,    16,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,    55,     0,     0,    56,    57,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    64,     0,    65,     0,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,    68,
      69,     0,    70,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,     0,    83,     0,     0,     0,    84,    85,    86,
      87,     0,    88,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,    94,     0,     0,     0,     0,    95,     0,
       0,    96,     0,     0,     0,     0,     0,    97,    98,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,   383,   114,   115,   116,   117,   118,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,     0,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,    83,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    94,     0,     0,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,   384,    98,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,   386,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,     0,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
       0,    83,     0,     0,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,   387,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,   389,   114,   115,   116,   117,   118,     0,     0,     7,
       8,     9,    10,    11,     0,    12,    13,   119,    14,    15,
      16,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,     0,    28,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    55,     0,     0,    56,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    64,     0,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    74,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
      77,    78,     0,    79,     0,    80,    81,    82,     0,     0,
      83,     0,     0,     0,    84,    85,    86,    87,     0,    88,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,     0,
      94,     0,     0,     0,     0,    95,     0,     0,    96,     0,
       0,     0,     0,     0,    97,   390,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
     396,   114,   115,   116,   117,   118,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,   119,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,   534,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,     0,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,     0,    83,     0,
       0,     0,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,    94,     0,
       0,     0,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,   539,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
       0,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,     0,    83,     0,     0,
       0,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,    94,     0,     0,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   540,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,   542,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,     0,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,     0,     0,
      56,    57,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    64,     0,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    74,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    77,    78,     0,    79,
       0,    80,    81,    82,     0,     0,    83,     0,     0,     0,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,     0,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   543,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,   547,   114,   115,   116,
     117,   118,     0,     0,     7,     8,     9,    10,    11,     0,
      12,    13,   119,    14,    15,    16,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,    28,     0,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    44,    45,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,    55,     0,     0,    56,
      57,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    64,     0,    65,
       0,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,    68,    69,     0,    70,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,    77,    78,     0,    79,     0,
      80,    81,    82,     0,     0,    83,     0,     0,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,     0,    94,     0,     0,     0,     0,
      95,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   105,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,   549,   114,   115,   116,   117,
     118,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,   119,    14,    15,    16,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,    55,     0,     0,    56,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,     0,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,     0,    83,     0,     0,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,    94,     0,     0,     0,     0,    95,
       0,     0,    96,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,   105,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,   556,   114,   115,   116,   117,   118,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
     119,    14,    15,    16,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,    55,     0,     0,    56,    57,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    64,     0,    65,     0,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,    68,
      69,     0,    70,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,     0,    83,     0,     0,     0,    84,    85,    86,
      87,     0,    88,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,    94,     0,     0,     0,     0,    95,     0,
       0,    96,     0,     0,     0,     0,     0,    97,    98,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,   570,   114,   115,   116,   117,   118,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,     0,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,    83,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    94,     0,     0,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,   572,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,     0,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
       0,    83,     0,     0,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,   585,   114,   115,   116,   117,   118,     0,     0,     7,
       8,     9,    10,    11,     0,    12,    13,   119,    14,    15,
      16,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,     0,    28,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    55,     0,     0,    56,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    64,     0,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    74,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
      77,    78,     0,    79,     0,    80,    81,    82,     0,     0,
      83,     0,     0,     0,    84,    85,    86,    87,     0,    88,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,     0,
      94,     0,     0,     0,     0,    95,     0,     0,    96,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
     590,   114,   115,   116,   117,   118,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,   119,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,   639,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,     0,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,     0,    83,     0,
       0,     0,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,    94,     0,
       0,     0,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,   641,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
       0,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,     0,    83,     0,     0,
       0,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,    94,     0,     0,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,   655,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,     0,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,     0,     0,
      56,    57,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    64,     0,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    74,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    77,    78,     0,    79,
       0,    80,    81,    82,     0,     0,    83,     0,     0,     0,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,     0,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,   698,   114,   115,   116,
     117,   118,     0,     0,     7,     8,     9,    10,    11,     0,
      12,    13,   119,    14,    15,    16,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,    28,     0,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    44,    45,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,    55,     0,     0,    56,
      57,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    64,     0,    65,
       0,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,    68,    69,     0,    70,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,    77,    78,     0,    79,     0,
      80,    81,    82,     0,     0,    83,     0,     0,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,     0,    94,     0,     0,     0,     0,
      95,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   105,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,   705,   114,   115,   116,   117,
     118,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,   119,    14,    15,    16,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,    55,     0,     0,    56,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,     0,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,     0,    83,     0,     0,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,    94,     0,     0,     0,     0,    95,
       0,     0,    96,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,   105,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,   719,   114,   115,   116,   117,   118,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
     119,    14,    15,    16,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,    55,     0,     0,    56,    57,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    64,     0,    65,     0,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,    68,
      69,     0,    70,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,     0,    83,     0,     0,     0,    84,    85,    86,
      87,     0,    88,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,    94,     0,     0,     0,     0,    95,     0,
       0,    96,     0,     0,     0,     0,     0,    97,    98,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,   721,   114,   115,   116,   117,   118,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,     0,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,    83,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    94,     0,     0,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,   845,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,     0,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
       0,    83,     0,     0,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,   847,   114,   115,   116,   117,   118,     0,     0,  -831,
    -831,  -831,  -831,  -831,     0,  -831,  -831,   119,  -831,  -831,
    -831,     0,     0,  -831,  -831,  -831,  -831,  -831,  -831,  -831,
    -831,  -831,  -831,     0,  -831,     0,  -831,     0,  -831,  -831,
    -831,  -831,     0,     0,     0,  -831,  -831,  -831,  -831,  -831,
       0,  -831,  -831,  -831,     0,     0,     0,  -831,  -831,     0,
       0,     0,  -831,  -831,  -831,     0,  -831,     0,     0,     0,
    -831,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -831,  -831,     0,  -831,     0,     0,     0,     0,     0,     0,
       0,     0,  -831,     0,     0,     0,     0,     0,  -831,     0,
       0,     0,  -831,     0,     0,     0,  -831,     0,     0,     0,
       0,  -831,     0,     0,  -831,  -831,     0,     0,     0,  -831,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -831,  -831,  -831,  -831,  -831,
       0,     0,  -831,     0,  -831,     0,     0,     0,     0,  -831,
       0,     0,     0,     0,  -831,     0,  -831,  -831,     0,  -831,
       0,     0,     0,  -831,  -831,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -831,     0,  -831,     0,     0,
       0,     0,  -831,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -831,     0,     0,     0,
    -831,  -831,     0,  -831,     0,  -831,  -831,  -831,     0,     0,
    -831,     0,     0,     0,  -831,  -831,  -831,  -831,     0,  -831,
       0,     0,  -831,     0,     0,     0,     0,     0,     0,     0,
       0,  -831,  -831,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -831,  -831,     0,
    -831,     0,     0,     0,     0,  -831,     0,     0,  -831,     0,
       0,     0,     0,     0,  -831,  -831,     0,     0,     0,     0,
       0,     0,  -831,     0,     0,     0,     0,     0,  -831,  -831,
    -831,     0,  -831,     0,     0,     0,  -831,     0,     0,     0,
       0,     0,  -831,     0,     0,     0,  -831,     0,     0,     0,
       0,     0,     0,     0,  -831,     0,     0,     0,     0,  -831,
    -831,  -831,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -831,     0,  -831,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -831,     0,     0,     0,     0,     0,
     849,  -831,  -831,  -831,  -831,  -831,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,  -831,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,   851,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,     0,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,     0,    83,     0,
       0,     0,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,    94,     0,
       0,     0,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,   853,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
       0,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,     0,    83,     0,     0,
       0,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,    94,     0,     0,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,   855,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,     0,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,     0,     0,
      56,    57,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    64,     0,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    74,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    77,    78,     0,    79,
       0,    80,    81,    82,     0,     0,    83,     0,     0,     0,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,     0,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,   857,   114,   115,   116,
     117,   118,     0,     0,     7,     8,     9,    10,    11,     0,
      12,    13,   119,    14,    15,    16,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,    28,     0,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    44,    45,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,    55,     0,     0,    56,
      57,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    64,     0,    65,
       0,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,    68,    69,     0,    70,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,    77,    78,     0,    79,     0,
      80,    81,    82,     0,     0,    83,     0,     0,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,     0,    94,     0,     0,     0,     0,
      95,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   105,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,   859,   114,   115,   116,   117,
     118,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,   119,    14,    15,    16,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,    55,     0,     0,    56,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,     0,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,     0,    83,     0,     0,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,    94,     0,     0,     0,     0,    95,
       0,     0,    96,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,   105,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,   861,   114,   115,   116,   117,   118,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
     119,    14,    15,    16,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,    55,     0,     0,    56,    57,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    64,     0,    65,     0,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,    68,
      69,     0,    70,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,     0,    83,     0,     0,     0,    84,    85,    86,
      87,     0,    88,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,    94,     0,     0,     0,     0,    95,     0,
       0,    96,     0,     0,     0,     0,     0,    97,    98,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,   863,   114,   115,   116,   117,   118,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,     0,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,    83,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    94,     0,     0,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,   865,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,     0,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
       0,    83,     0,     0,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,   868,   114,   115,   116,   117,   118,     0,     0,     7,
       8,     9,    10,    11,     0,    12,    13,   119,    14,    15,
      16,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,     0,    28,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    55,     0,     0,    56,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    64,     0,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    74,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
      77,    78,     0,    79,     0,    80,    81,    82,     0,     0,
      83,     0,     0,     0,    84,    85,    86,    87,     0,    88,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,     0,
      94,     0,     0,     0,     0,    95,     0,     0,    96,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
     871,   114,   115,   116,   117,   118,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,   119,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,   873,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,     0,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,     0,    83,     0,
       0,     0,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,    94,     0,
       0,     0,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,   875,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
       0,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,     0,    83,     0,     0,
       0,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,    94,     0,     0,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,   877,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,     0,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,     0,     0,
      56,    57,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    64,     0,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    74,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    77,    78,     0,    79,
       0,    80,    81,    82,     0,     0,    83,     0,     0,     0,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,     0,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,   879,   114,   115,   116,
     117,   118,     0,     0,     7,     8,     9,    10,    11,     0,
      12,    13,   119,    14,    15,    16,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,    28,     0,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    44,    45,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,    55,     0,     0,    56,
      57,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    64,     0,    65,
       0,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,    68,    69,     0,    70,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,    77,    78,     0,    79,     0,
      80,    81,    82,     0,     0,    83,     0,     0,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,     0,    94,     0,     0,     0,     0,
      95,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   105,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,   881,   114,   115,   116,   117,
     118,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,   119,    14,    15,    16,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,    55,     0,     0,    56,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,     0,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,     0,    83,     0,     0,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,    94,     0,     0,     0,     0,    95,
       0,     0,    96,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,   105,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,   922,   114,   115,   116,   117,   118,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
     119,    14,    15,    16,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,    55,     0,     0,    56,    57,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    64,     0,    65,     0,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,    68,
      69,     0,    70,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,     0,    83,     0,     0,     0,    84,    85,    86,
      87,     0,    88,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,    94,     0,     0,     0,     0,    95,     0,
       0,    96,     0,     0,     0,     0,     0,    97,    98,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,   924,   114,   115,   116,   117,   118,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,     0,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,    83,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    94,     0,     0,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,   926,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,     0,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
       0,    83,     0,     0,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,   929,   114,   115,   116,   117,   118,     0,     0,  -250,
    -250,  -250,  -250,  -250,     0,  -250,  -250,   119,  -250,  -250,
    -250,     0,     0,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,     0,  -250,     0,  -250,     0,  -250,  -250,
    -250,  -250,     0,     0,     0,  -250,  -250,  -250,  -250,  -250,
       0,  -250,  -250,  -250,     0,     0,     0,  -250,  -250,     0,
       0,     0,  -250,  -250,  -250,     0,  -250,     0,     0,     0,
    -250,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -250,  -250,     0,  -250,     0,     0,     0,     0,     0,     0,
       0,     0,  -250,     0,     0,     0,     0,     0,  -250,     0,
       0,     0,  -250,     0,     0,     0,  -250,     0,     0,     0,
       0,  -250,     0,     0,  -250,  -250,     0,     0,     0,  -250,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -250,  -250,  -250,  -250,  -250,
       0,     0,  -250,     0,  -250,     0,     0,     0,     0,  -250,
       0,     0,     0,     0,  -250,     0,  -250,  -250,     0,  -250,
       0,     0,     0,  -250,  -250,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -250,     0,  -250,     0,     0,
       0,     0,  -250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -250,     0,     0,     0,
    -250,  -250,     0,  -250,     0,  -250,  -250,  -250,     0,     0,
    -250,     0,     0,     0,  -250,  -250,  -250,  -250,     0,  -250,
       0,     0,  -250,     0,     0,     0,     0,     0,     0,     0,
       0,  -250,  -250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -250,  -250,     0,
    -250,     0,     0,     0,     0,  -250,     0,     0,  -250,     0,
       0,     0,     0,     0,  -250,  -250,     0,     0,     0,     0,
       0,     0,  -250,     0,     0,     0,     0,     0,  -250,  -250,
    -250,     0,  -250,     0,     0,     0,  -250,     0,     0,     0,
       0,     0,  -250,     0,     0,     0,  -250,     0,     0,     0,
       0,     0,     0,     0,  -250,     0,     0,     0,     0,  -250,
    -250,  -250,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -250,     0,  -250,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -250,     0,     0,     0,     0,     0,
     953,  -250,  -250,  -250,  -250,  -250,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,  -250,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,   988,
     114,   115,   116,   117,   118,     0,     0,  -246,  -246,  -246,
    -246,  -246,     0,  -246,  -246,   119,  -246,  -246,  -246,     0,
       0,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,     0,  -246,     0,  -246,     0,  -246,  -246,  -246,  -246,
       0,     0,     0,  -246,  -246,  -246,  -246,  -246,     0,  -246,
    -246,  -246,     0,     0,     0,  -246,  -246,     0,     0,     0,
    -246,  -246,  -246,     0,  -246,     0,     0,     0,  -246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -246,  -246,
       0,  -246,     0,     0,     0,     0,     0,     0,     0,     0,
    -246,     0,     0,     0,     0,     0,  -246,     0,     0,     0,
    -246,     0,     0,     0,  -246,     0,     0,     0,     0,  -246,
       0,     0,  -246,  -246,     0,     0,     0,  -246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -246,  -246,  -246,  -246,  -246,     0,     0,
    -246,     0,  -246,     0,     0,     0,     0,  -246,     0,     0,
       0,     0,  -246,     0,  -246,  -246,     0,  -246,     0,     0,
       0,  -246,  -246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -246,     0,  -246,     0,     0,     0,     0,
    -246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -246,     0,     0,     0,  -246,  -246,
       0,  -246,     0,  -246,  -246,  -246,     0,     0,  -246,     0,
       0,     0,  -246,  -246,  -246,  -246,     0,  -246,     0,     0,
    -246,     0,     0,     0,     0,     0,     0,     0,     0,  -246,
    -246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -246,  -246,     0,  -246,     0,
       0,     0,     0,  -246,     0,     0,  -246,     0,     0,     0,
       0,     0,  -246,  -246,     0,     0,     0,     0,     0,     0,
    -246,     0,     0,     0,     0,     0,  -246,  -246,  -246,     0,
    -246,     0,     0,     0,  -246,     0,     0,     0,     0,     0,
    -246,     0,     0,     0,  -246,     0,     0,     0,     0,     0,
       0,     0,  -246,     0,     0,     0,     0,  -246,  -246,  -246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -246,     0,  -246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -246,     0,     0,     0,     0,     0,  1164,  -246,
    -246,  -246,  -246,  -246,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,  -246,    14,    15,    16,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
       0,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,     0,    83,     0,     0,
       0,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,    94,     0,     0,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,  1240,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,     0,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,     0,     0,
      56,    57,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    64,     0,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    74,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    77,    78,     0,    79,
       0,    80,    81,    82,     0,     0,    83,     0,     0,     0,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,     0,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
     112,   723,     0,     0,     0,   -33,   -33,     0,     0,     0,
     113,     0,     0,   -33,     0,     0,     0,   114,   115,   116,
     117,   118,   -33,     0,     0,     0,     0,   -33,     0,     0,
       0,   -33,   119,   -33,     0,   -33,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,   -33,     0,     0,   -33,     0,     0,     0,   -33,
       0,   -33,     0,     0,     0,     0,     0,   -33,     0,   -33,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,   -33,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,
     -33,   -33,     0,     0,   -33,     0,     0,     0,     0,     0,
     -33,   -33,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
       0,   -33,   -33,     0,     0,   -33,     0,     0,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,   -33,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,     0,     0,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,     0,     0,     0,   -33,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,
       0,     0,   -33,     0,   -33,     0,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,     0,   -33,   -33,     0,     0,   -33,     0,   132,
     -33,   724,     0,   133,   134,     0,     0,     0,   -33,     0,
     -33,   135,     0,     0,     0,     0,     0,     0,     0,     0,
     136,     0,     0,     0,     0,    21,     0,     0,     0,   137,
       0,   138,     0,   139,     0,   -33,    29,    30,    31,    32,
     140,   141,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,   142,     0,     0,     0,   143,     0,   144,
       0,     0,     0,     0,     0,   145,     0,   146,     0,   147,
     148,   149,   150,   151,     0,   152,   153,   154,     0,   155,
     156,     0,   157,   158,   159,   160,   161,     0,     0,   162,
      51,   163,   164,   165,   166,   167,   168,   169,   170,   171,
       0,     0,   172,     0,   173,   174,     0,   175,   176,    55,
     177,   178,     0,     0,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,     0,     0,   188,   189,   190,   191,
       0,     0,   192,     0,     0,     0,     0,     0,   193,   194,
       0,     0,     0,     0,   195,   196,   197,   198,     0,   199,
     200,     0,     0,   201,     0,     0,   202,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   212,     0,   213,
     214,   215,   216,     0,   217,   218,     0,   219,   220,   221,
       0,     0,     0,     0,     0,   222,   223,   224,   225,   226,
     227,     0,   228,     0,     0,   229,   230,   231,     0,     0,
       0,     0,   232,     0,     0,     0,   233,   234,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   235,   236,   237,     0,   238,   239,   240,     0,
     241,   242,   243,   244,     0,   245,     0,   246,     0,     0,
     247,     0,   248,     0,   249,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   251,   252,     0,   253,   254,   255,
     256,   257,     0,     0,   258,   259,   260,   261,   262,     0,
       0,   263,   264,   265,   266,   267,     0,     0,     0,   268,
     269,   270,   271,   272,     0,   273,   274,   275,   276,   277,
       0,     0,     0,     0,     0,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,     0,     0,   110,
       0,   290,   291,     0,     0,   292,     0,   420,   293,     0,
       0,   133,   134,     0,     0,     0,   294,     0,   295,   135,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,     0,     0,    21,     0,     0,     0,   137,     0,   138,
       0,   139,     0,   296,    29,    30,    31,    32,   140,   141,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,   142,     0,     0,     0,   143,     0,   144,     0,     0,
       0,     0,     0,   145,     0,   146,     0,   147,   148,   149,
     150,   151,     0,   152,   153,   154,     0,   155,   156,     0,
     157,   158,   159,   160,   161,     0,     0,   162,    51,   163,
     164,   165,   166,   167,   168,   169,   170,   171,     0,     0,
     172,     0,   173,   174,     0,   175,   176,    55,   177,   178,
       0,     0,   179,   180,   181,     0,   182,   183,   184,   185,
     186,   187,     0,     0,   188,   189,   190,   191,     0,     0,
     192,     0,     0,     0,     0,     0,   193,   194,     0,     0,
       0,     0,   195,   196,   197,   198,     0,   199,   200,     0,
       0,   201,     0,     0,   202,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,   212,     0,   213,   214,   215,
     216,     0,   217,   218,     0,   219,   220,   221,     0,     0,
       0,     0,     0,   222,   223,   224,   225,   226,   227,     0,
     228,     0,     0,   229,   230,   231,     0,     0,     0,     0,
     232,     0,     0,     0,   233,   234,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,     0,   238,   239,   240,     0,   241,   242,
     243,   244,     0,   245,     0,   246,     0,     0,   247,     0,
     248,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,   252,     0,   253,   254,   255,   256,   257,
       0,     0,   258,   259,   260,   261,   262,     0,     0,   263,
     264,   265,   266,   267,     0,     0,     0,   268,   269,   270,
     271,   272,     0,   273,   274,   275,   276,   277,     0,     0,
       0,     0,     0,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,     0,     0,   110,     0,   290,
     291,     0,     0,   292,     0,   643,   293,     0,     0,   -97,
     -97,     0,     0,     0,   294,     0,   295,   -97,     0,     0,
       0,     0,     0,     0,     0,     0,   -97,     0,     0,     0,
       0,   -97,     0,     0,     0,   -97,     0,   -97,     0,   -97,
       0,   296,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
       0,     0,     0,     0,     0,     0,   -97,     0,     0,   -97,
       0,     0,     0,   -97,     0,   -97,     0,     0,     0,     0,
       0,   -97,     0,   -97,     0,   -97,   -97,   -97,   -97,   -97,
       0,   -97,   -97,   -97,     0,   -97,   -97,     0,   -97,   -97,
     -97,   -97,   -97,     0,     0,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,     0,     0,   -97,     0,
     -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,     0,     0,
     -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,
       0,     0,   -97,   -97,   -97,   -97,     0,     0,   -97,     0,
       0,     0,     0,     0,   -97,   -97,     0,     0,     0,     0,
     -97,   -97,   -97,   -97,     0,   -97,   -97,     0,     0,   -97,
       0,     0,   -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,
     -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,     0,
     -97,   -97,     0,   -97,   -97,   -97,     0,     0,     0,     0,
       0,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,     0,
       0,   -97,   -97,   -97,     0,     0,     0,     0,   -97,     0,
       0,     0,   -97,   -97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -97,   -97,
     -97,     0,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,
       0,   -97,     0,   -97,     0,     0,   -97,     0,   -97,     0,
     -97,     0,     0,     0,     0,     0,     0,     0,     0,   -97,
     -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,     0,     0,
     -97,   -97,   -97,   -97,   -97,     0,     0,   -97,   -97,   -97,
     -97,   -97,     0,     0,     0,   -97,   -97,   -97,   -97,   -97,
       0,   -97,   -97,   -97,   -97,   -97,     0,     0,     0,     0,
       0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,     0,     0,   -97,     0,   -97,   -97,     0,
       0,   -97,     0,   746,   -97,     0,     0,   133,   134,     0,
       0,     0,   -97,     0,   -97,   135,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,     0,     0,     0,    21,
       0,     0,     0,   137,     0,   138,     0,   139,     0,   -97,
      29,    30,    31,    32,   140,   141,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   142,     0,     0,
       0,   143,     0,   144,     0,     0,     0,     0,     0,   145,
       0,   146,     0,   147,   148,   149,   150,   151,     0,   152,
     153,   154,     0,   155,   156,     0,   157,   158,   159,   160,
     161,     0,     0,   162,    51,   163,   164,   165,   166,   167,
     168,   169,   170,   171,     0,     0,   172,     0,   173,   174,
       0,   175,   176,    55,   177,   178,     0,     0,   179,   180,
     181,     0,   182,   183,   184,   185,   186,   187,     0,     0,
     188,   189,   190,   191,     0,     0,   192,     0,     0,     0,
       0,     0,   193,   194,     0,     0,     0,     0,   195,   196,
     197,   198,     0,   199,   200,     0,     0,   201,     0,     0,
     202,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   212,     0,   213,   214,   215,   216,     0,   217,   218,
       0,   219,   220,   221,     0,     0,     0,     0,     0,   222,
     223,   224,   225,   226,   227,     0,   228,     0,     0,   229,
     230,   231,     0,     0,     0,     0,   232,     0,     0,     0,
     233,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   235,   236,   237,     0,
     238,   239,   240,     0,   241,   242,   243,   244,     0,   245,
       0,   246,     0,     0,   247,     0,   248,     0,   249,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
       0,   253,   254,   255,   256,   257,     0,     0,   258,   259,
     260,   261,   262,     0,     0,   263,   264,   265,   266,   267,
       0,     0,     0,   268,   269,   270,   271,   272,     0,   273,
     274,   275,   276,   277,     0,     0,     0,     0,     0,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,     0,     0,   110,   979,   290,   291,     0,   133,   134,
       0,     0,   293,     0,     0,   747,   135,     0,     0,     0,
     294,     0,   295,     0,     0,   136,     0,     0,     0,     0,
      21,     0,     0,     0,   137,     0,   138,     0,   139,     0,
       0,    29,    30,    31,    32,   140,   141,   296,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,   142,     0,
       0,     0,   143,     0,   144,     0,     0,     0,     0,     0,
     145,     0,   146,     0,   147,   148,   149,   150,   151,     0,
     152,   153,   154,     0,   155,   156,     0,   157,   158,   159,
     160,   161,     0,     0,   162,    51,   163,   164,   165,   166,
     167,   168,   169,   170,   171,     0,     0,   172,     0,   173,
     174,     0,   175,   176,    55,   177,   178,     0,     0,   179,
     180,   181,     0,   182,   183,   184,   185,   186,   187,     0,
       0,   188,   189,   190,   191,     0,     0,   192,     0,     0,
       0,     0,     0,   193,   194,     0,     0,     0,     0,   195,
     196,   197,   198,     0,   199,   200,     0,     0,   201,     0,
       0,   202,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   212,     0,   213,   214,   215,   216,     0,   217,
     218,     0,   219,   220,   221,     0,     0,     0,     0,     0,
     222,   223,   224,   225,   226,   227,     0,   228,     0,     0,
     229,   230,   231,     0,     0,     0,     0,   232,     0,     0,
       0,   233,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   235,   236,   237,
       0,   238,   239,   240,     0,   241,   242,   243,   244,     0,
     245,     0,   246,     0,     0,   247,     0,   248,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,   250,   251,
     252,     0,   253,   254,   255,   256,   257,     0,     0,   258,
     259,   260,   261,   262,     0,     0,   263,   264,   265,   266,
     267,     0,     0,     0,   268,   269,   270,   271,   272,     0,
     273,   274,   275,   276,   277,     0,     0,     0,     0,     0,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,     0,     0,   110,     0,   290,   291,     0,     0,
     292,     0,   132,   293,     0,     0,   133,   134,     0,     0,
       0,   294,     0,   295,   135,     0,     0,     0,     0,     0,
       0,     0,     0,   136,     0,     0,     0,     0,    21,     0,
       0,     0,   137,     0,   138,     0,   139,     0,   296,    29,
      30,    31,    32,   140,   141,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,   142,     0,     0,     0,
     143,     0,   144,     0,     0,     0,     0,     0,   145,     0,
     146,     0,   147,   148,   149,   150,   151,     0,   152,   153,
     154,     0,   155,   156,     0,   157,   158,   159,   160,   161,
       0,     0,   162,    51,   163,   164,   165,   166,   167,   168,
     169,   170,   171,     0,     0,   172,     0,   173,   174,     0,
     175,   176,    55,   177,   178,     0,     0,   179,   180,   181,
       0,   182,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,     0,   192,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,     0,   195,   196,   197,
     198,     0,   199,   200,     0,     0,   201,     0,     0,   202,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     212,     0,   213,   214,   215,   216,     0,   217,   218,     0,
     219,   220,   221,     0,     0,     0,     0,     0,   222,   223,
     224,   225,   226,   227,     0,   228,     0,     0,   229,   230,
     231,     0,     0,     0,     0,   232,     0,     0,     0,   233,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   235,   236,   237,     0,   238,
     239,   240,     0,   241,   242,   243,   244,     0,   245,     0,
     246,     0,     0,   247,     0,   248,     0,   249,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   251,   252,     0,
     253,   254,   255,   256,   257,     0,     0,   258,   259,   260,
     261,   262,     0,     0,   263,   264,   265,   266,   267,     0,
       0,     0,   268,   269,   270,   271,   272,     0,   273,   274,
     275,   276,   277,     0,     0,     0,     0,     0,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
       0,     0,   110,   969,   290,   291,     0,  -461,  -461,     0,
       0,   293,     0,     0,     0,  -461,     0,     0,     0,   294,
       0,   295,     0,     0,  -461,     0,     0,     0,     0,  -461,
       0,     0,     0,  -461,     0,  -461,     0,  -461,     0,     0,
    -461,  -461,  -461,  -461,  -461,  -461,   296,     0,     0,     0,
       0,     0,     0,     0,  -461,     0,     0,  -461,     0,     0,
       0,  -461,     0,  -461,     0,     0,     0,     0,     0,  -461,
       0,  -461,     0,  -461,  -461,  -461,  -461,  -461,     0,  -461,
    -461,  -461,     0,  -461,  -461,     0,  -461,  -461,  -461,  -461,
    -461,     0,     0,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,     0,     0,  -461,     0,  -461,  -461,
       0,  -461,  -461,  -461,  -461,  -461,     0,     0,  -461,  -461,
    -461,     0,  -461,  -461,  -461,  -461,  -461,  -461,     0,     0,
    -461,  -461,  -461,  -461,     0,     0,  -461,     0,     0,     0,
       0,     0,  -461,  -461,     0,     0,     0,     0,  -461,  -461,
    -461,  -461,     0,  -461,  -461,     0,     0,  -461,     0,     0,
    -461,  -461,  -461,  -461,  -461,     0,  -461,  -461,  -461,  -461,
    -461,  -461,     0,  -461,  -461,  -461,  -461,     0,  -461,  -461,
       0,  -461,  -461,  -461,     0,     0,     0,     0,     0,  -461,
    -461,  -461,  -461,  -461,  -461,     0,  -461,     0,     0,  -461,
    -461,  -461,     0,     0,     0,     0,  -461,     0,     0,     0,
    -461,  -461,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -461,  -461,  -461,     0,
    -461,  -461,  -461,     0,  -461,  -461,  -461,  -461,     0,  -461,
       0,  -461,     0,     0,  -461,     0,  -461,     0,  -461,     0,
       0,     0,     0,     0,     0,     0,     0,  -461,  -461,  -461,
       0,  -461,  -461,  -461,  -461,  -461,     0,     0,  -461,  -461,
    -461,  -461,  -461,     0,     0,  -461,  -461,  -461,  -461,  -461,
       0,     0,     0,  -461,  -461,  -461,  -461,  -461,     0,  -461,
    -461,  -461,  -461,  -461,     0,     0,     0,     0,     0,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,     0,     0,  -461,     0,  -461,  -461,     0,     0,     0,
       0,     0,  -461,     0,     0,     0,     0,     0,     0,     0,
    -461,     0,  -461,     7,     8,     9,    10,    11,     0,    12,
      13,     0,    14,    15,    16,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,  -461,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,    55,     0,     0,    56,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,     0,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,     0,    83,     0,     0,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,    94,     0,     0,     0,     0,    95,
       0,     0,    96,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,   105,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,     0,   399,   400,     0,   401,   402,   113,   403,
     404,   405,   406,   407,   408,   114,   115,   116,   117,   118,
     409,   410,   411,   412,   413,   414,     0,   415,   416,     0,
     119,     7,     8,     9,    10,    11,     0,    12,    13,     0,
      14,    15,    16,   436,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,   437,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,   440,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,   441,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,    73,     0,    74,
     443,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,     0,     0,   445,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,   446,    83,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    94,     0,     0,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,  1019,  1225,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,   436,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,   437,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,   441,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,    73,     0,    74,   443,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
     444,     0,     0,     0,     0,     0,   445,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
     446,    83,     0,     0,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   752,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,   114,   115,   116,   117,   118,     0,     0,     7,
       8,     9,    10,    11,     0,    12,    13,   119,    14,    15,
      16,   436,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,     0,    28,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,   437,     0,     0,    41,    42,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    55,     0,     0,    56,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,   440,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    64,   441,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,    73,     0,    74,   443,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,   444,
       0,     0,     0,     0,     0,   445,    76,     0,     0,     0,
      77,    78,     0,    79,     0,    80,    81,    82,     0,   446,
      83,     0,     0,     0,    84,    85,    86,    87,     0,    88,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,     0,
      94,     0,     0,     0,     0,    95,     0,     0,    96,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
     771,     0,   111,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
       0,   114,   115,   116,   117,   118,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,   119,    14,    15,    16,
     436,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,   437,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,   440,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,   441,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,    73,     0,    74,   443,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,   444,     0,
       0,     0,     0,     0,   445,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,   446,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   827,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,   436,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,   437,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,   440,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,   441,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,    73,     0,    74,   443,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,   444,     0,     0,
       0,     0,     0,   445,    76,     0,     0,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,   446,    83,     0,
       0,     0,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,    94,     0,
       0,     0,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,   990,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,   114,
     115,   116,   117,   118,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,   119,    14,    15,    16,   436,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,     0,    28,     0,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
      40,   437,     0,     0,    41,    42,     0,     0,     0,    43,
      44,    45,     0,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,    55,     0,
       0,    56,    57,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,   440,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    64,
     441,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,    68,    69,     0,    70,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,    73,     0,    74,   443,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
       0,     0,   445,    76,     0,     0,     0,    77,    78,     0,
      79,     0,    80,    81,    82,     0,   446,    83,     0,     0,
       0,    84,    85,    86,    87,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,    94,     0,     0,
       0,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,  1019,     0,   111,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,   114,   115,
     116,   117,   118,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,   119,    14,    15,    16,   436,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,     0,    38,    39,    40,
     437,     0,     0,    41,    42,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,    55,     0,     0,
      56,    57,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,   440,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    64,   441,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,    68,    69,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,    73,     0,    74,   443,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,   444,     0,     0,     0,     0,
       0,   445,    76,     0,     0,     0,    77,    78,     0,    79,
       0,    80,    81,    82,     0,   446,    83,     0,     0,     0,
      84,    85,    86,    87,     0,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,     0,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,   114,   115,   116,
     117,   118,     0,     0,     7,     8,     9,    10,    11,     0,
      12,    13,   119,    14,    15,    16,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,    28,     0,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    44,    45,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,    50,     0,
       0,     0,     0,     0,   438,   439,     0,    51,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,    55,     0,     0,    56,
      57,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    64,     0,    65,
       0,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,    68,    69,     0,    70,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,    77,    78,     0,    79,     0,
      80,    81,    82,     0,     0,    83,     0,     0,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,     0,    94,     0,     0,     0,     0,
      95,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   105,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,   114,   115,   116,   117,
     118,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,   119,    14,    15,    16,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   888,     0,    27,     0,
      28,     0,    29,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,    43,    44,    45,     0,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,    55,     0,     0,    56,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    64,     0,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    77,    78,     0,    79,     0,    80,
      81,    82,     0,     0,    83,     0,     0,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,    94,     0,     0,     0,     0,    95,
       0,     0,    96,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,   105,     0,   889,   890,
     106,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,   114,   115,   116,   117,   118,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
     119,    14,    15,    16,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,    43,    44,    45,     0,    46,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,    55,     0,     0,    56,    57,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    64,     0,    65,     0,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,    68,
      69,     0,    70,     0,     0,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    77,    78,     0,    79,     0,    80,    81,
      82,     0,     0,    83,     0,     0,     0,    84,    85,    86,
      87,     0,    88,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,    94,     0,     0,     0,     0,    95,     0,
       0,    96,     0,     0,     0,     0,     0,    97,    98,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,     0,
       0,   417,     0,     0,     0,   111,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,   114,   115,   116,   117,   118,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,   119,
      14,    15,    16,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,     0,    56,    57,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    64,     0,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,    68,    69,
       0,    70,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,    83,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,     0,    94,     0,     0,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
     885,     0,     0,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,   114,   115,   116,   117,   118,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,   119,    14,
      15,    16,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,    28,     0,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,    45,     0,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,     0,     0,
       0,     0,    55,     0,     0,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    64,     0,    65,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,    68,    69,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,    77,    78,     0,    79,     0,    80,    81,    82,     0,
       0,    83,     0,     0,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,     0,    96,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,   114,   115,   116,   117,   118,     0,     0,     7,
       8,     9,    10,    11,     0,    12,    13,   119,    14,    15,
      16,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,     0,    28,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    55,     0,     0,    56,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    64,     0,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    74,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
      77,    78,     0,    79,     0,    80,    81,    82,     0,     0,
      83,     0,     0,     0,    84,    85,    86,    87,     0,    88,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,     0,
      94,     0,     0,     0,     0,    95,     0,     0,    96,     0,
       0,     0,     0,     0,   346,    98,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
       0,   114,   115,   116,   117,   118,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,   119,    14,    15,    16,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,    28,     0,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
      55,     0,     0,    56,    57,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    64,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,    68,    69,     0,    70,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    77,
      78,     0,    79,     0,    80,    81,    82,     0,     0,    83,
       0,     0,     0,    84,    85,    86,    87,     0,    88,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    94,
       0,     0,     0,     0,    95,     0,     0,    96,     0,     0,
       0,     0,     0,   907,    98,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   105,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
     114,   115,   116,   117,   118,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   119,    14,    15,    16,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,     0,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
      43,    44,    45,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,     0,    54,     0,     0,     0,     0,    55,
       0,     0,    56,    57,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      64,     0,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,    68,    69,     0,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    77,    78,
       0,    79,     0,    80,    81,    82,     0,     0,    83,     0,
       0,     0,    84,    85,    86,    87,     0,    88,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,    94,     0,
       0,     0,     0,    95,     0,     0,    96,     0,     0,     0,
     -58,   435,   911,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,     0,
     103,   436,     0,     0,   104,  1326,     0,     0,     0,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,   437,     0,     0,     0,     0,     0,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   424,     0,     0,     0,     0,     0,   114,
     115,   116,   117,   118,     0,   425,     0,     0,     0,   438,
     439,     0,    16,     0,   119,     0,     0,     0,    20,     0,
       0,    23,    24,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,   440,     0,     0,    41,
      42,     0,     0,     0,    43,    44,    45,   426,    46,     0,
       0,     0,    47,   441,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   427,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,    56,    57,     0,   444,
       0,    58,     0,     0,     0,   445,     0,     0,   -58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,   -58,     0,     0,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,    68,    69,
       0,   428,     0,     0,     0,    71,     0,     0,   -58,     0,
     -58,     0,     0,   -58,     0,     0,     0,    73,     0,     0,
       0,     0,   -58,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,    77,    78,     0,    79,     0,    80,    81,    82,
       0,     0,     0,     0,     0,     0,   399,   400,     0,   401,
     402,    88,   403,   404,   405,   406,   407,   408,     0,     0,
       0,     0,     0,   409,   410,   411,   412,   413,   414,     0,
     415,   416,     0,     0,     0,     0,     0,   -58,     0,     0,
      93,   -58,    94,   -58,     0,     0,   -58,     0,   -58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,   101,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,     0,   132,     0,     0,
       0,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,   138,
       0,   139,     0,     0,    29,    30,    31,    32,   140,   141,
       0,     0,     0,   114,   115,   116,   117,   118,    39,     0,
       0,   142,     0,     0,     0,   143,     0,  1031,     0,     0,
       0,     0,     0,   145,     0,   146,     0,   147,   148,   149,
     150,   151,     0,   152,   153,   154,     0,     0,   156,     0,
     157,   158,   159,   160,   161,     0,     0,     0,    51,   163,
     164,   165,   166,   167,   168,   169,   170,   171,     0,  1328,
     172,     0,  1032,   174,     0,   175,   176,    55,   177,   178,
       0,     0,   179,   180,   181,     0,   182,   183,     0,   185,
     186,   187,     0,     0,   188,     0,   190,   191,     0,     0,
     192,     0,     0,     0,     0,     0,   193,   194,     0,     0,
       0,     0,   195,   196,     0,     0,     0,   199,   200,     0,
       0,     0,     0,     0,   202,     0,   204,   205,   206,     0,
     207,   208,   209,   210,   211,   212,     0,   213,   214,   215,
     216,     0,   217,    74,     0,   219,   220,   221,     0,     0,
       0,     0,     0,  1033,   223,     0,   225,   226,   227,     0,
     228,     0,     0,   229,   230,  1034,     0,     0,     0,     0,
     232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   455,     0,     0,     0,     0,     0,
       0,   236,   237,     0,   238,  1035,   240,     0,     0,   242,
     243,   244,     0,   245,   436,  1036,     0,     0,   247,     0,
     248,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   251,   252,     0,   253,   254,   255,   256,   257,
       0,     0,   258,   259,   260,   261,   262,   437,     0,   263,
     264,   265,   266,   267,     0,     0,     0,   268,   103,   270,
     271,   272,     0,   273,   274,   275,   276,   277,     0,     0,
       0,     0,     0,   278,   279,   280,   281,   282,   283,   284,
       0,     0,   438,   439,   289,     0,     0,   110,     0,   290,
     291,   -62,   512,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   294,     0,   295,     0,     0,     0,
       0,     0,   436,     0,   -70,   574,     0,     0,     0,   440,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   436,   441,     0,     0,     0,
     399,   400,     0,   401,   402,   437,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,   409,   410,   411,
     412,   413,   414,   442,   415,   416,     0,     0,   437,     0,
       0,   443,     0,     0,     0,     0,     0,     0,     0,     0,
     438,   439,   444,     0,     0,     0,     0,     0,   445,     0,
       0,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   438,   439,     0,   -66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1331,   440,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,   -66,   441,     0,   -66,     0,     0,     0,
     440,     0,     0,     0,     0,   -66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,   443,
       0,     0,  1333,     0,     0,     0,     0,     0,     0,     0,
     444,     0,     0,     0,   442,     0,   445,     0,     0,   -62,
       0,     0,   443,     0,     0,     0,     0,     0,     0,     0,
     446,  1385,     0,   444,   -62,     0,     0,     0,     0,   445,
     -66,     0,   -70,     0,   -66,     0,   -66,     0,     0,   -66,
       0,   -66,     0,   446,     0,     0,     0,   -70,  1387,   -62,
       0,   -62,     0,     0,   -62,     0,     0,  1048,     0,     0,
    1049,     0,     0,   -62,  1175,  1050,     0,  1051,     0,     0,
       0,     0,   -70,     0,   -70,     0,     0,   -70,  1052,     0,
       0,     0,  1053,     0,  1054,     0,   -70,     0,  1055,     0,
       0,     0,     0,  1079,  1056,  1057,  1058,  1059,     0,  1077,
     399,   400,     0,   401,   402,     0,   403,   404,   405,   406,
     407,   408,  1080,     0,     0,     0,     0,   409,   410,   411,
     412,   413,   414,     0,   415,   416,     0,     0,   -62,     0,
       0,     0,   -62,     0,   -62,     0,     0,   -62,     0,   -62,
       0,     0,     0,     0,     0,  1081,  1082,     0,     0,     0,
    1083,   -70,     0,     0,     0,   -70,     0,   -70,     0,     0,
     -70,     0,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1084,     0,     0,     0,     0,
       0,     0,     0,     0,  1060,  1061,     0,     0,  1062,     0,
    1085,     0,     0,     0,  1063,     0,     0,   399,   400,     0,
     401,   402,     0,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,  1086,   409,   410,   411,   412,   413,   414,
       0,   415,   416,     0,     0,     0,     0,  1087,     0,     0,
       0,  1088,  1089,     0,  1090,     0,  1091,  1064,  1065,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1066,     0,     0,   399,   400,     0,   401,   402,  1092,   403,
     404,   405,   406,   407,   408,     0,     0,  1093,     0,     0,
     409,   410,   411,   412,   413,   414,     0,   415,   416,  1094,
       0,  1067,   399,   400,     0,   401,   402,     0,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,   409,
     410,   411,   412,   413,   414,     0,   415,   416,     0,   399,
     400,     0,   401,   402,     0,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,   409,   410,   411,   412,
     413,   414,     0,   415,   416,  1048,     0,     0,  1049,     0,
       0,   482,  1095,  1050,     0,  1051,     0,  1096,     0,     0,
       0,     0,     0,     0,     0,     0,  1052,     0,     0,     0,
    1053,     0,  1054,     0,     0,     0,  1055,  -589,     0,     0,
       0,     0,  1056,  1057,  1058,  1059,  1101,     0,  -589,  -589,
    -589,  -589,  1102,  1178,     0,     0,     0,     0,     0,     0,
       0,     0,  -589,     0,     0,     0,   483,  1103,  1104,  1105,
    1106,     0,     0,  1077,     0,   484,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1107,     0,     0,   399,
     400,   485,   401,   402,     0,   403,   404,   405,   406,   407,
     408,     0,  -589,     0,     0,     0,   409,   410,   411,   412,
     413,   414,     0,   415,   416,     0,     0,     0,   486,  1108,
    1109,     0,     0,     0,  1110,     0,     0,     0,     0,     0,
       0,     0,  1060,  1061,     0,  1048,  1062,     0,  1049,     0,
       0,     0,  1063,  1050,     0,  1051,     0,     0,     0,  1111,
       0,     0,     0,     0,     0,   487,  1052,     0,  1112,     0,
    1053,     0,  1054,   488,  1113,     0,  1055,     0,     0,   489,
       0,     0,  1056,  1057,  1058,  1059,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1064,  1065,  1114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1066,     0,
       0,  1115,     0,     0,     0,  1116,  1117,     0,  1118,     0,
    1119,  1120,  1121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1122,     0,     0,     0,     0,  1067,
       0,     0,  1123,     0,     0,     0,     0,   490,     0,     0,
       0,  1124,     0,     0,     0,     0,   491,     0,     0,     0,
       0,     0,     0,  1125,     0,     0,     0,     0,     0,     0,
       0,     0,  1060,  1061,     0,     0,  1062,     0,     0,  1126,
    1127,     0,  1063,     0,   492,   493,     0,     0,     0,     0,
       0,   494,     0,     0,     0,     0,  1198,     0,     0,     0,
    1247,     0,  -589,     0,   844,     0,     0,     0,     0,     0,
     399,   400,     0,   401,   402,     0,   403,   404,   405,   406,
     407,   408,     0,     0,     0,  1064,  1065,   409,   410,   411,
     412,   413,   414,     0,   415,   416,     0,     0,  1066,  1199,
       0,     0,     0,     0,     0,     0,     0,   844,     0,     0,
       0,     0,     0,   399,   400,     0,   401,   402,     0,   403,
     404,   405,   406,   407,   408,   398,     0,     0,     0,  1067,
     409,   410,   411,   412,   413,   414,     0,   415,   416,   399,
     400,     0,   401,   402,     0,   403,   404,   405,   406,   407,
     408,   958,     0,     0,     0,     0,   409,   410,   411,   412,
     413,   414,     0,   415,   416,   399,   400,     0,   401,   402,
       0,   403,   404,   405,   406,   407,   408,  1132,     0,     0,
       0,     0,   409,   410,   411,   412,   413,   414,     0,   415,
     416,   399,   400,     0,   401,   402,     0,   403,   404,   405,
     406,   407,   408,  1137,     0,     0,     0,     0,   409,   410,
     411,   412,   413,   414,     0,   415,   416,   399,   400,     0,
     401,   402,     0,   403,   404,   405,   406,   407,   408,  1141,
       0,     0,     0,     0,   409,   410,   411,   412,   413,   414,
       0,   415,   416,   399,   400,     0,   401,   402,     0,   403,
     404,   405,   406,   407,   408,  1149,     0,     0,     0,     0,
     409,   410,   411,   412,   413,   414,     0,   415,   416,   399,
     400,     0,   401,   402,     0,   403,   404,   405,   406,   407,
     408,  1197,     0,     0,     0,     0,   409,   410,   411,   412,
     413,   414,     0,   415,   416,   399,   400,     0,   401,   402,
       0,   403,   404,   405,   406,   407,   408,  1205,     0,     0,
       0,     0,   409,   410,   411,   412,   413,   414,     0,   415,
     416,   399,   400,     0,   401,   402,     0,   403,   404,   405,
     406,   407,   408,  1219,     0,     0,     0,     0,   409,   410,
     411,   412,   413,   414,     0,   415,   416,   399,   400,     0,
     401,   402,     0,   403,   404,   405,   406,   407,   408,  1220,
       0,     0,     0,     0,   409,   410,   411,   412,   413,   414,
       0,   415,   416,   399,   400,     0,   401,   402,     0,   403,
     404,   405,   406,   407,   408,  1221,     0,     0,     0,     0,
     409,   410,   411,   412,   413,   414,     0,   415,   416,   399,
     400,     0,   401,   402,     0,   403,   404,   405,   406,   407,
     408,  1347,     0,     0,     0,     0,   409,   410,   411,   412,
     413,   414,     0,   415,   416,   399,   400,     0,   401,   402,
       0,   403,   404,   405,   406,   407,   408,  1408,     0,     0,
       0,     0,   409,   410,   411,   412,   413,   414,     0,   415,
     416,   399,   400,     0,   401,   402,     0,   403,   404,   405,
     406,   407,   408,     0,     0,  1016,     0,     0,   409,   410,
     411,   412,   413,   414,     0,   415,   416,   399,   400,     0,
     401,   402,     0,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,  1133,   409,   410,   411,   412,   413,   414,
       0,   415,   416,   399,   400,     0,   401,   402,     0,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,  1145,
     409,   410,   411,   412,   413,   414,     0,   415,   416,   399,
     400,     0,   401,   402,     0,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,  1155,   409,   410,   411,   412,
     413,   414,     0,   415,   416,   399,   400,     0,   401,   402,
       0,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,  1230,   409,   410,   411,   412,   413,   414,     0,   415,
     416,   399,   400,     0,   401,   402,     0,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,  1277,   409,   410,
     411,   412,   413,   414,     0,   415,   416,   399,   400,     0,
     401,   402,     0,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,  1280,   409,   410,   411,   412,   413,   414,
       0,   415,   416,   399,   400,     0,   401,   402,     0,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,  1313,
     409,   410,   411,   412,   413,   414,     0,   415,   416,   399,
     400,     0,   401,   402,     0,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,   409,   410,   411,   412,
     413,   414,   844,   415,   416,     0,     0,     0,   399,   400,
       0,   401,   402,     0,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,   409,   410,   411,   412,   413,
     414,  1131,   415,   416,     0,     0,     0,   399,   400,     0,
     401,   402,     0,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,     0,   409,   410,   411,   412,   413,   414,
    1150,   415,   416,     0,     0,     0,   399,   400,     0,   401,
     402,     0,   403,   404,   405,   406,   407,   408,     0,     0,
       0,     0,     0,   409,   410,   411,   412,   413,   414,  1151,
     415,   416,     0,     0,     0,   399,   400,     0,   401,   402,
       0,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,   409,   410,   411,   412,   413,   414,  1223,   415,
     416,     0,     0,     0,   399,   400,     0,   401,   402,     0,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,   409,   410,   411,   412,   413,   414,  1340,   415,   416,
       0,     0,     0,   399,   400,     0,   401,   402,     0,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,     0,
     409,   410,   411,   412,   413,   414,  1344,   415,   416,     0,
       0,     0,   399,   400,     0,   401,   402,     0,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,   409,
     410,   411,   412,   413,   414,  1351,   415,   416,     0,     0,
       0,   399,   400,     0,   401,   402,     0,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,   409,   410,
     411,   412,   413,   414,  1352,   415,   416,     0,     0,     0,
     399,   400,     0,   401,   402,     0,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,   409,   410,   411,
     412,   413,   414,  1353,   415,   416,     0,     0,     0,   399,
     400,     0,   401,   402,     0,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,   409,   410,   411,   412,
     413,   414,  1355,   415,   416,     0,     0,     0,   399,   400,
       0,   401,   402,     0,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,   409,   410,   411,   412,   413,
     414,  1372,   415,   416,     0,     0,     0,   399,   400,     0,
     401,   402,     0,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,     0,   409,   410,   411,   412,   413,   414,
    1373,   415,   416,     0,     0,     0,   399,   400,     0,   401,
     402,     0,   403,   404,   405,   406,   407,   408,     0,     0,
       0,     0,     0,   409,   410,   411,   412,   413,   414,  1374,
     415,   416,     0,     0,     0,   399,   400,     0,   401,   402,
       0,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,   409,   410,   411,   412,   413,   414,  1397,   415,
     416,     0,     0,     0,   399,   400,     0,   401,   402,     0,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,   409,   410,   411,   412,   413,   414,  1405,   415,   416,
       0,     0,     0,   399,   400,     0,   401,   402,     0,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,     0,
     409,   410,   411,   412,   413,   414,     0,   415,   416,   399,
     400,     0,   401,   402,     0,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,   409,   410,   411,   412,
     413,   414,     0,   415,   416,     0,     0,  1161,   399,   400,
    1276,   401,   402,     0,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,   409,   410,   411,   412,   413,
     414,     0,   415,   416,   399,   400,     0,   401,   402,     0,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,   409,   410,   411,   412,   413,   414,     0,   415,   416
};

static const short int yycheck[] =
{
       4,   519,   520,   198,   128,   523,   356,   123,   126,     1,
     360,   762,   362,     1,     5,     1,     1,     1,     1,   134,
       1,   136,    26,     1,   126,    68,     1,     1,   332,   333,
       1,     1,     1,    13,    68,    13,     1,     1,     1,   154,
     235,    68,   173,     0,   103,   798,    50,   162,     1,    53,
       1,    31,   318,     1,     1,   250,     5,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,   186,     1,   171,
       1,     1,     1,     1,   186,   305,  1301,   307,    13,    13,
     310,   311,   197,   186,   318,   186,    68,    13,    36,   355,
       1,   644,   315,   646,     1,    29,   318,     8,   321,    65,
       1,   317,     1,     0,   320,    31,     1,   111,     1,   113,
     114,   115,   116,     1,     1,   119,     1,   103,   352,   322,
       1,   316,     1,   318,   319,     1,     1,     1,     1,  1354,
     249,   246,   123,   355,     5,   943,   944,   945,   186,   143,
     186,     3,     4,   202,    38,    39,    40,    41,   249,    60,
       0,    81,     0,   157,   316,   322,   122,   161,    52,   103,
      81,   127,    89,    90,   103,   348,   349,   350,   351,   173,
     353,   354,   176,   318,   123,   179,   180,   316,   182,   183,
       1,   185,   318,   149,   316,   189,    14,   318,    89,    90,
     312,   195,   196,    10,   318,   316,   316,   201,   202,   186,
     204,   186,   206,   207,   208,   186,   318,   187,    89,    90,
       5,   186,   159,   325,   187,   318,   202,   199,   222,   249,
       1,   186,   325,   187,   228,   229,   230,   329,   340,   331,
     332,   333,   236,   237,   238,   239,   186,   340,   242,   150,
      31,   198,   246,     0,     1,   328,   210,   315,   315,   186,
     315,   255,   123,    10,   316,   218,    62,   220,   202,   198,
     198,   187,   354,   202,   249,   318,   270,   369,  1019,   318,
     218,   219,   315,   277,   213,   210,   252,   325,   282,   325,
     284,   315,   322,   287,   288,   218,    54,   315,   266,   255,
     293,   318,   340,   241,   340,   252,     1,   301,   264,   238,
     186,   240,   266,   218,   243,   309,    81,   355,   312,   313,
     314,   315,   223,   252,   305,     1,   307,   321,   322,   310,
     311,   625,   326,   315,   159,   352,   132,   133,   123,   108,
     318,   323,   336,   337,   684,   339,   316,   323,   322,   322,
     331,   332,   333,  1096,   325,     0,     1,   318,   322,    60,
     325,   316,   322,   322,   358,   340,   305,   315,   307,   340,
     325,   310,   311,   367,   321,   340,   323,   318,   293,   322,
     374,   328,   376,     1,   378,   340,   321,   311,   317,   322,
     322,   322,   321,   323,   323,   689,   322,   326,     1,   328,
     355,   322,   213,   322,   322,   399,   318,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   644,   322,   646,   238,   422,   240,
       0,     1,   243,   322,   774,   775,   776,   322,     1,   322,
     321,   252,   321,   323,   305,   322,   307,   322,   322,   310,
     311,   198,   319,   322,   293,   323,   322,   322,   322,   322,
     186,     0,     1,   323,    27,   326,   213,   461,   315,     1,
     331,   332,   333,   467,   323,    38,    39,    40,    41,   473,
     323,   475,   476,   477,     1,   318,   323,   323,    27,    52,
     484,   238,   315,   240,   488,   789,   243,   323,   186,    38,
      39,    40,    41,   198,    36,   252,   317,   293,   318,    68,
     371,   372,   327,    52,   199,   326,   322,   511,   213,   739,
     305,   323,   307,   315,   321,   310,   311,   320,    68,    92,
      62,    68,    81,   625,     1,   529,   159,   213,    68,   533,
      68,    68,   159,   238,    68,   240,   540,    81,   243,   543,
      68,   350,   351,    92,   353,   354,    68,   418,   266,   316,
     900,   555,   238,    68,   240,   559,     1,   243,   213,  1310,
     317,   321,   321,   355,   321,    68,   323,    68,    68,   326,
     319,   328,   323,   577,   316,   315,   371,   372,   323,    44,
     321,   769,   305,   238,   323,   240,   323,   689,   243,   325,
    1371,  1204,   896,    38,    39,    40,    41,   252,  1354,   967,
     213,  1146,   787,    -1,   340,   609,    -1,    52,    -1,   725,
      -1,    -1,   317,    -1,   409,   410,    -1,    -1,    -1,   355,
      65,   326,    -1,   418,    -1,   238,    -1,   240,    -1,   633,
     243,    -1,    -1,   213,   625,    -1,    -1,   323,    -1,    -1,
     326,   183,   184,   185,    -1,    -1,    -1,   651,    -1,   198,
      -1,    -1,    -1,   644,    -1,   646,    -1,    -1,   238,    -1,
     240,    -1,   317,   243,   213,    -1,   321,    -1,    -1,   787,
      -1,   326,   252,    -1,    -1,  1193,   218,   219,  1196,    -1,
      -1,    -1,    -1,    -1,    -1,   787,    -1,   789,   692,   238,
     694,   240,   696,   795,   243,   644,  1214,   646,   689,   241,
      -1,    -1,    -1,   252,   708,   709,   710,    -1,    -1,   282,
     323,    -1,   942,   326,   718,   346,   347,   348,   349,   350,
     351,    -1,   353,   354,    -1,   955,    -1,    -1,    -1,   959,
      -1,    -1,    -1,   282,   725,    -1,    -1,   317,   742,    -1,
     970,   321,   937,   938,   939,   940,   326,    -1,   739,     0,
       1,    -1,    -1,   757,   625,   759,   986,    -1,   762,    10,
     764,    -1,   957,    -1,    -1,  1069,     1,    -1,   317,    -1,
      -1,    -1,   321,   644,   323,   646,   725,   326,    -1,   328,
      -1,    -1,    -1,    -1,    21,  1303,    -1,  1137,    -1,  1139,
     739,    -1,   319,    -1,   896,    -1,    -1,    -1,   789,    -1,
      -1,    -1,   329,   330,     0,   332,   333,    -1,   335,   336,
     337,   338,   339,   340,    -1,     0,     1,    54,   689,   346,
     347,   348,   349,   350,   351,    -1,   353,   354,    -1,    -1,
     357,   702,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,    -1,   848,    -1,    -1,    -1,  1078,   644,
      -1,   646,   329,   330,   725,   332,   333,    -1,   335,   336,
     337,   338,   339,   340,    -1,    -1,   311,    -1,   739,   346,
     347,   348,   349,   350,   351,    -1,   353,   354,    -1,    -1,
      -1,   885,    -1,    -1,   888,    -1,    65,    -1,    -1,   126,
     894,   895,    -1,    -1,    -1,    -1,    -1,    -1,   769,     1,
      -1,    -1,    81,    -1,    -1,   896,   143,   702,    -1,    -1,
     914,     0,    -1,    -1,  1030,   919,   920,   921,   789,    -1,
      -1,  1036,  1046,  1039,   928,    27,   930,    -1,    -1,    -1,
     725,    -1,    -1,   170,    -1,    -1,    38,    39,    40,    41,
     177,   178,    -1,   122,   739,    -1,    -1,   198,   127,    -1,
      52,   942,   189,    -1,    -1,    -1,    -1,    -1,   195,    -1,
       1,    -1,   213,    -1,   955,    -1,    -1,  1069,   959,    -1,
     149,    -1,   209,    -1,   769,  1099,  1100,    -1,   213,   970,
     159,  1211,    -1,    -1,    -1,   989,    27,   238,    -1,   240,
      92,    -1,   243,   942,    -1,   986,    -1,    38,    39,    40,
      41,   252,    -1,   238,    -1,   240,   955,    -1,   243,    -1,
     959,    52,    -1,   198,    -1,  1019,    -1,   213,    -1,    -1,
      -1,   970,    -1,    -1,  1028,   896,    -1,    -1,   213,  1033,
      -1,  1035,  1036,    -1,    -1,    -1,    -1,   986,    -1,  1030,
    1235,    -1,   238,    -1,   240,    -1,    -1,   243,  1039,    -1,
      -1,    92,    -1,   238,    -1,   240,   252,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   317,   252,    -1,    -1,
     321,   942,   323,  1077,   311,   326,   255,   328,  1069,    -1,
       1,  1030,   317,    -1,   955,   264,    -1,  1078,   959,    -1,
    1039,   326,    -1,    -1,    -1,  1099,  1100,    -1,    -1,   970,
      -1,    -1,  1106,    -1,    -1,    -1,    27,    -1,  1112,    -1,
      -1,    -1,  1236,    -1,  1238,   986,    -1,    38,    39,    40,
      41,   317,  1317,    -1,   213,   321,    -1,   323,  1132,  1078,
     326,    52,   317,   318,    -1,    -1,   321,  1141,   323,    -1,
      -1,   326,  1146,   328,    -1,  1149,    -1,   942,    -1,   238,
      -1,   240,    -1,  1157,   243,    -1,    -1,  1161,    -1,  1030,
     955,    -1,    -1,   252,   959,    -1,    -1,    -1,  1039,    -1,
      -1,    92,    -1,    -1,     1,   970,    -1,    -1,    -1,    -1,
     282,  1185,  1186,  1187,  1188,    -1,    -1,    -1,    -1,    -1,
      -1,   986,    -1,  1197,  1198,  1199,  1312,  1201,  1069,    -1,
      27,  1205,    -1,    -1,    -1,    -1,    -1,  1078,    -1,    -1,
      -1,    38,    39,    40,    41,  1219,  1220,  1221,    -1,    -1,
    1211,    -1,     0,     1,    -1,    52,    -1,    -1,   317,    -1,
       0,     1,   321,    -1,   323,  1030,    -1,   326,    65,  1243,
    1244,   282,    -1,    -1,  1039,  1249,    -1,  1251,     1,  1253,
      -1,    21,  1256,    -1,  1258,    -1,     1,  1261,  1262,  1263,
      -1,    -1,  1211,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,  1147,    -1,    31,  1283,
      -1,    -1,    27,  1078,    54,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,  1100,  1310,    52,    -1,    -1,
      -1,    -1,  1316,    -1,    -1,    -1,  1320,    -1,    -1,  1323,
    1324,  1312,  1326,    -1,  1328,    -1,  1330,  1331,    81,  1333,
      -1,  1335,  1336,    -1,    -1,    -1,    -1,    -1,    -1,    92,
    1211,    -1,    -1,  1347,  1348,    -1,   134,    92,   136,    -1,
      -1,  1222,  1147,   141,    -1,    -1,   126,    -1,    -1,    -1,
      -1,   282,    -1,  1312,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,   160,   143,   162,  1379,    -1,    -1,    -1,   167,
      -1,  1385,    -1,  1387,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    27,   190,   191,    -1,    -1,     1,    -1,   178,   197,
      -1,    -1,    38,    39,    40,    41,  1211,    -1,    -1,   189,
     198,   209,   210,   211,   212,   195,    52,  1222,   198,    -1,
      -1,    -1,   177,   221,    29,   213,    -1,   264,    -1,   209,
      -1,  1312,    -1,   213,    -1,    -1,    -1,    -1,   236,    -1,
     238,     1,    -1,    -1,   242,   282,    -1,    -1,    -1,    -1,
     238,    -1,   240,    -1,    -1,   243,    92,    62,   238,     1,
     240,    -1,   299,   243,   252,    -1,    -1,    27,    -1,    -1,
      -1,    -1,   252,    -1,     1,   273,    -1,    -1,    38,    39,
      40,    41,    -1,    -1,   282,    27,   284,    -1,    -1,    31,
       0,     1,    52,    -1,  1375,    -1,    38,    39,    40,    41,
      27,    -1,    -1,    -1,    -1,    -1,    -1,  1312,    -1,    -1,
      52,    38,    39,    40,    41,   313,    -1,    -1,    -1,   282,
      -1,    -1,    -1,   321,   322,    52,    -1,   282,   326,   317,
      -1,    -1,    92,   321,   322,   323,    -1,   317,   326,    81,
     328,   321,    -1,   323,    -1,   150,   326,    -1,   328,    -1,
      92,   111,   350,    -1,    -1,    -1,   311,    -1,    -1,    -1,
      -1,    -1,     0,     1,    -1,    92,    -1,   365,    -1,    -1,
    1375,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,   177,   223,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,   442,    83,   282,    -1,   253,   254,
      -1,    -1,    -1,    -1,    92,    -1,     1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    27,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,   135,   136,   137,
     138,   139,    -1,   213,   142,    -1,   144,    52,    -1,    -1,
      -1,   149,    -1,    -1,    -1,   153,   154,    -1,   156,   157,
      -1,   159,   282,    -1,    -1,   163,   164,    -1,   238,    -1,
     240,    -1,    -1,   243,    -1,    -1,    -1,   175,    -1,   177,
     282,    -1,   252,    -1,   182,    -1,    -1,    92,     1,    -1,
      -1,   311,    -1,    -1,    -1,   282,    -1,    -1,   196,    -1,
     198,   199,   200,   201,    -1,   203,   111,   205,   206,   207,
      -1,    -1,   210,    -1,    27,   213,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    38,    39,    40,    41,   227,
      -1,    -1,    -1,   231,   232,    -1,    -1,   595,   236,    52,
     238,    -1,   240,    -1,    -1,   243,    -1,   317,    -1,   247,
     248,   321,   250,   323,   252,    -1,   326,   255,   328,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,   177,    -1,   272,   633,    -1,    -1,    -1,    92,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,   647,
     648,   649,    -1,    -1,   292,   293,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,   315,   316,   317,
     318,   319,    -1,   321,   322,   323,   324,    -1,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,    -1,   356,   357,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   729,   730,   731,   732,    -1,   734,   282,   335,   336,
     337,   338,   339,   340,    -1,    -1,    -1,    -1,    -1,   346,
     347,   348,   349,   350,   351,    -1,   353,   354,     0,     1,
      -1,   759,   760,    -1,   762,    -1,   311,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    -1,    68,    -1,    70,   282,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,     1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    52,    -1,    -1,    -1,   149,    -1,    -1,
      -1,   153,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,   198,   199,   200,   201,
     958,   203,   111,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,   213,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,   236,    -1,   238,    -1,   240,    -1,
      -1,   243,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
     252,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,  1019,   264,   265,    -1,    -1,    -1,    -1,   177,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,     0,     1,    -1,
     292,   293,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,     0,     1,    -1,   309,   310,   311,
      -1,    -1,    -1,   315,   316,   317,   318,   319,    -1,   321,
     322,   323,   324,    -1,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,    -1,   356,   357,    -1,    -1,    -1,     0,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,   282,    15,    16,    -1,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,   311,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    -1,    68,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
     213,   142,   198,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,   153,   154,    -1,   156,   157,   213,   159,    -1,
      -1,    -1,   163,   164,    -1,   238,    -1,   240,    -1,    -1,
     243,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,   252,
      -1,   182,   238,    -1,   240,    -1,    -1,   243,    -1,    -1,
      -1,    -1,  1310,    -1,    -1,   196,   252,   198,   199,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,   213,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,   236,    -1,   238,    -1,   240,
      -1,    -1,   243,    -1,   317,    -1,   247,   248,   321,   250,
     323,   252,    -1,   326,   255,   328,    -1,   258,    -1,    -1,
       1,   317,    -1,   264,   265,   321,    -1,   323,    -1,    -1,
     326,   272,   328,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    27,    -1,    -1,    -1,
    1408,   292,   293,    -1,    -1,   296,    -1,    38,    39,    40,
      41,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    52,    -1,    -1,   315,   316,   317,   318,   319,    -1,
     321,   322,   323,   324,    -1,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,    92,   353,   354,    -1,   356,   357,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    -1,    68,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    27,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    52,   135,   136,   137,   138,   139,    -1,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
     153,   154,    -1,   156,   157,    27,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      -1,    92,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      52,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   196,    -1,   198,   199,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
     213,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      92,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,   236,    -1,   238,    -1,   240,    -1,   111,
     243,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,   252,
      -1,    -1,   255,    -1,    -1,   258,   177,    -1,     1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    27,    -1,    -1,    -1,    -1,   292,
     293,    -1,    -1,   296,    -1,    38,    39,    40,    41,    -1,
      -1,   304,    -1,    -1,    -1,   177,   309,   310,   311,    52,
      -1,    -1,   315,   316,   317,   318,   319,    -1,   321,   322,
     323,   324,    -1,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,    92,
     353,   354,    -1,   356,   357,     0,     1,    -1,    -1,    -1,
      -1,   282,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
     311,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
     282,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    -1,    68,    -1,    70,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,     1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    54,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,   119,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,   144,
      52,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,   126,   177,    -1,    -1,    -1,    -1,   182,    -1,   282,
      92,     1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
      -1,   196,    -1,   198,   199,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,   210,    -1,    27,   213,   214,
     215,   216,   217,    -1,   219,   170,    -1,   222,    38,    39,
      40,    41,   227,   178,    -1,    -1,   231,   232,    -1,    -1,
      -1,   236,    52,   238,   189,   240,    -1,    -1,   243,    -1,
     195,    -1,   247,   248,    -1,   250,    -1,   252,    -1,    -1,
     255,    -1,    -1,   258,   209,    -1,     1,    -1,    -1,   264,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    92,   278,   279,   280,    -1,   282,    -1,    -1,
      -1,   286,    27,    -1,    -1,    -1,    -1,   292,   293,    -1,
      -1,   296,    -1,    38,    39,    40,    41,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    52,    -1,    -1,
     315,   316,   317,    -1,   319,    -1,   321,   322,   323,   324,
      -1,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,    92,   353,   354,
      -1,   356,   357,     0,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     282,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,     1,    51,    52,    53,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      38,    39,    40,    41,    -1,    92,    -1,    -1,     0,     1,
      -1,    98,    -1,    -1,    52,   102,    -1,    -1,    -1,   106,
      -1,    -1,   282,    -1,   111,     1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,     1,    -1,    -1,    21,    -1,     1,   135,   136,
     137,   138,   139,    -1,    92,   142,   143,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    27,   156,
     157,    -1,   159,    27,    -1,    -1,   163,   164,    54,    38,
      39,    40,    41,   170,    38,    39,    40,    41,   175,    -1,
     177,   178,    -1,    52,    -1,   182,    -1,   282,    52,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,   195,   196,
      -1,   198,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,   209,   210,    -1,    -1,   213,   214,   215,   216,
     217,    -1,   219,    92,    -1,   222,     1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
     126,   238,    -1,   240,    -1,    -1,   243,    -1,    -1,    -1,
     247,   248,    27,   250,    -1,   252,    -1,   143,   255,    -1,
      -1,   258,    -1,    38,    39,    40,    41,   264,   265,    -1,
       0,     1,    -1,    -1,    -1,   272,    -1,    52,    -1,    -1,
      -1,   278,   279,   280,   170,   282,    -1,     0,     1,   286,
      -1,    -1,   178,    -1,    -1,   292,   198,    -1,    -1,   296,
     186,    -1,    -1,   189,    -1,    -1,    -1,   304,    -1,   195,
      -1,   213,   309,   310,   311,    -1,    -1,    92,    -1,    -1,
     317,    -1,    -1,   209,   321,   322,   323,   324,    -1,   326,
      -1,   328,    -1,    -1,   282,    -1,   238,   334,   240,    -1,
      -1,   243,     0,     1,   341,   342,   343,   344,   345,    -1,
     252,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,   282,    -1,   317,    -1,    -1,   282,   321,
      -1,   323,    80,    81,   326,    83,   328,    -1,    -1,    -1,
      -1,    89,    90,    -1,    92,    -1,    -1,     0,     1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,   213,   142,   198,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
     213,   159,    -1,    -1,    -1,   163,   164,   282,   238,    -1,
     240,    -1,    -1,   243,    -1,    -1,    -1,   175,    -1,   177,
      -1,    -1,   252,    -1,   182,   238,    -1,   240,   186,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   252,
     198,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
     238,    -1,   240,    -1,    -1,   243,    -1,   317,    -1,   247,
     248,   321,   250,   323,   252,    -1,   326,   255,   328,    -1,
     258,    -1,    -1,    -1,   317,    -1,   264,   265,   321,    -1,
     323,    -1,    -1,   326,   272,   328,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,     0,     1,   286,    -1,
      -1,    -1,    -1,    -1,   292,   198,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
     213,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,   317,
      -1,    -1,    -1,   321,   322,   323,   324,    -1,   326,    -1,
     328,    -1,    -1,    -1,    -1,   238,   334,   240,    -1,    -1,
     243,     0,     1,   341,   342,   343,   344,   345,    -1,   252,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,     1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,   317,    -1,    -1,    27,   321,    -1,
     323,    80,    81,   326,    83,   328,    -1,    -1,    38,    39,
      40,    41,    -1,    92,    -1,    -1,     0,     1,    -1,    98,
      -1,    -1,    52,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,     1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    21,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    92,   142,   198,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    27,   156,   157,   213,
     159,    -1,    -1,    -1,   163,   164,    54,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    52,    -1,   182,   238,    -1,   240,   186,    -1,   243,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   252,   198,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,
     219,    92,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,   126,   238,
      -1,   240,    -1,    -1,   243,    -1,    -1,    -1,   247,   248,
     249,   250,    -1,   252,    -1,   143,   255,    -1,    -1,   258,
      -1,    -1,    -1,   317,    -1,   264,   265,   321,    -1,   323,
      -1,    -1,   326,   272,   328,    -1,    -1,    -1,    -1,   278,
     279,   280,   170,   282,    -1,     0,     1,   286,    -1,    -1,
     178,    -1,    -1,   292,   198,    -1,    -1,   296,    -1,    -1,
      -1,   189,    -1,    -1,    -1,   304,    -1,   195,    -1,   213,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,   317,    -1,
      -1,   209,   321,   322,   323,   324,    -1,   326,    -1,   328,
      -1,    -1,   282,    -1,   238,   334,   240,    -1,    -1,   243,
       0,     1,   341,   342,   343,   344,   345,    -1,   252,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,   282,    -1,   317,    -1,    -1,    -1,   321,    -1,   323,
      80,    81,   326,    83,   328,    -1,    -1,    -1,    -1,    89,
      90,    -1,    92,    -1,    -1,     0,     1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,   198,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,   213,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   182,   238,    -1,   240,    -1,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,   252,   198,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,
     210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,     1,   238,    -1,
     240,    -1,    -1,   243,    -1,    -1,    -1,   247,   248,    13,
     250,    -1,   252,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,   317,    -1,   264,   265,   321,    31,   323,    -1,
      -1,   326,   272,   328,    38,    39,    40,    41,   278,   279,
     280,    -1,   282,    -1,     0,     1,   286,    -1,    52,    -1,
      -1,    -1,   292,   198,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    65,    -1,    -1,   304,    -1,    -1,    -1,   213,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,
      -1,   321,   322,   323,   324,    -1,   326,    -1,   328,    -1,
      -1,    -1,    -1,   238,   334,   240,    -1,    -1,   243,     0,
       1,   341,   342,   343,   344,   345,    -1,   252,     9,    10,
      11,    12,    13,    14,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,   153,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,   317,   177,    -1,    -1,   321,    -1,   323,    80,
      81,   326,    83,   328,    -1,   189,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,     1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,     1,    -1,   114,   115,    -1,    -1,    -1,   119,    21,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,   236,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,   198,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    54,   154,    -1,   156,   157,   213,   159,    -1,
      -1,    -1,   163,   164,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,   238,    -1,   240,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   252,   198,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,   213,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,   126,   238,    -1,   240,
      -1,   143,   243,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,   252,    -1,   143,   255,    -1,    -1,   258,    -1,    -1,
      -1,   317,    -1,   264,   265,   321,    -1,   323,   170,    -1,
     326,   272,   328,    -1,    -1,    -1,   178,   278,   279,   280,
     170,   282,    -1,    -1,    -1,   286,    -1,   189,   178,    -1,
      -1,   292,    -1,   195,    -1,   296,    -1,    -1,    -1,   189,
      -1,    -1,     1,   304,    -1,   195,    -1,   209,   309,   310,
     311,    -1,    -1,    -1,    13,    -1,   317,    -1,    -1,   209,
     321,   322,   323,   324,    -1,   326,    -1,   328,    -1,    -1,
      -1,    -1,    31,   334,    -1,    -1,    -1,    -1,     0,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    81,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,     1,    -1,    -1,    -1,    -1,    98,    -1,     1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    21,   114,   115,    -1,    -1,    -1,   119,    21,    -1,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,   177,    -1,
     142,    -1,   144,    -1,    54,    -1,    -1,   149,   187,    -1,
     189,    54,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   210,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,   198,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,   213,   214,   215,   216,   217,   126,   219,    -1,    -1,
     222,    -1,    -1,   126,    -1,   264,   265,    -1,    -1,   231,
     232,    -1,    -1,   143,    -1,    -1,   238,    -1,   240,    -1,
     143,   243,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
     252,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
     170,    -1,   264,   265,    -1,    -1,    -1,   170,   178,    -1,
     272,    -1,    -1,    -1,    -1,   178,   278,   279,   280,   189,
     282,    -1,    -1,    -1,   286,   195,   189,    -1,    -1,    -1,
     292,    -1,   195,    -1,   296,    -1,    -1,    -1,    -1,   209,
      -1,     1,   304,    -1,    -1,    -1,   209,   309,   310,   311,
      -1,    -1,    -1,    13,    -1,   317,    -1,    -1,    -1,   321,
     322,   323,   324,    -1,   326,    -1,   328,    -1,    -1,    -1,
      -1,    31,   334,    -1,    -1,    -1,    -1,     0,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    81,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
       1,    -1,    -1,    -1,    -1,    98,    -1,     1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      21,   114,   115,    -1,    -1,    -1,   119,    21,    -1,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   177,    -1,   142,
      -1,   144,    -1,    54,    -1,    -1,   149,   187,    -1,   189,
      54,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,   198,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
     213,   214,   215,   216,   217,   126,   219,    -1,    -1,   222,
      -1,    -1,   126,    -1,   264,   265,    -1,    -1,   231,   232,
      -1,    -1,   143,    -1,    -1,   238,    -1,   240,    -1,   143,
     243,    -1,    -1,    -1,   247,   248,   249,   250,    -1,   252,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,   170,
      -1,   264,   265,    -1,    -1,    -1,   170,   178,    -1,   272,
      -1,    -1,    -1,    -1,   178,   278,   279,   280,   189,   282,
      -1,    -1,    -1,   286,   195,   189,    -1,    -1,    -1,   292,
      -1,   195,    -1,   296,    -1,    -1,    -1,    -1,   209,    -1,
      -1,   304,    -1,    -1,    -1,   209,   309,   310,   311,    -1,
      -1,    -1,    13,    -1,   317,    -1,    -1,    -1,   321,   322,
     323,   324,    -1,   326,    -1,   328,    -1,    -1,    -1,    -1,
      31,   334,    -1,    -1,    -1,    -1,     0,     1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      81,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,     1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,     1,    -1,
     114,   115,    -1,    -1,    -1,   119,    21,    -1,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,   135,   136,   137,   138,   139,   177,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,   149,   187,    -1,   189,    54,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,   198,     1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,   213,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,   126,    -1,   264,   265,    -1,    -1,   231,   232,    -1,
      36,    -1,    -1,   126,   238,    -1,   240,    -1,   143,   243,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,   252,    -1,
     143,   255,    -1,    -1,   258,    -1,    62,    -1,    64,    -1,
     264,   265,    -1,    -1,    -1,   170,    -1,    -1,   272,    -1,
      -1,    -1,    -1,   178,   278,   279,   280,   170,   282,    -1,
      -1,    -1,   286,    -1,   189,   178,    -1,    -1,   292,    -1,
     195,    -1,   296,    -1,    -1,    -1,   189,    -1,    -1,    -1,
     304,    -1,   195,    -1,   209,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,   317,    -1,    -1,   209,   321,   322,   323,
     324,    -1,   326,    -1,   328,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,     0,     1,   341,   342,   343,
     344,   345,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,   356,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    39,    40,    41,   183,   184,   185,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,    80,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,     1,    -1,
      -1,    -1,    -1,    98,    -1,   241,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    21,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,   144,
      -1,    54,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,   198,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,   210,    -1,    -1,   213,   214,
     215,   216,   217,   126,   219,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
     143,    -1,    -1,   238,    -1,   240,    -1,    -1,   243,    -1,
      -1,    -1,   247,   248,    -1,   250,    -1,   252,    -1,    -1,
     255,    -1,    -1,   258,    -1,    -1,    -1,   170,    -1,   264,
     265,    -1,    -1,    -1,    -1,   178,    -1,   272,    -1,     1,
      -1,    -1,    -1,   278,   279,   280,   189,   282,    -1,    -1,
      -1,   286,   195,    -1,    -1,    -1,    -1,   292,    -1,    21,
      -1,   296,    -1,    -1,    -1,    -1,   209,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,
      -1,    -1,   317,    -1,    -1,    -1,   321,   322,   323,   324,
      -1,   326,    54,   328,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,     0,     1,   341,   342,   343,   344,
     345,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,   356,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,   126,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,     1,    -1,    -1,
      -1,    -1,    98,    -1,     1,    -1,   102,    -1,   170,    -1,
     106,    -1,    -1,    -1,    -1,   111,   178,    21,   114,   115,
      -1,    -1,    -1,   119,    21,    -1,    -1,   189,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,   209,   144,    -1,
      54,    -1,    -1,   149,    -1,    -1,    -1,    54,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,   198,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,    -1,   210,    -1,    -1,   213,   214,   215,
     216,   217,   126,   219,    -1,    -1,   222,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,   143,
      -1,    -1,   238,    -1,   240,    -1,   143,   243,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,   252,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,   170,    -1,   264,   265,
      -1,    -1,    -1,   170,   178,    -1,   272,    -1,    -1,    -1,
      -1,   178,   278,   279,   280,   189,   282,    -1,    -1,    -1,
     286,   195,   189,    -1,    -1,    -1,   292,    -1,   195,    -1,
     296,    -1,    -1,    -1,    -1,   209,    -1,    -1,   304,    -1,
      -1,    -1,   209,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,   317,    -1,    -1,    -1,   321,   322,   323,   324,    -1,
     326,    -1,   328,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,     0,     1,   341,   342,   343,   344,   345,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     356,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,     1,    -1,    -1,    -1,
      -1,    98,    -1,     1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    21,   114,   115,    -1,
      -1,    -1,   119,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,    54,
      -1,    -1,   149,    -1,    -1,    -1,    54,   154,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,   198,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,    -1,   210,    -1,    -1,   213,   214,   215,   216,
     217,   126,   219,    -1,    -1,   222,    -1,    -1,   126,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,   143,    -1,
      -1,   238,    -1,   240,    -1,   143,   243,    -1,    -1,    -1,
     247,   248,    -1,   250,    -1,   252,    -1,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,   170,    -1,   264,   265,    -1,
      -1,    -1,   170,   178,    -1,   272,    -1,    -1,    -1,    -1,
     178,   278,   279,   280,   189,   282,    -1,    -1,    -1,   286,
     195,   189,    -1,    -1,    -1,   292,    -1,   195,    -1,   296,
      -1,    -1,    -1,    -1,   209,    -1,    -1,   304,    -1,    -1,
      -1,   209,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,
     317,    -1,    -1,    -1,   321,   322,   323,   324,    -1,   326,
      -1,   328,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,     0,     1,   341,   342,   343,   344,   345,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,     1,    -1,    -1,    -1,    -1,
      98,    -1,     1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    21,   114,   115,    -1,    -1,
      -1,   119,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,    -1,   144,    -1,    54,    -1,
      -1,   149,    -1,    -1,    -1,    54,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
     198,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,   210,    -1,    -1,   213,   214,   215,   216,   217,
     126,   219,    -1,    -1,   222,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,   143,    -1,    -1,
     238,    -1,   240,    -1,   143,   243,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,   252,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,   170,    -1,   264,   265,    -1,    -1,
      -1,   170,   178,    -1,   272,    -1,    -1,    -1,    -1,   178,
     278,   279,   280,   189,   282,    -1,    -1,    -1,   286,   195,
     189,    -1,    -1,    -1,   292,    -1,   195,    -1,   296,    -1,
      -1,    -1,    -1,   209,    -1,    -1,   304,    -1,    -1,    -1,
     209,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,   317,
      -1,    -1,    -1,   321,   322,   323,   324,    -1,   326,    -1,
     328,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,     0,     1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,   198,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,   210,    -1,    -1,   213,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,
      -1,   240,    -1,    -1,   243,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,   252,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,   317,    -1,
      -1,    -1,   321,   322,   323,   324,    -1,   326,    -1,   328,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
       0,     1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,   198,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,
     210,    -1,    -1,   213,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,    -1,
     240,    -1,    -1,   243,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,   252,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,
      -1,   321,   322,   323,   324,    -1,   326,    -1,   328,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,     0,
       1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,   198,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,   213,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,   238,    -1,   240,
      -1,    -1,   243,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,   252,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,
     321,   322,   323,   324,    -1,   326,    -1,   328,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,     0,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,   198,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,   213,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,   238,    -1,   240,    -1,
      -1,   243,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
     252,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,   321,
     322,   323,   324,    -1,   326,    -1,   328,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,     0,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,   198,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
     213,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,   238,    -1,   240,    -1,    -1,
     243,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,   252,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,   321,   322,
     323,   324,    -1,   326,    -1,   328,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,   342,
     343,   344,   345,    -1,    -1,    -1,     1,    -1,    -1,    -1,
       5,    -1,    -1,   356,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      -1,    66,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,   104,
      -1,   106,   107,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
     125,   126,    -1,   128,    -1,   130,   131,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    -1,    -1,
      -1,    -1,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,   197,   198,   199,   200,   201,    -1,   203,   204,
     205,   206,   207,    -1,   209,   210,    -1,    -1,    -1,   214,
     215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,
     225,   226,    -1,   228,   229,   230,   231,   232,   233,   234,
     235,    -1,   237,    -1,   239,    -1,    -1,   242,    -1,   244,
      -1,   246,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    -1,    -1,
      -1,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      -1,    -1,    -1,   308,   309,   310,   311,    -1,   313,   314,
      -1,    -1,    -1,    -1,    -1,   320,    -1,   322,    -1,   324,
      -1,    -1,    -1,   328,    -1,   330,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,    -1,   341,   342,   343,   344,
     345,    -1,    -1,    -1,     1,    -1,    -1,    -1,     5,    -1,
      -1,   356,     9,    10,    11,    12,    13,    -1,    15,    16,
      -1,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    -1,    66,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,   104,    -1,   106,
     107,    -1,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
      -1,   128,    -1,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    -1,   146,
     147,    -1,   149,    -1,   151,   152,    -1,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,    -1,    -1,    -1,
     187,   188,   189,   190,   191,   192,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
     207,    -1,   209,   210,    -1,    -1,    -1,   214,   215,   216,
     217,    -1,   219,    -1,    -1,   222,    -1,    -1,   225,   226,
      -1,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,    -1,   239,    -1,    -1,   242,    -1,   244,    -1,   246,
     247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    -1,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,    -1,    -1,    -1,   296,
     297,   298,   299,   300,   301,   302,   303,   304,    -1,    -1,
      -1,   308,   309,   310,   311,    -1,   313,   314,    -1,    -1,
      -1,    -1,    -1,   320,    -1,   322,    -1,   324,    -1,     0,
       1,   328,    -1,   330,     5,     6,    -1,   334,    -1,    -1,
      -1,    -1,    13,    -1,   341,   342,   343,   344,   345,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,   356,
      31,    -1,    33,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    59,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    -1,
      81,    82,    -1,    84,    85,    86,    87,    88,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,
     111,   112,   113,    -1,    -1,   116,   117,   118,    -1,   120,
     121,   122,   123,   124,   125,    -1,    -1,   128,   129,   130,
     131,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,    -1,    -1,    -1,   146,   147,   148,   149,    -1,
     151,   152,    -1,    -1,   155,    -1,    -1,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,   167,   168,   169,    -1,
     171,   172,   173,   174,    -1,   176,   177,    -1,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,   187,   188,   189,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,   199,    -1,
      -1,    -1,    -1,   204,    -1,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   224,   225,   226,    -1,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,   237,    -1,   239,    -1,
      -1,   242,    -1,   244,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,    -1,    -1,   255,   256,   257,    -1,   259,   260,
     261,   262,   263,    -1,    -1,   266,   267,   268,   269,   270,
      -1,    -1,   273,   274,   275,   276,   277,    -1,    -1,    -1,
     281,   282,   283,   284,   285,    -1,   287,   288,   289,   290,
     291,    -1,    -1,    -1,    -1,    -1,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    -1,    -1,
     311,    -1,   313,   314,    -1,    -1,   317,    -1,    -1,   320,
     321,    -1,     1,    -1,    -1,    -1,    -1,   328,    -1,   330,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   355,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,   158,
     159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,   187,    -1,
     189,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
     209,   210,    -1,    -1,    -1,   214,   215,   216,   217,   330,
     219,   332,   333,   222,   335,   336,   337,   338,   339,   340,
     229,   230,   231,   232,    -1,   346,   347,   348,   349,   350,
     351,    -1,   353,   354,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,   266,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,   333,    -1,   335,   336,   337,   338,   339,
     340,    -1,    -1,   322,    -1,   324,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,   334,    -1,    -1,    -1,    -1,
      -1,     1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,   189,
      -1,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,   209,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
       1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   175,    -1,   177,   178,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,
      -1,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,   209,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    -1,   175,    -1,   177,   178,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,
      -1,    -1,    -1,   195,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,   209,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,   175,    -1,   177,   178,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,   195,   196,    -1,    -1,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,   209,   210,    -1,    -1,
      -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
      -1,   175,    -1,   177,   178,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,   195,   196,    -1,    -1,    -1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,   209,   210,    -1,    -1,    -1,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,
     344,   345,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,   356,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
     175,    -1,   177,   178,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,
     195,   196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,   209,   210,    -1,    -1,    -1,   214,
     215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,
     255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,
     345,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,   356,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,   175,
      -1,   177,   178,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,   195,
     196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,   209,   210,    -1,    -1,    -1,   214,   215,
     216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,   345,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     356,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,   175,    -1,
     177,   178,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,   195,   196,
      -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,   209,   210,    -1,    -1,    -1,   214,   215,   216,
     217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,     1,   341,   342,   343,   344,   345,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,    -1,   175,    -1,   177,
     178,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,   189,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,   209,   210,    -1,    -1,    -1,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,     1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
     209,   210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,     1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,   189,
      -1,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,   209,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
       1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,   294,   295,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,   294,   295,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
      -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,   322,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,
     344,   345,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,   356,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,
     215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,
     255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,
     345,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,   356,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,
     216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,   345,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     356,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,
     217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,     1,   341,   342,   343,   344,   345,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,     1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,     1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
       1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
      -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,
     344,   345,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,   356,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,
     215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,
     255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,
     345,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,   356,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,
     216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,   345,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     356,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,
     217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,     1,   341,   342,   343,   344,   345,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,     1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,     1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
       1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
      -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,
     344,   345,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,   356,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,
     215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,
     255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,
     345,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,   356,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,
     216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,   345,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     356,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,
     217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,     1,   341,   342,   343,   344,   345,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,     1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,     1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
       1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
      -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,
     344,   345,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,   356,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,
     215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,
     255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,
     345,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,   356,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,
     216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,   345,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     356,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,
     217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,     1,   341,   342,   343,   344,   345,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,     1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,     1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
       1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
      -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,
     344,   345,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,   356,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,
     215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,
     255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,
     345,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,   356,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,
     216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,    -1,     1,   341,   342,   343,   344,   345,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     356,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,
     217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,     1,   341,   342,   343,   344,   345,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,     1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,     1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
       1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,
      -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,     1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
     324,     1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,
     334,    -1,    -1,    13,    -1,    -1,    -1,   341,   342,   343,
     344,   345,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    31,   356,    33,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    59,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      -1,    81,    82,    -1,    84,    85,    86,    87,    88,    -1,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,   104,    -1,   106,   107,    -1,   109,
     110,   111,   112,   113,    -1,    -1,   116,   117,   118,    -1,
     120,   121,   122,   123,   124,   125,    -1,    -1,   128,   129,
     130,   131,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,    -1,    -1,    -1,   146,   147,   148,   149,
      -1,   151,   152,    -1,    -1,   155,    -1,    -1,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,   167,   168,   169,
      -1,   171,   172,   173,   174,    -1,   176,   177,    -1,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,   189,
     190,   191,   192,    -1,   194,    -1,    -1,   197,   198,   199,
      -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   224,   225,   226,    -1,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,   237,    -1,   239,
      -1,    -1,   242,    -1,   244,    -1,   246,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   255,   256,   257,    -1,   259,
     260,   261,   262,   263,    -1,    -1,   266,   267,   268,   269,
     270,    -1,    -1,   273,   274,   275,   276,   277,    -1,    -1,
      -1,   281,   282,   283,   284,   285,    -1,   287,   288,   289,
     290,   291,    -1,    -1,    -1,    -1,    -1,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,    -1,
      -1,   311,    -1,   313,   314,    -1,    -1,   317,    -1,     1,
     320,   321,    -1,     5,     6,    -1,    -1,    -1,   328,    -1,
     330,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    35,    -1,   355,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    59,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    -1,    81,
      82,    -1,    84,    85,    86,    87,    88,    -1,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,   111,
     112,   113,    -1,    -1,   116,   117,   118,    -1,   120,   121,
     122,   123,   124,   125,    -1,    -1,   128,   129,   130,   131,
      -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,   140,   141,
      -1,    -1,    -1,    -1,   146,   147,   148,   149,    -1,   151,
     152,    -1,    -1,   155,    -1,    -1,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,   168,   169,    -1,   171,
     172,   173,   174,    -1,   176,   177,    -1,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,   187,   188,   189,   190,   191,
     192,    -1,   194,    -1,    -1,   197,   198,   199,    -1,    -1,
      -1,    -1,   204,    -1,    -1,    -1,   208,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   224,   225,   226,    -1,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,   237,    -1,   239,    -1,    -1,
     242,    -1,   244,    -1,   246,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,   256,   257,    -1,   259,   260,   261,
     262,   263,    -1,    -1,   266,   267,   268,   269,   270,    -1,
      -1,   273,   274,   275,   276,   277,    -1,    -1,    -1,   281,
     282,   283,   284,   285,    -1,   287,   288,   289,   290,   291,
      -1,    -1,    -1,    -1,    -1,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,    -1,    -1,   311,
      -1,   313,   314,    -1,    -1,   317,    -1,     1,   320,    -1,
      -1,     5,     6,    -1,    -1,    -1,   328,    -1,   330,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    33,
      -1,    35,    -1,   355,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    -1,    81,    82,    -1,
      84,    85,    86,    87,    88,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
     104,    -1,   106,   107,    -1,   109,   110,   111,   112,   113,
      -1,    -1,   116,   117,   118,    -1,   120,   121,   122,   123,
     124,   125,    -1,    -1,   128,   129,   130,   131,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,
      -1,    -1,   146,   147,   148,   149,    -1,   151,   152,    -1,
      -1,   155,    -1,    -1,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,   167,   168,   169,    -1,   171,   172,   173,
     174,    -1,   176,   177,    -1,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,   187,   188,   189,   190,   191,   192,    -1,
     194,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,   225,   226,    -1,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,   237,    -1,   239,    -1,    -1,   242,    -1,
     244,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,   256,   257,    -1,   259,   260,   261,   262,   263,
      -1,    -1,   266,   267,   268,   269,   270,    -1,    -1,   273,
     274,   275,   276,   277,    -1,    -1,    -1,   281,   282,   283,
     284,   285,    -1,   287,   288,   289,   290,   291,    -1,    -1,
      -1,    -1,    -1,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,    -1,    -1,   311,    -1,   313,
     314,    -1,    -1,   317,    -1,     1,   320,    -1,    -1,     5,
       6,    -1,    -1,    -1,   328,    -1,   330,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    31,    -1,    33,    -1,    35,
      -1,   355,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    59,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    -1,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    -1,    81,    82,    -1,    84,    85,
      86,    87,    88,    -1,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,   104,    -1,
     106,   107,    -1,   109,   110,   111,   112,   113,    -1,    -1,
     116,   117,   118,    -1,   120,   121,   122,   123,   124,   125,
      -1,    -1,   128,   129,   130,   131,    -1,    -1,   134,    -1,
      -1,    -1,    -1,    -1,   140,   141,    -1,    -1,    -1,    -1,
     146,   147,   148,   149,    -1,   151,   152,    -1,    -1,   155,
      -1,    -1,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,   167,   168,   169,    -1,   171,   172,   173,   174,    -1,
     176,   177,    -1,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,   187,   188,   189,   190,   191,   192,    -1,   194,    -1,
      -1,   197,   198,   199,    -1,    -1,    -1,    -1,   204,    -1,
      -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,   225,
     226,    -1,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,   237,    -1,   239,    -1,    -1,   242,    -1,   244,    -1,
     246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
     256,   257,    -1,   259,   260,   261,   262,   263,    -1,    -1,
     266,   267,   268,   269,   270,    -1,    -1,   273,   274,   275,
     276,   277,    -1,    -1,    -1,   281,   282,   283,   284,   285,
      -1,   287,   288,   289,   290,   291,    -1,    -1,    -1,    -1,
      -1,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,    -1,    -1,   311,    -1,   313,   314,    -1,
      -1,   317,    -1,     1,   320,    -1,    -1,     5,     6,    -1,
      -1,    -1,   328,    -1,   330,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    -1,    33,    -1,    35,    -1,   355,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    -1,    81,    82,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,   104,    -1,   106,   107,
      -1,   109,   110,   111,   112,   113,    -1,    -1,   116,   117,
     118,    -1,   120,   121,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,    -1,    -1,   134,    -1,    -1,    -1,
      -1,    -1,   140,   141,    -1,    -1,    -1,    -1,   146,   147,
     148,   149,    -1,   151,   152,    -1,    -1,   155,    -1,    -1,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,    -1,   171,   172,   173,   174,    -1,   176,   177,
      -1,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,   187,
     188,   189,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,   199,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,   225,   226,    -1,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,   237,
      -1,   239,    -1,    -1,   242,    -1,   244,    -1,   246,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,   256,   257,
      -1,   259,   260,   261,   262,   263,    -1,    -1,   266,   267,
     268,   269,   270,    -1,    -1,   273,   274,   275,   276,   277,
      -1,    -1,    -1,   281,   282,   283,   284,   285,    -1,   287,
     288,   289,   290,   291,    -1,    -1,    -1,    -1,    -1,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,    -1,    -1,   311,     1,   313,   314,    -1,     5,     6,
      -1,    -1,   320,    -1,    -1,   323,    13,    -1,    -1,    -1,
     328,    -1,   330,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    31,    -1,    33,    -1,    35,    -1,
      -1,    38,    39,    40,    41,    42,    43,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    -1,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    -1,    81,    82,    -1,    84,    85,    86,
      87,    88,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,   111,   112,   113,    -1,    -1,   116,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,    -1,
      -1,   128,   129,   130,   131,    -1,    -1,   134,    -1,    -1,
      -1,    -1,    -1,   140,   141,    -1,    -1,    -1,    -1,   146,
     147,   148,   149,    -1,   151,   152,    -1,    -1,   155,    -1,
      -1,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
     167,   168,   169,    -1,   171,   172,   173,   174,    -1,   176,
     177,    -1,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
     187,   188,   189,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,   225,   226,
      -1,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
     237,    -1,   239,    -1,    -1,   242,    -1,   244,    -1,   246,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,   256,
     257,    -1,   259,   260,   261,   262,   263,    -1,    -1,   266,
     267,   268,   269,   270,    -1,    -1,   273,   274,   275,   276,
     277,    -1,    -1,    -1,   281,   282,   283,   284,   285,    -1,
     287,   288,   289,   290,   291,    -1,    -1,    -1,    -1,    -1,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,    -1,    -1,   311,    -1,   313,   314,    -1,    -1,
     317,    -1,     1,   320,    -1,    -1,     5,     6,    -1,    -1,
      -1,   328,    -1,   330,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    33,    -1,    35,    -1,   355,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    -1,    81,    82,    -1,    84,    85,    86,    87,    88,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,   104,    -1,   106,   107,    -1,
     109,   110,   111,   112,   113,    -1,    -1,   116,   117,   118,
      -1,   120,   121,   122,   123,   124,   125,    -1,    -1,   128,
     129,   130,   131,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,    -1,    -1,    -1,   146,   147,   148,
     149,    -1,   151,   152,    -1,    -1,   155,    -1,    -1,   158,
     159,   160,   161,   162,    -1,   164,   165,   166,   167,   168,
     169,    -1,   171,   172,   173,   174,    -1,   176,   177,    -1,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,   187,   188,
     189,   190,   191,   192,    -1,   194,    -1,    -1,   197,   198,
     199,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   224,   225,   226,    -1,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,   237,    -1,
     239,    -1,    -1,   242,    -1,   244,    -1,   246,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,   256,   257,    -1,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
     269,   270,    -1,    -1,   273,   274,   275,   276,   277,    -1,
      -1,    -1,   281,   282,   283,   284,   285,    -1,   287,   288,
     289,   290,   291,    -1,    -1,    -1,    -1,    -1,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
      -1,    -1,   311,     1,   313,   314,    -1,     5,     6,    -1,
      -1,   320,    -1,    -1,    -1,    13,    -1,    -1,    -1,   328,
      -1,   330,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    -1,    33,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    -1,    81,    82,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,   104,    -1,   106,   107,
      -1,   109,   110,   111,   112,   113,    -1,    -1,   116,   117,
     118,    -1,   120,   121,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,    -1,    -1,   134,    -1,    -1,    -1,
      -1,    -1,   140,   141,    -1,    -1,    -1,    -1,   146,   147,
     148,   149,    -1,   151,   152,    -1,    -1,   155,    -1,    -1,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,    -1,   171,   172,   173,   174,    -1,   176,   177,
      -1,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,   187,
     188,   189,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,   199,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,   225,   226,    -1,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,   237,
      -1,   239,    -1,    -1,   242,    -1,   244,    -1,   246,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,   256,   257,
      -1,   259,   260,   261,   262,   263,    -1,    -1,   266,   267,
     268,   269,   270,    -1,    -1,   273,   274,   275,   276,   277,
      -1,    -1,    -1,   281,   282,   283,   284,   285,    -1,   287,
     288,   289,   290,   291,    -1,    -1,    -1,    -1,    -1,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,    -1,    -1,   311,    -1,   313,   314,    -1,    -1,    -1,
      -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,   330,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   355,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,
     216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,
      -1,    -1,    -1,   329,   330,    -1,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,    -1,
     356,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,    -1,   175,    -1,   177,
     178,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,   189,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,   209,   210,    -1,    -1,    -1,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   320,   321,   322,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
     209,   210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,    -1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,   189,
      -1,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,   209,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
      -1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   175,    -1,   177,   178,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,
      -1,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,   209,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   323,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    -1,   175,    -1,   177,   178,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,
      -1,    -1,    -1,   195,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,   209,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,
     342,   343,   344,   345,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,   356,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,   175,    -1,   177,   178,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,   195,   196,    -1,    -1,    -1,   200,   201,    -1,
     203,    -1,   205,   206,   207,    -1,   209,   210,    -1,    -1,
      -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,   322,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,   342,
     343,   344,   345,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,   356,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
      -1,   175,    -1,   177,   178,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,   195,   196,    -1,    -1,    -1,   200,   201,    -1,   203,
      -1,   205,   206,   207,    -1,   209,   210,    -1,    -1,    -1,
     214,   215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,    -1,    -1,   341,   342,   343,
     344,   345,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,   356,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,
     215,   216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,
     255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,    -1,   341,   342,   343,   344,
     345,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,   356,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,
     206,   207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,
     216,   217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,   292,    -1,   294,   295,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,    -1,    -1,   341,   342,   343,   344,   345,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
     356,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,
     207,    -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,
     217,    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,
      -1,   318,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,    -1,   341,   342,   343,   344,   345,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,   356,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,
      -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
     318,    -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,   341,   342,   343,   344,   345,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,   356,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,   210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,
     219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
      -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,    -1,   341,   342,   343,   344,   345,    -1,    -1,     9,
      10,    11,    12,    13,    -1,    15,    16,   356,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,
      -1,    -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
     200,   201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,
     210,    -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,    -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,
     310,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
      -1,   341,   342,   343,   344,   345,    -1,    -1,     9,    10,
      11,    12,    13,    -1,    15,    16,   356,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
     201,    -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,
     341,   342,   343,   344,   345,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,   356,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,   201,
      -1,   203,    -1,   205,   206,   207,    -1,    -1,   210,    -1,
      -1,    -1,   214,   215,   216,   217,    -1,   219,    -1,    -1,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
       0,     1,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,    -1,
     282,    21,    -1,    -1,   286,    68,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   309,   310,   311,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
     322,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,     1,    -1,    -1,    -1,    -1,    -1,   341,
     342,   343,   344,   345,    -1,    13,    -1,    -1,    -1,    89,
      90,    -1,    20,    -1,   356,    -1,    -1,    -1,    26,    -1,
      -1,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,   126,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,   189,
      -1,   119,    -1,    -1,    -1,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,   213,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,   159,    -1,    -1,    -1,   163,    -1,    -1,   238,    -1,
     240,    -1,    -1,   243,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    -1,   252,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,   201,    -1,   203,    -1,   205,   206,   207,
      -1,    -1,    -1,    -1,    -1,    -1,   329,   330,    -1,   332,
     333,   219,   335,   336,   337,   338,   339,   340,    -1,    -1,
      -1,    -1,    -1,   346,   347,   348,   349,   350,   351,    -1,
     353,   354,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,
     248,   321,   250,   323,    -1,    -1,   326,    -1,   328,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,     1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,   341,   342,   343,   344,   345,    52,    -1,
      -1,    55,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    -1,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    68,
     104,    -1,   106,   107,    -1,   109,   110,   111,   112,   113,
      -1,    -1,   116,   117,   118,    -1,   120,   121,    -1,   123,
     124,   125,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,   151,   152,    -1,
      -1,    -1,    -1,    -1,   158,    -1,   160,   161,   162,    -1,
     164,   165,   166,   167,   168,   169,    -1,   171,   172,   173,
     174,    -1,   176,   177,    -1,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,   190,   191,   192,    -1,
     194,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,   226,    -1,   228,   229,   230,    -1,    -1,   233,
     234,   235,    -1,   237,    21,   239,    -1,    -1,   242,    -1,
     244,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   256,   257,    -1,   259,   260,   261,   262,   263,
      -1,    -1,   266,   267,   268,   269,   270,    54,    -1,   273,
     274,   275,   276,   277,    -1,    -1,    -1,   281,   282,   283,
     284,   285,    -1,   287,   288,   289,   290,   291,    -1,    -1,
      -1,    -1,    -1,   297,   298,   299,   300,   301,   302,   303,
      -1,    -1,    89,    90,   308,    -1,    -1,   311,    -1,   313,
     314,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   328,    -1,   330,    -1,    -1,    -1,
      -1,    -1,    21,    -1,     0,     1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,   143,    -1,    -1,    -1,
     329,   330,    -1,   332,   333,    54,   335,   336,   337,   338,
     339,   340,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,
     349,   350,   351,   170,   353,   354,    -1,    -1,    54,    -1,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,   189,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    89,    90,    -1,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,   240,   143,    -1,   243,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,    -1,    -1,    -1,   170,    -1,   195,    -1,    -1,   198,
      -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,    68,    -1,   189,   213,    -1,    -1,    -1,    -1,   195,
     317,    -1,   198,    -1,   321,    -1,   323,    -1,    -1,   326,
      -1,   328,    -1,   209,    -1,    -1,    -1,   213,    68,   238,
      -1,   240,    -1,    -1,   243,    -1,    -1,    26,    -1,    -1,
      29,    -1,    -1,   252,   293,    34,    -1,    36,    -1,    -1,
      -1,    -1,   238,    -1,   240,    -1,    -1,   243,    47,    -1,
      -1,    -1,    51,    -1,    53,    -1,   252,    -1,    57,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,    68,
     329,   330,    -1,   332,   333,    -1,   335,   336,   337,   338,
     339,   340,    81,    -1,    -1,    -1,    -1,   346,   347,   348,
     349,   350,   351,    -1,   353,   354,    -1,    -1,   317,    -1,
      -1,    -1,   321,    -1,   323,    -1,    -1,   326,    -1,   328,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,
     119,   317,    -1,    -1,    -1,   321,    -1,   323,    -1,    -1,
     326,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,   154,    -1,    -1,   157,    -1,
     159,    -1,    -1,    -1,   163,    -1,    -1,   329,   330,    -1,
     332,   333,    -1,   335,   336,   337,   338,   339,   340,    -1,
      -1,    -1,    -1,   182,   346,   347,   348,   349,   350,   351,
      -1,   353,   354,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,   200,   201,    -1,   203,    -1,   205,   206,   207,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,   329,   330,    -1,   332,   333,   227,   335,
     336,   337,   338,   339,   340,    -1,    -1,   236,    -1,    -1,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,   248,
      -1,   250,   329,   330,    -1,   332,   333,    -1,   335,   336,
     337,   338,   339,   340,    -1,    -1,    -1,    -1,    -1,   346,
     347,   348,   349,   350,   351,    -1,   353,   354,    -1,   329,
     330,    -1,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,    26,    -1,    -1,    29,    -1,
      -1,     1,   311,    34,    -1,    36,    -1,   316,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    57,    27,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    41,    -1,    38,    39,
      40,    41,    47,   293,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    56,    62,    63,    64,
      65,    -1,    -1,    68,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,   329,
     330,    81,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,    -1,    92,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,    -1,    -1,    -1,   108,   114,
     115,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,   154,    -1,    26,   157,    -1,    29,    -1,
      -1,    -1,   163,    34,    -1,    36,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,    -1,   145,    47,    -1,   153,    -1,
      51,    -1,    53,   153,   159,    -1,    57,    -1,    -1,   159,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,   207,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,   196,    -1,    -1,    -1,   200,   201,    -1,   203,    -1,
     205,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,   250,
      -1,    -1,   227,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   236,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,
      -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,   154,    -1,    -1,   157,    -1,    -1,   264,
     265,    -1,   163,    -1,   264,   265,    -1,    -1,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,
     311,    -1,   282,    -1,   323,    -1,    -1,    -1,    -1,    -1,
     329,   330,    -1,   332,   333,    -1,   335,   336,   337,   338,
     339,   340,    -1,    -1,    -1,   206,   207,   346,   347,   348,
     349,   350,   351,    -1,   353,   354,    -1,    -1,   219,   315,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,
      -1,    -1,    -1,   329,   330,    -1,   332,   333,    -1,   335,
     336,   337,   338,   339,   340,   315,    -1,    -1,    -1,   250,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,   329,
     330,    -1,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,   315,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,   329,   330,    -1,   332,   333,
      -1,   335,   336,   337,   338,   339,   340,   315,    -1,    -1,
      -1,    -1,   346,   347,   348,   349,   350,   351,    -1,   353,
     354,   329,   330,    -1,   332,   333,    -1,   335,   336,   337,
     338,   339,   340,   315,    -1,    -1,    -1,    -1,   346,   347,
     348,   349,   350,   351,    -1,   353,   354,   329,   330,    -1,
     332,   333,    -1,   335,   336,   337,   338,   339,   340,   315,
      -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,   351,
      -1,   353,   354,   329,   330,    -1,   332,   333,    -1,   335,
     336,   337,   338,   339,   340,   315,    -1,    -1,    -1,    -1,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,   329,
     330,    -1,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,   315,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,   329,   330,    -1,   332,   333,
      -1,   335,   336,   337,   338,   339,   340,   315,    -1,    -1,
      -1,    -1,   346,   347,   348,   349,   350,   351,    -1,   353,
     354,   329,   330,    -1,   332,   333,    -1,   335,   336,   337,
     338,   339,   340,   315,    -1,    -1,    -1,    -1,   346,   347,
     348,   349,   350,   351,    -1,   353,   354,   329,   330,    -1,
     332,   333,    -1,   335,   336,   337,   338,   339,   340,   315,
      -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,   351,
      -1,   353,   354,   329,   330,    -1,   332,   333,    -1,   335,
     336,   337,   338,   339,   340,   315,    -1,    -1,    -1,    -1,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,   329,
     330,    -1,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,   315,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,   329,   330,    -1,   332,   333,
      -1,   335,   336,   337,   338,   339,   340,   315,    -1,    -1,
      -1,    -1,   346,   347,   348,   349,   350,   351,    -1,   353,
     354,   329,   330,    -1,   332,   333,    -1,   335,   336,   337,
     338,   339,   340,    -1,    -1,   317,    -1,    -1,   346,   347,
     348,   349,   350,   351,    -1,   353,   354,   329,   330,    -1,
     332,   333,    -1,   335,   336,   337,   338,   339,   340,    -1,
      -1,    -1,    -1,   319,   346,   347,   348,   349,   350,   351,
      -1,   353,   354,   329,   330,    -1,   332,   333,    -1,   335,
     336,   337,   338,   339,   340,    -1,    -1,    -1,    -1,   319,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,   329,
     330,    -1,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,    -1,    -1,    -1,    -1,   319,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,   329,   330,    -1,   332,   333,
      -1,   335,   336,   337,   338,   339,   340,    -1,    -1,    -1,
      -1,   319,   346,   347,   348,   349,   350,   351,    -1,   353,
     354,   329,   330,    -1,   332,   333,    -1,   335,   336,   337,
     338,   339,   340,    -1,    -1,    -1,    -1,   319,   346,   347,
     348,   349,   350,   351,    -1,   353,   354,   329,   330,    -1,
     332,   333,    -1,   335,   336,   337,   338,   339,   340,    -1,
      -1,    -1,    -1,   319,   346,   347,   348,   349,   350,   351,
      -1,   353,   354,   329,   330,    -1,   332,   333,    -1,   335,
     336,   337,   338,   339,   340,    -1,    -1,    -1,    -1,   319,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,   329,
     330,    -1,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,   323,   353,   354,    -1,    -1,    -1,   329,   330,
      -1,   332,   333,    -1,   335,   336,   337,   338,   339,   340,
      -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,
     351,   323,   353,   354,    -1,    -1,    -1,   329,   330,    -1,
     332,   333,    -1,   335,   336,   337,   338,   339,   340,    -1,
      -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,   351,
     323,   353,   354,    -1,    -1,    -1,   329,   330,    -1,   332,
     333,    -1,   335,   336,   337,   338,   339,   340,    -1,    -1,
      -1,    -1,    -1,   346,   347,   348,   349,   350,   351,   323,
     353,   354,    -1,    -1,    -1,   329,   330,    -1,   332,   333,
      -1,   335,   336,   337,   338,   339,   340,    -1,    -1,    -1,
      -1,    -1,   346,   347,   348,   349,   350,   351,   323,   353,
     354,    -1,    -1,    -1,   329,   330,    -1,   332,   333,    -1,
     335,   336,   337,   338,   339,   340,    -1,    -1,    -1,    -1,
      -1,   346,   347,   348,   349,   350,   351,   323,   353,   354,
      -1,    -1,    -1,   329,   330,    -1,   332,   333,    -1,   335,
     336,   337,   338,   339,   340,    -1,    -1,    -1,    -1,    -1,
     346,   347,   348,   349,   350,   351,   323,   353,   354,    -1,
      -1,    -1,   329,   330,    -1,   332,   333,    -1,   335,   336,
     337,   338,   339,   340,    -1,    -1,    -1,    -1,    -1,   346,
     347,   348,   349,   350,   351,   323,   353,   354,    -1,    -1,
      -1,   329,   330,    -1,   332,   333,    -1,   335,   336,   337,
     338,   339,   340,    -1,    -1,    -1,    -1,    -1,   346,   347,
     348,   349,   350,   351,   323,   353,   354,    -1,    -1,    -1,
     329,   330,    -1,   332,   333,    -1,   335,   336,   337,   338,
     339,   340,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,
     349,   350,   351,   323,   353,   354,    -1,    -1,    -1,   329,
     330,    -1,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,   323,   353,   354,    -1,    -1,    -1,   329,   330,
      -1,   332,   333,    -1,   335,   336,   337,   338,   339,   340,
      -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,
     351,   323,   353,   354,    -1,    -1,    -1,   329,   330,    -1,
     332,   333,    -1,   335,   336,   337,   338,   339,   340,    -1,
      -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,   351,
     323,   353,   354,    -1,    -1,    -1,   329,   330,    -1,   332,
     333,    -1,   335,   336,   337,   338,   339,   340,    -1,    -1,
      -1,    -1,    -1,   346,   347,   348,   349,   350,   351,   323,
     353,   354,    -1,    -1,    -1,   329,   330,    -1,   332,   333,
      -1,   335,   336,   337,   338,   339,   340,    -1,    -1,    -1,
      -1,    -1,   346,   347,   348,   349,   350,   351,   323,   353,
     354,    -1,    -1,    -1,   329,   330,    -1,   332,   333,    -1,
     335,   336,   337,   338,   339,   340,    -1,    -1,    -1,    -1,
      -1,   346,   347,   348,   349,   350,   351,   323,   353,   354,
      -1,    -1,    -1,   329,   330,    -1,   332,   333,    -1,   335,
     336,   337,   338,   339,   340,    -1,    -1,    -1,    -1,    -1,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,   329,
     330,    -1,   332,   333,    -1,   335,   336,   337,   338,   339,
     340,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,    -1,    -1,   357,   329,   330,
     331,   332,   333,    -1,   335,   336,   337,   338,   339,   340,
      -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,
     351,    -1,   353,   354,   329,   330,    -1,   332,   333,    -1,
     335,   336,   337,   338,   339,   340,    -1,    -1,    -1,    -1,
      -1,   346,   347,   348,   349,   350,   351,    -1,   353,   354
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,     3,     4,   359,   382,   360,     0,     9,    10,    11,
      12,    13,    15,    16,    18,    19,    20,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    34,    36,    38,
      39,    40,    41,    45,    46,    47,    48,    49,    51,    52,
      53,    57,    58,    62,    63,    64,    66,    70,    80,    81,
      83,    92,    98,   102,   106,   111,   114,   115,   119,   135,
     136,   137,   138,   139,   142,   144,   149,   154,   156,   157,
     159,   163,   164,   175,   177,   182,   196,   200,   201,   203,
     205,   206,   207,   210,   214,   215,   216,   217,   219,   222,
     231,   232,   247,   248,   250,   255,   258,   264,   265,   272,
     278,   279,   280,   282,   286,   292,   296,   304,   309,   310,
     311,   322,   324,   334,   341,   342,   343,   344,   345,   356,
     388,   389,   404,   431,   435,   437,   438,   444,   445,   446,
     447,   450,     1,     5,     6,    13,    22,    31,    33,    35,
      42,    43,    55,    59,    61,    67,    69,    71,    72,    73,
      74,    75,    77,    78,    79,    81,    82,    84,    85,    86,
      87,    88,    91,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   104,   106,   107,   109,   110,   112,   113,   116,
     117,   118,   120,   121,   122,   123,   124,   125,   128,   129,
     130,   131,   134,   140,   141,   146,   147,   148,   149,   151,
     152,   155,   158,   159,   160,   161,   162,   164,   165,   166,
     167,   168,   169,   171,   172,   173,   174,   176,   177,   179,
     180,   181,   187,   188,   189,   190,   191,   192,   194,   197,
     198,   199,   204,   208,   209,   224,   225,   226,   228,   229,
     230,   232,   233,   234,   235,   237,   239,   242,   244,   246,
     255,   256,   257,   259,   260,   261,   262,   263,   266,   267,
     268,   269,   270,   273,   274,   275,   276,   277,   281,   282,
     283,   284,   285,   287,   288,   289,   290,   291,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     313,   314,   317,   320,   328,   330,   355,   361,   362,   363,
     364,   365,   368,   369,   370,   371,   372,   374,   376,   378,
     379,   380,   381,   385,   386,   387,   388,   403,   404,   405,
     409,   412,   413,   426,   427,   428,   430,   434,   437,   438,
     451,   452,   458,   468,     1,     1,   322,   322,     1,   318,
      81,   316,     1,   389,     1,   316,   264,   389,   389,     1,
     322,     1,   316,     1,   322,     1,   322,     1,   322,     1,
     322,     1,   322,     1,     1,   322,     1,   318,     1,   322,
       1,   322,   322,     1,   322,     1,   322,     1,   322,     1,
     389,     1,   389,     1,   264,   389,     1,   264,   389,     1,
     265,   389,     1,    81,     1,   159,     1,   389,   315,   329,
     330,   332,   333,   335,   336,   337,   338,   339,   340,   346,
     347,   348,   349,   350,   351,   353,   354,   318,   352,   401,
       1,   364,   318,   316,     1,    13,    65,    81,   159,   311,
     435,   446,   401,   456,     1,     1,    21,    54,    89,    90,
     126,   143,   170,   178,   189,   195,   209,   440,   441,   442,
     443,     1,   186,   249,   340,     1,   440,   442,     1,   186,
     316,   325,   340,   355,     1,   442,     1,    65,   264,   299,
       1,   389,    13,    65,    81,   122,   127,   149,   159,   255,
     264,     1,     1,    56,    65,    81,   108,   145,   153,   159,
     227,   236,   264,   265,   271,     1,     1,     1,     1,    31,
      81,     1,    31,    81,   440,   316,     1,   389,     1,   442,
       1,   389,     1,   440,   442,    14,     1,   442,     1,    13,
      31,    65,   153,   177,   189,   227,   236,   435,     1,   186,
     389,   440,     1,   322,     1,   389,     1,     1,   442,     1,
     322,   389,     1,   322,   389,     1,   442,     1,   389,     1,
     389,     1,   186,   325,   340,   462,     1,   389,     1,   186,
     389,     1,   442,     1,   442,   312,     1,    10,     1,    10,
       1,   389,     1,   389,     1,   440,   442,   462,    10,     1,
     389,     1,    14,   389,   316,     1,   389,     1,    14,   389,
       1,   389,     1,   389,     1,   186,   442,     1,   442,     1,
     442,     1,   442,     1,   103,   202,   390,   187,     1,   322,
     316,     1,    13,    31,    81,   159,   177,   187,   189,   210,
     264,   265,   420,   421,     1,   454,     1,   442,     1,   186,
     249,   389,     1,   186,   249,     1,     1,     1,   389,     1,
     389,     1,   389,     1,   377,     1,   322,   186,   186,   249,
       1,   462,     1,   389,   442,     1,   389,     1,   389,   442,
       1,   249,   389,     1,    13,   266,   398,   249,     1,   389,
     442,     1,   198,     1,     1,     1,   389,   440,     1,   355,
     462,     1,   389,     1,   322,     1,     1,     1,     1,   453,
       1,     1,   322,     1,   322,     1,   322,   186,     1,   389,
       1,     1,   322,     1,   442,     1,   389,     1,   187,   210,
     266,     1,   389,   442,     1,   389,   442,     1,   322,     1,
     389,     1,   389,     1,   321,   366,     1,    31,     1,   213,
     238,   240,   243,   317,   326,     1,   389,   362,   369,   328,
     362,     1,   198,     1,   317,   389,     1,   323,   362,   362,
       1,   389,   320,   389,   442,   389,   389,   462,   401,   462,
     186,   355,   462,   173,   318,   402,     1,   320,   389,   415,
     442,   320,   389,   442,   315,   315,   315,     1,    93,   158,
     162,   187,   210,   229,   230,   266,   389,   438,   442,   457,
     316,   455,   435,   436,   437,   438,   439,     1,   439,   439,
     389,   389,   389,     1,    29,    62,   150,   223,   253,   254,
       1,    36,    62,    64,   183,   184,   185,   218,   219,   220,
     241,   177,   311,   442,     1,   218,   220,   323,   389,   425,
     442,   425,   389,   425,   425,   442,   389,   435,     1,   404,
     404,   389,   389,   389,   323,     1,   389,     1,   448,     1,
     389,     1,   389,     1,   389,     1,   389,     1,   389,     1,
     389,     1,   389,     1,   389,     1,   389,   404,     1,   389,
     404,     1,   389,     1,   389,     1,   389,     1,   389,     1,
     389,     1,   389,   389,   404,   318,   252,     1,    32,   294,
     295,   389,   433,     1,   318,   318,   322,     1,   442,    54,
     315,     1,     1,     1,     8,    60,   389,   264,   389,   293,
     414,   264,   389,     1,    36,    62,   183,   184,   185,   218,
     219,   241,     1,   389,     1,   389,     1,   389,   218,     1,
     384,   293,   389,   389,    81,   159,     1,    36,   218,   219,
     241,   389,   422,   390,   390,   390,   108,   389,   389,   389,
     389,   389,   389,     1,   389,   424,     1,   218,   315,   423,
     442,     1,    13,   210,   395,   389,    60,   315,   439,     1,
     418,     1,   389,   442,   373,   375,   362,   367,   368,     1,
     362,   368,   442,   442,   442,   389,   419,   399,     1,   383,
     323,   425,   439,   389,   389,   389,     1,   404,   389,   389,
     389,   389,   321,   364,     1,   442,     1,   442,     1,   442,
       1,   442,     1,   442,   362,   389,   317,   323,   389,   320,
     389,   406,   442,   442,   389,   406,   410,   389,   318,   321,
     416,    61,   106,   187,   199,   229,   239,   363,   321,   417,
       1,   425,     1,   425,     1,   425,   445,   439,    26,    29,
      34,    36,    47,    51,    53,    57,    63,    64,    65,    66,
     153,   154,   157,   163,   206,   207,   219,   250,   460,   322,
      13,    31,   187,    13,    31,   187,   435,    68,   199,    62,
      81,   114,   115,   119,   144,   159,   182,   196,   200,   201,
     203,   205,   227,   236,   248,   311,   316,   459,   460,   461,
     467,    41,    47,    62,    63,    64,    65,    81,   114,   115,
     119,   144,   153,   159,   182,   196,   200,   201,   203,   205,
     206,   207,   219,   227,   236,   248,   264,   265,   469,   470,
     471,   323,   315,   319,   323,   323,   323,   315,   323,   315,
     323,   315,   323,   323,   323,   319,   318,   315,   323,   315,
     323,   323,   389,     1,     1,   319,   389,   432,   294,   295,
       1,   357,   319,   389,     1,   389,   439,     1,   425,     1,
     186,     1,    89,    90,   293,   293,   186,   293,   293,   389,
     389,   389,   389,   389,   389,   462,   462,   462,   462,   362,
     402,   402,   402,    13,    29,   311,   408,   315,   315,   315,
     362,   462,   442,   362,   396,   315,     1,    89,    90,   421,
     362,   327,   199,   362,   322,   392,   393,   389,   323,   315,
     315,   315,   315,   323,   321,   321,   389,   406,   407,   320,
     319,   389,   364,   364,   429,   463,   464,   465,   466,   439,
       1,   389,   362,    68,    68,    81,   159,   311,   460,    68,
     389,   401,   389,   401,   404,   389,    68,   389,    68,    81,
     159,    68,    68,    68,   389,   316,     1,   425,     1,   425,
     389,   389,   433,     1,   404,   389,   331,   319,   389,   389,
     319,     1,   319,   315,   266,   389,   389,   389,   389,   390,
     390,   389,   389,   389,   389,   392,   389,   362,     1,   323,
     390,   400,     1,   315,   323,   389,   389,   389,     1,   404,
     315,   321,   411,   319,   321,   321,   462,   401,   355,   401,
     315,   389,   389,    68,    68,   389,    68,   389,    68,   389,
      68,    68,   389,    68,   389,    68,    68,   389,   389,   389,
     323,    62,   132,   133,   323,   319,   323,   315,   449,   316,
     389,   323,   323,   323,   397,   323,    13,    31,    81,   159,
     177,   187,   189,   210,   264,   265,   391,   317,   365,   394,
       1,   390,   323,   323,   323,   315,   406,   364,   389,   462,
     355,   389,   389,   389,   389,    68,   389,    68,   389,   389,
     389,   389,   389,   323,   389,   389,    44,   323,   394,     1,
     391,     1,   404,   321,   389,   323,   389,   389,   315,   323,
     442,   323
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 223 "command.yac"
    { begin_local_scope(); ;}
    break;

  case 4:
#line 223 "command.yac"
    { end_local_scope(); /* qaaa */ ;}
    break;

  case 5:
#line 225 "command.yac"
    { (yyval).i = makenode(CMDLIST_NODE,(yyvsp[0]).i,0); /* qaab */;}
    break;

  case 6:
#line 227 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* for commands distinguishable by First tok */ /* qaac */ ;}
    break;

  case 7:
#line 231 "command.yac"
    { int p = makenode(PIPE_NODE,(yyvsp[0]).i,0);
            subtree_swap(&(yyvsp[-2]).i,&p); /* so pipe executed first */
            (yyval).i = makenode(PIPE_END_NODE,p,(yyvsp[-2]).i);
          ;}
    break;

  case 8:
#line 236 "command.yac"
    {kb_error(2330,"Piping must be to quoted string or string expression.\n",Q_ERROR); /* qaad */;}
    break;

  case 9:
#line 240 "command.yac"
    { int p = makenode(REDIRECT_NODE,(yyvsp[0]).i,0);    /* qaae */
             subtree_swap(&(yyvsp[-2]).i,&p); /* so file openedfirst */
             (yyval).i = makenode(REDIRECT_END_NODE,p,(yyvsp[-2]).i);
           ;}
    break;

  case 10:
#line 245 "command.yac"
    {
      kb_error(2331,                                   /* qaaf */
        "Redirection must be to quoted string or string expression.\n",Q_ERROR);;}
    break;

  case 11:
#line 250 "command.yac"
    { int p = makenode(REDIRECT_ERR_NODE,(yyvsp[0]).i,0);    /* qaag */
                subtree_swap(&(yyvsp[-2]).i,&p); /* so file openedfirst */
                (yyval).i = makenode(REDIRECT_ERR_END_NODE,p,(yyvsp[-2]).i);
              ;}
    break;

  case 12:
#line 255 "command.yac"
    {
        kb_error(5331,                                                  /* qaah */
          "Redirection must be to quoted string or string expression.\n",Q_ERROR);;}
    break;

  case 13:
#line 260 "command.yac"
    { int p = makenode(REDIRECTOVER_NODE,(yyvsp[0]).i,0);       /* qaai */
                subtree_swap(&(yyvsp[-2]).i,&p); /* so file openedfirst */
                (yyval).i = makenode(REDIRECT_END_NODE,p,(yyvsp[-2]).i);
              ;}
    break;

  case 14:
#line 265 "command.yac"
    {
       kb_error(2332,                                          /* qaaj */
        "Redirection must be to quoted string or string expression.\n",Q_ERROR);;}
    break;

  case 15:
#line 270 "command.yac"
    { int p = makenode(REDIRECTOVER_ERR_NODE,(yyvsp[0]).i,0);    /* qaak */
                subtree_swap(&(yyvsp[-2]).i,&p); /* so file openedfirst */
                (yyval).i = makenode(REDIRECT_ERR_END_NODE,p,(yyvsp[-2]).i);
              ;}
    break;

  case 16:
#line 275 "command.yac"
    {
        kb_error(5332,                                              /* qaal */
         "Redirection must be to quoted string or string expression.\n",Q_ERROR);;}
    break;

  case 17:
#line 281 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_BREAKPOINT_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qaam */ ;}
    break;

  case 18:
#line 284 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_BREAKPOINT_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qaan */ ;}
    break;

  case 19:
#line 287 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_BREAKPOINT_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qaao */ ;}
    break;

  case 20:
#line 290 "command.yac"
    { kb_error(5981,"Syntax: breakpoint procedurename linenumber\n",  /* qaap */
                  Q_ERROR); ;}
    break;

  case 21:
#line 293 "command.yac"
    { (yyval).i = makenode(UNSET_BREAKPOINT_NODE,0,0); /* qaaq */ ;}
    break;

  case 22:
#line 295 "command.yac"
    { (yyval).i = makenode(WHEREAMI_COMMAND_NODE,0,0); /* qaar */ ;}
    break;

  case 23:
#line 298 "command.yac"
    { kb_error(3988,"Illegal command syntax.\n", Q_ERROR); /* qaas */ ;}
    break;

  case 24:
#line 300 "command.yac"
    { (yyval).i = makenode(PROCEDURE_NODE,(yyvsp[0]).i,0); /* qaat */ ;}
    break;

  case 25:
#line 303 "command.yac"
    { int init;                                                  /* qaau */
      REAL_CHECK((yyvsp[0]));
      init = makenode(REPEAT_INIT_NODE,(yyvsp[0]).i,0);
      (yyval).i = makenode(PROCEDURE_NODE,(yyvsp[-1]).i,0);
      (yyval).i = makenode(REPEAT_NODE,init,(yyval).i); 
    ;}
    break;

  case 26:
#line 310 "command.yac"
    {
    kb_error(3600,"Missing semicolon?",Q_ERROR);                /* qaav */
           ;}
    break;

  case 27:
#line 316 "command.yac"
    { (yyval).i = makenode(PERM_PROCEDURE_NODE,(yyvsp[0]).i,0); /* qaaw */ ;}
    break;

  case 28:
#line 319 "command.yac"
    { int init;                                             /* qaax */
         REAL_CHECK((yyvsp[0]));
         init = makenode(REPEAT_INIT_NODE,(yyvsp[0]).i,0);
         (yyval).i = makenode(PERM_PROCEDURE_NODE,(yyvsp[-1]).i,0);
         (yyval).i = makenode(REPEAT_NODE,init,(yyval).i); 
       ;}
    break;

  case 29:
#line 326 "command.yac"
    {                                  /* qaay */
    kb_error(3601,"Procedure has no arguments; can be followed by repetition count.",Q_ERROR);
           ;}
    break;

  case 30:
#line 331 "command.yac"
    { kb_error(2333,"Missing semicolon?\n",Q_ERROR);  /* qaaz */ ;}
    break;

  case 31:
#line 333 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qaba */ ;}
    break;

  case 32:
#line 335 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qabb */ ;}
    break;

  case 33:
#line 337 "command.yac"
    { begin_local_scope(); ;}
    break;

  case 34:
#line 338 "command.yac"
    { end_local_scope(); (yyval).i = makenode(COMMAND_BLOCK_NODE,(yyvsp[-1]).i,0); /* qabc */ ;}
    break;

  case 35:
#line 340 "command.yac"
    { (yyval).i = makenode(NULLBLOCK_NODE,0,0); /* qabd */ ;}
    break;

  case 36:
#line 342 "command.yac"
    { kb_error(3602,"Error following '{'",Q_ERROR); /* qabe */ ;}
    break;

  case 37:
#line 346 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qabf */;}
    break;

  case 38:
#line 348 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qabg */ ;}
    break;

  case 39:
#line 350 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qabh */ ;}
    break;

  case 40:
#line 353 "command.yac"
    { int init;                        /* qabi */
       REAL_CHECK((yyvsp[0]));
       init = makenode(REPEAT_INIT_NODE,(yyvsp[0]).i,0);
       subtree_swap(&(yyvsp[-1]).i,&init);
       (yyval).i = makenode(REPEAT_NODE,init,(yyvsp[-1]).i); 
       ;}
    break;

  case 41:
#line 360 "command.yac"
    { kb_error(3603,                /* qabj */
   "Error following command block; expected ';' or repetition count or nothing.",
   Q_ERROR);
  ;}
    break;

  case 42:
#line 368 "command.yac"
    { (yyval).i = makenode(NULLCMD_NODE,0,0); /* qabk */ ;}
    break;

  case 43:
#line 369 "command.yac"
    { (yyval).i = (yyvsp[-1]).i; /* qabl */ ;}
    break;

  case 44:
#line 371 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qabm */ ;}
    break;

  case 45:
#line 373 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qabn */ ;}
    break;

  case 46:
#line 375 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qabo */ ;}
    break;

  case 47:
#line 378 "command.yac"
    { (yyval).i = makenode(CMDLIST_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qabp */ ;}
    break;

  case 48:
#line 381 "command.yac"
    { (yyval).i = makenode(CMDLIST_NODE,(yyvsp[-1]).i,(yyvsp[0]).i);  /* qabq */ ;}
    break;

  case 49:
#line 383 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(IFTEST_NODE,(yyvsp[0]).i,0); /* qabr */ ;}
    break;

  case 50:
#line 384 "command.yac"
    { (yyval).i = makenode(IF_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); ;}
    break;

  case 51:
#line 387 "command.yac"
    { kb_error(2334,"Syntax: IF rexpr THEN command [ ELSE command ]\n",Q_ERROR); /* qabs */ ;}
    break;

  case 52:
#line 389 "command.yac"
    {(yyval).i = makenode(ELSE_NODE,(yyvsp[0]).i,0); /* qabt */ ;}
    break;

  case 53:
#line 391 "command.yac"
    { (yyval).i = makenode(ELSE_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qabu */ ;}
    break;

  case 54:
#line 393 "command.yac"
    { kb_error(2335,"Illegal ELSE.  Don't use semicolon before ELSE.\n",Q_ERROR); /* qabv */ ;}
    break;

  case 55:
#line 395 "command.yac"
    { (yyval).i = makenode(SINGLE_LETTER_NODE,'?',0); /* qabw */ ;}
    break;

  case 56:
#line 400 "command.yac"
    { (yyval).i = makenode(GEOMVIEW_NODE,(yyvsp[0]).i,0); /* qabw */ ;}
    break;

  case 57:
#line 401 "command.yac"
    { (yyval).i = makenode(GEOMVIEW_TOGGLE_NODE,(yyvsp[0]).i,0); /* qabx */ ;}
    break;

  case 58:
#line 402 "command.yac"
    { (yyval).i = makenode(GEOMVIEW_TOGGLE_NODE,ON_,0); /* qaby */ ;}
    break;

  case 59:
#line 403 "command.yac"
    { kb_error(2336,"Syntax: GEOMVIEW ON|OFF or GEOMVIEW \"geomview command\"\n",Q_ERROR); /* qabz */ ;}
    break;

  case 60:
#line 406 "command.yac"
    { (yyval).i = makenode(GEOMPIPE_NODE,(yyvsp[0]).i,0); /* qaca */ ;}
    break;

  case 61:
#line 407 "command.yac"
    { (yyval).i = makenode(GEOMPIPE_TOGGLE_NODE,(yyvsp[0]).i,0); /* qacb */ ;}
    break;

  case 62:
#line 408 "command.yac"
    { (yyval).i = makenode(GEOMPIPE_TOGGLE_NODE,ON_,0); /* qacc */ ;}
    break;

  case 63:
#line 409 "command.yac"
    { kb_error(2337,"Syntax: GEOMPIPE ON|OFF or GEOMPIPE \"shell command\"\n",Q_ERROR); /* qacd */ ;}
    break;

  case 64:
#line 412 "command.yac"
    { (yyval).i = makenode(LOGFILE_NODE,(yyvsp[0]).i,0); /* qace */ ;}
    break;

  case 65:
#line 413 "command.yac"
    { (yyval).i = makenode(LOGFILE_TOGGLE_NODE,(yyvsp[0]).i,0); /* qacf */ ;}
    break;

  case 66:
#line 414 "command.yac"
    { (yyval).i = makenode(LOGFILE_TOGGLE_NODE,ON_,0); /* qacg */ ;}
    break;

  case 67:
#line 415 "command.yac"
    { kb_error(2338,"Syntax: LOGFILE ON|OFF or LOGFILE \"filename\"\n",Q_ERROR); /* qach */ ;}
    break;

  case 68:
#line 418 "command.yac"
    { (yyval).i = makenode(KEYLOGFILE_NODE,(yyvsp[0]).i,0); /* qaci */ ;}
    break;

  case 69:
#line 419 "command.yac"
    { (yyval).i = makenode(KEYLOGFILE_TOGGLE_NODE,(yyvsp[0]).i,0); /* qacj */ ;}
    break;

  case 70:
#line 420 "command.yac"
    { (yyval).i = makenode(KEYLOGFILE_TOGGLE_NODE,ON_,0); /* qack */ ;}
    break;

  case 71:
#line 421 "command.yac"
    { kb_error(2419,"Syntax: KEYLOGFILE ON|OFF or KEYLOGFILE \"filename\"\n",Q_ERROR); /* qacl */ ;}
    break;

  case 72:
#line 424 "command.yac"
    { (yyval).i = makenode( POSTSCRIPT_NODE,(yyvsp[0]).i,0); /* qacm */ ;}
    break;

  case 73:
#line 425 "command.yac"
    { kb_error(3361,"Syntax: POSTSCRIPT \"filename\"\n",Q_ERROR); /* qacn */ ;}
    break;

  case 74:
#line 428 "command.yac"
    { (yyval).i = makenode( BINARY_OFF_FILE_NODE,(yyvsp[0]).i,0); /* qaco */ ;}
    break;

  case 75:
#line 429 "command.yac"
    { kb_error(4339,"Syntax: BINARY_OFF_FILE \"filename\"\n",Q_ERROR); /* qacp */ ;}
    break;

  case 76:
#line 432 "command.yac"
    { (yyval).i = makenode( OOGLFILE_NODE,(yyvsp[0]).i,0); /* qacq */ ;}
    break;

  case 77:
#line 433 "command.yac"
    { kb_error(2339,"Syntax: OOGLFILE \"filename\"\n",Q_ERROR); /* qacr */  ;}
    break;

  case 78:
#line 436 "command.yac"
    { (yyval).i = makenode(HISTORY_NODE,0,0); /* qacs */ ;}
    break;

  case 79:
#line 437 "command.yac"
    { kb_error(2340,"Syntax: HISTORY   (no arguments)\n",Q_ERROR); /* qact */ ;}
    break;

  case 80:
#line 440 "command.yac"
    { if ( in_function == 2 )
                         kb_error(4567,"Must return a value from a function.\n",Q_ERROR);
                       else
                         (yyval).i = makenode(RETURN_NODE,0,0); /* qacu */ 
                     ;}
    break;

  case 81:
#line 445 "command.yac"
    { if ( in_function ==1 )
                               kb_error(4568,"Cannot return a value from a procedure.\n",Q_ERROR);
                             else 
                               REAL_CHECK((yyvsp[0])); (yyval).i = makenode(RETURN_NODE,(yyvsp[0]).i,0); /* qacv */ 
                           ;}
    break;

  case 82:
#line 450 "command.yac"
    { kb_error(2341,"Syntax: RETURN [expr] \n",Q_ERROR); /* qacw */ ;}
    break;

  case 83:
#line 453 "command.yac"
    { (yyval).i = makenode(BREAK_NODE,1,0); /* qacx */ ;}
    break;

  case 84:
#line 454 "command.yac"
    { (yyval).i = makenode(BREAK_NODE,(yyvsp[0]).i,0); /* qacy */ ;}
    break;

  case 85:
#line 455 "command.yac"
    { kb_error(2342,"Syntax: BREAK   or  BREAK integer   (to break multiple levels)\n",Q_ERROR); /* qacz */;}
    break;

  case 86:
#line 458 "command.yac"
    { (yyval).i = makenode(CONTINUE_NODE,1,0); /* qada */ ;}
    break;

  case 87:
#line 459 "command.yac"
    { (yyval).i = makenode(CONTINUE_NODE,(yyvsp[0]).i,0); /* qadb */ ;}
    break;

  case 88:
#line 460 "command.yac"
    { kb_error(2343,"Syntax: CONTINUE   or  CONTINUE integer   (to continue in higher level loop)\n",Q_ERROR); /* qadc */ ;}
    break;

  case 89:
#line 463 "command.yac"
    { (yyval).i = makenode(SINGLE_LETTER_NODE,'g',0); /* qadd */;}
    break;

  case 90:
#line 465 "command.yac"
    { int init,count,g;          /* qade */
                          real_val = (yyvsp[0]).i;
                          count = makenode(PUSHCONST_NODE,0,0);
                          init = makenode(REPEAT_INIT_NODE,count,0);
                          g = makenode(SINGLE_LETTER_NODE,'g',0);
                          (yyval).i = makenode(REPEAT_NODE,init,g); 
                        ;}
    break;

  case 91:
#line 473 "command.yac"
    { int init,g;                              /* qadf */
                             REAL_CHECK((yyvsp[0]));
                             init = makenode(REPEAT_INIT_NODE,(yyvsp[0]).i,0);
                             g = makenode(SINGLE_LETTER_NODE,'g',0);
                             (yyval).i = makenode(REPEAT_NODE,init,g); 
                           ;}
    break;

  case 92:
#line 480 "command.yac"
    { kb_error(3666,"Syntax: GO count\n",Q_ERROR); /* qadg */ ;}
    break;

  case 93:
#line 483 "command.yac"
    { REAL_CHECK((yyvsp[0]));                                   /* qadh */
           (yyval).i = makenode(WHILE_TOP_NODE,(yyvsp[0]).i,0); ;}
    break;

  case 94:
#line 485 "command.yac"
    { (yyval).i = (yyvsp[-1]).i; 
         ;}
    break;

  case 95:
#line 488 "command.yac"
    { (yyval).i = makenode(WHILE_END_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qadi */ ;}
    break;

  case 96:
#line 490 "command.yac"
    { kb_error(2344,"Syntax: WHILE rexpr DO command\n",Q_ERROR); /* qadj */ ;}
    break;

  case 97:
#line 494 "command.yac"
    { (yyval).i = makenode(DO_ENTRY_NODE,0,0); /* qadk */ ;}
    break;

  case 98:
#line 495 "command.yac"
    { (yyval).i = makenode(DO_TOP_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qadl */ ;}
    break;

  case 99:
#line 499 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(DO_END_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qadm */ ;}
    break;

  case 100:
#line 502 "command.yac"
    { kb_error(4345,"Missing WHILE at end of DO statement.\n",Q_ERROR); /* qadn */ ;}
    break;

  case 101:
#line 504 "command.yac"
    { kb_error(2345,"Syntax: DO command WHILE expr\n",Q_ERROR); /* qado */ ;}
    break;

  case 102:
#line 508 "command.yac"
    { (yyval).i = makenode(FOR_ENTRY_NODE,(yyvsp[0]).i,0); /* qadp */  ;}
    break;

  case 103:
#line 511 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(FOR_HEAD_NODE,(yyvsp[-2]).i,(yyvsp[-1]).i); /* qadp */ ;}
    break;

  case 104:
#line 513 "command.yac"
    { int tmp;                                     /* qadq */
              real_val = 1;
              tmp = makenode(PUSHCONST_NODE,0,0);
              (yyval).i = makenode(FOR_HEAD_NODE,(yyvsp[-1]).i,tmp); 
            ;}
    break;

  case 105:
#line 519 "command.yac"
    { (yyval).i = makenode(FOR_TOP_NODE,(yyvsp[-2]).i,(yyvsp[-1]).i); /* qadr */ ;}
    break;

  case 106:
#line 520 "command.yac"
    { int  tmp = makenode(NULLCMD_NODE,0,0);           /* qads */
                          (yyval).i = makenode(FOR_TOP_NODE,(yyvsp[-1]).i,tmp);
               ;}
    break;

  case 107:
#line 524 "command.yac"
    { (yyval).i = makenode(FOR_END_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qadt */ ;}
    break;

  case 108:
#line 526 "command.yac"
    { kb_error(2514,                                  /* qadu */
        "Syntax: FOR ( command ; rexpr ; command ) command\n",Q_ERROR); ;}
    break;

  case 109:
#line 529 "command.yac"
    { kb_error(3668,                                /* qadv */
        "Error in initializer of FOR loop.\n",Q_ERROR); ;}
    break;

  case 110:
#line 532 "command.yac"
    { kb_error(3669,                             /* qadw */
        "Error in test expression of FOR loop.\n",Q_ERROR);  ;}
    break;

  case 111:
#line 535 "command.yac"
    { kb_error(3670,                            /* qadx */
        "Error in increment part of FOR loop.\n",Q_ERROR); ;}
    break;

  case 114:
#line 543 "command.yac"
    { (yyval).i = makenode(SINGLE_LETTER_NODE,(yyvsp[0]).i,0); /* qady */ ;}
    break;

  case 115:
#line 545 "command.yac"
    { (yyval).i = makenode(SINGLE_REDEFD_NODE,(yyvsp[0]).i,0); /* qadz */ ;}
    break;

  case 116:
#line 548 "command.yac"
    { int init;                                                          /* qaea */
       REAL_CHECK((yyvsp[0]));
       init = makenode(REPEAT_INIT_NODE,(yyvsp[0]).i,0);
       (yyval).i = makenode(SINGLE_REDEFD_NODE,(yyvsp[-1]).i,0);
       (yyval).i = makenode(REPEAT_NODE,init,(yyval).i); 
     ;}
    break;

  case 117:
#line 555 "command.yac"
    { kb_error(3671,                       /* qaeb */
     "Expected repetition count after redefined single letter.\n",Q_ERROR); ;}
    break;

  case 118:
#line 558 "command.yac"
    { (yyval).i = makenode(SINGLE_LETTER_NODE,(yyvsp[0]).i,0); /* qaec */ ;}
    break;

  case 119:
#line 561 "command.yac"
    { int init;                                          /* qaed */
         REAL_CHECK((yyvsp[0]));
         init = makenode(REPEAT_INIT_NODE,(yyvsp[0]).i,0);
         (yyval).i = makenode(SINGLE_LETTER_NODE,(yyvsp[-1]).i,0);
         (yyval).i = makenode(REPEAT_NODE,init,(yyval).i); 
       ;}
    break;

  case 120:
#line 568 "command.yac"
    { kb_error(3672,                  /* qaee */
     "Expected repetition count after single letter command.\n",Q_ERROR); ;}
    break;

  case 121:
#line 572 "command.yac"
    {                                                             /* qaef */
           REAL_CHECK((yyvsp[0]));
           assigntype = ASSIGN_OP;
           switch ((yyvsp[-1]).i)
             { case 't': (yyval).i = makenode(EDGEWEED_NODE,(yyvsp[0]).i,0); break;
               case 'w': (yyval).i = makenode(AREAWEED_NODE,(yyvsp[0]).i,0); break;
               case 'l': (yyval).i = makenode(EDGEDIVIDE_NODE,(yyvsp[0]).i,0); break;
               case 'm': (yyval).i = makenode(SET_SCALE_NODE,(yyvsp[0]).i,0); break;
               case 'n': (yyval).i = makenode(NOTCH_NODE,(yyvsp[0]).i,0); break;
               case 'j': (yyval).i = makenode(JIGGLE_NODE,(yyvsp[0]).i,0); break;
               case 'G': (yyval).i = makenode(SET_GRAVITY_NODE,(yyvsp[0]).i,0); break;
               case 'P': (yyval).i = makenode(INVOKE_P_MENU_NODE,(yyvsp[0]).i,0); break;
               case 'M': (yyval).i = makenode(SET_MODEL_NODE,(yyvsp[0]).i,0); break;
               case 'y': (yyval).i = makenode(TORDUP_NODE,(yyvsp[0]).i,0); break;
               case 'K': (yyval).i = makenode(SKINNY_NODE,(yyvsp[0]).i,0); break;
               case 'k': (yyval).i = makenode(SET_GAP_CONSTANT_NODE,(yyvsp[0]).i,0); break;
               case 'p': (yyval).i = makenode(SET_AMBIENT_PRESSURE_NODE,(yyvsp[0]).i,0); break;
               case 'q': (yyval).i = makenode(QUIT_NODE,(yyvsp[0]).i,0); break;
               default: kb_error(1884,"Extra expression after single letter command.\n",Q_ERROR);
             }
        ;}
    break;

  case 122:
#line 594 "command.yac"
    { kb_error(3660,               /* qaeg */
     "Expected argument after single letter command.\n",Q_ERROR); ;}
    break;

  case 123:
#line 599 "command.yac"
    { (yyval).i = makenode(NOP_NODE,0,0); /* qaeh */ ;}
    break;

  case 124:
#line 601 "command.yac"
    { (yyval).i = makenode(READ_NODE,(yyvsp[0]).i,0); /* qaei */ ;}
    break;

  case 125:
#line 603 "command.yac"
    { kb_error(2346,"Syntax: READ \"filename\"   (need quoted string or string expression)\n",Q_ERROR); /* qaej */;}
    break;

  case 126:
#line 608 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(TRANSFORM_DEPTH_NODE,(yyvsp[0]).i,0); /* qaek */ ;}
    break;

  case 127:
#line 611 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(TRANSFORM_DEPTH_NODE,(yyvsp[0]).i,0); /* qael */ ;}
    break;

  case 128:
#line 613 "command.yac"
    { kb_error(2348,"Syntax: TRANSFORM_DEPTH := integer\n",Q_ERROR); /* qaem */ ;}
    break;

  case 129:
#line 616 "command.yac"
    { (yyval).i = makenode(TRANSFORM_EXPR_NODE,(yyvsp[0]).i,0); /* qaen */ ;}
    break;

  case 130:
#line 618 "command.yac"
    { (yyval).i = makenode(TRANSFORM_EXPR_NODE,(yyvsp[0]).i,0); /* qaeo */;}
    break;

  case 131:
#line 620 "command.yac"
    { kb_error(2349,"Syntax: TRANSFORM_EXPR := string    (quoted string or string expression) \n",Q_ERROR); /* qaep */;}
    break;

  case 132:
#line 623 "command.yac"
    { (yyval).i = makenode(SYSTEM_NODE,(yyvsp[0]).i,0); /* qaeq */ ;}
    break;

  case 133:
#line 625 "command.yac"
    { kb_error(2350,"Syntax: SYSTEM \"command\"   (need quoted string or string expression)\n",Q_ERROR); /* qaer */ ;}
    break;

  case 134:
#line 628 "command.yac"
    { (yyval).i = makenode(EXEC_NODE,(yyvsp[0]).i,0); /* qaes */ ;}
    break;

  case 135:
#line 630 "command.yac"
    { kb_error(2351,"Syntax: EXEC string (need quoted string or string expression)\n",Q_ERROR); /* qaet */;}
    break;

  case 136:
#line 633 "command.yac"
    { (yyval).i = makenode(PARALLEL_EXEC_NODE,(yyvsp[0]).i,0); /* qaeu */ ;}
    break;

  case 137:
#line 635 "command.yac"
    { kb_error(3115,"Syntax: PARALLEL_EXEC string (need quoted string or string expression)\n",Q_ERROR); /* qaev */ ;}
    break;

  case 138:
#line 639 "command.yac"
    { REAL_CHECK((yyvsp[-2])); (yyval).i = makenode(TASK_EXEC_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qaew */ ;}
    break;

  case 139:
#line 641 "command.yac"
    { kb_error(3119,"Syntax: TASK_EXEC nodenumber, string (need quoted string or string expression)\n",Q_ERROR); /* qaex */ ;}
    break;

  case 140:
#line 644 "command.yac"
    { (yyval).i = makenode(CHDIR_NODE,(yyvsp[0]).i,0); /* qaey */ ;}
    break;

  case 141:
#line 646 "command.yac"
    { kb_error(2352,"Syntax: CHDIR \"command\"   (need quoted string or string expression)\n",Q_ERROR); /* qaez */;}
    break;

  case 142:
#line 649 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(METIS_NODE,(yyvsp[0]).i,0); /* qafa */ ;}
    break;

  case 143:
#line 651 "command.yac"
    { kb_error(3236,"Syntax: METIS numparts\n",Q_ERROR); /* qafb */ ;}
    break;

  case 144:
#line 653 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(KMETIS_NODE,(yyvsp[0]).i,0); /* qafc */ ;}
    break;

  case 145:
#line 655 "command.yac"
    { kb_error(2354,"Syntax: KMETIS numparts\n",Q_ERROR); /* qafd */ ;}
    break;

  case 146:
#line 658 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(METIS_READJUST_NODE,(yyvsp[0]).i,0); /* qafe */;}
    break;

  case 147:
#line 660 "command.yac"
    { kb_error(3237,"Syntax: METIS_READJUST numparts\n",Q_ERROR); /* qaff */ ;}
    break;

  case 148:
#line 662 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(BODY_METIS_NODE,(yyvsp[0]).i,0); /* qafg */ ;}
    break;

  case 149:
#line 664 "command.yac"
    { kb_error(3775,"Syntax: BODY_METIS numparts\n",Q_ERROR); /* qafh */ ;}
    break;

  case 150:
#line 666 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(OMETIS_NODE,(yyvsp[0]).i,0); /* qafi */;}
    break;

  case 151:
#line 668 "command.yac"
    { (yyval).i = makenode(OMETIS_NODE,0,0); /* qafj */ ;}
    break;

  case 152:
#line 670 "command.yac"
    { kb_error(2355,"Syntax: OMETIS   or   OMETIS expr\n",Q_ERROR); /* qafk */ ;}
    break;

  case 153:
#line 673 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(EDGEWEED_NODE,(yyvsp[0]).i,0); /* qafl */ ;}
    break;

  case 154:
#line 675 "command.yac"
    { kb_error(2356,"Syntax: EDGEWEED minlength\n",Q_ERROR); /* qafm */ ;}
    break;

  case 155:
#line 678 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(AREAWEED_NODE,(yyvsp[0]).i,0); /* qafn */ ;}
    break;

  case 156:
#line 680 "command.yac"
    { kb_error(2357,"Syntax: AREAWEED minarea\n",Q_ERROR); /* qafo */ ;}
    break;

  case 157:
#line 683 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(EDGEDIVIDE_NODE,(yyvsp[0]).i,0);  /* qafp */ ;}
    break;

  case 158:
#line 685 "command.yac"
    { kb_error(2358,"Syntax: EDGE_DIVIDE maxlength\n",Q_ERROR); /* qafq */ ;}
    break;

  case 159:
#line 689 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(LANCZOS_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i);  /* qafr */ ;}
    break;

  case 160:
#line 691 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(LANCZOS_NODE,(yyvsp[0]).i,0); /* qafs */ ;}
    break;

  case 161:
#line 694 "command.yac"
    { kb_error(2359,"Syntax: lanczos rexpr   or   lanczos(expr,count) \n",Q_ERROR); /* qaft */;}
    break;

  case 162:
#line 698 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(RITZ_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); /* qafu */ ;}
    break;

  case 163:
#line 700 "command.yac"
    { kb_error(2360,"Syntax: RITZ(probe_value, number_of_eigenvalues)\n",Q_ERROR); /* qafv */ ;}
    break;

  case 164:
#line 704 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1]));   (yyval).i = makenode(EIGENPROBE_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); /* qafw */ ;}
    break;

  case 165:
#line 706 "command.yac"
    {REAL_CHECK((yyvsp[0]));  (yyval).i = makenode(EIGENPROBE_NODE,(yyvsp[0]).i,0); /* qafx */ ;}
    break;

  case 166:
#line 707 "command.yac"
    { kb_error(2361,
 "Syntax: EIGENPROBE probe_value   or  EIGENPROBE(probe_value, iterationmax)\n",Q_ERROR); /* qafy */ ;}
    break;

  case 167:
#line 711 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(MOVE_NODE,(yyvsp[0]).i,0); /* qafz */;}
    break;

  case 168:
#line 712 "command.yac"
    { kb_error(2362,"Syntax: MOVE stepsize\n",Q_ERROR); /* qaga */ ;}
    break;

  case 169:
#line 715 "command.yac"
    { (yyval).i = makenode(HESSIAN_SADDLE_NODE,0,0); ;}
    break;

  case 170:
#line 716 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(HESSIAN_SADDLE_NODE,(yyvsp[0]).i,0); /* qagb */;}
    break;

  case 171:
#line 717 "command.yac"
    { kb_error(2363,"Syntax: SADDLE   or   SADDLE maxstepsize\n",   /* qagc */
   Q_ERROR); ;}
    break;

  case 172:
#line 721 "command.yac"
    { (yyval).i = makenode(HESSIAN_SEEK_NODE,0,0); /* qagd */ ;}
    break;

  case 173:
#line 722 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(HESSIAN_SEEK_NODE,(yyvsp[0]).i,0); /* qage */ ;}
    break;

  case 174:
#line 723 "command.yac"
    { kb_error(2364,                                   /* qagf */
   "Syntax: HESSIAN_SEEK   or   HESSIAN_SEEK maxstepsize\n", Q_ERROR); /* qagg */ ;}
    break;

  case 175:
#line 727 "command.yac"
    { (yyval).i = makenode(COUNTS_NODE,0,0); /* qagh */ ;}
    break;

  case 176:
#line 729 "command.yac"
    { (yyval).i = makenode(SINGLE_LETTER_NODE,'q',0); /* qagi */ ;}
    break;

  case 177:
#line 730 "command.yac"
    { (yyval).i = makenode(QUIT_NODE,(yyvsp[0]).i,0);   /* qagj */ ;}
    break;

  case 178:
#line 732 "command.yac"
    { (yyval).i = makenode(SUBCOMMAND_NODE,'q',0); /* qagk */ ;}
    break;

  case 179:
#line 734 "command.yac"
    { (yyval).i = makenode(ABORT_NODE,'q',0); /* qagl */ ;}
    break;

  case 180:
#line 736 "command.yac"
    { (yyval).i = makenode(DETORUS_NODE,'q',0); /* qagm */ ;}
    break;

  case 181:
#line 738 "command.yac"
    { (yyval).i = makenode(MAKE_THREAD_LISTS_NODE,'q',0); /* qagn */ ;}
    break;

  case 182:
#line 740 "command.yac"
    { (yyval).i = makenode(SIMPLEX_TO_FE_NODE,'q',0); /* qago */ ;}
    break;

  case 183:
#line 742 "command.yac"
    { (yyval).i = makenode(REORDER_STORAGE_NODE,0,0); /* qagp */ ;}
    break;

  case 184:
#line 744 "command.yac"
    { (yyval).i = makenode(RENUMBER_ALL_NODE,0,0); /* qagq */  ;}
    break;

  case 185:
#line 746 "command.yac"
    { (yyval).i = makenode(DUMP_MEMLIST_NODE,0,0); /* qagr */ ;}
    break;

  case 186:
#line 748 "command.yac"
    { (yyval).i = makenode(FREE_DISCARDS_NODE,0,0); /* qags */ ;}
    break;

  case 187:
#line 750 "command.yac"
    { (yyval).i = makenode(REPARTITION_NODE,0,0); /* qagt */ ;}
    break;

  case 188:
#line 752 "command.yac"
    { (yyval).i = makenode(EXTRAPOLATE_NODE,0,0); /* qagu */  ;}
    break;

  case 189:
#line 754 "command.yac"
    { (yyval).i = makenode(REBODY_NODE,0,0); /* qagv */ ;}
    break;

  case 190:
#line 757 "command.yac"
    { (yyval).i = makenode(ZOOM_NODE,0,0); /* qagx */ ;}
    break;

  case 191:
#line 758 "command.yac"
    { REAL_CHECK((yyvsp[-1])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(ZOOM_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qagy */ ;}
    break;

  case 192:
#line 759 "command.yac"
    { kb_error(2365,"Syntax: ZOOM [ vertex_id radius ]\n",Q_ERROR);  /* qagz */ ;}
    break;

  case 193:
#line 762 "command.yac"
    { (yyval).i = makenode(BURCHARD_NODE,(yyvsp[0]).i,0); /* qaha */;}
    break;

  case 194:
#line 765 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(LAGRANGE_NODE,(yyvsp[0]).i,0); /* qahb */ ;}
    break;

  case 195:
#line 766 "command.yac"
    { kb_error(2366,"Syntax: LAGRANGE order\n",Q_ERROR); /* qahc */;}
    break;

  case 196:
#line 769 "command.yac"
    { (yyval).i = makenode(SHOW_VOL_NODE,0,0); /* qahd */;}
    break;

  case 197:
#line 770 "command.yac"
    { (yyval).i = makenode(PAUSE_NODE,0,0); /* qahe */ ;}
    break;

  case 198:
#line 771 "command.yac"
    { (yyval).i = makenode(PRINT_PROFILING_NODE,0,0); /* qahf */ ;}
    break;

  case 199:
#line 772 "command.yac"
    { (yyval).i = makenode(RESET_PROFILING_NODE,0,0); /* qahg */ ;}
    break;

  case 200:
#line 773 "command.yac"
    { (yyval).i = makenode(FLUSH_COUNTS_NODE,0,0); /* qahh */ ;}
    break;

  case 201:
#line 774 "command.yac"
    { (yyval).i = makenode(RESET_COUNTS_NODE,0,0); /* qahi */ ;}
    break;

  case 202:
#line 775 "command.yac"
    { (yyval).i = makenode(CHECK_NODE,0,0); /* qahj */ ;}
    break;

  case 203:
#line 776 "command.yac"
    { (yyval).i = makenode(SHOWQ_NODE,0,0); /* qahk */ ;}
    break;

  case 204:
#line 777 "command.yac"
    { (yyval).i = makenode(LONG_JIGGLE_NODE,0,0); /* qahl */ ;}
    break;

  case 205:
#line 778 "command.yac"
    { (yyval).i = makenode(RAW_VERAVG_NODE,0,0); /* qahm */ ;}
    break;

  case 206:
#line 779 "command.yac"
    { (yyval).i = makenode(RAWEST_VERAVG_NODE,0,0); /* qahn */ ;}
    break;

  case 207:
#line 780 "command.yac"
    { (yyval).i = makenode(ALICE_NODE,0,0); /* qaho */ ;}
    break;

  case 208:
#line 781 "command.yac"
    { (yyval).i = makenode(LINEAR_NODE,0,0); /* qahp */ ;}
    break;

  case 209:
#line 782 "command.yac"
    { (yyval).i = makenode(QUADRATIC_NODE,0,0); /* qahq */ ;}
    break;

  case 210:
#line 783 "command.yac"
    { (yyval).i = makenode(STABILITY_TEST_NODE,0,0); /* qahr */ ;}
    break;

  case 211:
#line 784 "command.yac"
    { (yyval).i = makenode(UTEST_NODE,0,0); /* qahs */ ;}
    break;

  case 212:
#line 785 "command.yac"
    { (yyval).i = makenode(SHELL_NODE,0,0); /* qaht */ ;}
    break;

  case 213:
#line 786 "command.yac"
    { (yyval).i = makenode(CONVERT_TO_QUANTS_NODE,0,0); /* qahu */ ;}
    break;

  case 214:
#line 787 "command.yac"
    { (yyval).i = makenode(METIS_FACTOR_NODE,0,0); /* qahv */ ;}
    break;

  case 215:
#line 788 "command.yac"
    { (yyval).i = makenode(DIRICHLET_NODE,0,0); /* qahw */ ;}
    break;

  case 216:
#line 789 "command.yac"
    { (yyval).i = makenode(DIRICHLET_SEEK_NODE,0,0); /* qahx */ ;}
    break;

  case 217:
#line 790 "command.yac"
    { (yyval).i = makenode(SOBOLEV_NODE,0,0); /* qahy */ ;}
    break;

  case 218:
#line 791 "command.yac"
    { (yyval).i = makenode(SOBOLEV_SEEK_NODE,0,0); /* qahz */ ;}
    break;

  case 219:
#line 792 "command.yac"
    { (yyval).i = makenode(HESSIAN_NODE,0,0); /* qaia */ ;}
    break;

  case 220:
#line 793 "command.yac"
    { (yyval).i = makenode(HESSIAN_MENU_NODE,0,0); /* qaib */ ;}
    break;

  case 221:
#line 794 "command.yac"
    { (yyval).i = makenode(SINGLE_LETTER_NODE,'h',0); /* qaic */ ;}
    break;

  case 222:
#line 795 "command.yac"
    { (yyval).i = makenode(RECALC_NODE,0,0); /* qaid */ ;}
    break;

  case 223:
#line 796 "command.yac"
    { (yyval).i = makenode(TOPINFO_NODE,0,0); /* qaie */  ;}
    break;

  case 224:
#line 797 "command.yac"
    { (yyval).i = makenode(BOTTOMINFO_NODE,0,0); /* qaif */ ;}
    break;

  case 225:
#line 798 "command.yac"
    { (yyval).i = makenode(LIST_ATTRIBUTES_NODE,0,0); /* qaig */ ;}
    break;

  case 226:
#line 799 "command.yac"
    { (yyval).i = makenode(LIST_PROCS_NODE,0,0); /* qaih */ ;}
    break;

  case 227:
#line 801 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(LIST_BOUNDARY_NODE,(yyvsp[0]).i,0); /* qaij */ ;}
    break;

  case 228:
#line 803 "command.yac"
    { int k = makenode(PUSHCONST_NODE,(yyvsp[0]).i,0);        /* qaik */ 
              (yyval).i = makenode(LIST_BOUNDARY_NODE,k,0);
              list[(yyval).i].op1.bdry_id = (yyvsp[0]).i;
            ;}
    break;

  case 229:
#line 808 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(LIST_CONSTRAINT_NODE,(yyvsp[0]).i,0); /* qail */;}
    break;

  case 230:
#line 810 "command.yac"
    { int k = makenode(PUSHCONST_NODE,(yyvsp[0]).i,0);            /* qaim */ 
              (yyval).i = makenode(LIST_CONSTRAINT_NODE,k,0);
              list[(yyval).i].op1.con_id = (yyvsp[0]).i;
            ;}
    break;

  case 231:
#line 815 "command.yac"
    { (yyval).i = makenode(LIST_QUANTITY_NODE,(yyvsp[0]).i,0);  /* qain */ ;}
    break;

  case 232:
#line 817 "command.yac"
    { (yyval).i = makenode(LIST_QUANTITY_NODE,(yyvsp[0]).i,0);  /* qaio */ ;}
    break;

  case 233:
#line 819 "command.yac"
    { (yyval).i = makenode(LIST_METHOD_INSTANCE_NODE,(yyvsp[0]).i,0);  /* qaip */ ;}
    break;

  case 234:
#line 821 "command.yac"
    { (yyval).i = makenode(LIST_METHOD_INSTANCE_NODE,(yyvsp[0]).i,0);  /* qaiq */;}
    break;

  case 235:
#line 822 "command.yac"
    { (yyval).i = makenode(CLOSE_SHOW_NODE,0,0); /* qair */ ;}
    break;

  case 236:
#line 823 "command.yac"
    { (yyval).i = makenode((yyvsp[-1]).i,(yyvsp[0]).i,0); /* qais */ ;}
    break;

  case 237:
#line 824 "command.yac"
    { (yyval).i = makenode((yyvsp[0]).i,ON_,0); /* qait */ ;}
    break;

  case 238:
#line 825 "command.yac"
    { (yyval).i = makenode(OPTIMIZE_NODE,(yyvsp[0]).i,0); /* qaiu */ ;}
    break;

  case 239:
#line 826 "command.yac"
    { (yyval).i = makenode(OPTIMIZE_NODE,ON_,0); /* qaiv */ ;}
    break;

  case 240:
#line 827 "command.yac"
    { (yyval).i = makenode(AUTOCHOP_NODE,(yyvsp[0]).i,0); /* qaiw */;}
    break;

  case 241:
#line 828 "command.yac"
    { (yyval).i = makenode(AUTOCHOP_NODE,ON_,0); /* qaix */ ;}
    break;

  case 242:
#line 829 "command.yac"
    { (yyval).i = makenode(JIGGLE_NODE,ON_,0); /* qaiy */ ;}
    break;

  case 243:
#line 832 "command.yac"
    {verb_flag=0;  /* qaiz */;}
    break;

  case 244:
#line 834 "command.yac"
    {REAL_CHECK((yyvsp[0]));  YYACCEPT; /* qaja */ ;}
    break;

  case 245:
#line 836 "command.yac"
    { REAL_CHECK((yyvsp[-1])); YYACCEPT; /* qajb */ ;}
    break;

  case 246:
#line 839 "command.yac"
    {verb_flag=0;;}
    break;

  case 247:
#line 840 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-2]).i; (yyval).i = makenode(SET_INTERNAL_NODE,(yyvsp[-3]).i,(yyvsp[0]).i); /* qajc */ ;}
    break;

  case 248:
#line 843 "command.yac"
    { int mm;                                        /* qajd */
             real_val = ((yyvsp[0]).i == PLUSPLUS_OP) ? 1.0 : -1.0;
             mm = makenode(PUSHCONST_NODE,0,0);
             assigntype = PLUSASSIGN_OP; 
             (yyval).i = makenode(SET_INTERNAL_NODE,(yyvsp[-1]).i,mm); 
           ;}
    break;

  case 249:
#line 851 "command.yac"
    { kb_error(3673,"Expected expression to assign to internal variable.\n",Q_ERROR);  /* qaje */  ;}
    break;

  case 250:
#line 853 "command.yac"
    {verb_flag=0;;}
    break;

  case 251:
#line 854 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = ASSIGN_OP; (yyval).i = makenode(SET_INTERNAL_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qajf */  ;}
    break;

  case 252:
#line 857 "command.yac"
    { kb_error(3661,"Expected expression for setting internal variable.\n",Q_ERROR);  /* qajg */  ;}
    break;

  case 253:
#line 859 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_GRAVITY_NODE,(yyvsp[0]).i,0); /* qajh */ ;}
    break;

  case 254:
#line 861 "command.yac"
    { kb_error(3675,"Expected expression for setting gravity.\n",Q_ERROR);  /* qaji */ ;}
    break;

  case 255:
#line 864 "command.yac"
    {REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-1]).i; (yyval).i = makenode(SET_GRAVITY_NODE,(yyvsp[0]).i,0); /* qajk */  ;}
    break;

  case 256:
#line 867 "command.yac"
    { kb_error(2367,"Syntax: GRAVITY := rexpr \n       GRAVITY ON|OFF\n",Q_ERROR);   /* qajl */ ;}
    break;

  case 257:
#line 871 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(SET_CONSTRAINT_GLOBAL_NODE,(yyvsp[-1]).i,0); /* qajm */ ;}
    break;

  case 258:
#line 873 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(UNSET_CONSTRAINT_GLOBAL_NODE,(yyvsp[-1]).i,0); /* qajn */ ;}
    break;

  case 259:
#line 875 "command.yac"
    { (yyval).i = makenode(SET_CONSTRAINT_NAME_GLOBAL_NODE,(yyvsp[-1]).i,0); /* qajo */ ;}
    break;

  case 260:
#line 877 "command.yac"
    { (yyval).i = makenode(SET_CONSTRAINT_NAME_GLOBAL_NODE,(yyvsp[-1]).i,0); /* qajp */ ;}
    break;

  case 261:
#line 879 "command.yac"
    { (yyval).i = makenode(SET_CONSTRAINT_NAME_GLOBAL_NODE,(yyvsp[-1]).i,0); /* qajq */ ;}
    break;

  case 262:
#line 881 "command.yac"
    { (yyval).i = makenode(SET_CONSTRAINT_NAME_GLOBAL_NODE,(yyvsp[-1]).i,0); /* qajr */ ;}
    break;

  case 263:
#line 884 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = ASSIGN_OP;  (yyval).i = makenode(SET_INTERNAL_NODE,V_SCALE,(yyvsp[0]).i); /* qajs */ ;}
    break;

  case 264:
#line 886 "command.yac"
    { kb_error(3676,"Syntax: SET SCALE expr\n",Q_ERROR);  /* qajt */ ;}
    break;

  case 265:
#line 889 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-1]).i;  (yyval).i = makenode(SET_INTERNAL_NODE,V_SCALE,(yyvsp[0]).i); /* qaju */ ;}
    break;

  case 266:
#line 891 "command.yac"
    { kb_error(3677,"Syntax: SCALE := expr\n",Q_ERROR);  /* qajv */ ;}
    break;

  case 267:
#line 894 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = ASSIGN_OP;  (yyval).i = makenode(SET_INTERNAL_NODE,V_DIFFUSION,(yyvsp[0]).i); /* qajw */ ;}
    break;

  case 268:
#line 896 "command.yac"
    { kb_error(3662,"Syntax: SET DIFFUSION expr\n",Q_ERROR);  /* qajx */ ;}
    break;

  case 269:
#line 900 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-1]).i;  (yyval).i = makenode(SET_INTERNAL_NODE,V_GAP_CONSTANT,(yyvsp[0]).i); /* qajy */ ;}
    break;

  case 270:
#line 903 "command.yac"
    { kb_error(2369,"Syntax: GAP_CONSTANT := expr\n",Q_ERROR);   /* qajz */ ;}
    break;

  case 271:
#line 906 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(NOTCH_NODE,(yyvsp[0]).i,0);   /* qaka */ ;}
    break;

  case 272:
#line 907 "command.yac"
    { kb_error(2371,"Syntax: NOTCH maxangle\n",Q_ERROR);   /* qakb */ ;}
    break;

  case 273:
#line 910 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_AUTOCHOP_NODE,(yyvsp[0]).i,0);  /* qakc */ ;}
    break;

  case 274:
#line 911 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_AUTOCHOP_NODE,(yyvsp[0]).i,0); /* qakd */ ;}
    break;

  case 275:
#line 912 "command.yac"
    { kb_error(2372,                             /* qake */
       "Syntax: AUTOCHOP ON|OFF  or AUTOCHOP choplength\n", Q_ERROR); ;}
    break;

  case 276:
#line 917 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-1]).i; (yyval).i = makenode(SET_QTARGET_NODE,(yyvsp[0]).i,(yyvsp[-4]).i); /* qakf */ ;}
    break;

  case 277:
#line 919 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-1]).i; (yyval).i = makenode(SET_QMODULUS_NODE,(yyvsp[0]).i,(yyvsp[-4]).i); /* qakg */ ;}
    break;

  case 278:
#line 921 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-1]).i; (yyval).i = makenode(SET_QTOLERANCE_NODE,(yyvsp[0]).i,(yyvsp[-4]).i); /* qakh */ ;}
    break;

  case 279:
#line 923 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-1]).i; (yyval).i = makenode(SET_MMODULUS_NODE,(yyvsp[0]).i,(yyvsp[-4]).i); /* qaki */ ;}
    break;

  case 280:
#line 925 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = (yyvsp[-1]).i; (yyval).i = makenode(SET_QVOLCONST_NODE,(yyvsp[0]).i,(yyvsp[-4]).i); /* qakj */ ;}
    break;

  case 281:
#line 926 "command.yac"
    { kb_error(3372,                                     /* qakk */ 
    "Syntax: QUANTITY_NAME . TARGET|MODULUS|TOLERANCE|VOLCONST := expr\n", 
     Q_ERROR); ;}
    break;

  case 282:
#line 929 "command.yac"
    { kb_error(3379,                       /* qakl */ 
    "Syntax: METHOD_NAME . MODULUS\n", Q_ERROR); ;}
    break;

  case 283:
#line 934 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = ASSIGN_OP; (yyval).i = makenode(SET_QTARGET_NODE,(yyvsp[0]).i,(yyvsp[-2]).i); /* qakm */ ;}
    break;

  case 284:
#line 936 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = ASSIGN_OP; (yyval).i = makenode(SET_QMODULUS_NODE,(yyvsp[0]).i,(yyvsp[-2]).i); /* qakn */ ;}
    break;

  case 285:
#line 938 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = ASSIGN_OP; (yyval).i = makenode(SET_QTOLERANCE_NODE,(yyvsp[0]).i,(yyvsp[-2]).i); /* qako */ ;}
    break;

  case 286:
#line 941 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = ASSIGN_OP; (yyval).i = makenode(SET_MMODULUS_NODE,(yyvsp[0]).i,(yyvsp[-2]).i); /* qakp */ ;}
    break;

  case 287:
#line 943 "command.yac"
    { REAL_CHECK((yyvsp[0])); assigntype = ASSIGN_OP; (yyval).i = makenode(SET_QVOLCONST_NODE,(yyvsp[0]).i,(yyvsp[-2]).i); /* qakq */ ;}
    break;

  case 288:
#line 946 "command.yac"
    { (yyval).i = makenode(SET_Q_FIXED_NODE,(yyvsp[-1]).i,0); /* qakr */;}
    break;

  case 289:
#line 948 "command.yac"
    { (yyval).i = makenode(SET_Q_INFO_NODE,(yyvsp[-1]).i,0); /* qaks */ ;}
    break;

  case 290:
#line 950 "command.yac"
    { (yyval).i = makenode(SET_Q_ENERGY_NODE,(yyvsp[-1]).i,0); /* qakt */ ;}
    break;

  case 291:
#line 952 "command.yac"
    { (yyval).i = makenode(SET_Q_CONSERVED_NODE,(yyvsp[-1]).i,0); /* qaku */ ;}
    break;

  case 292:
#line 955 "command.yac"
    { strcpy(errmsg,"Syntax:\n");                                /* qakv */
          strcat(errmsg,"  SET quantityname TARGET expr\n");
          strcat(errmsg,"  SET quantityname MODULUS expr\n");
          strcat(errmsg,"  SET quantityname TOLERANCE expr\n");
          strcat(errmsg,"  SET quantityname VOLCONST expr\n");
          strcat(errmsg,"  SET quantityname FIXED\n");
          strcat(errmsg,"  SET quantityname INFO_ONLY\n");
          strcat(errmsg,"  SET quantityname ENERGY\n");
          strcat(errmsg,"  SET quantityname CONSERVED\n");
          kb_error(3663,errmsg,Q_ERROR);
        ;}
    break;

  case 293:
#line 968 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SUPPRESS_WARNING_NODE,(yyvsp[0]).i,0); /* qakw */ ;}
    break;

  case 294:
#line 969 "command.yac"
    { kb_error(3456,            /* qakx */ 
              "Syntax: SUPPRESS_WARNING number\n",Q_ERROR) ;}
    break;

  case 295:
#line 972 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(UNSUPPRESS_WARNING_NODE,(yyvsp[0]).i,0);  /* qaky */  ;}
    break;

  case 296:
#line 973 "command.yac"
    { kb_error(3457,
              "Syntax: UNSUPPRESS_WARNING number\n",Q_ERROR)    /* qakz */ ;}
    break;

  case 297:
#line 977 "command.yac"
    { (yyval).i = makenode(LOAD_NODE,(yyvsp[0]).i,0); /* qala */ ;}
    break;

  case 298:
#line 978 "command.yac"
    { 
   if ( (yyvsp[0]).datatype != STRING_TYPE )
     kb_error(4373,"Syntax: LOAD \"filename\"   (need quoted string or string expression)\n",Q_ERROR); /* qalaa */
   (yyval).i = makenode(LOAD_NODE,(yyvsp[0]).i,0); /* qala */ 
   ;}
    break;

  case 299:
#line 983 "command.yac"
    { kb_error(2373,"Syntax: LOAD \"filename\"   (need quoted string or string expression)\n",Q_ERROR); /* qalb */ ;}
    break;

  case 300:
#line 986 "command.yac"
    { (yyval).i = makenode(ADDLOAD_NODE,(yyvsp[0]).i,0); /* qalc */ ;}
    break;

  case 301:
#line 987 "command.yac"
    { 
    if ( (yyvsp[0]).datatype != STRING_TYPE )
	    kb_error(4544,"Syntax: ADDLOAD \"filename\"   (need quoted string or string expression)\n",Q_ERROR); /* qald */ 
	(yyval).i = makenode(ADDLOAD_NODE,(yyvsp[0]).i,0); /* qalca */ 
	;}
    break;

  case 302:
#line 992 "command.yac"
    { kb_error(3544,"Syntax: ADDLOAD \"filename\"   (need quoted string or string expression)\n",Q_ERROR); /* qald */ ;}
    break;

  case 303:
#line 995 "command.yac"
    { (yyval).i = makenode(REPLACE_LOAD_NODE,(yyvsp[0]).i,0); /* qale */ ;}
    break;

  case 304:
#line 996 "command.yac"
    {
    if ( (yyvsp[0]).datatype != STRING_TYPE )
	   kb_error(4545,"Syntax: REPLACE_LOAD \"filename\"   (need quoted string or string expression)\n",Q_ERROR);
    (yyval).i = makenode(REPLACE_LOAD_NODE,(yyvsp[0]).i,0); /* qalea */
 ;}
    break;

  case 305:
#line 1001 "command.yac"
    { kb_error(3545,"Syntax: REPLACE_LOAD \"filename\"   (need quoted string or string expression)\n",Q_ERROR); /* qalf */;}
    break;

  case 306:
#line 1004 "command.yac"
    { (yyval).i = makenode(PERMLOAD_NODE,(yyvsp[0]).i,0); /* qalg */ ;}
    break;

  case 307:
#line 1005 "command.yac"
    { 
     if ( (yyvsp[0]).datatype != STRING_TYPE )
	   kb_error(2544,"Syntax: PERMLOAD \"filename\"   (need quoted string or string expression)\n",Q_ERROR); 
     (yyval).i = makenode(PERMLOAD_NODE,(yyvsp[0]).i,0); /* qalga */ 
	;}
    break;

  case 308:
#line 1010 "command.yac"
    { kb_error(2505,"Syntax: PERMLOAD \"filename\"   (need quoted string or string expression)\n",Q_ERROR); /* qalh */ ;}
    break;

  case 309:
#line 1013 "command.yac"
    { (yyval).i = makenode(DUMP_NODE,(yyvsp[0]).i,0); /* qali */ ;}
    break;

  case 310:
#line 1014 "command.yac"
    { 
     if ( (yyvsp[0]).datatype != STRING_TYPE )
	   kb_error(4374,"Syntax: DUMP \"filename\"   (need quoted string or string expression)\n",Q_ERROR); 
     (yyval).i = makenode(DUMP_NODE,(yyvsp[0]).i,0); /* qali */ 
    ;}
    break;

  case 311:
#line 1019 "command.yac"
    { (yyval).i = makenode(DUMP_NODE,0,0); /* qalj */  ;}
    break;

  case 312:
#line 1020 "command.yac"
    { kb_error(2374,"Syntax: DUMP \"filename\"   (need quoted string or string expression)\n",Q_ERROR); /* qalk */ ;}
    break;

  case 313:
#line 1023 "command.yac"
    { (yyval).i = makenode(SET_COLORMAP_NODE,(yyvsp[0]).i,0); /* qall */  ;}
    break;

  case 314:
#line 1026 "command.yac"
    {REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_OPTIMIZE_NODE,(yyvsp[0]).i,0);  /* qalm */ ;}
    break;

  case 315:
#line 1027 "command.yac"
    { kb_error(2375,"Syntax: OPTIMIZE maxscale\n",Q_ERROR); /* qaln */ ;}
    break;

  case 316:
#line 1030 "command.yac"
    { (yyval).i = (yyvsp[-1]).i;  /* qalo */ ;}
    break;

  case 317:
#line 1032 "command.yac"
    { (yyval).i = (yyvsp[-1]).i; /* qalp */ ;}
    break;

  case 318:
#line 1034 "command.yac"
    {                  /* qalq */ 
         (yyval).i = makenode(SET_SGLOBAL_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); ;}
    break;

  case 319:
#line 1036 "command.yac"
    {                             /* qalr */
         if ( globals((yyvsp[-1]).i)->flags & STRINGVAL )
         { kb_error(6003,"Cannot assign a string to a non-string variable.\n", 
           Q_ERROR);
         }
         else
         (yyval).i = makenode(SET_SGLOBAL_NODE,(yyvsp[-1]).i,(yyvsp[0]).i);
       ;}
    break;

  case 320:
#line 1044 "command.yac"
    {                 /* qals */ 
            kb_error(6002,"Cannot assign non-string to string variable.\n",
                  Q_ERROR); ;}
    break;

  case 321:
#line 1047 "command.yac"
    {          /* qalt */
         (yyval).i = makenode(SET_PERM_SGLOBAL_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); ;}
    break;

  case 322:
#line 1050 "command.yac"
    { kb_error(2604,"Cannot make permanent assigment to nonpermanent variable.\n",Q_ERROR)  /* qalu */;}
    break;

  case 323:
#line 1053 "command.yac"
    {  (yyval).i = makenode(SET_PERM_SGLOBAL_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qalv */ ;}
    break;

  case 324:
#line 1056 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_GLOBAL_NODE,(yyvsp[-1]).i,(yyvsp[0]).i);  /* qalw */ ;}
    break;

  case 325:
#line 1059 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_PERM_GLOBAL_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qalv */ ;}
    break;

  case 326:
#line 1061 "command.yac"
    { (yyval) = (yyvsp[-1]);  /* qalw */ ;}
    break;

  case 327:
#line 1064 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(SET_ELEMENT_GLOBAL_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qalv */ ;}
    break;

  case 328:
#line 1067 "command.yac"
    { (yyval).i = makenode(SET_ON_ASSIGN_CALL_NODE,(yyvsp[-4]).i,(yyvsp[0]).i)   /* qalx */ ;}
    break;

  case 329:
#line 1068 "command.yac"
    { (yyval).i = makenode(SET_DELTA_NODE,(yyvsp[-2]).i,0); /* qaly */  ;}
    break;

  case 330:
#line 1069 "command.yac"
    { (yyval).i = makenode(SET_PARAM_SCALE_NODE,(yyvsp[-2]).i,0);  /* qalz */ ;}
    break;

  case 331:
#line 1071 "command.yac"
    { (yyval).i = makenode(SET_NO_DUMP_NODE,(yyvsp[-3]).i,1); /* qalza */ ;}
    break;

  case 332:
#line 1072 "command.yac"
    { (yyval).i = makenode(SET_NO_DUMP_NODE,(yyvsp[-3]).i,0); /* qalzb */ ;}
    break;

  case 333:
#line 1073 "command.yac"
    { kb_error(2509,"NO_DUMP: Missing 'on' or 'off'\n",Q_ERROR); /* qalzc */ ;}
    break;

  case 334:
#line 1074 "command.yac"
    { (yyval).i = makenode(SET_NO_DUMP_NODE,(yyvsp[-3]).i,1); /* qalza */ ;}
    break;

  case 335:
#line 1075 "command.yac"
    { (yyval).i = makenode(SET_NO_DUMP_NODE,(yyvsp[-3]).i,0); /* qalzb */ ;}
    break;

  case 336:
#line 1076 "command.yac"
    { kb_error(6547,"NO_DUMP: Missing 'on' or 'off'\n",Q_ERROR); /* qalzc */ ;}
    break;

  case 337:
#line 1079 "command.yac"
    { REAL_CHECK((yyvsp[0]));                               /* qama */
               subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
               switch ( list[(yyvsp[-2]).i].type )
               { case SET_DELTA_NODE:
                      list[(yyvsp[-2]).i].left = (yyvsp[0]).i - (yyvsp[-2]).i;
                      break;
                 case SET_PARAM_SCALE_NODE:
                      list[(yyvsp[-2]).i].left = (yyvsp[0]).i - (yyvsp[-2]).i;
                      break;
                 default:
                      sprintf(errmsg,"Internal error: lvalue type %d\n",
                          list[(yyvsp[-2]).i].type);
                      kb_error(2882,errmsg,COMMAND_ERROR);
               }
               list[(yyvsp[-2]).i].op2.assigntype = (yyvsp[-1]).i;
               list[(yyvsp[-2]).i].stack_delta = -1;
               (yyval) = (yyvsp[-2]);
            ;}
    break;

  case 338:
#line 1099 "command.yac"
    { real_val = yyval.i;
      (yyval).i = makenode(PUSHCONST_NODE,0,0); 
      (yyval).datatype = REAL_TYPE;
    ;}
    break;

  case 339:
#line 1105 "command.yac"
    { (yyval).i = makenode(PUSH_PARAM_FIXED_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; /* qamb */ ;}
    break;

  case 340:
#line 1108 "command.yac"
    { (yyval).i = makenode(PUSH_PARAM_VELOCITY_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; /* qamba */ ;}
    break;

  case 341:
#line 1110 "command.yac"
    { (yyval).i = makenode(PUSH_PARAM_FORCE_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; /* qambb */ ;}
    break;

  case 342:
#line 1113 "command.yac"
    { convert_lvalue_to_rvalue(list + (yyvsp[0]).i); (yyval) = (yyvsp[0]); (yyval).datatype = REAL_TYPE; /* qamc */ ;}
    break;

  case 343:
#line 1115 "command.yac"
    { kb_error(3384,                           /* qamd */
    "Syntax: VARIABLE . PDELTA|PSCALE := value\n", Q_ERROR); ;}
    break;

  case 344:
#line 1118 "command.yac"
    { kb_error(3380,               /* qame */
    "Syntax: VARIABLE . ON_ASSIGN_CALL := procedurename \n", Q_ERROR); ;}
    break;

  case 345:
#line 1123 "command.yac"
    { REAL_CHECK((yyvsp[0]));                                                    /* qamf */
             switch ( (yyvsp[-1]).i )
             { case ASSIGN_OP: (yyval).i = makenode(SET_GLOBAL_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); break;
               case PLUSASSIGN_OP: (yyval).i = makenode(PLUSASSIGN_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); break;
               case SUBASSIGN_OP: (yyval).i = makenode(SUBASSIGN_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); break;
               case MULTASSIGN_OP: (yyval).i = makenode(MULTASSIGN_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); break;
               case DIVASSIGN_OP: (yyval).i = makenode(DIVASSIGN_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); break;
               default: sprintf(errmsg,"Internal error: bad ASSIGNOP %d\n",(yyvsp[-1]).i); 
                   kb_error(4787,errmsg,COMMAND_ERROR);
             }
           ;}
    break;

  case 346:
#line 1136 "command.yac"
    { (yyval).i = makenode(POST_INCREMENT_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); break;  /* qamg */ ;}
    break;

  case 347:
#line 1139 "command.yac"
    { (yyval).i = makenode(PRE_INCREMENT_NODE,(yyvsp[0]).i,(yyvsp[-1]).i); break; /* qamh */ ;}
    break;

  case 348:
#line 1142 "command.yac"
    { kb_error(2376,"Syntax: variable := expr\n",Q_ERROR);  /* qami */;}
    break;

  case 349:
#line 1145 "command.yac"
    { kb_error(3422,"Got '=' instead of the assignment operator ':='\n",      /* qamj */
                Q_ERROR);
           ;}
    break;

  case 350:
#line 1150 "command.yac"
    { kb_error(3424,"Got '=' instead of the assignment operator ':='\n",   /* qamk */
                Q_ERROR);
           ;}
    break;

  case 351:
#line 1155 "command.yac"
    { kb_error(2377,"Syntax: variable := expr\n",Q_ERROR);       /* qaml */;}
    break;

  case 352:
#line 1158 "command.yac"
    { (yyval).i = (yyvsp[0]).datatype;   /* qamm */ ;}
    break;

  case 353:
#line 1160 "command.yac"
    { (yyval).i = STRING_TYPE; /* qamn */ ;}
    break;

  case 354:
#line 1162 "command.yac"
    { (yyval).i = add_local_var((yyvsp[0]).lexeme,1);  /* qamo */ ;}
    break;

  case 355:
#line 1163 "command.yac"
    { (yyval).i = add_local_var((yyvsp[0]).lexeme,1);    /* qamp */
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                  "Argument \"%s\" shadows already declared variable.\n",
                     (yyvsp[0]).lexeme);
                   kb_error(2635,errmsg,WARNING); 
                }
              ;}
    break;

  case 356:
#line 1171 "command.yac"
    { (yyval).i = add_local_var((yyvsp[0]).lexeme,1);   /* qamq */
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                    "Argument \"%s\" shadows already declared variable.\n",
                       (yyvsp[0]).lexeme);
                  kb_error(2636,errmsg,WARNING);
                }
             ;}
    break;

  case 357:
#line 1179 "command.yac"
    { (yyval).i = add_local_var((yyvsp[0]).lexeme,1);    /* qamr */
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                    "Argument \"%s\" shadows already declared procedure.\n",
                        (yyvsp[0]).lexeme);
                  kb_error(2637,errmsg,WARNING);
                }
              ;}
    break;

  case 358:
#line 1187 "command.yac"
    { (yyval).i = add_local_var((yyvsp[0]).lexeme,1);  /* qams */
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                    "Argument \"%s\" shadows already declared function.\n",
                        (yyvsp[0]).lexeme);
                  kb_error(2638,errmsg,WARNING); 
                }
             ;}
    break;

  case 359:
#line 1195 "command.yac"
    { (yyval).i = add_local_var((yyvsp[0]).lexeme,1);   /* qamt */
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                "Argument \"%s\" shadows already declared string variable.\n",
                    (yyvsp[0]).lexeme);
                  kb_error(2639,errmsg,WARNING); 
                }
               ;}
    break;

  case 360:
#line 1203 "command.yac"
    { (yyval).i = add_local_var((yyvsp[0]).lexeme,1);  /* qamu */
                if ( shadow_warn_flag )
                {  sprintf(errmsg,
                  "Argument \"%s\" shadows already declared quantity name.\n",
                     (yyvsp[0]).lexeme);
                  kb_error(2640,errmsg,WARNING);
                }
               ;}
    break;

  case 361:
#line 1211 "command.yac"
    {(yyval).i = add_local_var((yyvsp[0]).lexeme,1);   /* qamv */
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                  "Argument \"%s\" shadows already declared method name.\n",
                    (yyvsp[0]).lexeme);
                     kb_error(2641,errmsg,WARNING); 
                }
              ;}
    break;

  case 362:
#line 1219 "command.yac"
    {(yyval).i = add_local_var((yyvsp[0]).lexeme,1);   /* qamw */
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                  "Argument \"%s\" shadows already declared constraint.\n",
                     (yyvsp[0]).lexeme);
                  kb_error(2642,errmsg,WARNING); 
                } 
              ;}
    break;

  case 363:
#line 1227 "command.yac"
    { (yyval).i = add_local_var((yyvsp[0]).lexeme,1);   /* qamx */
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                  "Argument \"%s\" shadows already declared boundary.\n",
                    (yyvsp[0]).lexeme);
                  kb_error(2643,errmsg,WARNING);
                }
              ;}
    break;

  case 364:
#line 1238 "command.yac"
    { (yyval).i = makenode(ARGLIST_NODE,0,0); /* qamy */  ;}
    break;

  case 365:
#line 1241 "command.yac"
    {  int_val = (yyvsp[-1]).i; (yyval).i = makenode(ARGLIST_NODE,0,(yyvsp[0]).i);  /* qamz */  ;}
    break;

  case 366:
#line 1244 "command.yac"
    {  int_val = (yyvsp[-1]).i; (yyval).i = makenode(ARGLIST_NODE,(yyvsp[-3]).i,(yyvsp[0]).i);   /* qana */ ;}
    break;

  case 367:
#line 1247 "command.yac"
    { if ( strcmp(yytext,"int") == 0 )                         /* qanb */
             kb_error(3604,"Expecting datatype or ')' after '('\n ('integer' is the Evolver datatype, not 'int'.\n",Q_ERROR);  
           else
             kb_error(3636,"Expecting datatype or ')' after '('\n",Q_ERROR);  
         ;}
    break;

  case 368:
#line 1254 "command.yac"
    { kb_error(3605,"Expecting identifier after datatype.\n",Q_ERROR);  /* qanc */ ;}
    break;

  case 369:
#line 1257 "command.yac"
    { kb_error(3606,"Expecting datatype after ','\n",Q_ERROR);  /* qand */ ;}
    break;

  case 370:
#line 1261 "command.yac"
    { kb_error(3625,"Expecting identifier after datatype.\n",Q_ERROR);  /* qane */ ;}
    break;

  case 371:
#line 1264 "command.yac"
    { kb_error(3525,"Expecting comma or right parenthesis after argument.\n",Q_ERROR);  /* qanf */ ;}
    break;

  case 372:
#line 1267 "command.yac"
    { (yyval).i = (yyvsp[-1]).i   /* qang */ ;}
    break;

  case 373:
#line 1270 "command.yac"
    { (yyval).i = (yyvsp[0]).i;   /* qanh */ ;}
    break;

  case 374:
#line 1271 "command.yac"
    { (yyval).i = 0;   /* qani */  ;}
    break;

  case 375:
#line 1272 "command.yac"
    { kb_error(2624,"Missing function body, or ';' after prototype.\n",  /* qanj */ 
               Q_ERROR);
            ;}
    break;

  case 376:
#line 1277 "command.yac"
    { (yyval).i = (yyvsp[0]).i;  /* qank */ ;}
    break;

  case 377:
#line 1278 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qanl */ ;}
    break;

  case 378:
#line 1281 "command.yac"
    { in_function = 2;                            /* qanm */
		 // to_free_count = 0;
          if ( (yyvsp[0]).i == 0 ) (yyvsp[0]).i = add_global((yyvsp[0]).lexeme);
          init_local_scope((yyvsp[0]).i,0); begin_local_scope();
          (yyval).i = makenode(FUNCTION_DEF_START_NODE,(yyvsp[0]).i,(yyvsp[-1]).i); ;}
    break;

  case 379:
#line 1286 "command.yac"
    { (yyval).i = makenode(FUNCTION_HEAD_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); ;}
    break;

  case 380:
#line 1288 "command.yac"
    { int i,insize = inputbufferspot - (yyvsp[-6]).qnum;
           in_function = 0;
		   // see if we can find "return expr" as the last thing done
		   for ( i = listtop-1 ; i > 0 ; i-- )
		   { switch(list[i].type)
		     { case CMDLIST_NODE: case COMMAND_BLOCK_NODE:
			     continue;
			   case RETURN_NODE: 
			     if ( (list[i].left == 0) && (tok != ';'))
				   kb_error(5647,"Function must return a value.\n",Q_ERROR);
				 goto return_ok;
			   default: ;
			   /* Aaarg. Can't detect 'return' in 'if'.
			     if ( tok != ';' )
			       kb_error(5648,"Function must return a value.\n",Q_ERROR);
				*/
			 }
		   }
return_ok:
           globals((yyvsp[-4]).i)->attr.procstuff.proc_text = mycalloc(insize+1,1); 
           strncpy(globals((yyvsp[-4]).i)->attr.procstuff.proc_text,inputbuffer+(yyvsp[-4]).qnum,insize);
           globals((yyvsp[-4]).i)->attr.procstuff.proc_text[insize] = 0;
           list[(yyvsp[-3]).i].op5.locals = globals((yyvsp[-4]).i)->attr.procstuff.locals =
                localbase;
           if ( localbase )
             localbase->flags |= LL_IN_USE;
           int_val = (yyvsp[-5]).i;
           if ( (yyvsp[0]).i )
             (yyval).i = makenode(SET_FUNCTION_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); 
           else 
           { makenode(FUNCTION_PROTO_NODE,(yyvsp[-1]).i,0);
             (yyval).i = 0;
           }
           exit_local_scope();
         ;}
    break;

  case 381:
#line 1324 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qann */ ;}
    break;

  case 382:
#line 1325 "command.yac"
    { (yyval).i = (yyvsp[0]).i;    /* qano */;}
    break;

  case 383:
#line 1328 "command.yac"
    { in_function = 1; /* for lex*/                  /* qanp */ 
           if ( (yyvsp[0]).i == 0 ) (yyvsp[0]).i = add_global((yyvsp[0]).lexeme);
             init_local_scope((yyvsp[0]).i,0); begin_local_scope();
              (yyval).i = makenode(PROCEDURE_DEF_START_NODE,(yyvsp[0]).i,0); ;}
    break;

  case 384:
#line 1332 "command.yac"
    { (yyval).i = makenode(PROCEDURE_HEAD_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); ;}
    break;

  case 385:
#line 1334 "command.yac"
    { int insize = inputbufferspot - (yyvsp[-5]).qnum;
           in_function = 0;
           globals((yyvsp[-4]).i)->attr.procstuff.proc_text = mycalloc(insize+1,1); 
           strncpy(globals((yyvsp[-4]).i)->attr.procstuff.proc_text,inputbuffer+(yyvsp[-4]).qnum,insize);
           globals((yyvsp[-4]).i)->attr.procstuff.proc_text[insize] = 0;
           list[(yyvsp[-3]).i].op5.locals = globals((yyvsp[-4]).i)->attr.procstuff.locals = 
              localbase;
           if ( localbase )
             localbase->flags |= LL_IN_USE;
           if ( (yyvsp[0]).i )
             (yyval).i = makenode(SET_ARGSPROC_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); 
           else 
           { makenode(PROCEDURE_PROTO_NODE,(yyvsp[-1]).i,0);
             (yyval).i = 0;
           }
           exit_local_scope();
         ;}
    break;

  case 386:
#line 1352 "command.yac"
    { kb_error(3704,"Expected function name after datatype.\n",Q_ERROR);  /* qanq */ ;}
    break;

  case 387:
#line 1354 "command.yac"
    { kb_error(3705,"Expected datatype for function.\n",Q_ERROR); /* qanr */ ;}
    break;

  case 388:
#line 1356 "command.yac"
    { kb_error(3706,"Expected name of procedure.\n",Q_ERROR); /* qans */ ;}
    break;

  case 389:
#line 1358 "command.yac"
    { kb_error(3496,"Function returns a value; it's not a stand-alone command.\n",Q_ERROR); /* qant */ ;}
    break;

  case 390:
#line 1361 "command.yac"
    { (yyval).i = makenode(DEFINE_IDENT_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); /* qanu */ ;}
    break;

  case 391:
#line 1363 "command.yac"
    {int g; if ( (yyvsp[-1]).i == 0 )g = add_global((yyvsp[-1]).lexeme);
           else g = (yyvsp[-1]).i; /* local */
     (yyval).i = makenode(DEFINE_IDENT_NODE,g,(yyvsp[0]).i); ;}
    break;

  case 392:
#line 1367 "command.yac"
    { (yyval).i = makenode(DEFINE_IDENT_NODE,(yyvsp[0]).i,REAL_TYPE); /* qanv */ ;}
    break;

  case 393:
#line 1369 "command.yac"
    {int g = (yyvsp[0]).i ? (yyvsp[0]).i : add_global((yyvsp[0]).lexeme);                     /* qanw */
    (yyval).i = makenode(DEFINE_IDENT_NODE,g,REAL_TYPE); ;}
    break;

  case 394:
#line 1373 "command.yac"
    { (yyval).i = makenode(DEFINE_IDENT_NODE,(yyvsp[0]).i,STRING_TYPE); /* qanx */ ;}
    break;

  case 395:
#line 1375 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(INDEXSET_NODE,0,(yyvsp[-1]).i);   /* qany */ ;}
    break;

  case 396:
#line 1376 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(INDEXSET_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); /* qanz */ ;}
    break;

  case 397:
#line 1378 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(DIMENSIONSET_NODE,0,(yyvsp[-1]).i);   /* qaoa */ ;}
    break;

  case 398:
#line 1380 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(DIMENSIONSET_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); /* qaob */ ;}
    break;

  case 399:
#line 1383 "command.yac"
    {                                                        /* qaoc */ 
          (yyval).qnum = (yyvsp[-2]).i ; (yyval).datatype = (yyvsp[-1]).i;
          int_val= (yyval).datatype;
          (yyval).i = makenode(DEFINE_ARRAY_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
        ;}
    break;

  case 400:
#line 1390 "command.yac"
    { (yyval).qnum = (yyvsp[-2]).i ? (yyvsp[-2]).i : add_global((yyvsp[-2]).lexeme);            /* qaod */
         (yyval).datatype = (yyvsp[-1]).i;
         int_val= (yyval).datatype;
         (yyval).i = makenode(DEFINE_ARRAY_NODE,(yyval).qnum,(yyvsp[0]).i);
       ;}
    break;

  case 401:
#line 1397 "command.yac"
    {                                                       /* qaoe */
          (yyval).qnum = (yyvsp[-2]).i ; (yyval).datatype = (yyvsp[-1]).i;
          int_val= (yyval).datatype;
          (yyval).i = makenode(DEFINE_ARRAY_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
        ;}
    break;

  case 402:
#line 1404 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qaof */ ;}
    break;

  case 403:
#line 1414 "command.yac"
    { struct global *g = globals((yyvsp[0]).i);                  /* qaofa */
               (yyval).i = makenode(ARRAYIDENT_NODE,(yyvsp[0]).i,0);
               (yyval).datatype = ARRAY_TYPE;
               (yyval).etype = g->attr.arrayptr->datatype;
               (yyval).dims  = g->attr.arrayptr->dim;
             ;}
    break;

  case 404:
#line 1422 "command.yac"
    { /* for implicit generator */                    /* qaog */
               (yyval).i = makenode(ATTRIB_LVALUE_NODE,0,0);
               list[(yyval).i].op1.localnum = 0;
               list[(yyval).i].op2.name_id = set_name_eltype(V_NORMAL_ATTR,VERTEX);
               list[(yyval).i].type = ARRAY_VERTEX_NORMAL_NODE; 
               list[(yyval).i].op3.localnum = add_local_var(NULL,SDIM);
               (yyval).datatype = ARRAY_TYPE;
               (yyval).etype = REAL_TYPE;
               (yyval).dims  = 1;
             ;}
    break;

  case 405:
#line 1434 "command.yac"
    { /* for implicit generator */                       /* qaoh */ 
               struct extra *ex = EXTRAS((yyvsp[0]).etype)+(yyvsp[0]).qnum;
               (yyval).i = makenode(ATTRIB_LVALUE_NODE,0,0);
               (yyval).datatype = ARRAY_TYPE;
               (yyval).etype = ex->array_spec.datatype;
               (yyval).dims = ex->array_spec.dim;
               list[(yyval).i].op1.localnum = 0;
               list[(yyval).i].op2.name_id = set_name_eltype((yyvsp[0]).qnum,(yyvsp[0]).etype);
               if ( ((yyvsp[0]).etype == VERTEX) && ((yyvsp[0]).qnum == V_NORMAL_ATTR) )
               { list[(yyval).i].type = ARRAY_VERTEX_NORMAL_NODE; 
                 list[(yyval).i].op3.localnum = add_local_var(NULL,SDIM);
                 list[(yyval).i].flags |= IS_VIRTUAL_ATTR;
               }
               else if ( ((yyvsp[0]).etype == EDGE) && ((yyvsp[0]).qnum == E_VECTOR_ATTR) )
               { list[(yyval).i].type = ARRAY_EDGE_VECTOR_NODE; 
                 list[(yyval).i].op3.localnum = add_local_var(NULL,SDIM);
                 list[(yyval).i].flags |= IS_VIRTUAL_ATTR;
               }
               else if ( ((yyvsp[0]).etype == FACET) && ((yyvsp[0]).qnum == F_NORMAL_ATTR) )
               { list[(yyval).i].type = ARRAY_FACET_NORMAL_NODE; 
                 list[(yyval).i].op3.localnum = add_local_var(NULL,SDIM);
                 list[(yyval).i].flags |= IS_VIRTUAL_ATTR;
               }
             ;}
    break;

  case 406:
#line 1460 "command.yac"
    {                                                  /* qaoi */ 
               struct extra *ex = EXTRAS((yyvsp[-1]).etype)+(yyvsp[0]).qnum;
               if ( (yyvsp[0]).etype != (yyvsp[-1]).etype )
               { sprintf(errmsg, "\"%s\" is a %s attribute, not %s.\n",
                    EXTRAS((yyvsp[0]).etype)[(yyvsp[0]).qnum].name,typenames[(yyvsp[0]).etype],
                    typenames[(yyvsp[-1]).etype]);
                 kb_error(3678,errmsg,Q_ERROR);
               }
               (yyval).i = makenode(ATTRIB_LVALUE_NODE,(yyvsp[-1]).i,0);
               (yyval).datatype = ARRAY_TYPE;
               (yyval).etype = ex->array_spec.datatype;
               (yyval).dims = ex->array_spec.dim;
               list[(yyval).i].op1.localnum = list[(yyvsp[-1]).i].op2.localnum;
               list[(yyval).i].op2.name_id =
                  set_name_eltype((yyvsp[0]).qnum,(yyvsp[0]).etype);
               if ( ((yyvsp[0]).etype == VERTEX) && ((yyvsp[0]).qnum == V_NORMAL_ATTR) )
               { list[(yyval).i].type = ARRAY_VERTEX_NORMAL_NODE; 
                 list[(yyval).i].op3.localnum = add_local_var(NULL,SDIM);
                 list[(yyval).i].flags |= IS_VIRTUAL_ATTR;
               }
               else if ( ((yyvsp[0]).etype == EDGE) && ((yyvsp[0]).qnum == E_VECTOR_ATTR) )
               { list[(yyval).i].type = ARRAY_EDGE_VECTOR_NODE; 
                 list[(yyval).i].op3.localnum = add_local_var(NULL,SDIM);
                 list[(yyval).i].flags |= IS_VIRTUAL_ATTR;
               }
               else if ( ((yyvsp[0]).etype == FACET) && ((yyvsp[0]).qnum == F_NORMAL_ATTR) )
               { list[(yyval).i].type = ARRAY_FACET_NORMAL_NODE; 
                 list[(yyval).i].op3.localnum = add_local_var(NULL,SDIM);
                 list[(yyval).i].flags |= IS_VIRTUAL_ATTR;
               }
             ;}
    break;

  case 407:
#line 1493 "command.yac"
    { // special treatment to get constraint number index
			   // evaluated first.                                                 /* qaoi */ 
               struct extra *ex = EXTRAS((yyvsp[-6]).etype)+(yyvsp[-5]).qnum;
               if ( (yyvsp[-5]).etype != (yyvsp[-6]).etype )
               { sprintf(errmsg, "\"%s\" is a %s attribute, not %s.\n",
                    EXTRAS((yyvsp[-5]).etype)[(yyvsp[-5]).qnum].name,typenames[(yyvsp[-5]).etype],
                    typenames[(yyvsp[-6]).etype]);
                 kb_error(2599,errmsg,Q_ERROR);
               }
               (yyval).i = makenode(ATTRIB_LVALUE_NODE,(yyvsp[-6]).i,(yyvsp[-3]).i);
               (yyval).datatype = ARRAY_TYPE;
               (yyval).etype = ex->array_spec.datatype;
               (yyval).dims = ex->array_spec.dim;
               list[(yyval).i].op1.localnum = list[(yyvsp[-6]).i].op2.localnum;
               list[(yyval).i].op2.name_id =
                  set_name_eltype(V_CONSTRAINT_NORMAL_ATTR,(yyvsp[-5]).etype);
               list[(yyval).i].type = ARRAY_VERTEX_CONSTRAINT_NORMAL_NODE; 
               list[(yyval).i].op3.localnum = add_local_var(NULL,SDIM);
               list[(yyval).i].flags |= IS_VIRTUAL_ATTR;
              ;}
    break;

  case 408:
#line 1516 "command.yac"
    { sprintf(errmsg,"Syntax error. Syntax: constraint[expr].normal \n");               /* qaoj */
         kb_error(4574,errmsg,Q_ERROR);
       ;}
    break;

  case 409:
#line 1521 "command.yac"
    { sprintf(errmsg,"Missing attribute.\n");               /* qaoj */
         kb_error(3574,errmsg,Q_ERROR);
       ;}
    break;

  case 410:
#line 1527 "command.yac"
    { (yyval).i = makenode(ARRAY_LVALUE_INDEXED_NODE,(yyvsp[-1]).i,(yyvsp[0]).i);      /* qaok */
		     (yyval).etype = (yyvsp[-1]).etype
           ;}
    break;

  case 411:
#line 1532 "command.yac"
    {                                                      /* qaol */
             if ( (yyvsp[0]).datatype == ARRAY_TYPE )
             {
               (yyval).i = makenode(ARRAY_ASSIGNOP_ARRAY_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
             }
             else 
             { // scalar on right
               (yyval).i = makenode(ARRAY_ASSIGNOP_SCALAR_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
             }
             list[(yyval).i].op1.assigntype = (yyvsp[-1]).i;
             list[(yyval).i].op2.name_id = list[(yyvsp[-2]).i].op2.name_id;
             list[(yyval).i].stack_delta = list[(yyvsp[-2]).i].op5.indexcount + 2;
           ;}
    break;

  case 412:
#line 1547 "command.yac"
    {                                                      /* qaola */
             if ( (yyvsp[0]).datatype == ARRAY_TYPE )
             { kb_error(7223,"String array on right side not implemented yet.\n",Q_ERROR);
               //$$.i = makenode(ARRAY_ASSIGNOP_STRING_ARRAY_NODE,$1.i,$3.i);
             }
             else 
             { // scalar on right
               (yyval).i = makenode(ARRAY_ASSIGNOP_STRING_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
             }
             list[(yyval).i].op1.assigntype = (yyvsp[-1]).i;
             list[(yyval).i].op2.name_id = list[(yyvsp[-2]).i].op2.name_id;
             list[(yyval).i].stack_delta = list[(yyvsp[-2]).i].op5.indexcount + 2;
           ;}
    break;

  case 413:
#line 1562 "command.yac"
    { int mm;                                                    /* qaom */
             real_val = ((yyvsp[0]).i == PLUSPLUS_OP) ? 1.0 : -1.0;
             mm = makenode(PUSHCONST_NODE,0,0);
             (yyval).i = makenode(ARRAY_ASSIGNOP_SCALAR_NODE,(yyvsp[-1]).i,mm);
             list[(yyval).i].op1.assigntype = PLUSASSIGN_OP;
             list[(yyval).i].op2.name_id = list[(yyvsp[-1]).i].op2.name_id;
             list[(yyval).i].stack_delta = list[(yyvsp[-1]).i].op5.indexcount + 2;
           ;}
    break;

  case 414:
#line 1572 "command.yac"
    {                                                           /* qaon */
             if ( (yyvsp[0]).datatype == ARRAY_TYPE )
             { // try some combining of operations to avoid temp arrays
               if ( list[(yyvsp[0]).i].type == ARRAY_ADD_NODE )
               { list[(yyvsp[0]).i].type = ARRAY_RVALUE_NODE; 
                 list[(yyvsp[0]).i].op1.intval = '+';
                 list[(yyvsp[0]).i].stack_delta = 0;
                 (yyval).i = makenode(ARRAY_ASSIGNOP_A_P_A_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
                 list[(yyval).i].op3.name_id = list[(yyvsp[0]).i].op3.name_id;
                 list[(yyval).i].op4.name_id = list[(yyvsp[0]).i].op4.name_id;
               }
               else if ( list[(yyvsp[0]).i].type == ARRAY_SUBTRACT_NODE )
               { list[(yyvsp[0]).i].type = ARRAY_RVALUE_NODE; 
                 list[(yyvsp[0]).i].op1.intval = '-';
                 list[(yyvsp[0]).i].stack_delta = 0;
                 (yyval).i = makenode(ARRAY_ASSIGNOP_A_S_A_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
                 list[(yyval).i].op3.name_id = list[(yyvsp[0]).i].op3.name_id;
                 list[(yyval).i].op4.name_id = list[(yyvsp[0]).i].op4.name_id;
               }
               else if ( ( list[(yyvsp[0]).i].type == ARRAY_MULTIPLY_NODE )
			     && (list[(yyvsp[-2]).i].op2.name_id != list[(yyvsp[0]).i].op3.name_id)
				 && (list[(yyvsp[-2]).i].op2.name_id != list[(yyvsp[0]).i].op4.name_id) )
               { list[(yyvsp[0]).i].type = ARRAY_RVALUE_NODE; 
                 list[(yyvsp[0]).i].op1.intval = '*';
                 list[(yyvsp[0]).i].stack_delta = 0;
                 (yyval).i = makenode(ARRAY_ASSIGNOP_A_X_A_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
                 list[(yyval).i].op3.name_id = list[(yyvsp[0]).i].op3.name_id;
                 list[(yyval).i].op4.name_id = list[(yyvsp[0]).i].op4.name_id;
               }
               else if ( list[(yyvsp[0]).i].type == ARRAY_SCALAR_MULTIPLY_NODE )
               { list[(yyvsp[0]).i].type = ARRAY_RVALUE_NODE; 
                 list[(yyvsp[0]).i].op1.intval = '*';
                 list[(yyvsp[0]).i].stack_delta = 0;
                 (yyval).i = makenode(ARRAY_ASSIGNOP_S_X_A_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
                 list[(yyval).i].op3.name_id = list[(yyvsp[0]).i].op3.name_id;
               }
               else
               (yyval).i = makenode(ARRAY_ASSIGNOP_ARRAY_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
             }
             else
               (yyval).i = makenode(ARRAY_ASSIGNOP_SCALAR_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
             list[(yyval).i].op1.assigntype = (yyvsp[-1]).i;
           ;}
    break;

  case 415:
#line 1617 "command.yac"
    { (yyval).i = makenode(DOT_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);           /* qaoo */
           list[(yyvsp[-2]).i].flags |= IS_RVALUE;
           list[(yyvsp[0]).i].flags |= IS_RVALUE;
           (yyval).datatype = REAL_TYPE;  
         ;}
    break;

  case 416:
#line 1624 "command.yac"
    { int mm = makenode(ARRAY_RVALUE_INDEXED_NODE,(yyvsp[-1]).i,(yyvsp[0]).i);      /* qaop */
           list[mm].op2.name_id = list[(yyvsp[-1]).i].op2.name_id;
           list[(yyvsp[-1]).i].flags |= IS_RVALUE;
           if ( list[(yyvsp[0]).i].op5.indexcount >= (yyvsp[-1]).dims )
           { // > case illegal, but avoids crash
              (yyval).i = makenode(ARRAY_EVAL_NODE,mm,0); 
              (yyval).datatype = (yyvsp[-1]).etype;
			  list[(yyval).i].datatype = (yyvsp[-1]).etype;
	//		  if ( $1.etype == STRING_TYPE )
	//		     list[$$.i].flags |= HAS_STRING;
              list[(yyval).i].op2.name_id = list[(yyvsp[-1]).i].op2.name_id;
			  
			  // simplify if constant indices on fixed size local array
			  if ( list[(yyvsp[-1]).i].type == ARRAYIDENT_NODE )
			  { if ( (list[(yyvsp[-1]).i].op2.name_id & GTYPEMASK) == ATTRIBNAME )
			    { // not done yet
			    }
			    else
                { 
			      struct array *al =  get_name_arrayptr(list[(yyvsp[-1]).i].op2.name_id,NULL,localbase);
			      if ( al->flags & FIXED_SIZE_ARRAY )
                  { int spot = (yyvsp[0]).i;  // should be INDEXSET_NODE
				    int goodflag = 1;
				    int offset = 0;
					int n;
					int chunksize = 1;

				    for ( n = 0 ; n < al->dim ; n++, spot += list[spot].left )
				    { if ( list[spot+list[spot].right].type != PUSHCONST_NODE )
				      { goodflag = 0;
					    break;
					  }
					  else
				      { offset += chunksize + (int)(list[spot+list[spot].right].op1.real);
					    chunksize *= al->sizes[n];
					  }
			        }
					if ( goodflag ) // patch things up
					{ list[(yyvsp[-1]).i].type = FIXED_ARRAY_RVAL_NODE;
					  list[(yyvsp[-1]).i].op3.offset = offset;
					  list[(yyvsp[-1]).i].op4.skip = 2*al->dim + 2;
					}
			      }
				}
              }
           }
           else 
           { (yyval).i = mm;
             (yyval).datatype = ARRAY_TYPE;
             (yyval).dims = (yyvsp[-1]).dims - list[(yyvsp[0]).i].op5.indexcount;
             (yyval).etype = (yyvsp[-1]).etype;
           }
         ;}
    break;

  case 417:
#line 1679 "command.yac"
    { (yyval).i = makenode(ARRAY_RVALUE_INDEXED_NODE,(yyvsp[0]).i,0);     /* qaoq */
           list[(yyvsp[0]).i].flags |= IS_RVALUE;
           (yyval).datatype = ARRAY_TYPE;
           (yyval).dims = (yyvsp[0]).dims;
           (yyval).etype = (yyvsp[0]).etype;
           list[(yyval).i].op2.name_id = list[(yyvsp[0]).i].op2.name_id;
         ;}
    break;

  case 418:
#line 1690 "command.yac"
    { (yyval).i = (yyvsp[0]).i;                                       /* qaor */
              list[(yyvsp[0]).i].flags |= IS_RVALUE;
              (yyval).datatype = ARRAY_TYPE;
              (yyval).dims = 0;
              (yyval).qnum = 1; // number of stack entries
              (yyval).etype = (yyvsp[0]).etype;
              if ( (yyvsp[0]).datatype != REAL_TYPE )
                kb_error(6543,"Items of array initializer must be single numeric values.\n",
                  COMMAND_ERROR);
            ;}
    break;

  case 419:
#line 1702 "command.yac"
    { (yyval).i = (yyvsp[0]).i;                                       /* qaora */
              list[(yyvsp[0]).i].flags |= IS_RVALUE;
              (yyval).datatype = ARRAY_TYPE;
              (yyval).dims = 0;
              (yyval).qnum = 1; // number of stack entries
              (yyval).etype = STRING_TYPE;
            ;}
    break;

  case 420:
#line 1711 "command.yac"
    { (yyval).i = (yyvsp[0]).i;                                   /* qaos */
              list[(yyvsp[0]).i].flags |= IS_RVALUE;
              (yyval).datatype = ARRAY_TYPE;
              (yyval).dims = (yyvsp[0]).dims;
              (yyval).qnum = (yyvsp[0]).qnum;
              (yyval).etype = (yyvsp[0]).etype;
            ;}
    break;

  case 421:
#line 1720 "command.yac"
    { if ( ((yyvsp[-2]).datatype != ARRAY_TYPE) || ((yyvsp[-2]).dims != (yyvsp[0]).dims) )        /* qaot */
                kb_error(4566,"Mismatched array dimensions.\n",COMMAND_ERROR);
              (yyval).i = makenode(ARRAYLIST_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
              (yyval).datatype = ARRAY_TYPE;
              (yyval).dims = (yyvsp[-2]).dims;
              (yyval).qnum = (yyvsp[-2]).qnum + (yyvsp[0]).qnum; // stack entries
              (yyval).etype = (yyvsp[-2]).etype;
           ;}
    break;

  case 422:
#line 1730 "command.yac"
    { (yyval).i = makenode(ARRAYEXPR_NODE,(yyvsp[-1]).i,0);          /* qaou */
              (yyval).datatype = ARRAY_TYPE;
              (yyval).dims = (yyvsp[-1]).dims+1;
              (yyval).etype = (yyvsp[-1]).etype;
              (yyval).qnum = (yyvsp[-1]).qnum + 2;  // stack entries including markers
              list[(yyval).i].stack_delta = 2;
              list[(yyval).i].op4.arraydim = (yyval).dims;
          ;}
    break;

  case 423:
#line 1740 "command.yac"
    { (yyval).i = makenode(ARRAYEXPR_NODE,0,0);          /* qaov */
              (yyval).datatype = ARRAY_TYPE;
              (yyval).dims = 1;
              (yyval).etype = 0;
              (yyval).qnum = 2;  // stack entries including markers
              list[(yyval).i].stack_delta = 2;
              list[(yyval).i].op4.arraydim = (yyval).dims;
          ;}
    break;

  case 424:
#line 1750 "command.yac"
    { if ( (yyvsp[-2]).dims != (yyvsp[0]).dims )                      /* qaow */
            { sprintf(errmsg,
                "Trying to assign a %d-dimensional array to a %d-dimensional array.\n",
                   (yyvsp[0]).dims,(yyvsp[-2]).dims);
               kb_error(4688,errmsg, COMMAND_ERROR); 
            }
            (yyval).i = makenode(ARRAYEXPR_ASSIGN_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
            list[(yyval).i].op1.assigntype = (yyvsp[-1]).i;
            list[(yyval).i].op2.name_id = list[(yyvsp[-2]).i].op2.name_id;
            list[(yyval).i].op3.argcount = (yyvsp[0]).qnum; // entries on stack
            list[(yyval).i].stack_delta -= (yyvsp[0]).qnum;
          ;}
    break;

  case 425:
#line 1764 "command.yac"
    { if ( (yyvsp[-2]).dims - list[(yyvsp[-2]).i].op5.indexcount != (yyvsp[0]).dims - list[(yyvsp[0]).i].op5.indexcount ) /* qaox */
            { sprintf(errmsg,
                "Trying to assign a %d-dimensional array to a %d-dimensional array.\n",
                   (yyvsp[0]).dims - list[(yyvsp[-2]).i].op5.indexcount,(yyvsp[-2]).dims - list[(yyvsp[0]).i].op5.indexcount);
               kb_error(2603,errmsg, COMMAND_ERROR); 
            }
            (yyval).i = makenode(ARRAYEXPR_ASSIGN_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
            list[(yyval).i].op1.assigntype = (yyvsp[-1]).i;
            list[(yyval).i].op2.name_id = list[(yyvsp[-2]).i].op2.name_id;
            list[(yyval).i].op3.argcount = (yyvsp[0]).qnum; // entries on stack            
            list[(yyval).i].op5.indexcount = list[(yyvsp[-2]).i].op5.indexcount;
            list[(yyval).i].stack_delta = list[(yyvsp[-2]).i].op5.indexcount + 2;
          ;}
    break;

  case 426:
#line 1781 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qaoy */ ;}
    break;

  case 427:
#line 1782 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qaoz */ ;}
    break;

  case 428:
#line 1785 "command.yac"
    { struct extra *ex;                                    /* qapa */
            (yyval).qnum = (yyvsp[-1]).qnum; 
            (yyval).etype = (yyvsp[-1]).etype;
            if ( (yyvsp[-3]).i != (yyval).etype )
              kb_error(1885,"This extra attribute already defined on different element type.\n",COMMAND_ERROR);
            ex = EXTRAS((yyval).etype) + (yyval).qnum;
            if ( ex->type != (yyvsp[0]).i )
            { sprintf(errmsg,
                "Attribute %s already defined with different type, %s.\n",
                   ex->name,datatype_name[ex->type]);
              kb_error(1886,errmsg,COMMAND_ERROR);
            }
           (yyval).i = makenode(DEFINE_EXTRA_NODE,0,(yyvsp[-3]).i); 
           list[(yyval).i].op1.extranum = (yyval).qnum;
          ;}
    break;

  case 429:
#line 1802 "command.yac"
    { int attr_type=INTEGER_TYPE;                                /* qapb */
           if ( (yyvsp[-1]).i ) 
           { sprintf(errmsg,"Cannot use local variable \"%s\" as attribute.\n",
                (yyvsp[-1]).lexeme);
             kb_error(2615,errmsg,COMMAND_ERROR);
           }
           attr_type = (yyvsp[0]).i;
           (yyval).qnum = add_attribute((yyvsp[-3]).i,(yyvsp[-1]).lexeme,attr_type,0,NULL,DUMP_ATTR,NULL,MPI_PROPAGATE); 
           /* being a declaration, has effect when parsed */
           (yyval).i = makenode(DEFINE_EXTRA_NODE,0,(yyvsp[-3]).i); 
           list[(yyval).i].op1.extranum = (yyval).qnum;
         ;}
    break;

  case 430:
#line 1816 "command.yac"
    { (yyval).i = makenode(DEFINE_EXTRA_INDEX_NODE,(yyvsp[-1]).i,(yyvsp[0]).i);       /* qapc */
         ;}
    break;

  case 431:
#line 1820 "command.yac"
    {                                                           /* qapd */
           begin_scope(); /* ended right below */
           elsym = symbol_add("self",list[(yyvsp[-1]).i].op2.eltype);
           (yyval).i = makenode(ATTR_FUNCTION_NODE,(yyvsp[-1]).i,0);
          ;}
    break;

  case 432:
#line 1825 "command.yac"
    { init_local_scope(0,0); begin_local_scope(); ;}
    break;

  case 433:
#line 1827 "command.yac"
    { struct extra *ext;
           end_local_scope();
           (yyval).i = makenode(ATTR_FUNCTION_END_NODE,(yyvsp[-4]).i,(yyvsp[-1]).i);
           list[(yyval).i].op1.extranum = list[(yyvsp[-6]).i].op1.extranum;  /* attr number */
           list[(yyval).i].op2.eltype = list[(yyvsp[-6]).i].op2.eltype;  /* element type */
           list[(yyvsp[-4]).i].op1.skipsize = (yyval).i - (yyvsp[-4]).i;
           ext = EXTRAS(list[(yyval).i].op2.eltype) + list[(yyval).i].op1.extranum;
           ext->code.locals = localbase;
           if ( localbase )
             localbase->flags |= LL_IN_USE;
           exit_local_scope();
           ext->flags |= FUNCTION_ATTR;
           end_scope();
         ;}
    break;

  case 434:
#line 1842 "command.yac"
    { (yyval).i = (yyvsp[0]).i;  /* qape */ ;}
    break;

  case 435:
#line 1844 "command.yac"
    { (yyval).i = makenode(DEFINE_QUANTITY_NODE,0,0); /* qapf */ ;}
    break;

  case 436:
#line 1846 "command.yac"
    { (yyval).i = makenode(DEFINE_METHOD_INSTANCE_NODE,0,0); /* qapg */ ;}
    break;

  case 437:
#line 1847 "command.yac"
    { (yyval).i = makenode(DEFINE_CONSTRAINT_NODE,0,0); /* qaph */  ;}
    break;

  case 438:
#line 1848 "command.yac"
    { (yyval).i = makenode(DEFINE_BOUNDARY_NODE,0,0); /* qapi */ ;}
    break;

  case 439:
#line 1851 "command.yac"
    { kb_error(2379,
   "Syntax: DEFINE name [REAL|INTEGER]\n or:    DEFINE elementtype ATTRIBUTE name REAL|INTEGER  [ dimension ]   \n",Q_ERROR); /* qapj */;}
    break;

  case 440:
#line 1854 "command.yac"
    {                           /* qapj */
           strncpy((yyval).lexeme,(yyvsp[-1]).lexeme,31);
          /*  if ( $$.i == 0 )  ?? */
          // $$.i = add_global($1.lexeme);  // wait until successful right side
          /*  else $$.i = $1.i; */ /* local ?? */
            (yyval).qnum = assignbacktrack();
          ;}
    break;

  case 441:
#line 1862 "command.yac"
    {                    /* qapk */
           strncpy((yyval).lexeme,(yyvsp[-1]).lexeme,31);
  //           $$.i = add_perm_global($1.lexeme);  
   //          perm_globals($$.i)->flags |= PERMANENT;   
             perm_flag++;
             (yyval).qnum = assignbacktrack();
            ;}
    break;

  case 442:
#line 1870 "command.yac"
    {                                /* qapl */
           strncpy((yyval).lexeme,(yyvsp[0]).lexeme,31);
           /* if ( $$.i == 0 )  ??  */
//                $$.i = add_global($2.lexeme);  
           /*  else $$.i = $2.i; ?? */ /* local */
         ;}
    break;

  case 443:
#line 1875 "command.yac"
    { (yyval).i = (yyvsp[-2]).i;(yyval).qnum = assignbacktrack(); ;}
    break;

  case 444:
#line 1877 "command.yac"
    {                                  /* qapm */
           strncpy((yyval).lexeme,(yyvsp[0]).lexeme,31);
            /* if ( $$.i == 0 )  ?? */
 //              $$.i = add_global($2.lexeme);
             /* else $$.i = $2.i;  ?? */
             (yyval).qnum = assignbacktrack();
             strcpy((yyval).lexeme,(yyvsp[0]).lexeme); 
           ;}
    break;

  case 445:
#line 1887 "command.yac"
    { kb_error(2380,"Syntax: variable := rexpr | {command} \n",Q_ERROR); /* qapn */ ;}
    break;

  case 446:
#line 1890 "command.yac"
    { sprintf(errmsg,"Syntax error: Unexpected new identifier '%s'.\n",(yyvsp[-1]).lexeme);      /* qapo */
       kb_error(2381,errmsg, Q_ERROR);;}
    break;

  case 447:
#line 1894 "command.yac"
    { kb_error(2382,"Syntax: variable := rexpr | {command}     (braces needed around command) \n",Q_ERROR); /* qapp */ ;}
    break;

  case 448:
#line 1896 "command.yac"
    {                      /* qapq */
     (yyvsp[-1]).i = add_global((yyvsp[-1]).lexeme);
     (yyval).i = makenode(SET_SGLOBAL_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); ;}
    break;

  case 449:
#line 1900 "command.yac"
    {                       /* qapr */
     (yyvsp[-1]).i = add_global((yyvsp[-1]).lexeme);
     REAL_CHECK((yyvsp[0])); 
     (yyval).i = makenode(SET_GLOBAL_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); ;}
    break;

  case 450:
#line 1906 "command.yac"
    { sprintf(errmsg,"Illegal right side of assignment.\n");         /* qaps */
       kb_error(3756,errmsg, Q_ERROR);;}
    break;

  case 451:
#line 1910 "command.yac"
    {                                                        /* qapt */
          (yyvsp[-1]).i = add_perm_global((yyvsp[-1]).lexeme);
          perm_globals((yyval).i)->flags |= PERMANENT;   
          (yyval).i = makenode(SET_PERM_SGLOBAL_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); ;}
    break;

  case 452:
#line 1915 "command.yac"
    {                               /* qapu */ 
          REAL_CHECK((yyvsp[0])); 
          (yyvsp[-1]).i = add_perm_global((yyvsp[-1]).lexeme);
          perm_globals((yyval).i)->flags |= PERMANENT;   
          (yyval).i = makenode(SET_PERM_GLOBAL_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); ;}
    break;

  case 453:
#line 1921 "command.yac"
    { init_local_scope((yyvsp[0]).i,0);              /* qapv */
             begin_local_scope(); ;}
    break;

  case 454:
#line 1924 "command.yac"
    { int insize = inputbufferspot - (yyvsp[-2]).qnum;
           (yyvsp[-2]).i = add_global((yyvsp[-2]).lexeme);
           globals((yyvsp[-2]).i)->attr.procstuff.proc_text = mycalloc(insize+1,1); 
           strncpy(globals((yyvsp[-2]).i)->attr.procstuff.proc_text,inputbuffer+(yyvsp[-2]).qnum,insize);
           (yyval).i = makenode(SET_PROCEDURE_NODE,(yyvsp[0]).i,(yyvsp[-2]).i); 
           globals((yyvsp[-2]).i)->attr.procstuff.proc_text[insize] = 0;
           exit_local_scope();
         ;}
    break;

  case 455:
#line 1933 "command.yac"
    { init_local_scope((yyvsp[-1]).i,0); begin_local_scope(); ;}
    break;

  case 456:
#line 1935 "command.yac"
    { int k,insize = inputbufferspot - (yyvsp[-4]).qnum;                    /* qapw */
           (yyvsp[-4]).i = add_global((yyvsp[-4]).lexeme);
           globals((yyvsp[-4]).i)->attr.procstuff.proc_text = mycalloc(insize+1,1); 
           strncpy(globals((yyvsp[-4]).i)->attr.procstuff.proc_text,inputbuffer+(yyvsp[-4]).qnum,insize);
           globals((yyvsp[-4]).i)->attr.procstuff.proc_text[insize] = 0;
           k = makenode(COMMAND_BLOCK_NODE,(yyvsp[-1]).i,0);
           (yyval).i = makenode(SET_PROCEDURE_NODE,k,(yyvsp[-4]).i); 
           exit_local_scope();
         ;}
    break;

  case 457:
#line 1946 "command.yac"
    { int k = makenode(NULLBLOCK_NODE,0,0);                     /* qapx */
           (yyvsp[-2]).i = add_global((yyvsp[-2]).lexeme);
           localbase = NULL;
           (yyval).i = makenode(SET_PROCEDURE_NODE,k,(yyvsp[-2]).i); 
         ;}
    break;

  case 458:
#line 1952 "command.yac"
    { init_local_scope((yyvsp[-1]).i,PERMGLOBAL); begin_local_scope(); ;}
    break;

  case 459:
#line 1954 "command.yac"
    { int k,insize = inputbufferspot - (yyvsp[-4]).qnum;              /* qapy */
           (yyvsp[-4]).i = add_perm_global((yyvsp[-4]).lexeme);
           perm_globals((yyval).i)->flags |= PERMANENT;   
           perm_globals((yyvsp[-4]).i)->attr.procstuff.proc_text = calloc(insize+1,1); 
           strncpy(perm_globals((yyvsp[-4]).i)->attr.procstuff.proc_text,inputbuffer+(yyvsp[-4]).qnum,insize);
           perm_globals((yyvsp[-4]).i)->attr.procstuff.proc_text[insize] = 0;
           k = makenode(COMMAND_BLOCK_NODE,(yyvsp[-1]).i,0);
           (yyval).i = makenode(SET_PERM_PROCEDURE_NODE,k,(yyvsp[-4]).i); 
           exit_local_scope();
         ;}
    break;

  case 460:
#line 1966 "command.yac"
    { int k = makenode(NULLBLOCK_NODE,0,0);                 /* qapz */
           (yyvsp[-2]).i = add_perm_global((yyvsp[-2]).lexeme);
           perm_globals((yyval).i)->flags |= PERMANENT;   
           localbase = NULL;
           (yyval).i = makenode(SET_PERM_PROCEDURE_NODE,k,(yyvsp[-2]).i); 
         ;}
    break;

  case 461:
#line 1973 "command.yac"
    { (yyval).qnum = assignbacktrack();         /* qaqa */
                     init_local_scope((yyvsp[-1]).i,0); begin_local_scope();
    ;}
    break;

  case 462:
#line 1976 "command.yac"
    { int insize = inputbufferspot - (yyvsp[-1]).qnum;                   /* qaqb */
           myfree(globals((yyvsp[-3]).i)->attr.procstuff.proc_text);
           globals((yyvsp[-3]).i)->attr.procstuff.proc_text = mycalloc(insize+1,1); 
           strncpy(globals((yyvsp[-3]).i)->attr.procstuff.proc_text,inputbuffer+(yyvsp[-1]).qnum,insize);
           globals((yyvsp[-3]).i)->attr.procstuff.proc_text[insize] = 0;
           (yyval).i = makenode(SET_PROCEDURE_NODE,(yyvsp[0]).i,(yyvsp[-3]).i); 
           exit_local_scope();
         ;}
    break;

  case 463:
#line 1986 "command.yac"
    { (yyval).i = perm_flag++; (yyval).qnum = assignbacktrack(); 
           init_local_scope((yyvsp[-1]).i,PERMGLOBAL); begin_local_scope();   /* qaqc */ ;}
    break;

  case 464:
#line 1989 "command.yac"
    { int insize = inputbufferspot - (yyvsp[-1]).qnum;         /* qaqd */
           free(perm_globals((yyvsp[-3]).i)->attr.procstuff.proc_text);
           perm_globals((yyvsp[-3]).i)->attr.procstuff.proc_text = calloc(insize+1,1); 
           strncpy(perm_globals((yyvsp[-3]).i)->attr.procstuff.proc_text,inputbuffer+(yyvsp[-1]).qnum,insize);
           perm_globals((yyvsp[-3]).i)->attr.procstuff.proc_text[insize] = 0;
           perm_globals((yyvsp[-3]).i)->flags |= PERMANENT; 
           (yyval).i = makenode(SET_PERM_PROCEDURE_NODE,(yyvsp[0]).i,(yyvsp[-3]).i); 
           perm_flag = (yyvsp[-1]).i; 
           exit_local_scope();
         ;}
    break;

  case 465:
#line 2001 "command.yac"
    { kb_error(2383,"Syntax: procedure_name := {command} \n",Q_ERROR);  /* qaqe */ ;}
    break;

  case 466:
#line 2004 "command.yac"
    { kb_error(2384,"Syntax: procedure_name ::= {command} \n",Q_ERROR);  /* qaqf */ ;}
    break;

  case 467:
#line 2008 "command.yac"
    {  sprintf(errmsg,                                  /* qaqg */ 
              "'%s' is a variable; cannot be assigned a procedure.\n",
               globals((yyvsp[-1]).i)->name);
            kb_error(3899,errmsg,Q_ERROR);
         ;}
    break;

  case 468:
#line 2016 "command.yac"
    { (yyval).i = makenode(LOCAL_LIST_START_NODE,(yyvsp[0]).i,0); /* qaqh */ ;}
    break;

  case 469:
#line 2017 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qaqi */ ;}
    break;

  case 470:
#line 2019 "command.yac"
    { (yyval).i = (yyvsp[0]).i; list[(yyvsp[0]).i].left = -1; /* qaqj */ ;}
    break;

  case 471:
#line 2021 "command.yac"
    { ident_t iid = add_local_var((yyvsp[0]).lexeme,1);  /* qaqk */ 
                (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); ;}
    break;

  case 472:
#line 2024 "command.yac"
    { ident_t iid = add_local_var((yyvsp[0]).lexeme,1);    /* qaql */
                (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0);
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                  "Local name \"%s\" shadows already declared variable.\n",
                   (yyvsp[0]).lexeme);
                  kb_error(2625,errmsg,WARNING); 
                }
             ;}
    break;

  case 473:
#line 2033 "command.yac"
    { ident_t iid = add_local_var((yyvsp[0]).lexeme,1);   /* qaqm */
                (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); 
                if ( shadow_warn_flag )
                { sprintf(errmsg,
                  "Local name \"%s\" shadows already declared variable.\n",
                  (yyvsp[0]).lexeme);
                  kb_error(2626,errmsg,WARNING); 
                }
              ;}
    break;

  case 474:
#line 2042 "command.yac"
    { ident_t iid = add_local_var((yyvsp[0]).lexeme,1);       /* qaqn */
               (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); 
               if ( shadow_warn_flag )
               { sprintf(errmsg,
                  "Local name \"%s\" shadows already declared procedure.\n",
                    (yyvsp[0]).lexeme);
                 kb_error(2627,errmsg,WARNING); 
               }
             ;}
    break;

  case 475:
#line 2051 "command.yac"
    { ident_t iid = add_local_var((yyvsp[0]).lexeme,1);  /* qaqo */
               (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); 
               if ( shadow_warn_flag )
               { sprintf(errmsg,
                  "Local name \"%s\" shadows already declared function.\n",
                    (yyvsp[0]).lexeme);
                 kb_error(2628,errmsg,WARNING); 
               }
             ;}
    break;

  case 476:
#line 2060 "command.yac"
    { ident_t iid = add_local_var((yyvsp[0]).lexeme,1);    /* qaqp */
               (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); 
               if ( shadow_warn_flag )
               { sprintf(errmsg,
                "Local name \"%s\" shadows already declared string variable.\n",
                  (yyvsp[0]).lexeme);
                 kb_error(2629,errmsg,WARNING); 
               }
              ;}
    break;

  case 477:
#line 2069 "command.yac"
    {ident_t iid = add_local_var((yyvsp[0]).lexeme,1);     /* qaqq */ 
               (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); 
               if ( shadow_warn_flag )
               { sprintf(errmsg,
                  "Local name \"%s\" shadows already declared quantity name.\n",
                    (yyvsp[0]).lexeme);
                 kb_error(2630,errmsg,WARNING); 
               }
             ;}
    break;

  case 478:
#line 2078 "command.yac"
    {ident_t iid = add_local_var((yyvsp[0]).lexeme,1);   /* qaqr */ 
               (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); 
               if ( shadow_warn_flag )
               { sprintf(errmsg,
                  "Local name \"%s\" shadows already declared method name.\n",
                    (yyvsp[0]).lexeme);
                 kb_error(2631,errmsg,WARNING); 
               }
             ;}
    break;

  case 479:
#line 2087 "command.yac"
    {ident_t iid = add_local_var((yyvsp[0]).lexeme,1);   /* qaqs */
               (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); 
               if ( shadow_warn_flag )
               { sprintf(errmsg,
                  "Local name \"%s\" shadows already declared constraint.\n",
                    (yyvsp[0]).lexeme);
                 kb_error(2632,errmsg,WARNING); 
               }
             ;}
    break;

  case 480:
#line 2096 "command.yac"
    {ident_t iid = add_local_var((yyvsp[0]).lexeme,1);   /* qaqt */
               (yyval).i = makenode(DECLARE_LOCAL_NODE,iid,0); 
               if ( shadow_warn_flag )
               { sprintf(errmsg,
                  "Local name \"%s\" shadows already declared boundary.\n",
                    (yyvsp[0]).lexeme);
                 kb_error(2633,errmsg,WARNING); 
               }
             ;}
    break;

  case 481:
#line 2106 "command.yac"
    { kb_error(2614,"Syntax: LOCAL varname; \n",Q_ERROR);  /* qaqu */ ;}
    break;

  case 482:
#line 2112 "command.yac"
    { init_local_scope(0,0); begin_local_scope(); ;}
    break;

  case 483:
#line 2114 "command.yac"
    { (yyval).i = makenode(REDEFINE_SINGLE_NODE,(yyvsp[0]).i,(yyvsp[-3]).i);   /* qaqw */ 
            exit_local_scope();  
          ;}
    break;

  case 484:
#line 2119 "command.yac"
    { init_local_scope(0,0); begin_local_scope(); ;}
    break;

  case 485:
#line 2121 "command.yac"
    {
            (yyval).i = makenode(REDEFINE_SINGLE_NODE,(yyvsp[0]).i,(yyvsp[-3]).i);   /* qaqy */ 
            exit_local_scope();
          ;}
    break;

  case 486:
#line 2127 "command.yac"
    { init_local_scope(0,0); begin_local_scope();  /* qaqz */ ;}
    break;

  case 487:
#line 2129 "command.yac"
    {                                               /* qara */
            (yyval).i = makenode(REDEFINE_SINGLE_NODE,(yyvsp[0]).i,(yyvsp[-3]).i);
            exit_local_scope();
          ;}
    break;

  case 488:
#line 2134 "command.yac"
    { (yyval).i = makenode(UNREDEFINE_SINGLE_NODE,0,(yyvsp[-1]).i); /* qarb */ ;}
    break;

  case 489:
#line 2136 "command.yac"
    { (yyval).i = makenode(UNREDEFINE_SINGLE_NODE,0,(yyvsp[-1]).i); /* qarc */ ;}
    break;

  case 490:
#line 2139 "command.yac"
    { REAL_CHECK((yyvsp[-2])); (yyval).i = makenode(EXPRLIST_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qard */ ;}
    break;

  case 491:
#line 2140 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3801,"Missing expression after ','\n",  /* qare */
                      Q_ERROR); ;}
    break;

  case 492:
#line 2142 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(EXPRLIST_NODE,(yyvsp[0]).i,0); /* qarf */  ;}
    break;

  case 493:
#line 2143 "command.yac"
    { (yyval).i = makenode(EXPRLIST_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qarg */ ;}
    break;

  case 494:
#line 2145 "command.yac"
    { kb_error(3891,"Missing expression after ','\n", Q_ERROR); /* qarh */ ;}
    break;

  case 495:
#line 2146 "command.yac"
    { (yyval).i = makenode(EXPRLIST_NODE,(yyvsp[0]).i,0); /* qari */ ;}
    break;

  case 496:
#line 2150 "command.yac"
    { (yyval).i = makenode(PRINTFHEAD_NODE,(yyvsp[0]).i,0); /* qarj */;}
    break;

  case 497:
#line 2152 "command.yac"
    { kb_error(3892,"Missing format string after printf.\n", Q_ERROR);  /* qark */ ;}
    break;

  case 498:
#line 2153 "command.yac"
    { (yyval).i = makenode(BINARY_PRINTFHEAD_NODE,(yyvsp[0]).i,0); /* qarl */ ;}
    break;

  case 499:
#line 2155 "command.yac"
    { kb_error(4892,"Missing format string after printf.\n", Q_ERROR); /* qarm */ ;}
    break;

  case 500:
#line 2157 "command.yac"
    {   (yyval).i = makenode(ERRPRINTFHEAD_NODE,(yyvsp[0]).i,0); /* qarn */ ;}
    break;

  case 501:
#line 2159 "command.yac"
    { kb_error(3802,"Missing format string after errprintf.\n", Q_ERROR); /* qaro */ ;}
    break;

  case 502:
#line 2160 "command.yac"
    { (yyval).i = (yyvsp[0]).i;                       /* qarp */
    if ( list[(yyval).i].op2.argcount > 0 )
      kb_error(1928,"PRINTF string has formats, but there are no arguments.\n",
         Q_ERROR);
 ;}
    break;

  case 503:
#line 2165 "command.yac"
    {                                  /* qarq */
     if ( (list[(yyvsp[-2]).i+list[(yyvsp[-2]).i].left].type == QUOTATION_NODE) && 
            (list[(yyvsp[-2]).i].op2.argcount != list[(yyvsp[0]).i].op1.argcount) )
     { sprintf(errmsg,"printf has %d formats, but there are %d arguments.\n",
         list[(yyvsp[-2]).i].op2.argcount, list[(yyvsp[0]).i].op1.argcount);
       kb_error(1933,errmsg,Q_ERROR);
     }
     (yyval).i = makenode(PRINTF_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); 
  ;}
    break;

  case 504:
#line 2176 "command.yac"
    { kb_error(3893,"Missing expression after ','\n", Q_ERROR); /* qarr */ ;}
    break;

  case 505:
#line 2178 "command.yac"
    {                             /* qars */
    if ( list[(yyval).i].op2.argcount > 0 )
      kb_error(5734,"binary_printf string has formats, but there are no arguments.\n",
         Q_ERROR);
    (yyval).i = (yyvsp[0]).i; ;}
    break;

  case 506:
#line 2183 "command.yac"
    {                          /* qart */ 
     if ( (list[(yyvsp[-2]).i+list[(yyvsp[-2]).i].left].type == QUOTATION_NODE) && 
            (list[(yyvsp[-2]).i].op2.argcount != list[(yyvsp[0]).i].op1.argcount) )
     { sprintf(errmsg,"binary_printf has %d formats, but there are %d arguments.\n",
         list[(yyvsp[-2]).i].op2.argcount, list[(yyvsp[0]).i].op1.argcount);
       kb_error(5624,errmsg,Q_ERROR);
     }
   (yyval).i = makenode(BINARY_PRINTF_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); ;}
    break;

  case 507:
#line 2192 "command.yac"
    { kb_error(1920,"Missing expression after ','\n", Q_ERROR); /* qaru */ ;}
    break;

  case 508:
#line 2194 "command.yac"
    {                                  /* qarv */ 
    if ( list[(yyval).i].op2.argcount > 0 )
      kb_error(5736,"errprintf string has formats, but there are no arguments.\n",
         Q_ERROR);
    (yyval).i = (yyvsp[0]).i; ;}
    break;

  case 509:
#line 2200 "command.yac"
    {                             /* qarw */
     if ( (list[(yyvsp[-2]).i+list[(yyvsp[-2]).i].left].type == QUOTATION_NODE) && 
            (list[(yyvsp[-2]).i].op2.argcount != list[(yyvsp[0]).i].op1.argcount) )
     { sprintf(errmsg,"errprintf has %d formats, but there are %d arguments.\n",
         list[(yyvsp[-2]).i].op2.argcount, list[(yyvsp[0]).i].op1.argcount);
       kb_error(1934,errmsg,Q_ERROR);
     }
   (yyval).i = makenode(ERRPRINTF_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); ;}
    break;

  case 510:
#line 2208 "command.yac"
    { (yyval).i = makenode(ERRPRINTF_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qarx */ ;}
    break;

  case 511:
#line 2209 "command.yac"
    { kb_error(3803,"Missing expression after ','\n", Q_ERROR); ;}
    break;

  case 513:
#line 2213 "command.yac"
    { (yyval).i = makenode(LIST_PROCS_NODE,0,0); /* qary */ ;}
    break;

  case 514:
#line 2214 "command.yac"
    { (yyval).i = makenode(STRPRINT_NODE,(yyvsp[0]).i,0); /* qarz */ ;}
    break;

  case 515:
#line 2215 "command.yac"
    { (yyval).i = makenode(PRINT_PROCEDURE_NODE,(yyvsp[0]).i,0); /* qasa */ ;}
    break;

  case 516:
#line 2216 "command.yac"
    { (yyval).i = makenode(PRINT_PROCEDURE_NODE,(yyvsp[0]).i,0); /* qasb */ ;}
    break;

  case 517:
#line 2217 "command.yac"
    { (yyval).i = makenode(PRINT_PROCEDURE_NODE,(yyvsp[0]).i,0); /* qasc */ ;}
    break;

  case 518:
#line 2219 "command.yac"
    { (yyval).i = makenode(PRINT_PERM_PROCEDURE_NODE,(yyvsp[0]).i,0); /* qasd */ ;}
    break;

  case 519:
#line 2220 "command.yac"
    { (yyval).i = makenode(EXPRINT_PROCEDURE_NODE,(yyvsp[0]).i,0); /* qase */ ;}
    break;

  case 520:
#line 2223 "command.yac"
    { int k;                                                  /* qasf */
       switch ( (yyvsp[0]).i )
       { case COORD_NODE:
           switch ( (yyvsp[-1]).etype )
           { case VERTEX: case EDGE: case FACET:
               k = makenode(ATTRIBUTE_NODE,(yyvsp[0]).i,(yyvsp[0]).qnum); 
               list[k].op1.localnum = list[(yyvsp[-1]).i].op2.localnum;
               list[k].op2.coordnum = (yyvsp[0]).qnum - 1; /* 1-based indexing to 0 */
               k = makenode(QUALIFIED_ATTRIBUTE_NODE,(yyvsp[-1]).i,k); 
               (yyval).i = makenode(PRINT_NODE,k,0);
               goto vnexit;

             default:
               sprintf(errmsg,"\"x\" is not a %s attribute.\n",
                typenames[(yyvsp[-1]).etype]);
               kb_error(2650,errmsg,COMMAND_ERROR);
           }
           break;
         case GET_VERTEXNORMAL_NODE:
           if ( (yyvsp[-1]).etype != VERTEX )
           { sprintf(errmsg,"\"vertexnormal\" is vertex attribute; cannot be on %s.\n",
                typenames[(yyvsp[-1]).etype]);
             kb_error(2651,errmsg,COMMAND_ERROR);
           }
           (yyval).i = makenode(PRINT_VERTEXNORMAL_NODE,(yyvsp[-1]).i,0);
           list[(yyval).i].op1.localnum = list[(yyvsp[-1]).i].op2.localnum;
           goto vnexit;
           break;
         case PARAM_NODE:
           if ( (yyvsp[-1]).etype != VERTEX )
           { sprintf(errmsg,"\"p\" is %s attribute; cannot be on %s.\n",
                typenames[VERTEX], typenames[(yyvsp[-1]).etype]);
             kb_error(2652,errmsg,COMMAND_ERROR);
           }
           int_val = V_PARAM_ATTR;
           break;
         case GET_EXTRA_ATTR_NODE:
           if ( (yyvsp[-1]).etype != (yyvsp[0]).etype )
           { sprintf(errmsg,"\"%s\" is %s attribute; cannot be on %s.\n",
                EXTRAS((yyvsp[0]).etype)[(yyvsp[0]).qnum & YYSHIFTMASK].name,
                   typenames[(yyvsp[0]).etype], typenames[(yyvsp[-1]).etype]);
             kb_error(2653,errmsg,COMMAND_ERROR);
           }
           int_val = (yyvsp[0]).qnum;
           break;
         default:
           k = makenode(ATTRIBUTE_NODE,(yyvsp[0]).i,(yyvsp[0]).qnum); 
           list[k].op1.localnum = list[(yyvsp[-1]).i].op2.localnum;
           k = makenode(QUALIFIED_ATTRIBUTE_NODE,(yyvsp[-1]).i,k); 
           (yyval).i = makenode(PRINT_NODE,k,0);
           goto vnexit;
       }
       int_val |= ((yyvsp[-1]).etype << YYTYPESHIFT);
       (yyval).i = makenode(PRINT_ATTR_ARRAY_NODE,(yyvsp[-1]).i,0);
vnexit: ;
     ;}
    break;

  case 521:
#line 2296 "command.yac"
    {                                /* qasi */
   if ( (yyvsp[0]).datatype == ARRAY_TYPE )
      (yyval).i = makenode(PRINT_ARRAYPART_NODE,(yyvsp[0]).i,0);
   else
      (yyval).i = makenode(PRINT_NODE,(yyvsp[0]).i,0);
 ;}
    break;

  case 522:
#line 2308 "command.yac"
    { (yyval).i = makenode(PRINT_LETTER_NODE,(yyvsp[0]).i,0); /* qasj */ ;}
    break;

  case 523:
#line 2309 "command.yac"
    { (yyval).i = makenode(PRINT_LETTER_NODE,(yyvsp[0]).i,0); /* qask */ ;}
    break;

  case 524:
#line 2310 "command.yac"
    { (yyval).i = makenode(PRINT_LETTER_NODE,(yyvsp[0]).i,0); /* qasl */ ;}
    break;

  case 525:
#line 2311 "command.yac"
    { kb_error(2385,                                         /* qasm */
  "Syntax: PRINT  procedure | expression | stringexpression \n",Q_ERROR ); ;}
    break;

  case 526:
#line 2316 "command.yac"
    { (yyval).i = makenode(SHOW_TRANS_NODE,(yyvsp[0]).i,0); /* qasn */ ;}
    break;

  case 527:
#line 2317 "command.yac"
    { kb_error(2386,"Syntax: SHOW_TRANS \"string\"\n",Q_ERROR);  /* qaso */;}
    break;

  case 528:
#line 2320 "command.yac"
    { backquote_flag = 1; (yyval).i = makenode(BACKQUOTE_START_NODE,0,0);     /* qasp */
            if ( local_nest_depth == 0 )
               init_local_scope(0,0);
            begin_local_scope();
            list[listtop++].type = SETUP_FRAME_NODE; ;}
    break;

  case 529:
#line 2327 "command.yac"
    { verb_flag = 0; backquote_flag = 0;  end_local_scope();       /* qasq */
     (yyval).i = makenode(BACKQUOTE_END_NODE,(yyvsp[-2]).i,(yyvsp[-1]).i);
   ;}
    break;

  case 530:
#line 2331 "command.yac"
    {                                                     /* qasr */
     (yyval).i = makenode(ACOMMANDEXPR_NODE,(yyvsp[-1]).i,(yyvsp[0]).i);
     (yyval).datatype = REAL_TYPE;   
   ;}
    break;

  case 531:
#line 2337 "command.yac"
    {                                                        /* qass */
     backquote_flag = 0;
     kb_error(3805,"Backquote syntax: ` commands ` , expression\n",
         Q_ERROR);
   ;}
    break;

  case 532:
#line 2345 "command.yac"
    { (yyval).i = makenode(FUNCTION_CALL_NODE,(yyvsp[-2]).i,0);            /* qast */
        (yyval).i = makenode(FUNCTION_CALL_RETURN_NODE,(yyval).i,0);
        (yyval).datatype = REAL_TYPE;     
      ;}
    break;

  case 533:
#line 2351 "command.yac"
    { (yyval).i = makenode(FUNCTION_CALL_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i);           /* qasu */
        (yyval).i = makenode(FUNCTION_CALL_RETURN_NODE,(yyval).i,0);
        (yyval).datatype = REAL_TYPE;  
      ;}
    break;

  case 534:
#line 2357 "command.yac"
    { kb_error(2870, "Function call needs argument list.\n",Q_ERROR); /* qasv */ ;}
    break;

  case 535:
#line 2361 "command.yac"
    { (yyval).i = makenode(PROCEDURE_CALL_NODE,(yyvsp[-2]).i,0);       /* qasw */ 
        (yyval).i = makenode(PROCEDURE_CALL_RETURN_NODE,(yyval).i,0);
      ;}
    break;

  case 536:
#line 2366 "command.yac"
    { (yyval).i = makenode(PROCEDURE_CALL_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i);  /* qasx */
        (yyval).i = makenode(PROCEDURE_CALL_RETURN_NODE,(yyval).i,0);
      ;}
    break;

  case 537:
#line 2371 "command.yac"
    { kb_error(2871, "Procedure call needs argument list.\n",Q_ERROR); /* qasy */ ;}
    break;

  case 538:
#line 2376 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(WRAP_VERTEX_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); /* qasz */;}
    break;

  case 539:
#line 2379 "command.yac"
    { kb_error(3808,"Syntax: wrap_vertex(vertex_number,wrap_code_number)\n",    /* qata */
          Q_ERROR); ;}
    break;

  case 540:
#line 2385 "command.yac"
    {  REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(VIEW_TRANSFORM_PARITY_NODE,(yyvsp[-1]).i,0);  /* qatb */ 
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 541:
#line 2389 "command.yac"
    { kb_error(2602,
          "view_transform_parity needs one index.\n", Q_ERROR); /* qatc */ ;}
    break;

  case 542:
#line 2395 "command.yac"
    { REAL_CHECK((yyvsp[-3]));                                     /* qatcb */
	    (yyval).i = makenode(CONSTRAINT_NONPOSITIVE_NODE,(yyvsp[-3]).i,0);
		(yyval).datatype = REAL_TYPE;
      ;}
    break;

  case 543:
#line 2401 "command.yac"
    { REAL_CHECK((yyvsp[-3]));                                     /* qatcc */
	    (yyval).i = makenode(CONSTRAINT_NONNEGATIVE_NODE,(yyvsp[-3]).i,0);
		(yyval).datatype = REAL_TYPE;
      ;}
    break;

  case 544:
#line 2407 "command.yac"
    { REAL_CHECK((yyvsp[-3]));                                     /* qatcd */
	    (yyval).i = makenode(CONSTRAINT_FIXED_NODE,(yyvsp[-3]).i,0);
		(yyval).datatype = REAL_TYPE;
      ;}
    break;

  case 545:
#line 2413 "command.yac"
    { 
	  kb_error(4689,"Syntax: is_constraint[number].nonpositive\n         is_constraint[number].nonnegative\n         is_constraint[number].fixed\n",Q_ERROR ); /* qatce */
    ;}
    break;

  case 546:
#line 2419 "command.yac"
    { int nn,mm;                                                         /* qatd */
      REAL_CHECK((yyvsp[-7])); REAL_CHECK((yyvsp[-5]));  REAL_CHECK((yyvsp[-3]));
      nn = makenode(TEXT_SPOT_NODE,(yyvsp[-7]).i,(yyvsp[-5]).i);
	  mm = makenode(TEXT_SIZE_NODE,nn,(yyvsp[-3]).i);
      (yyval).i = makenode(DISPLAY_TEXT_NODE,mm,(yyvsp[-1]).i);
      (yyval).datatype = REAL_TYPE;  
    ;}
    break;

  case 547:
#line 2428 "command.yac"
    { kb_error(4683,"Syntax: text_id := DISPLAY_TEXT(x,y,size,string)\n",Q_ERROR ); /* qate */
    ;}
    break;

  case 548:
#line 2432 "command.yac"
    { kb_error(3254,"Syntax: text_id := DISPLAY_TEXT(x,y,size,string)\n",Q_ERROR ); /* qatf */
    ;}
    break;

  case 549:
#line 2436 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(DELETE_TEXT_NODE,(yyvsp[-1]).i,0);  /* qatg */
   ;}
    break;

  case 550:
#line 2440 "command.yac"
    { kb_error(4684,"Syntax: DELETE_TEXT(text_id)\n",Q_ERROR );  /* qath */
    ;}
    break;

  case 551:
#line 2446 "command.yac"
    { (yyval).i = makenode(CREATE_VERTEX_NODE,(yyvsp[-1]).i,0); (yyval).datatype = REAL_TYPE; /* qati */ ;}
    break;

  case 552:
#line 2448 "command.yac"
    { kb_error(2387,"Syntax: NEW_VERTEX(x,y,...) \n",Q_ERROR); /* qatj */ ;}
    break;

  case 553:
#line 2453 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1]));                      /* qatk */
     (yyval).i = makenode(CREATE_EDGE_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); 
     (yyval).datatype = REAL_TYPE;    
   ;}
    break;

  case 554:
#line 2458 "command.yac"
    { kb_error(2388,"Syntax: NEW_EDGE(tail_id,head_id) \n",Q_ERROR); /* qatl */ ;}
    break;

  case 555:
#line 2463 "command.yac"
    { if ( list[(yyvsp[-1]).i].op1.argcount != 3 )                                     /* qatm */
       kb_error(5389,"Syntax: FACET_CROSSCUT(facet_id,tail_id,head_id) \n",
           Q_ERROR); 
     (yyval).i = makenode(FACET_CROSSCUT_NODE,(yyvsp[-1]).i,0); 
     (yyval).datatype = REAL_TYPE;    
   ;}
    break;

  case 556:
#line 2470 "command.yac"
    { kb_error(1947,"Syntax: FACET_CROSSCUT(facet_id,tail_id,head_id) \n",Q_ERROR); /* qatn */;}
    break;

  case 557:
#line 2474 "command.yac"
    { (yyval).i = makenode(CREATE_FACET_NODE,(yyvsp[-1]).i,0);(yyval).datatype = REAL_TYPE;  /* qato */ ;}
    break;

  case 558:
#line 2476 "command.yac"
    { kb_error(2389,"Syntax: NEW_FACET(edge1,edge2,...) \n",Q_ERROR); /* qatp */ ;}
    break;

  case 559:
#line 2479 "command.yac"
    { (yyval).i = makenode(CREATE_BODY_NODE,0,0); (yyval).datatype = REAL_TYPE; /* qatr */ ;}
    break;

  case 560:
#line 2480 "command.yac"
    { kb_error(2390,"Syntax: NEW_BODY \n",Q_ERROR); /* qats */ ;}
    break;

  case 561:
#line 2483 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(ELINDEX_NODE,(yyvsp[0]).i,0); /* qatt */ ;}
    break;

  case 562:
#line 2484 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(ELINDEX_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); /* qatu */ ;}
    break;

  case 563:
#line 2485 "command.yac"
    { (yyval).i = makenode(PUSH_ELEMENT_ID_NODE,(yyvsp[0]).i,(yyvsp[0]).qnum); /* qatv */ ;}
    break;

  case 564:
#line 2486 "command.yac"
    { (yyval).i = makenode(PUSH_ELEMENT_ID_NODE,-(yyvsp[-1]).i,(yyvsp[-1]).qnum); /* qatw */ ;}
    break;

  case 565:
#line 2487 "command.yac"
    { (yyval).i = makenode(PUSH_ELEMENT_ID_NODE,(yyvsp[0]).i,(yyvsp[0]).qnum); /* qatx */ ;}
    break;

  case 566:
#line 2488 "command.yac"
    { (yyval).i = makenode(PUSH_ELEMENT_ID_NODE,-(yyvsp[-1]).i,(yyvsp[-1]).qnum); /* qaty */ ;}
    break;

  case 567:
#line 2491 "command.yac"
    { (yyval).i = makenode(VALID_ELEMENT_NODE,(yyvsp[-4]).i,(yyvsp[-2]).i); (yyval).datatype = REAL_TYPE; /* qatz */ ;}
    break;

  case 568:
#line 2493 "command.yac"
    { kb_error(3904,"Syntax: valid_element(element_type[expr]) \n",Q_ERROR); /* qaua */ ;}
    break;

  case 569:
#line 2497 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(VALID_CONSTRAINT_NODE,(yyvsp[-1]).i,0); (yyval).datatype = REAL_TYPE; /* qaub */ ;}
    break;

  case 570:
#line 2499 "command.yac"
    { kb_error(1901,"Syntax: valid_constraint(expr) \n",Q_ERROR); /* qauc */ ;}
    break;

  case 571:
#line 2504 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(VALID_BOUNDARY_NODE,(yyvsp[-1]).i,0); (yyval).datatype = REAL_TYPE; /* qaud */ ;}
    break;

  case 572:
#line 2506 "command.yac"
    { kb_error(3029,"Syntax: valid_boundary(expr) \n",Q_ERROR); /* qaue */ ;}
    break;

  case 573:
#line 2511 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(MERGE_VERTEX_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); /* qauf */;}
    break;

  case 574:
#line 2514 "command.yac"
    { kb_error(3885,"Syntax: VERTEX_MERGE(first_id,second_id) \n",Q_ERROR); /* qaug */ ;}
    break;

  case 575:
#line 2518 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(MERGE_EDGE_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); /* qauh */ ;}
    break;

  case 576:
#line 2521 "command.yac"
    { kb_error(3637,"Syntax: EDGE_MERGE(first_oid,second_oid) \n",Q_ERROR); /* qaui */ ;}
    break;

  case 577:
#line 2525 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1])); (yyval).i = makenode(MERGE_FACET_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); /* qauj */;}
    break;

  case 578:
#line 2528 "command.yac"
    { kb_error(3607,"Syntax: FACET_MERGE(first_oid,second_oid) \n",Q_ERROR); /* qauk */ ;}
    break;

  case 579:
#line 2532 "command.yac"
    { int_val = (yyvsp[-1]).i; (yyval).i = makenode(MATRIX_MULTIPLY_NODE,(yyvsp[-5]).i,(yyvsp[-3]).i);  /* qaul */ ;}
    break;

  case 580:
#line 2535 "command.yac"
    { kb_error(3790,"matrix_multiply syntax: matrix_multiply(mat1,mat2,mat3)\n",  /* qaum */ 
     COMMAND_ERROR);
   ;}
    break;

  case 581:
#line 2540 "command.yac"
    { kb_error(3791,"matrix_multiply third argument is not an array.\n",       /* qaun */
     COMMAND_ERROR); 
   ;}
    break;

  case 582:
#line 2545 "command.yac"
    { kb_error(3792,"matrix_multiply second argument is not an array.\n",  /* qauo */ 
     COMMAND_ERROR);
   ;}
    break;

  case 583:
#line 2550 "command.yac"
    { kb_error(3793,"matrix_multiply first argument is not an array.\n",  /* qaup */ 
     COMMAND_ERROR);
   ;}
    break;

  case 584:
#line 2555 "command.yac"
    { (yyval).i = makenode(MATRIX_DETERMINANT_NODE,(yyvsp[-1]).i,0); (yyval).datatype = REAL_TYPE; /* qauq */ ;}
    break;

  case 585:
#line 2559 "command.yac"
    { (yyval).i = makenode(MATRIX_INVERSE_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); (yyval).datatype = REAL_TYPE; /* qaur */ ;}
    break;

  case 586:
#line 2562 "command.yac"
    { kb_error(3794,"matrix_inverse syntax: matrix_inverse(mat1,mat2)\n",  /* qaus */ 
     COMMAND_ERROR);
   ;}
    break;

  case 587:
#line 2566 "command.yac"
    { kb_error(3795,"matrix_inverse second argument is not an array.\n",  /* qaut */ 
     COMMAND_ERROR);
   ;}
    break;

  case 588:
#line 2570 "command.yac"
    { kb_error(3796,"matrix_inverse first argument is not an array.\n",  /* qauu */ 
     COMMAND_ERROR);
   ;}
    break;

  case 589:
#line 2575 "command.yac"
    {  (yyval).i = LIST_NODE; loopdepth++; ;}
    break;

  case 590:
#line 2578 "command.yac"
    { erroutstring("Syntax: LIST element_gen [ name ] [ WHERE rexpr ]\n");  /* qauv */
     erroutstring("        LIST TOPINFO\n");
     erroutstring("        LIST BOTTOMINFO\n");
     erroutstring("        LIST ATTRIBUTES\n");
     erroutstring("        LIST PROCEDURES\n");
     erroutstring("        LIST QUANTITY quantityname\n");
     erroutstring("        LIST METHOD_INSTANCE instancename\n");
     erroutstring("        LIST CONSTRAINT rexpr or name\n");
     erroutstring("        LIST BOUNDARY rexpr or name\n");
     kb_error(1899,NULL,Q_ERROR);
   ;}
    break;

  case 591:
#line 2591 "command.yac"
    {   (yyval).i = DELETE_NODE; loopdepth++; /* qauw */ ;}
    break;

  case 592:
#line 2594 "command.yac"
    { kb_error(2391,"Syntax: DELETE element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qaux */ ;}
    break;

  case 593:
#line 2597 "command.yac"
    {   (yyval).i = VERTEX_AVERAGE_NODE; loopdepth++; /* qauy */ ;}
    break;

  case 594:
#line 2598 "command.yac"
    {   (yyval).i = RAW_VERTEX_AVERAGE_NODE; loopdepth++; /* qauz */ ;}
    break;

  case 595:
#line 2599 "command.yac"
    {   (yyval).i = RAWEST_VERTEX_AVERAGE_NODE; loopdepth++; /* qava */ ;}
    break;

  case 596:
#line 2602 "command.yac"
    { kb_error(2392,"Syntax: VERTEX_AVERAGE element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavb */ ;}
    break;

  case 597:
#line 2605 "command.yac"
    { kb_error(2393,"Syntax: RAW_VERTEX_AVERAGE element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavc */ ;}
    break;

  case 598:
#line 2608 "command.yac"
    { kb_error(2394,"Syntax: RAWEST_VERTEX_AVERAGE element_gen [ name ] [ WHERE expr ]\n",Q_ERROR); /* qavd */ ;}
    break;

  case 599:
#line 2611 "command.yac"
    {   (yyval).i = DISSOLVE_NODE; loopdepth++; /* qave */ ;}
    break;

  case 600:
#line 2613 "command.yac"
    { kb_error(2395,"Syntax: DISSOLVE element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavf */ ;}
    break;

  case 601:
#line 2616 "command.yac"
    {   (yyval).i = REVERSE_ORIENTATION_NODE; loopdepth++; /* aqvg */ ;}
    break;

  case 602:
#line 2618 "command.yac"
    { kb_error(3250,"Syntax: REVERSE_ORIENTATION element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavh */ ;}
    break;

  case 603:
#line 2621 "command.yac"
    {   (yyval).i = REFINE_NODE; loopdepth++; /* qavi */ ;}
    break;

  case 604:
#line 2623 "command.yac"
    { kb_error(2396,"Syntax: REFINE element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavj */ ;}
    break;

  case 605:
#line 2627 "command.yac"
    {   (yyval).i = EDGESWAP_NODE; loopdepth++; /* qavk */ ;}
    break;

  case 606:
#line 2629 "command.yac"
    { kb_error(2397,"Syntax: EDGESWAP edge_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavl */  ;}
    break;

  case 607:
#line 2633 "command.yac"
    {   (yyval).i = T1_EDGESWAP_NODE; loopdepth++; /* qavm */ ;}
    break;

  case 608:
#line 2635 "command.yac"
    { kb_error(4009,"Syntax: T1_EDGESWAP edge_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavn */ ;}
    break;

  case 609:
#line 2638 "command.yac"
    {   (yyval).i = EQUIANGULATE_NODE; loopdepth++; /* qavo */ ;}
    break;

  case 610:
#line 2641 "command.yac"
    { kb_error(2545,"Syntax: EQUIANGULATE_TOK edge_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavp */ ;}
    break;

  case 611:
#line 2644 "command.yac"
    {   (yyval).i = POP_NODE; loopdepth++; /* qavq */ ;}
    break;

  case 612:
#line 2646 "command.yac"
    { kb_error(2431,"Syntax: POP element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavr */ ;}
    break;

  case 613:
#line 2649 "command.yac"
    {   (yyval).i = POP_TRI_TO_EDGE_NODE; loopdepth++; /* qavs */ ;}
    break;

  case 614:
#line 2651 "command.yac"
    { kb_error(2800,
     "Syntax: POP_TRI_TO_EDGE facet_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavt */ ;}
    break;

  case 615:
#line 2655 "command.yac"
    {   (yyval).i = POP_EDGE_TO_TRI_NODE; loopdepth++; /* qavu */ ;}
    break;

  case 616:
#line 2657 "command.yac"
    { kb_error(2801,"Syntax: POP_EDGE_TO_TRI edge_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavv */ ;}
    break;

  case 617:
#line 2660 "command.yac"
    {   (yyval).i = POP_QUAD_TO_QUAD_NODE; loopdepth++; /* qavx */ ;}
    break;

  case 618:
#line 2662 "command.yac"
    { kb_error(2802,"Syntax: POP_QUAD_TO_QUAD facet_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qavy */ ;}
    break;

  case 619:
#line 2665 "command.yac"
    {   (yyval).i = FIX_NODE; loopdepth++; /* qavz */ ;}
    break;

  case 620:
#line 2666 "command.yac"
    {  (yyval).i = UNFIX_NODE; loopdepth++; /* qawa */ ;}
    break;

  case 621:
#line 2668 "command.yac"
    { (yyval).i = makenode(FIX_PARAMETER_NODE,(yyvsp[0]).i,0); /* qawb */ ;}
    break;

  case 622:
#line 2669 "command.yac"
    { (yyval).i = makenode(UNFIX_PARAMETER_NODE,(yyvsp[0]).i,0); /* qawc */ ;}
    break;

  case 623:
#line 2671 "command.yac"
    { (yyval).i = makenode(FIX_QUANTITY_NODE,(yyvsp[0]).i,0); /* qawd */;}
    break;

  case 624:
#line 2674 "command.yac"
    { (yyval).i = makenode(UNFIX_QUANTITY_NODE,(yyvsp[0]).i,0); /* qawe */ ;}
    break;

  case 625:
#line 2677 "command.yac"
    { kb_error(2398,"Syntax: FIX element_gen [ name ] [ WHERE rexpr ] or FIX quantity_name\n",  /* qawf */
      Q_ERROR); ;}
    break;

  case 626:
#line 2681 "command.yac"
    { kb_error(2399,"Syntax: UNFIX element_gen [ name ] [ WHERE rexpr ] or UNFIX quantity_name\n",  /* qawg */
      Q_ERROR); ;}
    break;

  case 627:
#line 2685 "command.yac"
    { if ( const_expr_flag ) YYABORT; (yyval).etype = (yyval).i = VERTEX; /* qawh */  ;}
    break;

  case 628:
#line 2686 "command.yac"
    { if ( const_expr_flag ) YYABORT; (yyval).etype = (yyval).i = EDGE; /* qawi */ ;}
    break;

  case 629:
#line 2687 "command.yac"
    { if ( const_expr_flag ) YYABORT; (yyval).etype = (yyval).i = FACET; /* qawj */ ;}
    break;

  case 630:
#line 2688 "command.yac"
    { if ( const_expr_flag ) YYABORT; (yyval).etype = (yyval).i = BODY; /* qawk */ ;}
    break;

  case 631:
#line 2689 "command.yac"
    { if ( const_expr_flag ) YYABORT; (yyval).etype = (yyval).i = FACETEDGE; /* qawl */ ;}
    break;

  case 632:
#line 2691 "command.yac"
    { int next;                                            /* qawm */
         next = makenode(INIT_ELEMENT_NODE,(yyvsp[0]).i,0); 
         (yyval).i = makenode(NEXT_ELEMENT_NODE,next,0);
         (yyval).etype = (yyvsp[0]).i;
       ;}
    break;

  case 633:
#line 2697 "command.yac"
    { int next;                                           /* qawn */
         next = makenode(INIT_SUBELEMENT_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); 
         (yyval).i = makenode(NEXT_ELEMENT_NODE,next,0);
         (yyval).etype = (yyvsp[0]).etype;
       ;}
    break;

  case 634:
#line 2712 "command.yac"
    { verb_flag = 0; (yyval).i = makenode(INDEXED_ELEMENT_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i);     /* qawp */
       (yyval).etype = (yyvsp[-3]).i; ;}
    break;

  case 635:
#line 2716 "command.yac"
    { kb_error(3809,"Missing index of element.\n",Q_ERROR); /* qawq */ ;}
    break;

  case 636:
#line 2718 "command.yac"
    { REAL_CHECK((yyvsp[-1])); kb_error(3832,"Missing right bracket after index expression.\n",Q_ERROR); /* qawr */ ;}
    break;

  case 637:
#line 2721 "command.yac"
    { verb_flag = 0; (yyval).i = makenode(SYMBOL_ELEMENT_NODE,(yyvsp[0]).i,0);  /* qaws */
                        (yyval).etype = list[(yyval).i].op1.eltype; ;}
    break;

  case 638:
#line 2724 "command.yac"
    { verb_flag = 0;                                 /* qawt */
     elsym = symbol_lookup("self");
     if ( elsym == NULL )
       kb_error(2400,"SELF not defined, since not in attribute function def.\n",
           COMMAND_ERROR);
     (yyval).i = makenode(SELF_ELEMENT_NODE,elsym->type,0);
     (yyval).etype = elsym->type;
   ;}
    break;

  case 639:
#line 2732 "command.yac"
    { verb_flag = 0; (yyval).i = makenode(ELEMENT_IDENT_NODE,(yyvsp[0]).i,0);  /* qawu */
                          list[(yyval).i].op1.eltype = (yyvsp[0]).etype;
                        (yyval).etype = (yyvsp[0]).etype; ;}
    break;

  case 640:
#line 2736 "command.yac"
    { (yyval) = (yyvsp[-1]); /* qawv */ ;}
    break;

  case 641:
#line 2737 "command.yac"
    { (yyval) = (yyvsp[0]); /* qaww */ ;}
    break;

  case 642:
#line 2739 "command.yac"
    {  REAL_CHECK((yyvsp[-1]));                             /* qawx */
           subtype = (yyvsp[-3]).i; (yyval).i = makenode(INDEXED_SUBTYPE_NODE,(yyvsp[-4]).i,(yyvsp[-1]).i);
           (yyval).etype = (yyvsp[-3]).etype; 
        ;}
    break;

  case 643:
#line 2744 "command.yac"
    { kb_error(3810,"Missing index of element.\n",Q_ERROR); /* qawy */ ;}
    break;

  case 644:
#line 2746 "command.yac"
    { REAL_CHECK((yyvsp[-1])); kb_error(3812,"Missing right bracket after index expression.\n",Q_ERROR); /* qawz */ ;}
    break;

  case 645:
#line 2753 "command.yac"
    { int type = list[(yyvsp[0]).i].op1.eltype;               /* qaxb */
          begin_scope(); /* ended at end of aggregate */
          elsym = symbol_add(default_name,type);
          elsym->localnum = list[(yyvsp[0]).i].op2.localnum;
          strcpy(last_name,default_name);
          (yyvsp[0]).symptr = elsym;
          (yyval).i = makenode(SINGLE_ELEMENT_NODE,(yyvsp[0]).i,0);
          (yyval).symptr = elsym;
          (yyval).etype = (yyvsp[0]).etype;
        ;}
    break;

  case 646:
#line 2765 "command.yac"
    { int type = list[(yyvsp[-1]).i].op1.eltype;           /* qaxc */
          begin_scope(); /* ended at end of aggregate */
          elsym = symbol_add((yyvsp[0]).lexeme,type);
          elsym->localnum = list[(yyvsp[-1]).i].op2.localnum;
          strcpy(last_name,(yyvsp[0]).lexeme);
          (yyval).i = makenode(SINGLE_ELEMENT_NODE,(yyvsp[-1]).i,0);
          list[(yyvsp[-1]).i].op5.string =
            (char*)mycalloc(strlen(elsym->name)+1,1);
          list[(yyvsp[-1]).i].flags |= HAS_STRING_5;
          strcpy(list[(yyvsp[-1]).i].op5.string,elsym->name);
          (yyvsp[-1]).symptr = elsym;
          (yyval).symptr = elsym;
          elsym = symbol_add(default_name,type); /* current id as default */
          elsym->localnum = list[(yyvsp[-1]).i].op2.localnum;
          (yyval).etype = (yyvsp[-1]).etype;
        ;}
    break;

  case 647:
#line 2782 "command.yac"
    { int type = list[(yyvsp[0]).i+list[(yyvsp[0]).i].left].op1.eltype;        /* qaxd */
          begin_scope(); /* ended at end of aggregate */
          elsym = symbol_add(default_name,type);
          elsym->localnum = list[(yyvsp[0]).i].op2.localnum;
          strcpy(last_name,default_name);
          list[(yyvsp[0]).i].op5.string =
            (char*)mycalloc(strlen(default_name)+1,1);
          list[(yyvsp[0]).i].flags |= HAS_STRING_5;
          strcpy(list[(yyvsp[0]).i].op5.string,default_name);
          (yyvsp[0]).symptr = elsym;
          (yyval).symptr = elsym;
          (yyval).i = (yyvsp[0]).i;
          (yyval).etype = (yyvsp[0]).etype;
        ;}
    break;

  case 648:
#line 2797 "command.yac"
    { int type = list[(yyvsp[-1]).i+list[(yyvsp[-1]).i].left].op1.eltype;   /* qaxe */
          begin_scope(); /* ended at end of aggregate */
          elsym = symbol_add((yyvsp[0]).lexeme,type);
          elsym->localnum = list[(yyvsp[-1]).i].op2.localnum;
          strcpy(last_name,(yyvsp[0]).lexeme);
          list[(yyvsp[-1]).i].op5.string =
            (char*)mycalloc(strlen(elsym->name)+1,1);
          list[(yyvsp[-1]).i].flags |= HAS_STRING_5;
          strcpy(list[(yyvsp[-1]).i].op5.string,elsym->name);
          (yyvsp[-1]).symptr = elsym;
          (yyval).symptr = elsym;
          (yyval).i = (yyvsp[-1]).i;
          elsym = symbol_add(default_name,type); /* current id as default */
          elsym->localnum = list[(yyvsp[-1]).i].op2.localnum;
          (yyval).etype = (yyvsp[-1]).etype;
        ;}
    break;

  case 649:
#line 2814 "command.yac"
    { kb_error(1890,"Name already in use as procedure name.\n",COMMAND_ERROR); /* qaxf */ ;}
    break;

  case 650:
#line 2816 "command.yac"
    { kb_error(1891,"Name already in use as procedure name.\n",COMMAND_ERROR); /* qaxg */  ;}
    break;

  case 651:
#line 2818 "command.yac"
    { kb_error(1892,"Name already in use as variable name.\n",COMMAND_ERROR); /* qaxh */ ;}
    break;

  case 652:
#line 2820 "command.yac"
    { kb_error(1893,"Name already in use as variable name.\n",COMMAND_ERROR); /* qaxi */ ;}
    break;

  case 653:
#line 2822 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(WHERE_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);         /* qaxj */ 
           (yyval).symptr = (yyvsp[-2]).symptr;
           ;}
    break;

  case 654:
#line 2826 "command.yac"
    { kb_error(3901,"Missing boolean expression after WHERE.\n",Q_ERROR); /* qaxk */ ;}
    break;

  case 655:
#line 2829 "command.yac"
    { (yyval).i = ON_; /* qaxl */ ;}
    break;

  case 656:
#line 2830 "command.yac"
    { (yyval).i = OFF_; /* qaxm */ ;}
    break;

  case 657:
#line 2832 "command.yac"
    { (yyval).i = makenode(QUOTATION_NODE,0,0); /* qaxn */ ;}
    break;

  case 658:
#line 2834 "command.yac"
    { size_t size1 = strlen(list[(yyval).i].op1.string);           /* qaxo */
       size_t size2 = strlen(yytext);
       (yyval).i = (yyvsp[-1]).i;
       list[(yyval).i].op1.string = (char*)kb_realloc(list[(yyval).i].op1.string,
                                    size1+size2+1);
       strncpy(list[(yyval).i].op1.string+size1,yytext,size2);
     ;}
    break;

  case 659:
#line 2841 "command.yac"
    { (yyval).i = (yyvsp[0]).i /* qaxp */ ;}
    break;

  case 660:
#line 2842 "command.yac"
    { (yyval).i = makenode(STRINGGLOBAL_NODE,(yyvsp[0]).i,0); /* qaxq */ ;}
    break;

  case 661:
#line 2844 "command.yac"
    { (yyval).i = makenode(PERM_STRINGGLOBAL_NODE,(yyvsp[0]).i,0); /* qaxr */ ;}
    break;

  case 662:
#line 2845 "command.yac"
    { (yyval).i = makenode(DATAFILENAME_NODE,(yyvsp[0]).i,0); /* qaxs */ ;}
    break;

  case 663:
#line 2846 "command.yac"
    { (yyval).i = makenode(WARNING_MESSAGES_NODE,(yyvsp[0]).i,0); /* qaxt */ ;}
    break;

  case 664:
#line 2847 "command.yac"
    { (yyval).i = makenode(DATE_AND_TIME_NODE,0,0); /* qaxu */ ;}
    break;

  case 665:
#line 2848 "command.yac"
    { (yyval).i = makenode(GET_TRANSFORM_EXPR_NODE,0,0); /* qaxv */ ;}
    break;

  case 666:
#line 2849 "command.yac"
    { (yyval).i = makenode(EVOLVER_VERSION_NODE,0,0); /* qaxw */ ;}
    break;

  case 667:
#line 2851 "command.yac"
    { (yyval).i = makenode(SPRINTFHEAD_NODE,(yyvsp[0]).i,0); /* qaxx */ ;}
    break;

  case 668:
#line 2853 "command.yac"
    { kb_error(3894,"Missing format string after SPRINTF.\n",Q_ERROR); /* qaxy */ ;}
    break;

  case 669:
#line 2854 "command.yac"
    {                          /* qaxz */ 
    if ( list[(yyval).i].op2.argcount > 0 )
      kb_error(5737,"sprintf string has formats, but there are no arguments.\n",
         Q_ERROR);
   (yyval).i = (yyvsp[0]).i; ;}
    break;

  case 670:
#line 2859 "command.yac"
    {                           /* qaya */ 
     if ( (list[(yyvsp[-2]).i+list[(yyvsp[-2]).i].left].type == QUOTATION_NODE) && 
            (list[(yyvsp[-2]).i].op2.argcount != list[(yyvsp[0]).i].op1.argcount) )
     { sprintf(errmsg,"sprintf has %d formats, but there are %d arguments.\n",
         list[(yyvsp[-2]).i].op2.argcount, list[(yyvsp[0]).i].op1.argcount);
       kb_error(1926,errmsg,Q_ERROR);
     }
     (yyval).i = makenode(SPRINTF_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); ;}
    break;

  case 671:
#line 2868 "command.yac"
    { kb_error(3806,"Error in SPRINTF arguments.\n",Q_ERROR); /* qayb */ ;}
    break;

  case 672:
#line 2871 "command.yac"
    { (yyval).qnum = (yyvsp[0]).i; (yyval).i = COORD_NODE; (yyval).datatype=REAL_TYPE; /* qayc */;}
    break;

  case 673:
#line 2872 "command.yac"
    { (yyval).qnum = (yyvsp[0]).i; (yyval).i = PARAM_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 674:
#line 2873 "command.yac"
    { (yyval).i = GET_LENGTH_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 675:
#line 2874 "command.yac"
    { (yyval).i = GET_MEANCURV_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 676:
#line 2875 "command.yac"
    { (yyval).i = GET_SHOW_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 677:
#line 2876 "command.yac"
    { (yyval).i = GET_ORIENTATION_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 678:
#line 2877 "command.yac"
    { (yyval).i = GET_SQ_MEAN_CURV_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 679:
#line 2878 "command.yac"
    { (yyval).i = GET_DIHEDRAL_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 680:
#line 2879 "command.yac"
    { (yyval).i = GET_VALENCE_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 681:
#line 2880 "command.yac"
    { (yyval).i = GET_AREA_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 682:
#line 2881 "command.yac"
    { (yyval).i = GET_VOLUME_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 683:
#line 2882 "command.yac"
    { (yyval).i = GET_VOLCONST_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 684:
#line 2883 "command.yac"
    { (yyval).i = GET_TARGET_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 685:
#line 2884 "command.yac"
    { (yyval).i = GET_MPI_TASK_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 686:
#line 2885 "command.yac"
    { (yyval).i = GET_DENSITY_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 687:
#line 2886 "command.yac"
    { (yyval).i = GET_PRESSURE_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 688:
#line 2887 "command.yac"
    { (yyval).i = GET_ID_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 689:
#line 2888 "command.yac"
    { (yyval).i = GET_OID_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 690:
#line 2889 "command.yac"
    { (yyval).i = GET_COLOR_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 691:
#line 2890 "command.yac"
    { (yyval).i = GET_FRONTCOLOR_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 692:
#line 2891 "command.yac"
    { (yyval).i = GET_BACKCOLOR_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 693:
#line 2892 "command.yac"
    { (yyval).i = GET_BACKBODY_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 694:
#line 2893 "command.yac"
    { (yyval).i = GET_FRONTBODY_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 695:
#line 2894 "command.yac"
    { (yyval).i = GET_ORIGINAL_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 696:
#line 2895 "command.yac"
    { (yyval).i = GET_FIXED_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 697:
#line 2896 "command.yac"
    { (yyval).i = GET_CENTEROFMASS_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 698:
#line 2897 "command.yac"
    { (yyval).i = GET_NO_REFINE_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 699:
#line 2898 "command.yac"
    { (yyval).i = GET_NO_TRANSFORM_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 700:
#line 2899 "command.yac"
    { (yyval).i = GET_HIT_PARTNER_NODE; (yyval).datatype=REAL_TYPE;;}
    break;

  case 701:
#line 2900 "command.yac"
    { (yyval).i = GET_NONCONTENT_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 702:
#line 2901 "command.yac"
    { (yyval).i = GET_NO_DISPLAY_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 703:
#line 2902 "command.yac"
    { (yyval).i = GET_FIXEDVOL_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 704:
#line 2903 "command.yac"
    { (yyval).i = GET_NO_HESSIAN_NORMAL_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 705:
#line 2904 "command.yac"
    { (yyval).i = GET_AXIAL_POINT_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 706:
#line 2905 "command.yac"
    { (yyval).i = GET_TRIPLE_PT_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 707:
#line 2906 "command.yac"
    { (yyval).i = GET_TETRA_PT_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 708:
#line 2907 "command.yac"
    { (yyval).i = GET_MIDV_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 709:
#line 2908 "command.yac"
    { (yyval).i = GET_WRAP_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 710:
#line 2909 "command.yac"
    { (yyval).i = GET_MID_EDGE_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 711:
#line 2910 "command.yac"
    { (yyval).i = GET_MID_FACET_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 712:
#line 2911 "command.yac"
    { (yyval).i = GET_BARE_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 713:
#line 2912 "command.yac"
    { (yyval).i = GET_PHASE_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 714:
#line 2913 "command.yac"
    { (yyval).qnum = (yyvsp[0]).i;  (yyval).i = GET_QUANTITY_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 715:
#line 2914 "command.yac"
    { (yyval).qnum = (yyvsp[0]).i;  (yyval).i = GET_INSTANCE_NODE; (yyval).datatype=REAL_TYPE; ;}
    break;

  case 716:
#line 2915 "command.yac"
    { (yyval).i = GET_OPACITY_NODE;  (yyval).datatype=REAL_TYPE; ;}
    break;

  case 717:
#line 2918 "command.yac"
    { struct extra *ex;                    /* qayd */
            (yyval).i = GET_EXTRA_ATTR_NODE ;  
            (yyval).qnum = (yyvsp[0]).qnum + ((yyvsp[0]).etype << YYTYPESHIFT); 
            (yyval).etype = (yyvsp[0]).etype; 
            ex = EXTRAS((yyvsp[0]).etype) + (yyvsp[0]).qnum;
            (yyval).datatype= (ex->type <= MAX_NUMERIC_TYPE) ? REAL_TYPE : ex->type; 
          ;}
    break;

  case 718:
#line 2927 "command.yac"
    { if ( const_expr_flag ) { YYABORT; /* illegal for const rexpr */ }  /* qaye */
          (yyval)= (yyvsp[0]);
        ;}
    break;

  case 719:
#line 2931 "command.yac"
    {                                                /* qayf */
        if ( (((datafile_flag && boundary_expr_flag && ((yyvsp[0]).i==PARAM_NODE))
          ||  ( datafile_flag &&  ((yyvsp[0]).i==COORD_NODE)))) &&
              (list[listtop-1].type != INDEXED_ELEMENT_NODE) &&
               (list[listtop-1].type != INDEXED_SUBTYPE_NODE)  )
             { coord_num = (yyvsp[0]).qnum; (yyval).i = makenode(PUSHPARAM_NODE,0,0); }
        else
        { 
          (yyval).i = makenode(ATTRIBUTE_NODE,(yyvsp[0]).i,(yyvsp[0]).qnum); 
          (yyval).datatype = list[(yyval).i].datatype = (yyvsp[0]).datatype;
        }
     ;}
    break;

  case 720:
#line 2945 "command.yac"
    {                                        /* qayg */
       if ( const_expr_flag ) { YYABORT; /* illegal for const rexpr */ }
       switch ( (yyvsp[-1]).i )
       { case COORD_NODE:
           (yyval).i = makenode(INDEXED_COORD_NODE,(yyvsp[0]).i,0);
           break;
         case GET_VERTEXNORMAL_NODE:
           (yyval).i = makenode(GET_VERTEXNORMAL_NODE,(yyvsp[0]).i,0);
           break;
         case PARAM_NODE:
           if ( (yyvsp[-1]).etype == VERTEX )
           { (yyval).qnum = V_PARAM_ATTR;
             (yyval).i =
               makenode(INDEXED_ATTRIBUTE_NODE,(yyvsp[0]).i,(yyval).qnum+((yyvsp[-1]).etype<<YYTYPESHIFT));
           } else
           kb_error(1895,"Illegal subscript.\n",COMMAND_ERROR);
           break;
         case GET_EXTRA_ATTR_NODE:
           (yyval).i = makenode(INDEXED_ATTRIBUTE_NODE,(yyvsp[0]).i,(yyvsp[-1]).qnum);
           (yyval).qnum = (yyvsp[-1]).qnum;
           break;
         default:
            kb_error(1498,"Illegal subscript.\n",COMMAND_ERROR);
       }
       (yyval).datatype = list[(yyval).i].datatype = (yyvsp[-1]).datatype;
    ;}
    break;

  case 721:
#line 2973 "command.yac"
    {  (yyval).i = makenode(ON_CONSTRAINT_NAME_NODE,(yyvsp[0]).i,0);  /* qayh */
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 722:
#line 2977 "command.yac"
    {  REAL_CHECK((yyvsp[0]));                                  /* qayi */
        (yyval).i = makenode(ON_CONSTRAINT_NODE,(yyvsp[0]).i,0);
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 723:
#line 2982 "command.yac"
    { kb_error(3807,"Need constraint name or number after ON_CONSTRAINT\n",  /* qayj */
         Q_ERROR); ;}
    break;

  case 724:
#line 2986 "command.yac"
    {  (yyval).i = makenode(CONSTRAINT_NAME_VALUE_NODE,(yyvsp[0]).i,0);  /* qayk */
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 725:
#line 2990 "command.yac"
    {  REAL_CHECK((yyvsp[0]));                                 /* qayl */
        (yyval).i = makenode(CONSTRAINT_VALUE_NODE,(yyvsp[0]).i,0);
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 726:
#line 2996 "command.yac"
    {  (yyval).i = makenode(ON_BOUNDARY_NAME_NODE,(yyvsp[0]).i,0);    /* qaym */
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 727:
#line 3000 "command.yac"
    {  REAL_CHECK((yyvsp[0]));                                   /* qayn */
        (yyval).i = makenode(ON_BOUNDARY_NODE,(yyvsp[0]).i,0); 
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 728:
#line 3005 "command.yac"
    { kb_error(3897,"Need constraint name or number after ON_BOUNDARY\n",  /* qayo */
         Q_ERROR); ;}
    break;

  case 729:
#line 3009 "command.yac"
    {  (yyval).i = makenode(HIT_CONSTRAINT_NAME_NODE,(yyvsp[0]).i,0);   /* qayp */
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 730:
#line 3013 "command.yac"
    {  REAL_CHECK((yyvsp[0]));                                      /* qayq */
        (yyval).i = makenode(HIT_CONSTRAINT_NODE,(yyvsp[0]).i,0); 
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 731:
#line 3018 "command.yac"
    { kb_error(3898,"Need constraint name or number after HIT_CONSTRAINT\n",  /* qayr */
         Q_ERROR); ;}
    break;

  case 732:
#line 3022 "command.yac"
    {  (yyval).i = makenode(ON_QUANTITY_NODE,(yyvsp[0]).i,0);     /* qays */ 
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 733:
#line 3026 "command.yac"
    { kb_error(4004,"Need constraint name or number after ON_QUANTITY\n",  /* qayt */
         Q_ERROR); ;}
    break;

  case 734:
#line 3030 "command.yac"
    {  (yyval).i = makenode(ON_METHOD_INSTANCE_NODE,(yyvsp[0]).i,0);   /* qayu */
        (yyval).datatype = REAL_TYPE;
     ;}
    break;

  case 735:
#line 3034 "command.yac"
    { kb_error(3813,"Need constraint name or number after ON_METHOD_INSTANCE_\n",  /* qayv */
         Q_ERROR); ;}
    break;

  case 736:
#line 3038 "command.yac"
    {                                              /* qayw */
        if ( datafile_flag ) (yyval).i = (yyvsp[0]).i;
        else
        {
          elsym = symbol_lookup(default_name);
          if ( elsym ) 
          {
            check_element_type(list[(yyvsp[0]).i].type,elsym->type);
            list[(yyvsp[0]).i].op1.localnum = elsym->localnum;
          }
          else kb_error(1896,"\nMissing element for attribute. (Get quantity value with name.value) \n",COMMAND_ERROR);
        }
        list[(yyvsp[0]).i].datatype = (yyvsp[0]).datatype;
        (yyval).datatype = REAL_TYPE;  
      ;}
    break;

  case 737:
#line 3055 "command.yac"
    { (yyval).i = makenode(QUALIFIED_ATTRIBUTE_NODE,(yyvsp[-1]).i,(yyvsp[0]).i);   /* qayx */
             list[(yyvsp[0]).i].op1.localnum = list[(yyvsp[-1]).i].op2.localnum;
             list[(yyval).i].datatype = (yyvsp[0]).datatype;
             (yyval).datatype = REAL_TYPE;  
           ;}
    break;

  case 738:
#line 3062 "command.yac"
    { sprintf(errmsg,"\"%s\" is not an attribute name.\n",(yyvsp[0]).lexeme);   /* qayy */
           kb_error(3458,errmsg,Q_ERROR); 
         ;}
    break;

  case 739:
#line 3068 "command.yac"
    { (yyval).i = makenode(IS_DEFINED_NODE,(yyvsp[-1]).i,0); (yyval).datatype = REAL_TYPE; /* qayz */ ;}
    break;

  case 740:
#line 3070 "command.yac"
    { kb_error(3814,"Syntax: IS_DEFINED ( quoted_string )\n",Q_ERROR); /* qaza */ ;}
    break;

  case 741:
#line 3072 "command.yac"
    { kb_error(3815,"Missing closing parenthesis for IS_DEFINED\n",Q_ERROR); /* qazb */ ;}
    break;

  case 742:
#line 3077 "command.yac"
    { int etype;                                /* qazc */
             (yyval).qnum = (yyvsp[-1]).qnum; 
             etype = (yyvsp[-1]).etype;
             (yyval).i = makenode(SIZEOF_ATTR_NODE,(yyval).qnum,etype); 
             (yyval).datatype = REAL_TYPE;              
           ;}
    break;

  case 743:
#line 3085 "command.yac"
    { (yyval).i = makenode(SIZEOF_ARRAY_NODE,(yyvsp[-1]).i,0); (yyval).datatype = REAL_TYPE;  /* qazd */ ;}
    break;

  case 744:
#line 3087 "command.yac"
    { (yyval).i = makenode(SIZEOF_STRING_NODE,(yyvsp[-1]).i,0); (yyval).datatype = REAL_TYPE; /* qaze */ ;}
    break;

  case 745:
#line 3089 "command.yac"
    { strcpy(errmsg,"Syntax: SIZEOF ( extra_attribute )\n");          /* qazf */
       strcat(errmsg,"        SIZEOF ( array_name ) \n");
       strcat(errmsg,"        SIZEOF ( string_expr ) \n");
       kb_error(3816,errmsg,Q_ERROR);
     ;}
    break;

  case 746:
#line 3096 "command.yac"
    { (yyval).i = makenode(TOGGLEVALUE_NODE,(yyvsp[0]).i,0); (yyval).datatype = REAL_TYPE; /* qazg */ ;}
    break;

  case 747:
#line 3097 "command.yac"
    { (yyval).i = makenode(TOGGLEVALUE_NODE,AUTOCHOP_NODE,0); (yyval).datatype = REAL_TYPE; /* qazh */ ;}
    break;

  case 748:
#line 3098 "command.yac"
    { (yyval).i = makenode(TOGGLEVALUE_NODE,LAGRANGE_NODE,0); (yyval).datatype = REAL_TYPE; /* qazi */ ;}
    break;

  case 749:
#line 3099 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(EPRINT_NODE,(yyvsp[0]).i,0); (yyval).datatype = REAL_TYPE; /* qazj */;}
    break;

  case 750:
#line 3101 "command.yac"
    { kb_error(2886,"Syntax: EPRINT expression\n",Q_ERROR); /* qazk */ ;}
    break;

  case 751:
#line 3103 "command.yac"
    { (yyval) = (yyvsp[-1]); /* qazl */ ;}
    break;

  case 752:
#line 3104 "command.yac"
    { kb_error(2401,"Missing closing parenthesis?\n",Q_ERROR); /* qazm */ ;}
    break;

  case 753:
#line 3106 "command.yac"
    { (yyval).i = makenode(GET_INTERNAL_NODE,(yyvsp[0]).i,0); (yyval).datatype = REAL_TYPE; /* qazn */ ;}
    break;

  case 754:
#line 3107 "command.yac"
    { (yyval).i = makenode(GET_INTERNAL_NODE,V_SCALE,0); (yyval).datatype = REAL_TYPE; /* qazo */ ;}
    break;

  case 755:
#line 3108 "command.yac"
    { (yyval).i = makenode(PUSHGLOBAL_NODE,(yyvsp[0]).i,0); (yyval).datatype = REAL_TYPE; /* qazp */ ;}
    break;

  case 756:
#line 3109 "command.yac"
    { (yyval).i = makenode(PUSH_PERM_GLOBAL_NODE,(yyvsp[0]).i,0); (yyval).datatype = REAL_TYPE; /* qazq */ ;}
    break;

  case 757:
#line 3112 "command.yac"
    { (yyval).i = makenode(PUSH_PARAM_EXTRA_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qazr */ ;}
    break;

  case 758:
#line 3114 "command.yac"
    { kb_error(3817,"Permitted optimizing parameter attributes: pdelta pscale p_force p_velocity\n",  /* qazs */ 
       Q_ERROR);
   ;}
    break;

  case 759:
#line 3118 "command.yac"
    { (yyval).i = makenode(DYNAMIC_LOAD_FUNC_NODE,(yyvsp[0]).i,0); (yyval).datatype = REAL_TYPE; /* qazt */ ;}
    break;

  case 760:
#line 3119 "command.yac"
    { (yyval).i = makenode(PUSHQVALUE_NODE,(yyvsp[0]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 761:
#line 3120 "command.yac"
    { (yyval).i = makenode(PUSHQPRESSURE_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 762:
#line 3121 "command.yac"
    { (yyval).i = makenode(PUSHQMODULUS_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 763:
#line 3122 "command.yac"
    { (yyval).i = makenode(PUSHQTOLERANCE_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 764:
#line 3123 "command.yac"
    { (yyval).i = makenode(PUSHMMODULUS_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 765:
#line 3124 "command.yac"
    { (yyval).i = makenode(PUSHQTARGET_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 766:
#line 3125 "command.yac"
    { (yyval).i = makenode(PUSHQVALUE_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 767:
#line 3126 "command.yac"
    { (yyval).i = makenode(PUSHMVALUE_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 768:
#line 3127 "command.yac"
    { (yyval).i = makenode(PUSHQVOLCONST_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 769:
#line 3128 "command.yac"
    { (yyval).i = makenode(PUSHQFIXED_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 770:
#line 3129 "command.yac"
    { (yyval).i = makenode(PUSHQENERGY_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 771:
#line 3130 "command.yac"
    { (yyval).i = makenode(PUSHQINFO_ONLY_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 772:
#line 3131 "command.yac"
    { (yyval).i = makenode(PUSHQCONSERVED_NODE,(yyvsp[-2]).i,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 773:
#line 3134 "command.yac"
    { strcpy(errmsg,                                            /* qazu */
       "Quantity name needs attribute.  Syntax: quantityname.attribute\n");
   strcat(errmsg,"Possible quantity attributes: \n");
   strcat(errmsg,"   value, modulus, pressure, target, tolerance, volconst,\n");
   strcat(errmsg,"   fixed, energy, info_only, conserved\n");
   kb_error(3818,errmsg,Q_ERROR);
  ;}
    break;

  case 774:
#line 3143 "command.yac"
    { strcpy(errmsg,"Possible quantity attributes: \n");            /* qazv */ 
   strcat(errmsg,"   value, modulus, pressure, target, tolerance, volconst,\n");
   strcat(errmsg,"   fixed, energy, info_only, conserved\n");
   kb_error(3819,errmsg,Q_ERROR);
  ;}
    break;

  case 775:
#line 3149 "command.yac"
    { kb_error(3907,"Possible method instance attributes: value, modulus \n",  /* qazw */ 
             Q_ERROR); 
   ;}
    break;

  case 776:
#line 3153 "command.yac"
    { strcpy(errmsg,                                    /* qazx */
     "Method instance name needs attribute.  Syntax: instancename.attribute\n");
   strcat(errmsg,"Possible method instance attributes: value, modulus \n");
   kb_error(3820,errmsg,Q_ERROR);
 ;}
    break;

  case 777:
#line 3160 "command.yac"
    { real_val = (REAL)(yyvsp[0]).i; (yyval).i = makenode(PUSHCONST_NODE,0,0); (yyval).datatype = REAL_TYPE; /* qazy */;}
    break;

  case 778:
#line 3162 "command.yac"
    {                                    /* qazz */
          real_val = (REAL)(yyvsp[0]).i; (yyval).i = makenode(PUSHCONST_NODE,0,0); 
          (yyval).datatype = REAL_TYPE;  
        ;}
    break;

  case 779:
#line 3166 "command.yac"
    { real_val = (yyvsp[0]).r; (yyval).i = makenode(PUSHCONST_NODE,0,0); (yyval).datatype = REAL_TYPE; /* qbaa */;}
    break;

  case 780:
#line 3167 "command.yac"
    { real_val = (yyvsp[0]).r; (yyval).i = makenode(PUSHCONST_NODE,0,0); (yyval).datatype = REAL_TYPE; /* qbab */ ;}
    break;

  case 781:
#line 3168 "command.yac"
    { (yyval).i = (yyvsp[0]).i; (yyval).datatype = REAL_TYPE; /* qbac */ ;}
    break;

  case 782:
#line 3169 "command.yac"
    { (yyval).i = makenode(PUSHPI_NODE,0,0); (yyval).datatype = REAL_TYPE; /* qbad */;}
    break;

  case 783:
#line 3170 "command.yac"
    { (yyval).i = makenode(PUSHE_NODE,0,0); (yyval).datatype = REAL_TYPE; /* qbae */;}
    break;

  case 784:
#line 3171 "command.yac"
    { (yyval).i = makenode(PUSHG_NODE,0,0); (yyval).datatype = REAL_TYPE; /* qbaf */ ;}
    break;

  case 785:
#line 3172 "command.yac"
    { int_val = (yyvsp[0]).i; (yyval).i = makenode(USERFUNC_NODE,0,0); (yyval).datatype = REAL_TYPE; /* qbag */;}
    break;

  case 786:
#line 3173 "command.yac"
    { REAL_CHECK((yyvsp[-1])); (yyval).i = makenode((yyvsp[-3]).i,(NTYPE)(yyvsp[-1]).i,0); (yyval).datatype = REAL_TYPE; /* qbah */ ;}
    break;

  case 787:
#line 3175 "command.yac"
    { sprintf(errmsg,"Syntax: %s ( rexpr )\n",keywordname((yyvsp[-1]).i));  /* qbai */
      kb_error(3821,errmsg,Q_ERROR);
    ;}
    break;

  case 788:
#line 3179 "command.yac"
    { REAL_CHECK((yyvsp[-3])); REAL_CHECK((yyvsp[-1])); (yyval).i = makenode((yyvsp[-5]).i,(NTYPE)(yyvsp[-3]).i,(yyvsp[-1]).i); (yyval).datatype = REAL_TYPE; /* qbaj */ ;}
    break;

  case 789:
#line 3181 "command.yac"
    { sprintf(errmsg,"Syntax: %s ( rexpr , rexpr )\n",keywordname((yyvsp[0]).i)); /* qbak */
      kb_error(3822,errmsg,Q_ERROR);
    ;}
    break;

  case 790:
#line 3186 "command.yac"
    {                         /* qbal */
     // test for matrix/scalar combinations
     if ( ((yyvsp[-2]).datatype == ARRAY_TYPE) && ((yyvsp[0]).datatype == ARRAY_TYPE) )
     { (yyval).i = makenode(ARRAY_ADD_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
       (yyval).datatype = ARRAY_TYPE;
     }
     else if ( (yyvsp[-2]).datatype == ARRAY_TYPE )
       kb_error(1922,"Cannot add scalar and array.\n",Q_ERROR);
     else if ( (yyvsp[0]).datatype == ARRAY_TYPE )
       kb_error(1923,"Cannot add scalar and array.\n",Q_ERROR);
     else // just two scalars
     { (yyval).i = makenode('+',(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); 
       (yyval).datatype = REAL_TYPE;
     }
   ;}
    break;

  case 791:
#line 3202 "command.yac"
    {                     /* qbam */
     // test for matrix/scalar combinations
     if ( ((yyvsp[-2]).datatype == ARRAY_TYPE) && ((yyvsp[0]).datatype == ARRAY_TYPE) )
     { (yyval).i = makenode(ARRAY_SUBTRACT_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
       (yyval).datatype = ARRAY_TYPE;
     }
     else if ( (yyvsp[-2]).datatype == ARRAY_TYPE )
        kb_error(1924,"Cannot add scalar and array.\n",Q_ERROR);
     else if ( (yyvsp[0]).datatype == ARRAY_TYPE )
        kb_error(1925,"Cannot add scalar and array.\n",Q_ERROR);
     else // just two scalars
     { (yyval).i = makenode('-',(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); 
       (yyval).datatype = REAL_TYPE;
     }
  ;}
    break;

  case 792:
#line 3218 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0]));  /* qban */
   (yyval).i = makenode('=',(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; 
 ;}
    break;

  case 793:
#line 3222 "command.yac"
    {                       /* qbao */
     // test for matrix/scalar combinations
     if ( (yyvsp[0]).datatype == ARRAY_TYPE )
     { kb_error(5621,"Cannot divide by an array.\n",Q_ERROR);
     }
     if ( (yyvsp[-2]).datatype == ARRAY_TYPE )
     { REAL_CHECK((yyvsp[0]));
       subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);  // get scalar first, so like scalar multiply
       (yyval).i = makenode(ARRAY_SCALAR_DIVIDE_NODE,(yyvsp[0]).i,(yyvsp[-2]).i);
       (yyval).datatype = ARRAY_TYPE;
     }
     else // just two scalars
     { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0]));
       (yyval).i = makenode('/',(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); 
       (yyval).datatype = REAL_TYPE;
     }
;}
    break;

  case 794:
#line 3240 "command.yac"
    {                          /* qbap */
     // test for matrix/scalar combinations
     if ( ((yyvsp[-2]).datatype == ARRAY_TYPE) && ((yyvsp[0]).datatype == ARRAY_TYPE) )
     { (yyval).i = makenode(ARRAY_MULTIPLY_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
       (yyval).datatype = list[(yyval).i].type == DOT_NODE ? REAL_TYPE : ARRAY_TYPE;
     }
     else if ( (yyvsp[-2]).datatype == ARRAY_TYPE )
     { REAL_CHECK((yyvsp[0]));
       subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);  // get scalar first
       (yyval).i = makenode(ARRAY_SCALAR_MULTIPLY_NODE,(yyvsp[0]).i,(yyvsp[-2]).i);
       (yyval).datatype = ARRAY_TYPE;
     }
     else if ( (yyvsp[0]).datatype == ARRAY_TYPE )
     { REAL_CHECK((yyvsp[-2]));
       (yyval).i = makenode(ARRAY_SCALAR_MULTIPLY_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
       (yyval).datatype = ARRAY_TYPE;
     }
     else // just two scalars
     { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0]));
       (yyval).i = makenode('*',(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); 
       (yyval).datatype = REAL_TYPE;
     }
;}
    break;

  case 795:
#line 3264 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode('%',(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbaq */ ;}
    break;

  case 796:
#line 3265 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(IMOD_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbar */ ;}
    break;

  case 797:
#line 3266 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(IDIV_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbas */ ;}
    break;

  case 798:
#line 3267 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(POW_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbat */ ;}
    break;

  case 799:
#line 3268 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(LT_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbau */ ;}
    break;

  case 800:
#line 3269 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(GT_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbav */ ;}
    break;

  case 801:
#line 3270 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(NE_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbaw */ ;}
    break;

  case 802:
#line 3271 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(EQ_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbax */ ;}
    break;

  case 803:
#line 3272 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(LE_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbay */ ;}
    break;

  case 804:
#line 3273 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(GE_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbaz */ ;}
    break;

  case 805:
#line 3274 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(AND_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbba */ ;}
    break;

  case 806:
#line 3275 "command.yac"
    { REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); (yyval).i = makenode(OR_NODE,(NTYPE)(yyvsp[-2]).i,(NTYPE)(yyvsp[0]).i); (yyval).datatype = REAL_TYPE; /* qbbb */ ;}
    break;

  case 807:
#line 3277 "command.yac"
    { kb_error(3031,"Cannot add scalar and array\n",Q_ERROR); /* qbbc */ ;}
    break;

  case 808:
#line 3279 "command.yac"
    { kb_error(3027,"Cannot subtract scalar and array\n",Q_ERROR); /* qbbd */ ;}
    break;

  case 809:
#line 3281 "command.yac"
    { kb_error(3823,"Bad second expression after +\n",Q_ERROR);  /* qbbe */ ;}
    break;

  case 810:
#line 3283 "command.yac"
    { kb_error(3825,"Bad second expression after -\n",Q_ERROR);  /* qbbf */ ;}
    break;

  case 811:
#line 3285 "command.yac"
    { kb_error(3828,"Bad second expression after =\n",Q_ERROR);  /* qbbg */ ;}
    break;

  case 812:
#line 3287 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3829,"Bad second expression after /\n",Q_ERROR);  /* qbbh */ ;}
    break;

  case 813:
#line 3289 "command.yac"
    { kb_error(3830,"Bad second expression after *\n",Q_ERROR);  /* qbbi */ ;}
    break;

  case 814:
#line 3291 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3831,"Bad second expression after %\n",Q_ERROR);  /* qbbj */ ;}
    break;

  case 815:
#line 3293 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(2887,"Bad second expression after IMOD\n",Q_ERROR);  /* qbbk */ ;}
    break;

  case 816:
#line 3295 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3919,"Bad second expression after IDIV\n",Q_ERROR); /* qbbl */  ;}
    break;

  case 817:
#line 3297 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3920,"Bad second expression after ^\n",Q_ERROR);  /* qbbm */ ;}
    break;

  case 818:
#line 3299 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3921,"Bad second expression after <\n",Q_ERROR);  /* qbbn */ ;}
    break;

  case 819:
#line 3301 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3922,"Bad second expression after >\n",Q_ERROR);  /* qbbo */ ;}
    break;

  case 820:
#line 3303 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3923,"Bad second expression after !=\n",Q_ERROR); /* qbbp */  ;}
    break;

  case 821:
#line 3305 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3924,"Bad second expression after ==\n",Q_ERROR); /* qbbq */ ;}
    break;

  case 822:
#line 3307 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3925,"Bad second expression after <=\n",Q_ERROR);  /* qbbr */ ;}
    break;

  case 823:
#line 3309 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3926,"Bad second expression after >=\n",Q_ERROR);  /* qbbs */ ;}
    break;

  case 824:
#line 3311 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3927,"Bad second expression after AND\n",Q_ERROR);  /* qbbt */ ;}
    break;

  case 825:
#line 3313 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3928,"Bad second expression after OR\n",Q_ERROR); /* qbbu */ ;}
    break;

  case 826:
#line 3317 "command.yac"
    { if ( (yyvsp[0]).datatype == REAL_TYPE || (yyvsp[0]).datatype == INTEGER_TYPE)                        /* qbbv */
        { (yyval).i = makenode(CHS_NODE,(NTYPE)(yyvsp[0]).i,0);  
          (yyval).datatype = REAL_TYPE;  
        }
        else if ( (yyvsp[0]).datatype == ARRAY_TYPE )
        { int kk;
          real_val = -1.0;
          kk = makenode(PUSHCONST_NODE,0,0);  
          subtree_swap(&(yyvsp[0]).i,&kk);  // get scalar first
          (yyval).i = makenode(ARRAY_SCALAR_MULTIPLY_NODE,kk,(yyvsp[0]).i);
          (yyval).datatype = ARRAY_TYPE;
        }
      ;}
    break;

  case 827:
#line 3331 "command.yac"
    { kb_error(3826,"Bad expression after unary minus.\n",Q_ERROR); /* qbbw */ ;}
    break;

  case 828:
#line 3332 "command.yac"
    { (yyval) = (yyvsp[0]);  /* qbbx */  ;}
    break;

  case 829:
#line 3333 "command.yac"
    { REAL_CHECK((yyvsp[0])); (yyval).i = makenode(NOT_NODE,(NTYPE)(yyvsp[0]).i,0); (yyval).datatype = REAL_TYPE; /* qbby */ ;}
    break;

  case 830:
#line 3335 "command.yac"
    { kb_error(3827,"Bad expression after NOT.\n",Q_ERROR); /* qbbz */ ;}
    break;

  case 831:
#line 3339 "command.yac"
    { REAL_CHECK((yyvsp[-1])); cond_expr_flag++; (yyval).i = makenode(COND_TEST_NODE,(yyvsp[-1]).i,0);  /* qbca */ ;}
    break;

  case 832:
#line 3341 "command.yac"
    { REAL_CHECK((yyvsp[-1])); cond_expr_flag--;                /* qbcb */ 
      (yyval).i = makenode(COND_EXPR_NODE,(yyvsp[-2]).i,(yyvsp[-1]).i); 
      (yyval).datatype = (yyvsp[-1]).datatype; 
    ;}
    break;

  case 833:
#line 3346 "command.yac"
    { REAL_CHECK((yyvsp[0]));   // not allowing arrays due to indeterminate name_id   /* qbcc */ 
      (yyval).i = makenode(COND_ELSE_NODE,(yyvsp[-1]).i,(yyvsp[0]).i); 
      (yyval).datatype = (yyvsp[-3]).datatype;
    ;}
    break;

  case 834:
#line 3352 "command.yac"
    { REAL_CHECK((yyvsp[-2])); kb_error(3824,"Conditional expression syntax:  expr1 ? expr2 : expr3\n",  /* qbcd */
       Q_ERROR);
   ;}
    break;

  case 835:
#line 3357 "command.yac"
    { (yyval).i = MAX_NODE;  /* qbce */ ;}
    break;

  case 836:
#line 3358 "command.yac"
    { (yyval).i = MIN_NODE;  /* qbcf */ ;}
    break;

  case 837:
#line 3359 "command.yac"
    { (yyval).i = SUM_NODE;  /* qbcg */ ;}
    break;

  case 838:
#line 3360 "command.yac"
    { (yyval).i = AVG_NODE;  /* qbch */ ;}
    break;

  case 839:
#line 3361 "command.yac"
    { (yyval).i = COUNT_NODE;  /* qbci */ ;}
    break;

  case 840:
#line 3362 "command.yac"
    { (yyval).i = HISTOGRAM_NODE;  /* qbcj */ ;}
    break;

  case 841:
#line 3363 "command.yac"
    { (yyval).i = LOGHISTOGRAM_NODE;  /* qbck */ ;}
    break;

  case 842:
#line 3365 "command.yac"
    { kb_error(2402,"Syntax: HISTOGRAM(element_gen,expression)\n", Q_ERROR); /* qbcl */ ;}
    break;

  case 843:
#line 3367 "command.yac"
    { kb_error(2403,"Syntax: LOGHISTOGRAM(element_gen,expression)\n", Q_ERROR); /* qbcm */ ;}
    break;

  case 844:
#line 3369 "command.yac"
    { aggrtype = FOREACH_NODE; loopdepth++;  /* qbcn */ 
                 (yyval).i = makenode(AGGREGATE_INIT_NODE,0,0); ;}
    break;

  case 845:
#line 3372 "command.yac"
    {  int aggr;                                    /* qbco */
                 aggrtype = FOREACH_NODE;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,(yyvsp[0]).i); 
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                 end_scope();
              ;}
    break;

  case 846:
#line 3379 "command.yac"
    { kb_error(2404,                                /* qbcp */
   "Syntax: FOREACH element_gen [ name ] [WHERE expr] DO command\n",Q_ERROR);;}
    break;

  case 847:
#line 3382 "command.yac"
    { use_given_id = 1; /* in eval() */  ;}
    break;

  case 848:
#line 3383 "command.yac"
    { (yyval).i = makenode(SHOW_NODE,(yyvsp[0]).i,0);           /* qbcq */
                use_given_id = 0; 
                end_scope();
              ;}
    break;

  case 849:
#line 3387 "command.yac"
    { (yyval).i = makenode(SINGLE_LETTER_NODE,'s',0); /* qbcr */ ;}
    break;

  case 850:
#line 3389 "command.yac"
    { kb_error(2405,"Syntax: SHOW element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR);  /* qbcs */ ;}
    break;

  case 851:
#line 3391 "command.yac"
    { use_given_id = 1; /* in eval() */ ;}
    break;

  case 852:
#line 3392 "command.yac"
    { (yyval).i = makenode(SHOW_EXPR_NODE,(yyvsp[0]).i,0);               /* qbct */
                use_given_id = 0;
                end_scope();
              ;}
    break;

  case 853:
#line 3397 "command.yac"
    { kb_error(2406,"Syntax: SHOW_EXPR element_gen [ name ] [ WHERE rexpr ]\n",Q_ERROR); /* qbcu */ ;}
    break;

  case 854:
#line 3400 "command.yac"
    { loopdepth++; aggrtype = (yyvsp[0]).i; (yyval).i = makenode(AGGREGATE_INIT_NODE,0,0);  /* qbcv */ ;}
    break;

  case 855:
#line 3402 "command.yac"
    { int aggr;                                      /* qbcw */
      REAL_CHECK((yyvsp[-1])); aggrtype = (yyvsp[-6]).i;
      aggr = makenode(AGGREGATE_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); 
      (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
      end_scope();
    ;}
    break;

  case 856:
#line 3409 "command.yac"
    { loopdepth++; aggrtype = (yyvsp[0]).i; (yyval).i = makenode(AGGREGATE_INIT_NODE,0,0); /* qbcx */ ;}
    break;

  case 857:
#line 3411 "command.yac"
    {  int aggr;                                        /* qbcy */
       REAL_CHECK((yyvsp[-1])); 
       aggrtype = (yyvsp[-6]).i;
       aggr = makenode(AGGREGATE_NODE,(yyvsp[-3]).i,(yyvsp[-1]).i); 
       (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
       end_scope();
       (yyval).datatype = REAL_TYPE;  
    ;}
    break;

  case 858:
#line 3421 "command.yac"
    {  aggrtype = (yyvsp[0]).i;                                /* qbcz */
                 (yyval).i = makenode(AGGREGATE_INIT_NODE,0,0);  
              ;}
    break;

  case 859:
#line 3425 "command.yac"
    {  int aggr;                          /* qbda */
                 aggrtype = (yyvsp[-2]).i; 
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[0]).i,0);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-1]).i,aggr);
                 end_scope();
              ;}
    break;

  case 860:
#line 3431 "command.yac"
    {  (yyval).i = makenode(SET_INIT_NODE,0,0); /* qbdb */ ;}
    break;

  case 861:
#line 3434 "command.yac"
    { (yyval).i = SET_NO_REFINE_NODE ; /* qbdc */  ;}
    break;

  case 862:
#line 3435 "command.yac"
    { (yyval).i = SET_NO_TRANSFORM_NODE ; /* qbdc */  ;}
    break;

  case 863:
#line 3436 "command.yac"
    { (yyval).i = SET_CENTEROFMASS_NODE; /* qbdd */ ;}
    break;

  case 864:
#line 3437 "command.yac"
    { (yyval).i = SET_HIT_PARTNER_NODE ; /* qbde */ ;}
    break;

  case 865:
#line 3438 "command.yac"
    { (yyval).i = SET_FIXED_NODE ; /* qbdf */ ;}
    break;

  case 866:
#line 3439 "command.yac"
    { (yyval).i = SET_BARE_NODE ; /* qbdg */ ;}
    break;

  case 867:
#line 3440 "command.yac"
    { (yyval).i = SET_NONCONTENT_NODE ; /* qbdh */ ;}
    break;

  case 868:
#line 3441 "command.yac"
    { (yyval).i = SET_NO_DISPLAY_NODE ; /* qbdi */ ;}
    break;

  case 869:
#line 3442 "command.yac"
    { (yyval).i = SET_AXIAL_POINT_NODE ; /* qbdj */ ;}
    break;

  case 870:
#line 3443 "command.yac"
    { (yyval).i = SET_TETRA_PT_NODE; /* qbdk */  ;}
    break;

  case 871:
#line 3444 "command.yac"
    { (yyval).i = SET_NO_HESSIAN_NORMAL_NODE; /* qbdl */  ;}
    break;

  case 872:
#line 3445 "command.yac"
    { (yyval).i = SET_TRIPLE_PT_NODE; /* qbdm */ ;}
    break;

  case 873:
#line 3448 "command.yac"
    {  int aggr;                                           /* qbdm */
                 aggrtype = (yyvsp[0]).i;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-1]).i,0);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-2]).i,aggr);
                end_scope();
              ;}
    break;

  case 874:
#line 3455 "command.yac"
    { int aggr,where;                            /* qbdn */
                REAL_CHECK((yyvsp[0]));
                aggrtype = (yyvsp[-2]).i;
                where = makenode(WHERE_NODE,(yyvsp[-3]).i,(yyvsp[0]).i);
                aggr = makenode(AGGREGATE_NODE,where,0);
                (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                end_scope();
              ;}
    break;

  case 875:
#line 3465 "command.yac"
    { (yyval).i = SET_FRONTBODY_NODE; tok=0; /* for UMINUS */ /* qbdo */ ;}
    break;

  case 876:
#line 3466 "command.yac"
    { (yyval).i = SET_BACKBODY_NODE; tok=0; /* qbdp */ ;}
    break;

  case 877:
#line 3467 "command.yac"
    { (yyval).i = SET_COLOR_NODE; tok=0; /* qbdq */ ;}
    break;

  case 878:
#line 3468 "command.yac"
    { (yyval).i = SET_FRONTCOLOR_NODE; tok=0; /* qbdr */ ;}
    break;

  case 879:
#line 3469 "command.yac"
    { (yyval).i = SET_BACKCOLOR_NODE; tok=0; /* qbds */ ;}
    break;

  case 880:
#line 3470 "command.yac"
    { (yyval).i = SET_DENSITY_NODE; tok=0; /* qbdt */ ;}
    break;

  case 881:
#line 3471 "command.yac"
    { (yyval).i = SET_ORIGINAL_NODE; tok=0; /* qbdu */ ;}
    break;

  case 882:
#line 3472 "command.yac"
    { (yyval).i = SET_VOLCONST_NODE; tok=0; /* qbdv */ ;}
    break;

  case 883:
#line 3473 "command.yac"
    { (yyval).i = SET_VOLUME_NODE; tok=0; /* qbdw */ ;}
    break;

  case 884:
#line 3474 "command.yac"
    { (yyval).i = SET_TARGET_NODE; tok=0; /* qbdx */ ;}
    break;

  case 885:
#line 3475 "command.yac"
    { (yyval).i = SET_PRESSURE_NODE; tok=0; /* qbdy */ ;}
    break;

  case 886:
#line 3476 "command.yac"
    {                          /* qbdz */
              if ( !opacity_attr )
              { int one = 1;
                facet_id f_id;
                opacity_attr = add_attribute(FACET,"opacity",REAL_TYPE,0,&one,0,NULL,MPI_NO_PROPAGATE);
                FOR_ALL_FACETS(f_id)
                 *(REAL*)(get_extra(f_id,opacity_attr)) = 1.0;
              }                                
              (yyval).i = SET_OPACITY_NODE; tok=0; 
   ;}
    break;

  case 887:
#line 3486 "command.yac"
    { (yyval).i = SET_CONSTRAINT_NODE; tok=0; /* qbea */ ;}
    break;

  case 888:
#line 3487 "command.yac"
    { (yyval).i = SET_BOUNDARY_NODE; tok=0; /* qbeb */ ;}
    break;

  case 889:
#line 3488 "command.yac"
    { (yyval).i = SET_COORD_NODE+(yyvsp[0]).i; tok = 0; /* UMINUS bug */ /* qbec */ ;}
    break;

  case 890:
#line 3489 "command.yac"
    { (yyval).i = SET_PARAM_NODE+(yyvsp[0]).i; tok=0; /* qbed */ ;}
    break;

  case 891:
#line 3490 "command.yac"
    { (yyval).i = SET_PHASE_NODE; tok=0; /* qbef */ ;}
    break;

  case 892:
#line 3491 "command.yac"
    { (yyval).i = SET_EXTRA_ATTR_NODE ; tok=0;    /* qbeg */
            (yyval).qnum = (yyvsp[0]).qnum; 
            (yyval).etype = (yyvsp[0]).etype;
           strcpy(set_extra_name,EXTRAS((yyval).etype)[(yyval).qnum].name); ;}
    break;

  case 893:
#line 3495 "command.yac"
    { (yyval).i = SET_ORIENTATION_NODE ; tok=0; /* qbeh */ ;}
    break;

  case 894:
#line 3496 "command.yac"
    { (yyval).i = SET_WRAP_NODE ; tok = 0;  /* qbei */ ;}
    break;

  case 895:
#line 3497 "command.yac"
    { (yyval).i = (yyvsp[0]).i;  /* qbej */ ;}
    break;

  case 896:
#line 3498 "command.yac"
    { (yyval).i = (yyvsp[0]).i;   /* qbek */ ;}
    break;

  case 897:
#line 3499 "command.yac"
    { (yyval).i = ASSIGN_OP; /* qbel */ ;}
    break;

  case 898:
#line 3500 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qbem */ ;}
    break;

  case 899:
#line 3501 "command.yac"
    { kb_error(3415,"Expected assignment operator, got '='\n",  /* qben */
                  Q_ERROR);
               ;}
    break;

  case 900:
#line 3505 "command.yac"
    { (yyval).i = makenode(SINGLE_ELEMENT_NODE,(yyvsp[-2]).i,0); /* qbeo */ ;}
    break;

  case 901:
#line 3507 "command.yac"
    {  int  mm;                                    /* qbep */ 
                 int type = list[(yyvsp[-5]).i].op1.eltype;
                 REAL_CHECK((yyvsp[0]));
                 begin_scope(); /* ended at end of aggregate */
                 elsym = symbol_add(default_name,type);
                 elsym->localnum = list[(yyvsp[-5]).i].op2.localnum;
                 strcpy(last_name,default_name);
                 (yyvsp[-5]).symptr = elsym; 
                 attr_kind = (yyvsp[-3]).i;
                 (yyvsp[-2]).symptr = 0; /* in case of WHERE */
                 assigntype = (yyvsp[-1]).i;
                 mm = makenode(SET_ATTRIBUTE_A_NODE,(yyvsp[0]).i,0); 
                 (yyval).i = makenode(SINGLE_ASSIGN_NODE,(yyvsp[-2]).i,mm);
                end_scope();
              ;}
    break;

  case 902:
#line 3523 "command.yac"
    { (yyval).i = makenode(SINGLE_ELEMENT_NODE,(yyvsp[-2]).i,0); /* qbeq */ ;}
    break;

  case 903:
#line 3525 "command.yac"
    {  int mm;                            /* qber */
                 int type = list[(yyvsp[-6]).i].op1.eltype;
                 REAL_CHECK((yyvsp[0])); 
                 begin_scope(); /* ended at end of aggregate */
                 elsym = symbol_add(default_name,type);
                 elsym->localnum = list[(yyvsp[-6]).i].op2.localnum;
                 strcpy(last_name,default_name);
                 (yyvsp[-6]).symptr = elsym;
                 attr_kind = (yyvsp[-4]).i;
                 subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
                 (yyvsp[-3]).symptr = 0; /* in case of WHERE */
                 assigntype = (yyvsp[-1]).i;
                 mm = makenode(SET_ATTRIBUTE_A_NODE,(yyvsp[0]).i,(yyvsp[-2]).i);
                 (yyval).i = makenode(SINGLE_ASSIGN_NODE,(yyvsp[-3]).i,mm);
                end_scope();
              ;}
    break;

  case 904:
#line 3542 "command.yac"
    { (yyval).i = makenode(SINGLE_ELEMENT_NODE,(yyvsp[-2]).i,0); /* qbes */;}
    break;

  case 905:
#line 3544 "command.yac"
    {  int  mm;                                         /* qbet */
                 int type = list[(yyvsp[-4]).i].op1.eltype;
                 begin_scope(); /* ended at end of aggregate */
                 elsym = symbol_add(default_name,type);
                 elsym->localnum = list[(yyvsp[-4]).i].op2.localnum;
                 strcpy(last_name,default_name);
                 (yyvsp[-4]).symptr = elsym; 
                 attr_kind = (yyvsp[-2]).i;
                 (yyvsp[-1]).symptr = 0; /* in case of WHERE */
                 assigntype = PLUSASSIGN_OP;
                 real_val = ((yyvsp[0]).i == PLUSPLUS_OP) ? 1.0 : -1.0;
                 mm = makenode(PUSHCONST_NODE,0,0);
                 mm = makenode(SET_ATTRIBUTE_A_NODE,mm,0); 
                 (yyval).i = makenode(SINGLE_ASSIGN_NODE,(yyvsp[-1]).i,mm);
                end_scope();
              ;}
    break;

  case 906:
#line 3561 "command.yac"
    { (yyval).i = makenode(SINGLE_ELEMENT_NODE,(yyvsp[-2]).i,0); /* qbeu */ ;}
    break;

  case 907:
#line 3563 "command.yac"
    {  int mm;                                   /* qbev */
                 int type = list[(yyvsp[-5]).i].op1.eltype;
                 begin_scope(); /* ended at end of aggregate */
                 elsym = symbol_add(default_name,type);
                 elsym->localnum = list[(yyvsp[-5]).i].op2.localnum;
                 strcpy(last_name,default_name);
                 (yyvsp[-5]).symptr = elsym;
                 attr_kind = (yyvsp[-3]).i;
                 (yyvsp[-2]).symptr = 0; /* in case of WHERE */
                 real_val = ((yyvsp[0]).i == PLUSPLUS_OP) ? 1.0 : -1.0;
                 mm = makenode(PUSHCONST_NODE,0,0);
                 assigntype = PLUSASSIGN_OP; 
                 mm = makenode(SET_ATTRIBUTE_A_NODE,mm,(yyvsp[-1]).i);
                 (yyval).i = makenode(SINGLE_ASSIGN_NODE,(yyvsp[-2]).i,mm);
                end_scope();
              ;}
    break;

  case 908:
#line 3581 "command.yac"
    {  int aggr;                          /* qbew */
                 int nn;
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;
                 attr_kind = (yyvsp[-1]).i;
                 elsym = (yyvsp[-2]).symptr;
                 (yyvsp[-2]).symptr = 0; /* in case of WHERE */
                 nn = makenode(SET_ATTRIBUTE_L_NODE,(yyvsp[0]).i,0); 
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                end_scope();
              ;}
    break;

  case 909:
#line 3594 "command.yac"
    {  int aggr;                                 /* qbex */
                 int nn;
                 REAL_CHECK((yyvsp[0]));
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;
                 attr_kind = (yyvsp[-2]).i;
                 subtree_swap(&(yyvsp[-1]).i,&(yyvsp[0]).i); /* get index eval in top of stack */
                 elsym = (yyvsp[-3]).symptr;
                 (yyvsp[-3]).symptr = 0; /* in case of WHERE */
                 nn = makenode(SET_ATTRIBUTE_L_NODE,(yyvsp[0]).i,(yyvsp[-1]).i); 
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-3]).i,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                end_scope();
              ;}
    break;

  case 910:
#line 3608 "command.yac"
    { (yyval) = (yyvsp[0]); /* qbey */ ;}
    break;

  case 911:
#line 3609 "command.yac"
    { (yyval) = (yyvsp[0]); /* qbez */ ;}
    break;

  case 912:
#line 3612 "command.yac"
    {  int aggr;                                /* qbfa */
                 int nn,mm,kk;
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;
                 elsym = (yyvsp[-3]).symptr;
                 (yyvsp[-3]).symptr = 0; /* in case of WHERE */
                 subtree_swap(&(yyvsp[-1]).i,&(yyvsp[0]).i); /* so indexset before datastart */
                 kk = makenode(ATTRIB_LVALUE_NODE,0,0);
                 list[kk].op1.localnum = 0;
                 list[kk].op2.name_id = set_name_eltype((yyvsp[-2]).qnum,(yyvsp[-2]).etype);
                 subtree_swap(&(yyvsp[-1]).i,&kk); /* so datastart before indexset */
                 mm = makenode(ARRAY_LVALUE_INDEXED_NODE,kk,(yyvsp[-1]).i);
                 subtree_swap(&(yyvsp[0]).i,&mm); /* so index applied before rexpr */
                 if ( (yyvsp[0]).datatype == REAL_TYPE || (yyvsp[0]).datatype == INTEGER_TYPE )
                   nn = makenode(ARRAY_ASSIGNOP_SCALAR_NODE,mm,(yyvsp[0]).i);
                 else if ( (yyvsp[0]).datatype == ARRAY_TYPE )
                   nn = makenode(ARRAY_ASSIGNOP_ARRAY_NODE,mm,(yyvsp[0]).i);

                 list[nn].flags |= SET_ASSIGNOP;
                 list[nn].op1.assigntype = ASSIGN_OP;
                 list[nn].op2.name_id = set_name_eltype((yyvsp[-2]).qnum,(yyvsp[-2]).etype);
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-3]).i,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                 end_scope();
              ;}
    break;

  case 913:
#line 3638 "command.yac"
    {  int aggr;                          /* qbfb */ 
                 int nn,kk;
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;
                 attr_kind = (yyvsp[-1]).i;
                 elsym = (yyvsp[-2]).symptr;
                 (yyvsp[-2]).symptr = 0; /* in case of WHERE */
                 kk = makenode(ATTRIB_LVALUE_NODE,0,0);
                 list[kk].op1.localnum = 0;
                 list[kk].op2.name_id = set_name_eltype((yyvsp[-1]).qnum,(yyvsp[-1]).etype);
                 subtree_swap(&(yyvsp[0]).i,&kk); /* so rexpr before datastart */
                 if ( (yyvsp[0]).datatype == REAL_TYPE || (yyvsp[0]).datatype == INTEGER_TYPE )
                   nn = makenode(ARRAY_ASSIGNOP_SCALAR_NODE,kk,(yyvsp[0]).i);
                 else if ( (yyvsp[0]).datatype == ARRAY_TYPE )
                   nn = makenode(ARRAY_ASSIGNOP_ARRAY_NODE,kk,(yyvsp[0]).i);
                 list[nn].op1.assigntype = ASSIGN_OP;
                 list[nn].op2.name_id = set_name_eltype((yyvsp[-1]).qnum,(yyvsp[-1]).etype);
                 list[nn].flags |= SET_ASSIGNOP;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                 end_scope();
              ;}
    break;

  case 914:
#line 3661 "command.yac"
    {  int aggr,where;                                /* qbfc */
                 int nn,kk;
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;
                 attr_kind = (yyvsp[-3]).i;

                 /* splice in the WHERE clause */
                 subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&(yyvsp[-2]).i,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;


                 elsym = (yyvsp[-4]).symptr;
                 (yyvsp[-4]).symptr = 0; /* in case of WHERE */
                 kk = makenode(ATTRIB_LVALUE_NODE,0,0);
                 list[kk].op1.localnum = 0;
                 list[kk].op2.name_id = set_name_eltype((yyvsp[-3]).qnum,(yyvsp[-3]).etype);
                 subtree_swap(&(yyvsp[-2]).i,&kk); /* so rexpr before datastart */
				 if ( (yyvsp[-2]).datatype == ARRAY_TYPE )
                   nn = makenode(ARRAY_ASSIGNOP_ARRAY_NODE,kk,(yyvsp[-2]).i);
				  else
				   nn = makenode(ARRAY_ASSIGNOP_SCALAR_NODE,kk,(yyvsp[-2]).i);
                 list[nn].flags |= SET_ASSIGNOP;
                 list[nn].op2.name_id = set_name_eltype((yyvsp[-3]).qnum,(yyvsp[-3]).etype);
                 list[nn].op1.assigntype = ASSIGN_OP;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-4]).i,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                 end_scope();
              ;}
    break;

  case 915:
#line 3697 "command.yac"
    {  int aggr,where;                                /* qbfd */
                 int nn,mm,kk;
                 int attr_name_id = set_name_eltype((yyvsp[-4]).qnum,(yyvsp[-4]).etype);

                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;

                 /* splice in the WHERE clause */
               //  subtree_swap(&$4.i,&$5.i);
                 subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
                 subtree_swap(&(yyvsp[-3]).i,&(yyvsp[0]).i);
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&(yyvsp[-2]).i,&where); /* get in proper linear order */
                 subtree_swap(&(yyvsp[-3]).i,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-5]).i - where;
                 list[where].right = (yyvsp[0]).i - where;

                 elsym = (yyvsp[-5]).symptr;
                 (yyvsp[-5]).symptr = 0; /* in case of WHERE */
                 kk = makenode(ATTRIB_LVALUE_NODE,0,0);
                 list[kk].op1.localnum = 0;
                 list[kk].op2.name_id = attr_name_id;

                 subtree_swap(&(yyvsp[-3]).i,&(yyvsp[-2]).i); /* so datastart before indexset */
                 subtree_swap(&(yyvsp[-3]).i,&kk); /* so ATTRIB_LVALUE before indexset */
                 mm = makenode(ARRAY_LVALUE_INDEXED_NODE,kk,(yyvsp[-3]).i);
                 list[mm].op2.name_id = attr_name_id;
                 subtree_swap(&(yyvsp[-2]).i,&mm); /* so rexpr after offsetting */
				 if ( (yyvsp[-2]).datatype == REAL_TYPE || (yyvsp[-2]).datatype == INTEGER_TYPE  )
                   nn = makenode(ARRAY_ASSIGNOP_SCALAR_NODE,mm,(yyvsp[-3]).i);
                 else if ( (yyvsp[-2]).datatype == ARRAY_TYPE )
                   nn = makenode(ARRAY_ASSIGNOP_ARRAY_NODE,mm,(yyvsp[-3]).i);
                 list[nn].flags |= SET_ASSIGNOP;
                 list[nn].op1.assigntype = ASSIGN_OP;
                 list[nn].op2.name_id = attr_name_id;
                 aggr = makenode(AGGREGATE_NODE,where,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-6]).i,aggr);
                 end_scope();
              ;}
    break;

  case 916:
#line 3740 "command.yac"
    {  int aggr,where;                              /* qbfe */
                 int nn,kk;
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;
                 attr_kind = (yyvsp[-3]).i;

                 /* splice in the WHERE clause */
                 subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&(yyvsp[-2]).i,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;

                 elsym = (yyvsp[-4]).symptr;
                 (yyvsp[-4]).symptr = 0; /* in case of WHERE */
                 kk = makenode(ATTRIB_LVALUE_NODE,0,0);
                 list[kk].op1.localnum = 0;
                 list[kk].op2.name_id = set_name_eltype((yyvsp[-3]).qnum,(yyvsp[-3]).etype);
                 subtree_swap(&(yyvsp[-2]).i,&kk); /* so lvalue before rvalue */
                 nn = makenode(ARRAY_ASSIGNOP_ARRAY_NODE,kk,(yyvsp[-2]).i);
                 list[nn].flags |= SET_ASSIGNOP;
                 list[nn].op1.assigntype = ASSIGN_OP;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-4]).i,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                 end_scope();
              ;}
    break;

  case 917:
#line 3771 "command.yac"
    {  int aggr,where,nn;                             /* qbff */
                 REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0]));  
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;
                 attr_kind = (yyvsp[-3]).i;

                 subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&(yyvsp[-2]).i,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;

                 elsym = (yyvsp[-4]).symptr;
                 (yyvsp[-4]).symptr = 0; /* in case of WHERE */
                 nn = makenode(SET_ATTRIBUTE_L_NODE,(yyvsp[-2]).i,0); 
                 aggr = makenode(AGGREGATE_NODE,where,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                end_scope();
              ;}
    break;

  case 918:
#line 3793 "command.yac"
    {  int aggr,where,nn;                                     /* qbfg */
                 REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0]));                   
                 aggrtype = SET_ATTRIBUTE_LOOP_NODE;
                 attr_kind = (yyvsp[-4]).i;
                 subtree_swap(&(yyvsp[-3]).i,&(yyvsp[-2]).i); /* get index eval in top of stack */
                 subtree_swap(&(yyvsp[-3]).i,&(yyvsp[0]).i); /* get index eval in top of stack */
                 subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&(yyvsp[-3]).i,&where); /* get in proper linear order */
                 subtree_swap(&(yyvsp[-2]).i,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-5]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-5]).symptr;
                 (yyvsp[-5]).symptr = 0; /* in case of WHERE */
                 nn = makenode(SET_ATTRIBUTE_L_NODE,(yyvsp[-2]).i,(yyvsp[-3]).i); 
                 aggr = makenode(AGGREGATE_NODE,where,nn);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-6]).i,aggr);
                end_scope();
              ;}
    break;

  case 919:
#line 3815 "command.yac"
    {  int aggr,idnode;                                  /* qbfh */
                 aggrtype = SET_NAMED_QUANTITY_NODE;
                 idnode = makenode(PUSH_NAMED_QUANTITY_NODE,(yyvsp[0]).i,0);  
                 elsym = (yyvsp[-2]).symptr;
                 (yyvsp[-2]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                end_scope();
              ;}
    break;

  case 920:
#line 3825 "command.yac"
    {  int aggr,idnode;                                  /* qbfi */
                 aggrtype = UNSET_NAMED_QUANTITY_NODE;
                 idnode = makenode(PUSH_NAMED_QUANTITY_NODE,(yyvsp[0]).i,0);  
                 elsym = (yyvsp[-2]).symptr;
                 (yyvsp[-2]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                end_scope();
              ;}
    break;

  case 921:
#line 3835 "command.yac"
    {  int aggr,where,idnode;                            /* qbfj */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = SET_NAMED_QUANTITY_NODE;
                 idnode = makenode(PUSH_NAMED_QUANTITY_NODE,(yyvsp[-2]).i,0);  
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&idnode,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-4]).symptr;
                 (yyvsp[-4]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,where,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                 end_scope();
              ;}
    break;

  case 922:
#line 3852 "command.yac"
    {  int aggr,where,idnode;                         /* qbfk */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_NAMED_QUANTITY_NODE;
                 idnode = makenode(PUSH_NAMED_QUANTITY_NODE,(yyvsp[-2]).i,0);  
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&idnode,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-4]).symptr;
                 (yyvsp[-4]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,where,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                end_scope();
              ;}
    break;

  case 923:
#line 3870 "command.yac"
    {  int aggr,idnode;                               /* qbfl */
                 aggrtype = SET_METHOD_INSTANCE_NODE;
                 idnode = makenode(PUSH_METHOD_INSTANCE_NODE,(yyvsp[0]).i,0);  
                 elsym = (yyvsp[-2]).symptr;
                 (yyvsp[-2]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                end_scope();
              ;}
    break;

  case 924:
#line 3880 "command.yac"
    {  int aggr,idnode;                                  /* qbfm */
                 aggrtype = UNSET_METHOD_INSTANCE_NODE;
                 idnode = makenode(PUSH_METHOD_INSTANCE_NODE, (yyvsp[0]).i,0);  
                 elsym = (yyvsp[-2]).symptr;
                 (yyvsp[-2]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                 end_scope();
              ;}
    break;

  case 925:
#line 3890 "command.yac"
    {  int aggr,where,idnode;                                   /* qbfn */ 
                 REAL_CHECK((yyvsp[0])); aggrtype = SET_METHOD_INSTANCE_NODE;
                 idnode = makenode(PUSH_METHOD_INSTANCE_NODE,(yyvsp[-2]).i,0);  
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&idnode,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-4]).symptr;
                 (yyvsp[-4]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,where,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                end_scope();
              ;}
    break;

  case 926:
#line 3906 "command.yac"
    {  int aggr,where,idnode;                                 /* qbfo */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_METHOD_INSTANCE_NODE;
                 idnode = makenode(PUSH_METHOD_INSTANCE_NODE,(yyvsp[-2]).i,0);  
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&idnode,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-4]).symptr;
                 (yyvsp[-4]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,where,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                end_scope();
              ;}
    break;

  case 927:
#line 3924 "command.yac"
    {  int aggr,idnode;                             /* qbfp */
                 aggrtype = SET_NAMED_QUANTITY_NODE;
                 idnode = makenode(PUSH_NAMED_QUANTITY_NODE,(yyvsp[0]).i,0);  
                 elsym = (yyvsp[-1]).symptr;
                 (yyvsp[-1]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-1]).i,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-2]).i,aggr);
                end_scope();
              ;}
    break;

  case 928:
#line 3934 "command.yac"
    {  int aggr,idnode;                         /* qbfq */
                 aggrtype = UNSET_NAMED_QUANTITY_NODE;
                 idnode = makenode(PUSH_NAMED_QUANTITY_NODE,(yyvsp[0]).i,0);  
                 elsym = (yyvsp[-1]).symptr;
                 (yyvsp[-1]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-1]).i,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-2]).i,aggr);
                end_scope();
              ;}
    break;

  case 929:
#line 3944 "command.yac"
    {  int aggr,where,idnode;                          /* qbfr */ 
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = SET_NAMED_QUANTITY_NODE;
                 idnode = makenode(PUSH_NAMED_QUANTITY_NODE,(yyvsp[-2]).i,0);  
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&idnode,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-3]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-3]).symptr;
                 (yyvsp[-3]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,where,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                 end_scope();
              ;}
    break;

  case 930:
#line 3961 "command.yac"
    {  int aggr,where,idnode;                          /* qbfs */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_NAMED_QUANTITY_NODE;
                 idnode = makenode(PUSH_NAMED_QUANTITY_NODE,(yyvsp[-2]).i,0);  
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&idnode,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-3]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-3]).symptr;
                 (yyvsp[-3]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,where,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                end_scope();
              ;}
    break;

  case 931:
#line 3979 "command.yac"
    {  int aggr,idnode;                            /* qbft */
                 aggrtype = SET_METHOD_INSTANCE_NODE;
                 idnode = makenode(PUSH_METHOD_INSTANCE_NODE,(yyvsp[0]).i,0);  
                 elsym = (yyvsp[-1]).symptr;
                 (yyvsp[-1]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-1]).i,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-2]).i,aggr);
                end_scope();
              ;}
    break;

  case 932:
#line 3989 "command.yac"
    {  int aggr,idnode;                          /* qbfu */
                 aggrtype = UNSET_METHOD_INSTANCE_NODE;
                 idnode = makenode(PUSH_METHOD_INSTANCE_NODE,(yyvsp[0]).i,0);  
                 elsym = (yyvsp[-1]).symptr;
                 (yyvsp[-1]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-1]).i,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-2]).i,aggr);
                end_scope();
              ;}
    break;

  case 933:
#line 3999 "command.yac"
    {  int aggr,where,idnode;                         /* qbfv */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = SET_METHOD_INSTANCE_NODE;
                 idnode = makenode(PUSH_METHOD_INSTANCE_NODE,(yyvsp[-2]).i,0);  
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&idnode,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-3]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-3]).symptr;
                 (yyvsp[-3]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,where,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                end_scope();
              ;}
    break;

  case 934:
#line 4016 "command.yac"
    {  int aggr,where,idnode;                           /* qbfw */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_METHOD_INSTANCE_NODE;
                 idnode = makenode(PUSH_METHOD_INSTANCE_NODE,(yyvsp[-2]).i,0);  
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&idnode,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-3]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-3]).symptr;
                 (yyvsp[-3]).symptr = 0; /* in case of WHERE */
                 aggr = makenode(AGGREGATE_NODE,where,idnode);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                end_scope();
              ;}
    break;

  case 935:
#line 4034 "command.yac"
    {                                                     /* qbfx */
     if ( tok == '-' )
       kb_error(1897,"Syntax kludge: cannot have leading minus sign after ]. Use parentheses.\n",
             Q_ERROR);
    else
 kb_error(2532,
   "Syntax: SET element_gen [ name ] attribute rexpr [ WHERE rexpr ]\n",Q_ERROR);
  ;}
    break;

  case 936:
#line 4044 "command.yac"
    {  (yyval).i = makenode(SET_INIT_NODE,0,0); /* qbfy */;}
    break;

  case 937:
#line 4045 "command.yac"
    { (yyval).i = UNSET_FIXED_NODE; /* qbfz */ ;}
    break;

  case 938:
#line 4046 "command.yac"
    { (yyval).i = UNSET_CENTEROFMASS_NODE; /* qbga */;}
    break;

  case 939:
#line 4047 "command.yac"
    { (yyval).i = UNSET_HIT_PARTNER_NODE; /* qbgb */ ;}
    break;

  case 940:
#line 4048 "command.yac"
    { (yyval).i = UNSET_BARE_NODE; /* qbgc */;}
    break;

  case 941:
#line 4049 "command.yac"
    { (yyval).i = UNSET_NO_REFINE_NODE; /* qbgd */ ;}
    break;

  case 942:
#line 4050 "command.yac"
    { (yyval).i = UNSET_NO_TRANSFORM_NODE; /* qbgda */ ;}
    break;

  case 943:
#line 4051 "command.yac"
    { (yyval).i = UNSET_NONCONTENT_NODE; /* qbge */ ;}
    break;

  case 944:
#line 4052 "command.yac"
    { (yyval).i = UNSET_NO_DISPLAY_NODE; /* qbgf */ ;}
    break;

  case 945:
#line 4053 "command.yac"
    { (yyval).i = UNSET_DENSITY_NODE; /* qbgg */ ;}
    break;

  case 946:
#line 4054 "command.yac"
    { (yyval).i = UNSET_TARGET_NODE; /* qbgh */ ;}
    break;

  case 947:
#line 4055 "command.yac"
    { (yyval).i = UNSET_TARGET_NODE; /* qbgi */ ;}
    break;

  case 948:
#line 4056 "command.yac"
    { (yyval).i = UNSET_PRESSURE_NODE; /* qbgj */ ;}
    break;

  case 949:
#line 4057 "command.yac"
    { (yyval).i = UNSET_TRIPLE_PT_NODE; /* qbgk */ ;}
    break;

  case 950:
#line 4058 "command.yac"
    { (yyval).i = UNSET_NO_HESSIAN_NORMAL_NODE; /* qbgl */ ;}
    break;

  case 951:
#line 4059 "command.yac"
    { (yyval).i = UNSET_TETRA_PT_NODE; /* qbgm */;}
    break;

  case 952:
#line 4060 "command.yac"
    { (yyval).i = UNSET_AXIAL_POINT_NODE; /* qbgn */ ;}
    break;

  case 953:
#line 4061 "command.yac"
    { (yyval).i = UNSET_FRONTBODY_NODE; /* qbgo */ ;}
    break;

  case 954:
#line 4062 "command.yac"
    { (yyval).i = UNSET_BACKBODY_NODE; /* qbgp */;}
    break;

  case 955:
#line 4063 "command.yac"
    { (yyval).i = UNSET_FACET_BODY_NODE; /* qbgq */ ;}
    break;

  case 956:
#line 4065 "command.yac"
    {  int aggr;                                /* qbgr */
                 aggrtype = (yyvsp[0]).i;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-1]).i,0);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-2]).i,aggr);
                end_scope();
              ;}
    break;

  case 957:
#line 4072 "command.yac"
    {  int aggr,where;                               /* qbgs */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = (yyvsp[-2]).i;
                 elsym = (yyvsp[-3]).symptr;
                 where = makenode(WHERE_NODE,(yyvsp[-3]).i,(yyvsp[0]).i);
                 aggr = makenode(AGGREGATE_NODE,where,0);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                end_scope();
              ;}
    break;

  case 958:
#line 4081 "command.yac"
    { (yyval).i = (yyvsp[0]).i;  /* qbgt */  ;}
    break;

  case 959:
#line 4084 "command.yac"
    {  int aggr;                                  /* qbgu */ 
                 aggrtype = UNSET_CONSTRAINT_NAME_NODE;
                 elsym = (yyvsp[-1]).symptr;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-1]).i,0);
                 list[aggr].stack_delta = 0;
                 list[aggr].op3.connum = globals((yyvsp[0]).i)->value.cnum;
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-2]).i,aggr);
                end_scope();
              ;}
    break;

  case 960:
#line 4094 "command.yac"
    { real_val = globals((yyvsp[0]).i)->value.cnum;           /* qbgv */
                           (yyval).i = makenode(PUSHCONST_NODE,0,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 961:
#line 4098 "command.yac"
    {  int aggr;                            /* qbgw */ 
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_CONSTRAINT_NODE;
                 elsym = (yyvsp[-2]).symptr;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                end_scope();
              ;}
    break;

  case 962:
#line 4107 "command.yac"
    {  int aggr,where;                                    /* qbgx */
                 REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_CONSTRAINT_NODE;
                 subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&(yyvsp[-2]).i,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-4]).symptr;
                 aggr = makenode(AGGREGATE_NODE,where,(yyvsp[-2]).i);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                end_scope();
              ;}
    break;

  case 963:
#line 4123 "command.yac"
    {  int aggr,where;                         /* qbgy */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_CONSTRAINT_NAME_NODE;
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 list[where].left = (yyvsp[-3]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-3]).symptr;
                 aggr = makenode(AGGREGATE_NODE,where,0);
                 list[aggr].op3.connum = globals((yyvsp[-2]).i)->value.cnum;
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                end_scope();
              ;}
    break;

  case 964:
#line 4138 "command.yac"
    { (yyval).i = (yyvsp[0]).i; /* qbgz */ ;}
    break;

  case 965:
#line 4140 "command.yac"
    {  int aggr;                             /* qbha */
                 aggrtype = UNSET_BOUNDARY_NAME_NODE;
                 elsym = (yyvsp[-1]).symptr;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-1]).i,0);
                 list[aggr].stack_delta = 0;
                 list[aggr].op3.bdrynum = globals((yyvsp[0]).i)->value.bnum;
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-2]).i,aggr);
                end_scope();
              ;}
    break;

  case 966:
#line 4149 "command.yac"
    { real_val = globals((yyvsp[0]).i)->value.bnum;              /* qbhb */
                           (yyval).i = makenode(PUSHCONST_NODE,0,0); (yyval).datatype = REAL_TYPE; ;}
    break;

  case 967:
#line 4152 "command.yac"
    {  int aggr;                            /* qbhc */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_BOUNDARY_NODE;
                 elsym = (yyvsp[-2]).symptr;
                 aggr = makenode(AGGREGATE_NODE,(yyvsp[-2]).i,(yyvsp[0]).i);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-3]).i,aggr);
                end_scope();
              ;}
    break;

  case 968:
#line 4161 "command.yac"
    {  int aggr,where;                              /* qbhd */
                 REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_BOUNDARY_NAME_NODE;
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 list[where].left = (yyvsp[-3]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-3]).symptr;
                 aggr = makenode(AGGREGATE_NODE,where,0);
                 list[aggr].op3.bdrynum = globals((yyvsp[-2]).i)->value.bnum;
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-4]).i,aggr);
                end_scope();
              ;}
    break;

  case 969:
#line 4177 "command.yac"
    {  int aggr,where;                         /* qbhe */
                 REAL_CHECK((yyvsp[-2])); REAL_CHECK((yyvsp[0])); 
                 aggrtype = UNSET_BOUNDARY_NODE;
                 subtree_swap(&(yyvsp[-2]).i,&(yyvsp[0]).i);
                 where = makenode(WHERE_NODE,0,0);
                 list[where].left = 0;
                 list[where].right = 0;
                 subtree_swap(&(yyvsp[-2]).i,&where); /* get in proper linear order */
                 list[where].left = (yyvsp[-4]).i - where;
                 list[where].right = (yyvsp[0]).i - where;
                 elsym = (yyvsp[-4]).symptr;
                 aggr = makenode(AGGREGATE_NODE,where,(yyvsp[-2]).i);
                 (yyval).i = makenode(AGGREGATE_END_NODE,(yyvsp[-5]).i,aggr);
                end_scope();
              ;}
    break;

  case 970:
#line 4194 "command.yac"
    { kb_error(1898, "Syntax: UNSET element_gen attribute [ WHERE rexpr ]\n",Q_ERROR); /* qbhf */ ;}
    break;

  case 971:
#line 4198 "command.yac"
    { YYABORT; /* no expression */ /* qbhg */ ;}
    break;

  case 972:
#line 4200 "command.yac"
    { (yyval).i = makenode(HELP_KEYWORD_NODE,0,0); help_flag = 0; tok = 0; yyerrok; yyclearin ; /* qbhh */;}
    break;

  case 973:
#line 4203 "command.yac"
    { (yyval).i = makenode(HELP_KEYWORD_NODE,0,0); help_flag = 0; tok = 0; yyerrok; yyclearin ; /* qbhi */ ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 18516 "ytab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 4206 "command.yac"


/**************************************************************************
* function: yybegin()
* purpose: entry point for parsing
*/
int yybegin()
{ int retval;

  PROF_START(yyparse);
  parse_errors = 0;
  perm_flag = 0;
  cond_expr_flag = 0;
  use_given_id = 0;
  parens = brace_depth = in_quote = 0;
  yylex_init();
  reset_inputbuffer();
  /* unput command start token */
  tok = COMMAND_START_TOK; unput_tok();
  retval = yyparse();
  PROF_FINISH(yyparse);
  return retval;
}

/**************************************************************************
* function: yyerror()
* purpose: error handler for parser
*/
int yyerror(char *s)
{ char modmsg[1000];
  if ( help_flag ) return 0;
  parens = brace_depth = in_quote = 0;
  strncpy(modmsg,s,998);
  if ( modmsg[strlen(modmsg)-1] != '\n' )
    strcat(modmsg,"\n");
  if ( datafile_flag )
   {
     if ( listtop == 2 ) return 0;  /* no expression */
     kb_error(2407,modmsg,PARSE_ERROR);
   }
  else
    { /* fprintf(stderr,"tok = %d\n",tok); */
      kb_error(2408,modmsg,SYNTAX_ERROR);
    }   
  return 0;
}




/* to be appended to end of ytab.c so it knows about yytoks */

/******************************************************************
*
*  function: tokname()
*
*  purpose: find name of given token number. Uses yytoks[]
*              list used by debugging.
*
*/


char *tokname(toknum)
int toknum;
{ 
  char *name;

#ifndef NO_YACC_DEBUG
#ifdef YYBISON
  if ( YYTRANSLATE(toknum) == 2 ) /* undefined token */
  { sprintf(errmsg,"Internal error: Token number %d does not have token name in yytname.\n",
       toknum);
    erroutstring(errmsg);
  }

  name = yytname[YYTRANSLATE(toknum)];

  return name;
#else
  int yy_i;

  for ( yy_i = 0; yytoks[yy_i].t_val >= 0; yy_i++ )
  if ( yytoks[yy_i].t_val == toknum )
      return yytoks[yy_i].t_name; 
  /* unfound */
  name = "                         ";
  sprintf(name,"%4d (unnamed)",toknum);
  return name;
#endif
#else
  /* unfound */
  name = "                         ";
  sprintf(name,"%4d (unnamed)",toknum);
  return name;
#endif

}

