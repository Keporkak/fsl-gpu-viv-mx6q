/****************************************************************************
*
*    Copyright (c) 2005 - 2012 by Vivante Corp.  All rights reserved.
*
*    The material in this file is confidential and contains trade secrets
*    of Vivante Corporation. This is proprietary information owned by
*    Vivante Corporation. No part of this work may be disclosed,
*    reproduced, copied, transmitted, or used in any way for any purpose,
*    without the express written permission of Vivante Corporation.
*
*****************************************************************************/


#ifndef __gl_h_
#define __gl_h_

#ifdef __cplusplus
extern "C" {
#endif

/*
** Copyright 1996-1999, Silicon Graphics, Inc.
** All Rights Reserved.
**
** This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics, Inc.;
** the contents of this file may not be disclosed to third parties, copied or
** duplicated in any form, in whole or in part, without the prior written
** permission of Silicon Graphics, Inc.
**
** RESTRICTED RIGHTS LEGEND:
** Use, duplication or disclosure by the Government is subject to restrictions
** as set forth in subdivision (c)(1)(ii) of the Rights in Technical Data
** and Computer Software clause at DFARS 252.227-7013, and/or in similar or
** successor clauses in the FAR, DOD or NASA FAR Supplement. Unpublished -
** rights reserved under the Copyright Laws of the United States.
*/

#include "glplatform.h"

typedef unsigned int   GLenum;
typedef unsigned char  GLboolean;
typedef unsigned int   GLbitfield;
typedef signed char    GLbyte;
typedef short          GLshort;
typedef int            GLint;
typedef int            GLsizei;
typedef unsigned char  GLubyte;
typedef unsigned short GLushort;
typedef unsigned int   GLuint;
typedef float          GLfloat;
typedef float          GLclampf;
typedef double         GLdouble;
typedef int            GLfixed;
typedef int            GLclampx;
typedef double         GLclampd;
typedef void           GLvoid;

/* GL types for handling large vertex buffer objects */
typedef int            GLintptr;
typedef int            GLsizeiptr;

/*************************************************************/

/* Version */
#define GL_VERSION_1_1                    1
#define GL_VERSION_1_2                    1
#define GL_VERSION_1_3                    1

/* Extensions */
#define GL_ARB_imaging                    1
#define GL_ARB_multisample                1
#define GL_ARB_multitexture               1
#define GL_ARB_texture_border_clamp       1
#define GL_ARB_texture_compression        1
#define GL_ARB_texture_cube_map           1
#define GL_ARB_texture_env_add            1
#define GL_ARB_texture_env_combine        1
#define GL_ARB_texture_env_dot3           1
#define GL_ARB_transpose_matrix           1
#define GL_Autodesk_valid_back_buffer_hint 1
#define GL_EXT_abgr                       1
#define GL_EXT_bgra                       1
#define GL_EXT_blend_color                1
#define GL_EXT_blend_minmax               1
#define GL_EXT_blend_subtract             1
#define GL_EXT_clip_volume_hint           1
#define GL_EXT_compiled_vertex_array      1
#define GL_EXT_color_table                1
#define GL_EXT_draw_range_elements        1
#define GL_EXT_fog_coord                  1
#define GL_EXT_packed_pixels              1
#define GL_EXT_paletted_texture           1
#define GL_EXT_point_parameters           1
#define GL_EXT_rescale_normal             1
#define GL_EXT_secondary_color            1
#define GL_EXT_separate_specular_color    1
#define GL_EXT_shared_texture_palette     1
#define GL_EXT_stencil_wrap               1
#define GL_EXT_texture3D                  1
#define GL_EXT_texture_compression_s3tc   1
#define GL_EXT_texture_cube_map           1
#define GL_EXT_texture_edge_clamp         1
#define GL_EXT_texture_env_add            1
#define GL_EXT_texture_env_combine        1
#define GL_EXT_texture_env_dot3           1
#define GL_EXT_texture_filter_anisotropic 1
#define GL_EXT_texture_lod_bias           1
#define GL_EXT_vertex_array               1
#define GL_EXT_vertex_weighting           1
#define GL_WIN_swap_hint                  1

/* AttribMask */
#define GL_CURRENT_BIT                    0x00000001
#define GL_POINT_BIT                      0x00000002
#define GL_LINE_BIT                       0x00000004
#define GL_POLYGON_BIT                    0x00000008
#define GL_POLYGON_STIPPLE_BIT            0x00000010
#define GL_PIXEL_MODE_BIT                 0x00000020
#define GL_LIGHTING_BIT                   0x00000040
#define GL_FOG_BIT                        0x00000080
#define GL_DEPTH_BUFFER_BIT               0x00000100
#define GL_ACCUM_BUFFER_BIT               0x00000200
#define GL_STENCIL_BUFFER_BIT             0x00000400
#define GL_VIEWPORT_BIT                   0x00000800
#define GL_TRANSFORM_BIT                  0x00001000
#define GL_ENABLE_BIT                     0x00002000
#define GL_COLOR_BUFFER_BIT               0x00004000
#define GL_HINT_BIT                       0x00008000
#define GL_EVAL_BIT                       0x00010000
#define GL_LIST_BIT                       0x00020000
#define GL_TEXTURE_BIT                    0x00040000
#define GL_SCISSOR_BIT                    0x00080000
#define GL_ALL_ATTRIB_BITS                0xFFFFFFFF

/* ClearBufferMask */
/*      GL_COLOR_BUFFER_BIT */
/*      GL_ACCUM_BUFFER_BIT */
/*      GL_STENCIL_BUFFER_BIT */
/*      GL_DEPTH_BUFFER_BIT */

/* ClientAttribMask */
#define GL_CLIENT_PIXEL_STORE_BIT         0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT        0x00000002
#define GL_CLIENT_ALL_ATTRIB_BITS         0xFFFFFFFF

/* Boolean */
#define GL_FALSE                          0
#define GL_TRUE                           1

/* BeginMode */
#define GL_POINTS                         0x0000
#define GL_LINES                          0x0001
#define GL_LINE_LOOP                      0x0002
#define GL_LINE_STRIP                     0x0003
#define GL_TRIANGLES                      0x0004
#define GL_TRIANGLE_STRIP                 0x0005
#define GL_TRIANGLE_FAN                   0x0006
#define GL_QUADS                          0x0007
#define GL_QUAD_STRIP                     0x0008
#define GL_POLYGON                        0x0009

/* AccumOp */
#define GL_ACCUM                          0x0100
#define GL_LOAD                           0x0101
#define GL_RETURN                         0x0102
#define GL_MULT                           0x0103
#define GL_ADD                            0x0104

/* AlphaFunction */
#define GL_NEVER                          0x0200
#define GL_LESS                           0x0201
#define GL_EQUAL                          0x0202
#define GL_LEQUAL                         0x0203
#define GL_GREATER                        0x0204
#define GL_NOTEQUAL                       0x0205
#define GL_GEQUAL                         0x0206
#define GL_ALWAYS                         0x0207

/* BlendingFactorDest */
#define GL_ZERO                           0
#define GL_ONE                            1
#define GL_SRC_COLOR                      0x0300
#define GL_ONE_MINUS_SRC_COLOR            0x0301
#define GL_SRC_ALPHA                      0x0302
#define GL_ONE_MINUS_SRC_ALPHA            0x0303
#define GL_DST_ALPHA                      0x0304
#define GL_ONE_MINUS_DST_ALPHA            0x0305

/* BlendingFactorSrc */
/*      GL_ZERO */
/*      GL_ONE */
#define GL_DST_COLOR                      0x0306
#define GL_ONE_MINUS_DST_COLOR            0x0307
#define GL_SRC_ALPHA_SATURATE             0x0308
/*      GL_SRC_ALPHA */
/*      GL_ONE_MINUS_SRC_ALPHA */
/*      GL_DST_ALPHA */
/*      GL_ONE_MINUS_DST_ALPHA */

/* ColorMaterialFace */
/*      GL_FRONT */
/*      GL_BACK */
/*      GL_FRONT_AND_BACK */

/* ColorMaterialParameter */
/*      GL_AMBIENT */
/*      GL_DIFFUSE */
/*      GL_SPECULAR */
/*      GL_EMISSION */
/*      GL_AMBIENT_AND_DIFFUSE */

/* ColorPointerType */
/*      GL_BYTE */
/*      GL_UNSIGNED_BYTE */
/*      GL_SHORT */
/*      GL_UNSIGNED_SHORT */
/*      GL_INT */
/*      GL_UNSIGNED_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* CullFaceMode */
/*      GL_FRONT */
/*      GL_BACK */
/*      GL_FRONT_AND_BACK */

/* DepthFunction */
/*      GL_NEVER */
/*      GL_LESS */
/*      GL_EQUAL */
/*      GL_LEQUAL */
/*      GL_GREATER */
/*      GL_NOTEQUAL */
/*      GL_GEQUAL */
/*      GL_ALWAYS */

/* DrawBufferMode */
#define GL_NONE                           0
#define GL_FRONT_LEFT                     0x0400
#define GL_FRONT_RIGHT                    0x0401
#define GL_BACK_LEFT                      0x0402
#define GL_BACK_RIGHT                     0x0403
#define GL_FRONT                          0x0404
#define GL_BACK                           0x0405
#define GL_LEFT                           0x0406
#define GL_RIGHT                          0x0407
#define GL_FRONT_AND_BACK                 0x0408
#define GL_AUX0                           0x0409
#define GL_AUX1                           0x040A
#define GL_AUX2                           0x040B
#define GL_AUX3                           0x040C

/* EnableCap */
/*      GL_FOG */
/*      GL_LIGHTING */
/*      GL_TEXTURE_1D */
/*      GL_TEXTURE_2D */
/*      GL_LINE_STIPPLE */
/*      GL_POLYGON_STIPPLE */
/*      GL_CULL_FACE */
/*      GL_ALPHA_TEST */
/*      GL_BLEND */
/*      GL_INDEX_LOGIC_OP */
/*      GL_COLOR_LOGIC_OP */
/*      GL_DITHER */
/*      GL_STENCIL_TEST */
/*      GL_DEPTH_TEST */
/*      GL_CLIP_PLANE0 */
/*      GL_CLIP_PLANE1 */
/*      GL_CLIP_PLANE2 */
/*      GL_CLIP_PLANE3 */
/*      GL_CLIP_PLANE4 */
/*      GL_CLIP_PLANE5 */
/*      GL_LIGHT0 */
/*      GL_LIGHT1 */
/*      GL_LIGHT2 */
/*      GL_LIGHT3 */
/*      GL_LIGHT4 */
/*      GL_LIGHT5 */
/*      GL_LIGHT6 */
/*      GL_LIGHT7 */
/*      GL_TEXTURE_GEN_S */
/*      GL_TEXTURE_GEN_T */
/*      GL_TEXTURE_GEN_R */
/*      GL_TEXTURE_GEN_Q */
/*      GL_MAP1_VERTEX_3 */
/*      GL_MAP1_VERTEX_4 */
/*      GL_MAP1_COLOR_4 */
/*      GL_MAP1_INDEX */
/*      GL_MAP1_NORMAL */
/*      GL_MAP1_TEXTURE_COORD_1 */
/*      GL_MAP1_TEXTURE_COORD_2 */
/*      GL_MAP1_TEXTURE_COORD_3 */
/*      GL_MAP1_TEXTURE_COORD_4 */
/*      GL_MAP2_VERTEX_3 */
/*      GL_MAP2_VERTEX_4 */
/*      GL_MAP2_COLOR_4 */
/*      GL_MAP2_INDEX */
/*      GL_MAP2_NORMAL */
/*      GL_MAP2_TEXTURE_COORD_1 */
/*      GL_MAP2_TEXTURE_COORD_2 */
/*      GL_MAP2_TEXTURE_COORD_3 */
/*      GL_MAP2_TEXTURE_COORD_4 */
/*      GL_POINT_SMOOTH */
/*      GL_LINE_SMOOTH */
/*      GL_POLYGON_SMOOTH */
/*      GL_SCISSOR_TEST */
/*      GL_COLOR_MATERIAL */
/*      GL_NORMALIZE */
/*      GL_AUTO_NORMAL */
/*      GL_POLYGON_OFFSET_POINT */
/*      GL_POLYGON_OFFSET_LINE */
/*      GL_POLYGON_OFFSET_FILL */
/*      GL_VERTEX_ARRAY */
/*      GL_NORMAL_ARRAY */
/*      GL_COLOR_ARRAY */
/*      GL_INDEX_ARRAY */
/*      GL_TEXTURE_COORD_ARRAY */
/*      GL_EDGE_FLAG_ARRAY */

/* ErrorCode */
#define GL_NO_ERROR                       0
#define GL_INVALID_ENUM                   0x0500
#define GL_INVALID_VALUE                  0x0501
#define GL_INVALID_OPERATION              0x0502
#define GL_STACK_OVERFLOW                 0x0503
#define GL_STACK_UNDERFLOW                0x0504
#define GL_OUT_OF_MEMORY                  0x0505
#define GL_TABLE_TOO_LARGE                0x8031

/* FeedbackType */
#define GL_2D                             0x0600
#define GL_3D                             0x0601
#define GL_3D_COLOR                       0x0602
#define GL_3D_COLOR_TEXTURE               0x0603
#define GL_4D_COLOR_TEXTURE               0x0604

/* FeedBackToken */
#define GL_PASS_THROUGH_TOKEN             0x0700
#define GL_POINT_TOKEN                    0x0701
#define GL_LINE_TOKEN                     0x0702
#define GL_POLYGON_TOKEN                  0x0703
#define GL_BITMAP_TOKEN                   0x0704
#define GL_DRAW_PIXEL_TOKEN               0x0705
#define GL_COPY_PIXEL_TOKEN               0x0706
#define GL_LINE_RESET_TOKEN               0x0707

/* FogMode */
/*      GL_LINEAR */
#define GL_EXP                            0x0800
#define GL_EXP2                           0x0801

/* FogParameter */
/*      GL_FOG_COLOR */
/*      GL_FOG_DENSITY */
/*      GL_FOG_END */
/*      GL_FOG_INDEX */
/*      GL_FOG_MODE */
/*      GL_FOG_START */

/* FrontFaceDirection */
#define GL_CW                             0x0900
#define GL_CCW                            0x0901

/* GetColorTableParameterPNameEXT */
/*      GL_COLOR_TABLE_FORMAT_EXT */
/*      GL_COLOR_TABLE_WIDTH_EXT */
/*      GL_COLOR_TABLE_RED_SIZE_EXT */
/*      GL_COLOR_TABLE_GREEN_SIZE_EXT */
/*      GL_COLOR_TABLE_BLUE_SIZE_EXT */
/*      GL_COLOR_TABLE_ALPHA_SIZE_EXT */
/*      GL_COLOR_TABLE_LUMINANCE_SIZE_EXT */
/*      GL_COLOR_TABLE_INTENSITY_SIZE_EXT */

/* GetMapQuery */
#define GL_COEFF                          0x0A00
#define GL_ORDER                          0x0A01
#define GL_DOMAIN                         0x0A02

/* GetPixelMap */
#define GL_PIXEL_MAP_I_TO_I               0x0C70
#define GL_PIXEL_MAP_S_TO_S               0x0C71
#define GL_PIXEL_MAP_I_TO_R               0x0C72
#define GL_PIXEL_MAP_I_TO_G               0x0C73
#define GL_PIXEL_MAP_I_TO_B               0x0C74
#define GL_PIXEL_MAP_I_TO_A               0x0C75
#define GL_PIXEL_MAP_R_TO_R               0x0C76
#define GL_PIXEL_MAP_G_TO_G               0x0C77
#define GL_PIXEL_MAP_B_TO_B               0x0C78
#define GL_PIXEL_MAP_A_TO_A               0x0C79

/* GetPointervPName */
#define GL_VERTEX_ARRAY_POINTER           0x808E
#define GL_NORMAL_ARRAY_POINTER           0x808F
#define GL_COLOR_ARRAY_POINTER            0x8090
#define GL_INDEX_ARRAY_POINTER            0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER    0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER        0x8093

/* GetPName */
#define GL_CURRENT_COLOR                  0x0B00
#define GL_CURRENT_INDEX                  0x0B01
#define GL_CURRENT_NORMAL                 0x0B02
#define GL_CURRENT_TEXTURE_COORDS         0x0B03
#define GL_CURRENT_RASTER_COLOR           0x0B04
#define GL_CURRENT_RASTER_INDEX           0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS  0x0B06
#define GL_CURRENT_RASTER_POSITION        0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID  0x0B08
#define GL_CURRENT_RASTER_DISTANCE        0x0B09
#define GL_POINT_SMOOTH                   0x0B10
#define GL_POINT_SIZE                     0x0B11
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#define GL_POINT_SIZE_RANGE               GL_SMOOTH_POINT_SIZE_RANGE
#define GL_POINT_SIZE_GRANULARITY         GL_SMOOTH_POINT_SIZE_GRANULARITY
#define GL_LINE_SMOOTH                    0x0B20
#define GL_LINE_WIDTH                     0x0B21
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#define GL_LINE_WIDTH_RANGE               GL_SMOOTH_LINE_WIDTH_RANGE
#define GL_LINE_WIDTH_GRANULARITY         GL_SMOOTH_LINE_WIDTH_GRANULARITY
#define GL_LINE_STIPPLE                   0x0B24
#define GL_LINE_STIPPLE_PATTERN           0x0B25
#define GL_LINE_STIPPLE_REPEAT            0x0B26
#define GL_LIST_MODE                      0x0B30
#define GL_MAX_LIST_NESTING               0x0B31
#define GL_LIST_BASE                      0x0B32
#define GL_LIST_INDEX                     0x0B33
#define GL_POLYGON_MODE                   0x0B40
#define GL_POLYGON_SMOOTH                 0x0B41
#define GL_POLYGON_STIPPLE                0x0B42
#define GL_EDGE_FLAG                      0x0B43
#define GL_CULL_FACE                      0x0B44
#define GL_CULL_FACE_MODE                 0x0B45
#define GL_FRONT_FACE                     0x0B46
#define GL_LIGHTING                       0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER       0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE           0x0B52
#define GL_LIGHT_MODEL_AMBIENT            0x0B53
#define GL_SHADE_MODEL                    0x0B54
#define GL_COLOR_MATERIAL_FACE            0x0B55
#define GL_COLOR_MATERIAL_PARAMETER       0x0B56
#define GL_COLOR_MATERIAL                 0x0B57
#define GL_FOG                            0x0B60
#define GL_FOG_INDEX                      0x0B61
#define GL_FOG_DENSITY                    0x0B62
#define GL_FOG_START                      0x0B63
#define GL_FOG_END                        0x0B64
#define GL_FOG_MODE                       0x0B65
#define GL_FOG_COLOR                      0x0B66
#define GL_DEPTH_RANGE                    0x0B70
#define GL_DEPTH_TEST                     0x0B71
#define GL_DEPTH_WRITEMASK                0x0B72
#define GL_DEPTH_CLEAR_VALUE              0x0B73
#define GL_DEPTH_FUNC                     0x0B74
#define GL_ACCUM_CLEAR_VALUE              0x0B80
#define GL_STENCIL_TEST                   0x0B90
#define GL_STENCIL_CLEAR_VALUE            0x0B91
#define GL_STENCIL_FUNC                   0x0B92
#define GL_STENCIL_VALUE_MASK             0x0B93
#define GL_STENCIL_FAIL                   0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
#define GL_STENCIL_REF                    0x0B97
#define GL_STENCIL_WRITEMASK              0x0B98
#define GL_MATRIX_MODE                    0x0BA0
#define GL_NORMALIZE                      0x0BA1
#define GL_VIEWPORT                       0x0BA2
#define GL_MODELVIEW_STACK_DEPTH          0x0BA3
#define GL_PROJECTION_STACK_DEPTH         0x0BA4
#define GL_TEXTURE_STACK_DEPTH            0x0BA5
#define GL_MODELVIEW_MATRIX               0x0BA6
#define GL_PROJECTION_MATRIX              0x0BA7
#define GL_TEXTURE_MATRIX                 0x0BA8
#define GL_ATTRIB_STACK_DEPTH             0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH      0x0BB1
#define GL_ALPHA_TEST                     0x0BC0
#define GL_ALPHA_TEST_FUNC                0x0BC1
#define GL_ALPHA_TEST_REF                 0x0BC2
#define GL_DITHER                         0x0BD0
#define GL_BLEND_DST                      0x0BE0
#define GL_BLEND_SRC                      0x0BE1
#define GL_BLEND                          0x0BE2
#define GL_LOGIC_OP_MODE                  0x0BF0
#define GL_INDEX_LOGIC_OP                 0x0BF1
#define GL_LOGIC_OP                       GL_INDEX_LOGIC_OP
#define GL_COLOR_LOGIC_OP                 0x0BF2
#define GL_AUX_BUFFERS                    0x0C00
#define GL_DRAW_BUFFER                    0x0C01
#define GL_READ_BUFFER                    0x0C02
#define GL_SCISSOR_BOX                    0x0C10
#define GL_SCISSOR_TEST                   0x0C11
#define GL_INDEX_CLEAR_VALUE              0x0C20
#define GL_INDEX_WRITEMASK                0x0C21
#define GL_COLOR_CLEAR_VALUE              0x0C22
#define GL_COLOR_WRITEMASK                0x0C23
#define GL_INDEX_MODE                     0x0C30
#define GL_RGBA_MODE                      0x0C31
#define GL_DOUBLEBUFFER                   0x0C32
#define GL_STEREO                         0x0C33
#define GL_RENDER_MODE                    0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT    0x0C50
#define GL_POINT_SMOOTH_HINT              0x0C51
#define GL_LINE_SMOOTH_HINT               0x0C52
#define GL_POLYGON_SMOOTH_HINT            0x0C53
#define GL_FOG_HINT                       0x0C54
#define GL_TEXTURE_GEN_S                  0x0C60
#define GL_TEXTURE_GEN_T                  0x0C61
#define GL_TEXTURE_GEN_R                  0x0C62
#define GL_TEXTURE_GEN_Q                  0x0C63
#define GL_PIXEL_MAP_I_TO_I_SIZE          0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE          0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE          0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE          0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE          0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE          0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE          0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE          0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE          0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE          0x0CB9
#define GL_UNPACK_SWAP_BYTES              0x0CF0
#define GL_UNPACK_LSB_FIRST               0x0CF1
#define GL_UNPACK_ROW_LENGTH              0x0CF2
#define GL_UNPACK_SKIP_ROWS               0x0CF3
#define GL_UNPACK_SKIP_PIXELS             0x0CF4
#define GL_UNPACK_ALIGNMENT               0x0CF5
#define GL_PACK_SWAP_BYTES                0x0D00
#define GL_PACK_LSB_FIRST                 0x0D01
#define GL_PACK_ROW_LENGTH                0x0D02
#define GL_PACK_SKIP_ROWS                 0x0D03
#define GL_PACK_SKIP_PIXELS               0x0D04
#define GL_PACK_ALIGNMENT                 0x0D05
#define GL_MAP_COLOR                      0x0D10
#define GL_MAP_STENCIL                    0x0D11
#define GL_INDEX_SHIFT                    0x0D12
#define GL_INDEX_OFFSET                   0x0D13
#define GL_RED_SCALE                      0x0D14
#define GL_RED_BIAS                       0x0D15
#define GL_ZOOM_X                         0x0D16
#define GL_ZOOM_Y                         0x0D17
#define GL_GREEN_SCALE                    0x0D18
#define GL_GREEN_BIAS                     0x0D19
#define GL_BLUE_SCALE                     0x0D1A
#define GL_BLUE_BIAS                      0x0D1B
#define GL_ALPHA_SCALE                    0x0D1C
#define GL_ALPHA_BIAS                     0x0D1D
#define GL_DEPTH_SCALE                    0x0D1E
#define GL_DEPTH_BIAS                     0x0D1F
#define GL_MAX_EVAL_ORDER                 0x0D30
#define GL_MAX_LIGHTS                     0x0D31
#define GL_MAX_CLIP_PLANES                0x0D32
#define GL_MAX_TEXTURE_SIZE               0x0D33
#define GL_MAX_PIXEL_MAP_TABLE            0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH         0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH      0x0D36
#define GL_MAX_NAME_STACK_DEPTH           0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH     0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH        0x0D39
#define GL_MAX_VIEWPORT_DIMS              0x0D3A
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH  0x0D3B
#define GL_SUBPIXEL_BITS                  0x0D50
#define GL_INDEX_BITS                     0x0D51
#define GL_RED_BITS                       0x0D52
#define GL_GREEN_BITS                     0x0D53
#define GL_BLUE_BITS                      0x0D54
#define GL_ALPHA_BITS                     0x0D55
#define GL_DEPTH_BITS                     0x0D56
#define GL_STENCIL_BITS                   0x0D57
#define GL_ACCUM_RED_BITS                 0x0D58
#define GL_ACCUM_GREEN_BITS               0x0D59
#define GL_ACCUM_BLUE_BITS                0x0D5A
#define GL_ACCUM_ALPHA_BITS               0x0D5B
#define GL_NAME_STACK_DEPTH               0x0D70
#define GL_AUTO_NORMAL                    0x0D80
#define GL_MAP1_COLOR_4                   0x0D90
#define GL_MAP1_INDEX                     0x0D91
#define GL_MAP1_NORMAL                    0x0D92
#define GL_MAP1_TEXTURE_COORD_1           0x0D93
#define GL_MAP1_TEXTURE_COORD_2           0x0D94
#define GL_MAP1_TEXTURE_COORD_3           0x0D95
#define GL_MAP1_TEXTURE_COORD_4           0x0D96
#define GL_MAP1_VERTEX_3                  0x0D97
#define GL_MAP1_VERTEX_4                  0x0D98
#define GL_MAP2_COLOR_4                   0x0DB0
#define GL_MAP2_INDEX                     0x0DB1
#define GL_MAP2_NORMAL                    0x0DB2
#define GL_MAP2_TEXTURE_COORD_1           0x0DB3
#define GL_MAP2_TEXTURE_COORD_2           0x0DB4
#define GL_MAP2_TEXTURE_COORD_3           0x0DB5
#define GL_MAP2_TEXTURE_COORD_4           0x0DB6
#define GL_MAP2_VERTEX_3                  0x0DB7
#define GL_MAP2_VERTEX_4                  0x0DB8
#define GL_MAP1_GRID_DOMAIN               0x0DD0
#define GL_MAP1_GRID_SEGMENTS             0x0DD1
#define GL_MAP2_GRID_DOMAIN               0x0DD2
#define GL_MAP2_GRID_SEGMENTS             0x0DD3
#define GL_TEXTURE_1D                     0x0DE0
#define GL_TEXTURE_2D                     0x0DE1
#define GL_FEEDBACK_BUFFER_POINTER        0x0DF0
#define GL_FEEDBACK_BUFFER_SIZE           0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE           0x0DF2
#define GL_SELECTION_BUFFER_POINTER       0x0DF3
#define GL_SELECTION_BUFFER_SIZE          0x0DF4
#define GL_POLYGON_OFFSET_UNITS           0x2A00
#define GL_POLYGON_OFFSET_POINT           0x2A01
#define GL_POLYGON_OFFSET_LINE            0x2A02
#define GL_POLYGON_OFFSET_FILL            0x8037
#define GL_POLYGON_OFFSET_FACTOR          0x8038
#define GL_TEXTURE_BINDING_1D             0x8068
#define GL_TEXTURE_BINDING_2D             0x8069
#define GL_TEXTURE_BINDING_3D             0x806A
#define GL_VERTEX_ARRAY                   0x8074
#define GL_NORMAL_ARRAY                   0x8075
#define GL_COLOR_ARRAY                    0x8076
#define GL_INDEX_ARRAY                    0x8077
#define GL_TEXTURE_COORD_ARRAY            0x8078
#define GL_EDGE_FLAG_ARRAY                0x8079
#define GL_VERTEX_ARRAY_SIZE              0x807A
#define GL_VERTEX_ARRAY_TYPE              0x807B
#define GL_VERTEX_ARRAY_STRIDE            0x807C
#define GL_NORMAL_ARRAY_TYPE              0x807E
#define GL_NORMAL_ARRAY_STRIDE            0x807F
#define GL_COLOR_ARRAY_SIZE               0x8081
#define GL_COLOR_ARRAY_TYPE               0x8082
#define GL_COLOR_ARRAY_STRIDE             0x8083
#define GL_INDEX_ARRAY_TYPE               0x8085
#define GL_INDEX_ARRAY_STRIDE             0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE       0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE       0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE     0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE         0x808C
/*      GL_VERTEX_ARRAY_COUNT_EXT */
/*      GL_NORMAL_ARRAY_COUNT_EXT */
/*      GL_COLOR_ARRAY_COUNT_EXT */
/*      GL_INDEX_ARRAY_COUNT_EXT */
/*      GL_TEXTURE_COORD_ARRAY_COUNT_EXT */
/*      GL_EDGE_FLAG_ARRAY_COUNT_EXT */
/*      GL_ARRAY_ELEMENT_LOCK_COUNT_EXT */
/*      GL_ARRAY_ELEMENT_LOCK_FIRST_EXT */

/* GetTextureParameter */
/*      GL_TEXTURE_MAG_FILTER */
/*      GL_TEXTURE_MIN_FILTER */
/*      GL_TEXTURE_WRAP_S */
/*      GL_TEXTURE_WRAP_T */
#define GL_TEXTURE_WIDTH                  0x1000
#define GL_TEXTURE_HEIGHT                 0x1001
#define GL_TEXTURE_INTERNAL_FORMAT        0x1003
#define GL_TEXTURE_COMPONENTS             GL_TEXTURE_INTERNAL_FORMAT
#define GL_TEXTURE_BORDER_COLOR           0x1004
#define GL_TEXTURE_BORDER                 0x1005
#define GL_TEXTURE_RED_SIZE               0x805C
#define GL_TEXTURE_GREEN_SIZE             0x805D
#define GL_TEXTURE_BLUE_SIZE              0x805E
#define GL_TEXTURE_ALPHA_SIZE             0x805F
#define GL_TEXTURE_LUMINANCE_SIZE         0x8060
#define GL_TEXTURE_INTENSITY_SIZE         0x8061
#define GL_TEXTURE_PRIORITY               0x8066
#define GL_TEXTURE_RESIDENT               0x8067

/* HintMode */
#define GL_DONT_CARE                      0x1100
#define GL_FASTEST                        0x1101
#define GL_NICEST                         0x1102

/* HintTarget */
/*      GL_PERSPECTIVE_CORRECTION_HINT */
/*      GL_POINT_SMOOTH_HINT */
/*      GL_LINE_SMOOTH_HINT */
/*      GL_POLYGON_SMOOTH_HINT */
/*      GL_FOG_HINT */

/* IndexMaterialParameterSGI */
/*      GL_INDEX_OFFSET */

/* IndexPointerType */
/*      GL_SHORT */
/*      GL_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* IndexFunctionSGI */
/*      GL_NEVER */
/*      GL_LESS */
/*      GL_EQUAL */
/*      GL_LEQUAL */
/*      GL_GREATER */
/*      GL_NOTEQUAL */
/*      GL_GEQUAL */
/*      GL_ALWAYS */

/* LightModelParameter */
/*      GL_LIGHT_MODEL_AMBIENT */
/*      GL_LIGHT_MODEL_LOCAL_VIEWER */
/*      GL_LIGHT_MODEL_TWO_SIDE */

/* LightParameter */
#define GL_AMBIENT                        0x1200
#define GL_DIFFUSE                        0x1201
#define GL_SPECULAR                       0x1202
#define GL_POSITION                       0x1203
#define GL_SPOT_DIRECTION                 0x1204
#define GL_SPOT_EXPONENT                  0x1205
#define GL_SPOT_CUTOFF                    0x1206
#define GL_CONSTANT_ATTENUATION           0x1207
#define GL_LINEAR_ATTENUATION             0x1208
#define GL_QUADRATIC_ATTENUATION          0x1209

/* ListMode */
#define GL_COMPILE                        0x1300
#define GL_COMPILE_AND_EXECUTE            0x1301

/* DataType */
#define GL_BYTE                           0x1400
#define GL_UNSIGNED_BYTE                  0x1401
#define GL_SHORT                          0x1402
#define GL_UNSIGNED_SHORT                 0x1403
#define GL_INT                            0x1404
#define GL_UNSIGNED_INT                   0x1405
#define GL_FLOAT                          0x1406
#define GL_2_BYTES                        0x1407
#define GL_3_BYTES                        0x1408
#define GL_4_BYTES                        0x1409
#define GL_DOUBLE                         0x140A
#define GL_DOUBLE_EXT                     0x140A
#define GL_FIXED                          0x140C

/* ListNameType */
/*      GL_BYTE */
/*      GL_UNSIGNED_BYTE */
/*      GL_SHORT */
/*      GL_UNSIGNED_SHORT */
/*      GL_INT */
/*      GL_UNSIGNED_INT */
/*      GL_FLOAT */
/*      GL_2_BYTES */
/*      GL_3_BYTES */
/*      GL_4_BYTES */

/* LogicOp */
#define GL_CLEAR                          0x1500
#define GL_AND                            0x1501
#define GL_AND_REVERSE                    0x1502
#define GL_COPY                           0x1503
#define GL_AND_INVERTED                   0x1504
#define GL_NOOP                           0x1505
#define GL_XOR                            0x1506
#define GL_OR                             0x1507
#define GL_NOR                            0x1508
#define GL_EQUIV                          0x1509
#define GL_INVERT                         0x150A
#define GL_OR_REVERSE                     0x150B
#define GL_COPY_INVERTED                  0x150C
#define GL_OR_INVERTED                    0x150D
#define GL_NAND                           0x150E
#define GL_SET                            0x150F

/* MapTarget */
/*      GL_MAP1_COLOR_4 */
/*      GL_MAP1_INDEX */
/*      GL_MAP1_NORMAL */
/*      GL_MAP1_TEXTURE_COORD_1 */
/*      GL_MAP1_TEXTURE_COORD_2 */
/*      GL_MAP1_TEXTURE_COORD_3 */
/*      GL_MAP1_TEXTURE_COORD_4 */
/*      GL_MAP1_VERTEX_3 */
/*      GL_MAP1_VERTEX_4 */
/*      GL_MAP2_COLOR_4 */
/*      GL_MAP2_INDEX */
/*      GL_MAP2_NORMAL */
/*      GL_MAP2_TEXTURE_COORD_1 */
/*      GL_MAP2_TEXTURE_COORD_2 */
/*      GL_MAP2_TEXTURE_COORD_3 */
/*      GL_MAP2_TEXTURE_COORD_4 */
/*      GL_MAP2_VERTEX_3 */
/*      GL_MAP2_VERTEX_4 */

/* MaterialFace */
/*      GL_FRONT */
/*      GL_BACK */
/*      GL_FRONT_AND_BACK */

/* MaterialParameter */
#define GL_EMISSION                       0x1600
#define GL_SHININESS                      0x1601
#define GL_AMBIENT_AND_DIFFUSE            0x1602
#define GL_COLOR_INDEXES                  0x1603
/*      GL_AMBIENT */
/*      GL_DIFFUSE */
/*      GL_SPECULAR */

/* MatrixMode */
#define GL_MODELVIEW                      0x1700
#define GL_PROJECTION                     0x1701
#define GL_TEXTURE                        0x1702

/* MeshMode1 */
/*      GL_POINT */
/*      GL_LINE */

/* MeshMode2 */
/*      GL_POINT */
/*      GL_LINE */
/*      GL_FILL */

/* NormalPointerType */
/*      GL_BYTE */
/*      GL_SHORT */
/*      GL_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* PixelCopyType */
#define GL_COLOR                          0x1800
#define GL_DEPTH                          0x1801
#define GL_STENCIL                        0x1802

/* PixelFormat */
#define GL_COLOR_INDEX                    0x1900
#define GL_STENCIL_INDEX                  0x1901
#define GL_DEPTH_COMPONENT                0x1902
#define GL_RED                            0x1903
#define GL_GREEN                          0x1904
#define GL_BLUE                           0x1905
#define GL_ALPHA                          0x1906
#define GL_RGB                            0x1907
#define GL_RGBA                           0x1908
#define GL_LUMINANCE                      0x1909
#define GL_LUMINANCE_ALPHA                0x190A
/*      GL_ABGR_EXT */
/*      GL_BGR_EXT */
/*      GL_BGRA_EXT */

/* PixelMap */
/*      GL_PIXEL_MAP_I_TO_I */
/*      GL_PIXEL_MAP_S_TO_S */
/*      GL_PIXEL_MAP_I_TO_R */
/*      GL_PIXEL_MAP_I_TO_G */
/*      GL_PIXEL_MAP_I_TO_B */
/*      GL_PIXEL_MAP_I_TO_A */
/*      GL_PIXEL_MAP_R_TO_R */
/*      GL_PIXEL_MAP_G_TO_G */
/*      GL_PIXEL_MAP_B_TO_B */
/*      GL_PIXEL_MAP_A_TO_A */

/* PixelStoreParameter */
/*      GL_UNPACK_SWAP_BYTES */
/*      GL_UNPACK_LSB_FIRST */
/*      GL_UNPACK_ROW_LENGTH */
/*      GL_UNPACK_SKIP_ROWS */
/*      GL_UNPACK_SKIP_PIXELS */
/*      GL_UNPACK_ALIGNMENT */
/*      GL_PACK_SWAP_BYTES */
/*      GL_PACK_LSB_FIRST */
/*      GL_PACK_ROW_LENGTH */
/*      GL_PACK_SKIP_ROWS */
/*      GL_PACK_SKIP_PIXELS */
/*      GL_PACK_ALIGNMENT */

/* PixelTransferParameter */
/*      GL_MAP_COLOR */
/*      GL_MAP_STENCIL */
/*      GL_INDEX_SHIFT */
/*      GL_INDEX_OFFSET */
/*      GL_RED_SCALE */
/*      GL_RED_BIAS */
/*      GL_GREEN_SCALE */
/*      GL_GREEN_BIAS */
/*      GL_BLUE_SCALE */
/*      GL_BLUE_BIAS */
/*      GL_ALPHA_SCALE */
/*      GL_ALPHA_BIAS */
/*      GL_DEPTH_SCALE */
/*      GL_DEPTH_BIAS */

/* PixelType */
#define GL_BITMAP                         0x1A00
/*      GL_BYTE */
/*      GL_UNSIGNED_BYTE */
/*      GL_SHORT */
/*      GL_UNSIGNED_SHORT */
/*      GL_INT */
/*      GL_UNSIGNED_INT */
/*      GL_FLOAT */
/*      GL_UNSIGNED_BYTE_3_3_2_EXT */
/*      GL_UNSIGNED_SHORT_4_4_4_4_EXT */
/*      GL_UNSIGNED_SHORT_5_5_5_1_EXT */
/*      GL_UNSIGNED_INT_8_8_8_8_EXT */
/*      GL_UNSIGNED_INT_10_10_10_2_EXT */

/* PolygonMode */
#define GL_POINT                          0x1B00
#define GL_LINE                           0x1B01
#define GL_FILL                           0x1B02

/* ReadBufferMode */
/*      GL_FRONT_LEFT */
/*      GL_FRONT_RIGHT */
/*      GL_BACK_LEFT */
/*      GL_BACK_RIGHT */
/*      GL_FRONT */
/*      GL_BACK */
/*      GL_LEFT */
/*      GL_RIGHT */
/*      GL_AUX0 */
/*      GL_AUX1 */
/*      GL_AUX2 */
/*      GL_AUX3 */

/* RenderingMode */
#define GL_RENDER                         0x1C00
#define GL_FEEDBACK                       0x1C01
#define GL_SELECT                         0x1C02

/* ShadingModel */
#define GL_FLAT                           0x1D00
#define GL_SMOOTH                         0x1D01

/* StencilFunction */
/*      GL_NEVER */
/*      GL_LESS */
/*      GL_EQUAL */
/*      GL_LEQUAL */
/*      GL_GREATER */
/*      GL_NOTEQUAL */
/*      GL_GEQUAL */
/*      GL_ALWAYS */

/* StencilOp */
/*      GL_ZERO */
#define GL_KEEP                           0x1E00
#define GL_REPLACE                        0x1E01
#define GL_INCR                           0x1E02
#define GL_DECR                           0x1E03
/*      GL_INVERT */

/* StringName */
#define GL_VENDOR                         0x1F00
#define GL_RENDERER                       0x1F01
#define GL_VERSION                        0x1F02
#define GL_EXTENSIONS                     0x1F03

/* TexCoordPointerType */
/*      GL_SHORT */
/*      GL_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* TextureCoordName */
#define GL_S                              0x2000
#define GL_T                              0x2001
#define GL_R                              0x2002
#define GL_Q                              0x2003

/* TextureEnvMode */
#define GL_MODULATE                       0x2100
#define GL_DECAL                          0x2101
/*      GL_BLEND */
/*      GL_REPLACE */
/*      GL_ADD */

/* TextureEnvParameter */
#define GL_TEXTURE_ENV_MODE               0x2200
#define GL_TEXTURE_ENV_COLOR              0x2201

/* TextureEnvTarget */
#define GL_TEXTURE_ENV                    0x2300

/* TextureGenMode */
#define GL_EYE_LINEAR                     0x2400
#define GL_OBJECT_LINEAR                  0x2401
#define GL_SPHERE_MAP                     0x2402

/* TextureGenParameter */
#define GL_TEXTURE_GEN_MODE               0x2500
#define GL_OBJECT_PLANE                   0x2501
#define GL_EYE_PLANE                      0x2502

/* TextureMagFilter */
#define GL_NEAREST                        0x2600
#define GL_LINEAR                         0x2601

/* TextureMinFilter */
/*      GL_NEAREST */
/*      GL_LINEAR */
#define GL_NEAREST_MIPMAP_NEAREST         0x2700
#define GL_LINEAR_MIPMAP_NEAREST          0x2701
#define GL_NEAREST_MIPMAP_LINEAR          0x2702
#define GL_LINEAR_MIPMAP_LINEAR           0x2703

/* TextureParameterName */
#define GL_TEXTURE_MAG_FILTER             0x2800
#define GL_TEXTURE_MIN_FILTER             0x2801
#define GL_TEXTURE_WRAP_S                 0x2802
#define GL_TEXTURE_WRAP_T                 0x2803
/*      GL_TEXTURE_BORDER_COLOR */
/*      GL_TEXTURE_PRIORITY */

/* TextureTarget */
/*      GL_TEXTURE_1D */
/*      GL_TEXTURE_2D */
#define GL_PROXY_TEXTURE_1D               0x8063
#define GL_PROXY_TEXTURE_2D               0x8064

/* TextureWrapMode */
#define GL_CLAMP                          0x2900
#define GL_REPEAT                         0x2901

/* PixelInternalFormat */
#define GL_R3_G3_B2                       0x2A10
#define GL_ALPHA4                         0x803B
#define GL_ALPHA8                         0x803C
#define GL_ALPHA12                        0x803D
#define GL_ALPHA16                        0x803E
#define GL_LUMINANCE4                     0x803F
#define GL_LUMINANCE8                     0x8040
#define GL_LUMINANCE12                    0x8041
#define GL_LUMINANCE16                    0x8042
#define GL_LUMINANCE4_ALPHA4              0x8043
#define GL_LUMINANCE6_ALPHA2              0x8044
#define GL_LUMINANCE8_ALPHA8              0x8045
#define GL_LUMINANCE12_ALPHA4             0x8046
#define GL_LUMINANCE12_ALPHA12            0x8047
#define GL_LUMINANCE16_ALPHA16            0x8048
#define GL_INTENSITY                      0x8049
#define GL_INTENSITY4                     0x804A
#define GL_INTENSITY8                     0x804B
#define GL_INTENSITY12                    0x804C
#define GL_INTENSITY16                    0x804D
#define GL_RGB4                           0x804F
#define GL_RGB5                           0x8050
#define GL_RGB8                           0x8051
#define GL_RGB10                          0x8052
#define GL_RGB12                          0x8053
#define GL_RGB16                          0x8054
#define GL_RGBA2                          0x8055
#define GL_RGBA4                          0x8056
#define GL_RGB5_A1                        0x8057
#define GL_RGBA8                          0x8058
#define GL_RGB10_A2                       0x8059
#define GL_RGBA12                         0x805A
#define GL_RGBA16                         0x805B
/*      GL_COLOR_INDEX1_EXT */
/*      GL_COLOR_INDEX2_EXT */
/*      GL_COLOR_INDEX4_EXT */
/*      GL_COLOR_INDEX8_EXT */
/*      GL_COLOR_INDEX12_EXT */
/*      GL_COLOR_INDEX16_EXT */

/* InterleavedArrayFormat */
#define GL_V2F                            0x2A20
#define GL_V3F                            0x2A21
#define GL_C4UB_V2F                       0x2A22
#define GL_C4UB_V3F                       0x2A23
#define GL_C3F_V3F                        0x2A24
#define GL_N3F_V3F                        0x2A25
#define GL_C4F_N3F_V3F                    0x2A26
#define GL_T2F_V3F                        0x2A27
#define GL_T4F_V4F                        0x2A28
#define GL_T2F_C4UB_V3F                   0x2A29
#define GL_T2F_C3F_V3F                    0x2A2A
#define GL_T2F_N3F_V3F                    0x2A2B
#define GL_T2F_C4F_N3F_V3F                0x2A2C
#define GL_T4F_C4F_N3F_V4F                0x2A2D

/* VertexPointerType */
/*      GL_SHORT */
/*      GL_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* ClipPlaneName */
#define GL_CLIP_PLANE0                    0x3000
#define GL_CLIP_PLANE1                    0x3001
#define GL_CLIP_PLANE2                    0x3002
#define GL_CLIP_PLANE3                    0x3003
#define GL_CLIP_PLANE4                    0x3004
#define GL_CLIP_PLANE5                    0x3005

/* LightName */
#define GL_LIGHT0                         0x4000
#define GL_LIGHT1                         0x4001
#define GL_LIGHT2                         0x4002
#define GL_LIGHT3                         0x4003
#define GL_LIGHT4                         0x4004
#define GL_LIGHT5                         0x4005
#define GL_LIGHT6                         0x4006
#define GL_LIGHT7                         0x4007

/* NV_draw_elements_inc_pair */
#define GL_UNSIGNED_INT_INC_PAIR          0x6000

/* EXT_abgr */
#define GL_ABGR_EXT                       0x8000

/* EXT_blend_color */
#define GL_CONSTANT_COLOR_EXT             0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT   0x8002
#define GL_CONSTANT_ALPHA_EXT             0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT   0x8004
#define GL_BLEND_COLOR_EXT                0x8005

/* EXT_blend_minmax */
#define GL_FUNC_ADD_EXT                   0x8006
#define GL_MIN_EXT                        0x8007
#define GL_MAX_EXT                        0x8008
#define GL_BLEND_EQUATION_EXT             0x8009

/* EXT_blend_subtract */
#define GL_FUNC_SUBTRACT_EXT              0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT      0x800B

/* EXT_packed_pixels */
#define GL_UNSIGNED_BYTE_3_3_2_EXT        0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT     0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT     0x8034
#define GL_UNSIGNED_INT_8_8_8_8_EXT       0x8035
#define GL_UNSIGNED_INT_10_10_10_2_EXT    0x8036

/* OpenGL12 */
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_BGR                            0x80E0
#define GL_BGRA                           0x80E1
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#define GL_RESCALE_NORMAL                 0x803A
#define GL_LIGHT_MODEL_COLOR_CONTROL      0x81F8
#define GL_SINGLE_COLOR                   0x81F9
#define GL_SEPARATE_SPECULAR_COLOR        0x81FA
#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_MIRRORED_REPEAT                0x8370
#define GL_TEXTURE_MIN_LOD                0x813A
#define GL_TEXTURE_MAX_LOD                0x813B
#define GL_TEXTURE_BASE_LEVEL             0x813C
#define GL_TEXTURE_MAX_LEVEL              0x813D
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#define GL_ALIASED_POINT_SIZE_RANGE       0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E

/* Vertex Arrays */
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED        0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE           0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE         0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE           0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED     0x886A
#define GL_VERTEX_ATTRIB_ARRAY_POINTER        0x8645
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F

#define GL_CURRENT_VERTEX_ATTRIB          0x8626

/* ARB_imaging */
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#define GL_BLEND_COLOR                    0x8005
#define GL_FUNC_ADD                       0x8006
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
#define GL_BLEND_EQUATION                 0x8009
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_FUNC_REVERSE_SUBTRACT          0x800B
#define GL_COLOR_MATRIX                   0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH       0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH   0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE    0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE  0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE   0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE  0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS     0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS   0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS    0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS   0x80BB
#define GL_COLOR_TABLE                    0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE   0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE  0x80D2
#define GL_PROXY_COLOR_TABLE              0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#define GL_COLOR_TABLE_SCALE              0x80D6
#define GL_COLOR_TABLE_BIAS               0x80D7
#define GL_COLOR_TABLE_FORMAT             0x80D8
#define GL_COLOR_TABLE_WIDTH              0x80D9
#define GL_COLOR_TABLE_RED_SIZE           0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE         0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE          0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE         0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE     0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE     0x80DF
#define GL_CONVOLUTION_1D                 0x8010
#define GL_CONVOLUTION_2D                 0x8011
#define GL_SEPARABLE_2D                   0x8012
#define GL_CONVOLUTION_BORDER_MODE        0x8013
#define GL_CONVOLUTION_FILTER_SCALE       0x8014
#define GL_CONVOLUTION_FILTER_BIAS        0x8015
#define GL_REDUCE                         0x8016
#define GL_CONVOLUTION_FORMAT             0x8017
#define GL_CONVOLUTION_WIDTH              0x8018
#define GL_CONVOLUTION_HEIGHT             0x8019
#define GL_MAX_CONVOLUTION_WIDTH          0x801A
#define GL_MAX_CONVOLUTION_HEIGHT         0x801B
#define GL_POST_CONVOLUTION_RED_SCALE     0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE   0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE    0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE   0x801F
#define GL_POST_CONVOLUTION_RED_BIAS      0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS    0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS     0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS    0x8023
#define GL_IGNORE_BORDER                  0x8150
#define GL_CONSTANT_BORDER                0x8151
#define GL_REPLICATE_BORDER               0x8153
#define GL_CONVOLUTION_BORDER_COLOR       0x8154
#define GL_HISTOGRAM                      0x8024
#define GL_PROXY_HISTOGRAM                0x8025
#define GL_HISTOGRAM_WIDTH                0x8026
#define GL_HISTOGRAM_FORMAT               0x8027
#define GL_HISTOGRAM_RED_SIZE             0x8028
#define GL_HISTOGRAM_GREEN_SIZE           0x8029
#define GL_HISTOGRAM_BLUE_SIZE            0x802A
#define GL_HISTOGRAM_ALPHA_SIZE           0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE       0x802C
#define GL_HISTOGRAM_SINK                 0x802D
#define GL_MINMAX                         0x802E
#define GL_MINMAX_FORMAT                  0x802F
#define GL_MINMAX_SINK                    0x8030

/* OpenGL13 */
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE          0x84E1
#define GL_MAX_TEXTURE_UNITS              0x84E2
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_NORMAL_MAP                     0x8511
#define GL_REFLECTION_MAP                 0x8512
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
#define GL_COMBINE                        0x8570
#define GL_COMBINE_RGB                    0x8571
#define GL_COMBINE_ALPHA                  0x8572
#define GL_RGB_SCALE                      0x8573
#define GL_ADD_SIGNED                     0x8574
#define GL_INTERPOLATE                    0x8575
#define GL_CONSTANT                       0x8576
#define GL_PRIMARY_COLOR                  0x8577
#define GL_PREVIOUS                       0x8578
#define GL_SOURCE0_RGB                    0x8580
#define GL_SOURCE1_RGB                    0x8581
#define GL_SOURCE2_RGB                    0x8582
#define GL_SOURCE0_ALPHA                  0x8588
#define GL_SOURCE1_ALPHA                  0x8589
#define GL_SOURCE2_ALPHA                  0x858A
#define GL_OPERAND0_RGB                   0x8590
#define GL_OPERAND1_RGB                   0x8591
#define GL_OPERAND2_RGB                   0x8592
#define GL_OPERAND0_ALPHA                 0x8598
#define GL_OPERAND1_ALPHA                 0x8599
#define GL_OPERAND2_ALPHA                 0x859A
#define GL_SUBTRACT                       0x84E7
#define GL_TRANSPOSE_MODELVIEW_MATRIX     0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX    0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX       0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX         0x84E6
#define GL_COMPRESSED_ALPHA               0x84E9
#define GL_COMPRESSED_LUMINANCE           0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA     0x84EB
#define GL_COMPRESSED_INTENSITY           0x84EC
#define GL_COMPRESSED_RGB                 0x84ED
#define GL_COMPRESSED_RGBA                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
#define GL_TEXTURE_COMPRESSED             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
#define GL_DOT3_RGB                       0x86AE
#define GL_DOT3_RGBA                      0x86AF
#define GL_CLAMP_TO_BORDER                0x812D
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB
#define GL_MULTISAMPLE_BIT                0x20000000

/* EXT_vertex_array */
#define GL_VERTEX_ARRAY_EXT               0x8074
#define GL_NORMAL_ARRAY_EXT               0x8075
#define GL_COLOR_ARRAY_EXT                0x8076
#define GL_INDEX_ARRAY_EXT                0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT        0x8078
#define GL_EDGE_FLAG_ARRAY_EXT            0x8079
#define GL_VERTEX_ARRAY_SIZE_EXT          0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT          0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT        0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT         0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT          0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT        0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT         0x8080
#define GL_COLOR_ARRAY_SIZE_EXT           0x8081
#define GL_COLOR_ARRAY_TYPE_EXT           0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT         0x8083
#define GL_COLOR_ARRAY_COUNT_EXT          0x8084
#define GL_INDEX_ARRAY_TYPE_EXT           0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT         0x8086
#define GL_INDEX_ARRAY_COUNT_EXT          0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT   0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT   0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT 0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT  0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT     0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT      0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT       0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT       0x808F
#define GL_COLOR_ARRAY_POINTER_EXT        0x8090
#define GL_INDEX_ARRAY_POINTER_EXT        0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT    0x8093

/* EXT_texture3D */
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_SKIP_IMAGES_EXT           0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_PACK_IMAGE_HEIGHT_EXT          0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_SKIP_IMAGES_EXT         0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_UNPACK_IMAGE_HEIGHT_EXT        0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_TEXTURE_3D_EXT                 0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_PROXY_TEXTURE_3D_EXT           0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_DEPTH_EXT              0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_TEXTURE_WRAP_R_EXT             0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_MAX_3D_TEXTURE_SIZE_EXT        0x8073

/* EXT_color_table */
#define GL_TABLE_TOO_LARGE_EXT            0x8031
#define GL_COLOR_TABLE_FORMAT_EXT         0x80D8
#define GL_COLOR_TABLE_WIDTH_EXT          0x80D9
#define GL_COLOR_TABLE_RED_SIZE_EXT       0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_EXT     0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_EXT      0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_EXT     0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_EXT 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_EXT 0x80DF

/* EXT_bgra */
#define GL_BGR_EXT                        0x80E0
#define GL_BGRA_EXT                       0x80E1

/* SGIS_texture_lod */
#define GL_TEXTURE_MIN_LOD_SGIS           0x813A
#define GL_TEXTURE_MAX_LOD_SGIS           0x813B
#define GL_TEXTURE_BASE_LEVEL_SGIS        0x813C
#define GL_TEXTURE_MAX_LEVEL_SGIS         0x813D

/* EXT_paletted_texture */
#define GL_COLOR_INDEX1_EXT               0x80E2
#define GL_COLOR_INDEX2_EXT               0x80E3
#define GL_COLOR_INDEX4_EXT               0x80E4
#define GL_COLOR_INDEX8_EXT               0x80E5
#define GL_COLOR_INDEX12_EXT              0x80E6
#define GL_COLOR_INDEX16_EXT              0x80E7

/* EXT_clip_volume_hint */
#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT  0x80F0

/* EXT_point_parameters */
#define GL_POINT_SIZE_MIN_EXT             0x8126
#define GL_POINT_SIZE_MAX_EXT             0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT  0x8128
#define GL_DISTANCE_ATTENUATION_EXT       0x8129

/* EXT_compiled_vertex_array */
#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT   0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT   0x81A9

/* EXT_shared_texture_palette */
#define GL_SHARED_TEXTURE_PALETTE_EXT     0x81FB

/* SGIS_multitexture */
#define GL_SELECTED_TEXTURE_SGIS          0x835C
#define GL_MAX_TEXTURES_SGIS              0x835D
#define GL_TEXTURE0_SGIS                  0x835E
#define GL_TEXTURE1_SGIS                  0x835F
#define GL_TEXTURE2_SGIS                  0x8360
#define GL_TEXTURE3_SGIS                  0x8361

/* ARB_multitexture */
#define GL_ACTIVE_TEXTURE_ARB             0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB      0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB          0x84E2
#define GL_TEXTURE0_ARB                   0x84C0
#define GL_TEXTURE1_ARB                   0x84C1
#define GL_TEXTURE2_ARB                   0x84C2
#define GL_TEXTURE3_ARB                   0x84C3
#define GL_TEXTURE4_ARB                   0x84C4
#define GL_TEXTURE5_ARB                   0x84C5
#define GL_TEXTURE6_ARB                   0x84C6
#define GL_TEXTURE7_ARB                   0x84C7
#define GL_TEXTURE8_ARB                   0x84C8
#define GL_TEXTURE9_ARB                   0x84C9
#define GL_TEXTURE10_ARB                  0x84CA
#define GL_TEXTURE11_ARB                  0x84CB
#define GL_TEXTURE12_ARB                  0x84CC
#define GL_TEXTURE13_ARB                  0x84CD
#define GL_TEXTURE14_ARB                  0x84CE
#define GL_TEXTURE15_ARB                  0x84CF
#define GL_TEXTURE16_ARB                  0x84D0
#define GL_TEXTURE17_ARB                  0x84D1
#define GL_TEXTURE18_ARB                  0x84D2
#define GL_TEXTURE19_ARB                  0x84D3
#define GL_TEXTURE20_ARB                  0x84D4
#define GL_TEXTURE21_ARB                  0x84D5
#define GL_TEXTURE22_ARB                  0x84D6
#define GL_TEXTURE23_ARB                  0x84D7
#define GL_TEXTURE24_ARB                  0x84D8
#define GL_TEXTURE25_ARB                  0x84D9
#define GL_TEXTURE26_ARB                  0x84DA
#define GL_TEXTURE27_ARB                  0x84DB
#define GL_TEXTURE28_ARB                  0x84DC
#define GL_TEXTURE29_ARB                  0x84DD
#define GL_TEXTURE30_ARB                  0x84DE
#define GL_TEXTURE31_ARB                  0x84DF

/* EXT_fog_coord */
#define GL_FOG_COORDINATE_SOURCE_EXT      0x8450
#define GL_FOG_COORDINATE_EXT             0x8451
#define GL_FRAGMENT_DEPTH_EXT             0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT     0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT  0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT       0x8457

/* EXT_secondary_color */
#define GL_COLOR_SUM_EXT                  0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT    0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT 0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT      0x845E

/* EXT_separate_specular_color */
#define GL_SINGLE_COLOR_EXT               0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT    0x81FA
#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT  0x81F8

/* EXT_rescale_normal */
#define GL_RESCALE_NORMAL_EXT             0x803A

/* EXT_stencil_wrap */
#define GL_INCR_WRAP_EXT                  0x8507
#define GL_DECR_WRAP_EXT                  0x8508

/* EXT_vertex_weighting */
#define GL_MODELVIEW0_MATRIX_EXT          GL_MODELVIEW_MATRIX
#define GL_MODELVIEW1_MATRIX_EXT          0x8506
#define GL_MODELVIEW0_STACK_DEPTH_EXT     GL_MODELVIEW_STACK_DEPTH
#define GL_MODELVIEW1_STACK_DEPTH_EXT     0x8502
#define GL_VERTEX_WEIGHTING_EXT           0x8509
#define GL_MODELVIEW0_EXT                 GL_MODELVIEW
#define GL_MODELVIEW1_EXT                 0x850A
#define GL_CURRENT_VERTEX_WEIGHT_EXT      0x850B
#define GL_VERTEX_WEIGHT_ARRAY_EXT        0x850C
#define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT   0x850D
#define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT   0x850E
#define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT 0x850F
#define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT 0x8510

/* NV_texgen_reflection */
#define GL_NORMAL_MAP_NV                  0x8511
#define GL_REFLECTION_MAP_NV              0x8512

/* EXT_texture_cube_map */
#define GL_NORMAL_MAP_EXT                 0x8511
#define GL_REFLECTION_MAP_EXT             0x8512
#define GL_TEXTURE_CUBE_MAP_EXT           0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_EXT   0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_EXT     0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT  0x851C

/* ARB_texture_cube_map */
#define GL_NORMAL_MAP_ARB                 0x8511
#define GL_REFLECTION_MAP_ARB             0x8512
#define GL_TEXTURE_CUBE_MAP_ARB           0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB   0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB     0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB  0x851C

/* NV_vertex_array_range */
#define GL_VERTEX_ARRAY_RANGE_NV          0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_NV   0x851E
#define GL_VERTEX_ARRAY_RANGE_VALID_NV    0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV 0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_NV  0x8521

/* NV_vertex_array_range2 */
#define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV 0x8533

/* NV_register_combiners */
#define GL_REGISTER_COMBINERS_NV          0x8522
#define GL_COMBINER0_NV                   0x8550
#define GL_COMBINER1_NV                   0x8551
#define GL_COMBINER2_NV                   0x8552
#define GL_COMBINER3_NV                   0x8553
#define GL_COMBINER4_NV                   0x8554
#define GL_COMBINER5_NV                   0x8555
#define GL_COMBINER6_NV                   0x8556
#define GL_COMBINER7_NV                   0x8557
#define GL_VARIABLE_A_NV                  0x8523
#define GL_VARIABLE_B_NV                  0x8524
#define GL_VARIABLE_C_NV                  0x8525
#define GL_VARIABLE_D_NV                  0x8526
#define GL_VARIABLE_E_NV                  0x8527
#define GL_VARIABLE_F_NV                  0x8528
#define GL_VARIABLE_G_NV                  0x8529
/*      GL_ZERO */
#define GL_CONSTANT_COLOR0_NV             0x852A
#define GL_CONSTANT_COLOR1_NV             0x852B
/*      GL_FOG */
#define GL_PRIMARY_COLOR_NV               0x852C
#define GL_SECONDARY_COLOR_NV             0x852D
#define GL_SPARE0_NV                      0x852E
#define GL_SPARE1_NV                      0x852F
/*      GL_TEXTURE0_ARB */
/*      GL_TEXTURE1_ARB */
#define GL_UNSIGNED_IDENTITY_NV           0x8536
#define GL_UNSIGNED_INVERT_NV             0x8537
#define GL_EXPAND_NORMAL_NV               0x8538
#define GL_EXPAND_NEGATE_NV               0x8539
#define GL_HALF_BIAS_NORMAL_NV            0x853A
#define GL_HALF_BIAS_NEGATE_NV            0x853B
#define GL_SIGNED_IDENTITY_NV             0x853C
#define GL_SIGNED_NEGATE_NV               0x853D
#define GL_E_TIMES_F_NV                   0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV 0x8532
/*      GL_NONE */
#define GL_SCALE_BY_TWO_NV                0x853E
#define GL_SCALE_BY_FOUR_NV               0x853F
#define GL_SCALE_BY_ONE_HALF_NV           0x8540
#define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV   0x8541
#define GL_DISCARD_NV                     0x8530
#define GL_COMBINER_INPUT_NV              0x8542
#define GL_COMBINER_MAPPING_NV            0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV    0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV     0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV     0x8546
#define GL_COMBINER_MUX_SUM_NV            0x8547
#define GL_COMBINER_SCALE_NV              0x8548
#define GL_COMBINER_BIAS_NV               0x8549
#define GL_COMBINER_AB_OUTPUT_NV          0x854A
#define GL_COMBINER_CD_OUTPUT_NV          0x854B
#define GL_COMBINER_SUM_OUTPUT_NV         0x854C
#define GL_MAX_GENERAL_COMBINERS_NV       0x854D
#define GL_NUM_GENERAL_COMBINERS_NV       0x854E
#define GL_COLOR_SUM_CLAMP_NV             0x854F

/* NV_fog_distance */
#define GL_FOG_DISTANCE_MODE_NV           0x855A
#define GL_EYE_RADIAL_NV                  0x855B
/*      GL_EYE_PLANE */
#define GL_EYE_PLANE_ABSOLUTE_NV          0x855C

/* NV_texgen_emboss */
#define GL_EMBOSS_LIGHT_NV                0x855D
#define GL_EMBOSS_CONSTANT_NV             0x855E
#define GL_EMBOSS_MAP_NV                  0x855F

/* NV_light_max_exponent */
#define GL_MAX_SHININESS_NV               0x8504
#define GL_MAX_SPOT_EXPONENT_NV           0x8505

/* ARB_texture_env_combine */
#define GL_COMBINE_ARB                    0x8570
#define GL_COMBINE_RGB_ARB                0x8571
#define GL_COMBINE_ALPHA_ARB              0x8572
#define GL_RGB_SCALE_ARB                  0x8573
#define GL_ADD_SIGNED_ARB                 0x8574
#define GL_INTERPOLATE_ARB                0x8575
#define GL_CONSTANT_ARB                   0x8576
#define GL_PRIMARY_COLOR_ARB              0x8577
#define GL_PREVIOUS_ARB                   0x8578
#define GL_SOURCE0_RGB_ARB                0x8580
#define GL_SOURCE1_RGB_ARB                0x8581
#define GL_SOURCE2_RGB_ARB                0x8582
#define GL_SOURCE0_ALPHA_ARB              0x8588
#define GL_SOURCE1_ALPHA_ARB              0x8589
#define GL_SOURCE2_ALPHA_ARB              0x858A
#define GL_OPERAND0_RGB_ARB               0x8590
#define GL_OPERAND1_RGB_ARB               0x8591
#define GL_OPERAND2_RGB_ARB               0x8592
#define GL_OPERAND0_ALPHA_ARB             0x8598
#define GL_OPERAND1_ALPHA_ARB             0x8599
#define GL_OPERAND2_ALPHA_ARB             0x859A
#define GL_SUBTRACT_ARB                   0x84E7

/* EXT_texture_env_combine */
#define GL_COMBINE_EXT                    0x8570
#define GL_COMBINE_RGB_EXT                0x8571
#define GL_COMBINE_ALPHA_EXT              0x8572
#define GL_RGB_SCALE_EXT                  0x8573
#define GL_ADD_SIGNED_EXT                 0x8574
#define GL_INTERPOLATE_EXT                0x8575
#define GL_CONSTANT_EXT                   0x8576
#define GL_PRIMARY_COLOR_EXT              0x8577
#define GL_PREVIOUS_EXT                   0x8578
#define GL_SOURCE0_RGB_EXT                0x8580
#define GL_SOURCE1_RGB_EXT                0x8581
#define GL_SOURCE2_RGB_EXT                0x8582
#define GL_SOURCE0_ALPHA_EXT              0x8588
#define GL_SOURCE1_ALPHA_EXT              0x8589
#define GL_SOURCE2_ALPHA_EXT              0x858A
#define GL_OPERAND0_RGB_EXT               0x8590
#define GL_OPERAND1_RGB_EXT               0x8591
#define GL_OPERAND2_RGB_EXT               0x8592
#define GL_OPERAND0_ALPHA_EXT             0x8598
#define GL_OPERAND1_ALPHA_EXT             0x8599
#define GL_OPERAND2_ALPHA_EXT             0x859A

/* NV_texture_env_combine4 */
#define GL_COMBINE4_NV                    0x8503
#define GL_SOURCE3_RGB_NV                 0x8583
#define GL_SOURCE3_ALPHA_NV               0x858B
#define GL_OPERAND3_RGB_NV                0x8593
#define GL_OPERAND3_ALPHA_NV              0x859B

/* EXT_texture_filter_anisotropic */
#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF

/* EXT_texture_lod_bias */
#define GL_MAX_TEXTURE_LOD_BIAS_EXT       0x84FD
#define GL_TEXTURE_FILTER_CONTROL_EXT     0x8500
#define GL_TEXTURE_LOD_BIAS_EXT           0x8501

/* EXT_texture_edge_clamp */
#define GL_CLAMP_TO_EDGE_EXT              0x812F

/* S3_s3tc */
#define GL_RGB_S3TC                       0x83A0
#define GL_RGB4_S3TC                      0x83A1
#define GL_RGBA_S3TC                      0x83A2
#define GL_RGBA4_S3TC                     0x83A3

/* ARB_transpose_matrix */
#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB   0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB     0x84E6

/* ARB_texture_compression */
#define GL_COMPRESSED_ALPHA_ARB           0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB       0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB 0x84EB
#define GL_COMPRESSED_INTENSITY_ARB       0x84EC
#define GL_COMPRESSED_RGB_ARB             0x84ED
#define GL_COMPRESSED_RGBA_ARB            0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB   0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 0x86A0
#define GL_TEXTURE_COMPRESSED_ARB         0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A3

/* EXT_texture_compression_s3tc */
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3

/* NV_fence */
#define GL_ALL_COMPLETED_NV               0x84F2
#define GL_FENCE_STATUS_NV                0x84F3
#define GL_FENCE_CONDITION_NV             0x84F4

/* NV_mac_get_proc_address */
#define GL_ALL_EXTENSIONS_NV              0x84FB
#define GL_MAC_GET_PROC_ADDRESS_NV        0x84FC

/* NV_vertex_program */
#define GL_VERTEX_PROGRAM_NV              0x8620
#define GL_VERTEX_STATE_PROGRAM_NV        0x8621
#define GL_ATTRIB_ARRAY_SIZE_NV           0x8623
#define GL_ATTRIB_ARRAY_STRIDE_NV         0x8624
#define GL_ATTRIB_ARRAY_TYPE_NV           0x8625
#define GL_CURRENT_ATTRIB_NV              0x8626
#define GL_PROGRAM_LENGTH_NV              0x8627
#define GL_PROGRAM_STRING_NV              0x8628
#define GL_MODELVIEW_PROJECTION_NV        0x8629
#define GL_IDENTITY_NV                    0x862A
#define GL_INVERSE_NV                     0x862B
#define GL_TRANSPOSE_NV                   0x862C
#define GL_INVERSE_TRANSPOSE_NV           0x862D
#define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV 0x862E
#define GL_MAX_TRACK_MATRICES_NV          0x862F
#define GL_MATRIX0_NV                     0x8630
#define GL_MATRIX1_NV                     0x8631
#define GL_MATRIX2_NV                     0x8632
#define GL_MATRIX3_NV                     0x8633
#define GL_MATRIX4_NV                     0x8634
#define GL_MATRIX5_NV                     0x8635
#define GL_MATRIX6_NV                     0x8636
#define GL_MATRIX7_NV                     0x8637
#define GL_CURRENT_MATRIX_STACK_DEPTH_NV  0x8640
#define GL_CURRENT_MATRIX_NV              0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_NV   0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_NV     0x8643
#define GL_PROGRAM_PARAMETER_NV           0x8644
#define GL_ATTRIB_ARRAY_POINTER_NV        0x8645
#define GL_PROGRAM_TARGET_NV              0x8646
#define GL_PROGRAM_RESIDENT_NV            0x8647
#define GL_TRACK_MATRIX_NV                0x8648
#define GL_TRACK_MATRIX_TRANSFORM_NV      0x8649
#define GL_VERTEX_PROGRAM_BINDING_NV      0x864A
#define GL_PROGRAM_ERROR_POSITION_NV      0x864B
#define GL_VERTEX_ATTRIB_ARRAY0_NV        0x8650
#define GL_VERTEX_ATTRIB_ARRAY1_NV        0x8651
#define GL_VERTEX_ATTRIB_ARRAY2_NV        0x8652
#define GL_VERTEX_ATTRIB_ARRAY3_NV        0x8653
#define GL_VERTEX_ATTRIB_ARRAY4_NV        0x8654
#define GL_VERTEX_ATTRIB_ARRAY5_NV        0x8655
#define GL_VERTEX_ATTRIB_ARRAY6_NV        0x8656
#define GL_VERTEX_ATTRIB_ARRAY7_NV        0x8657
#define GL_VERTEX_ATTRIB_ARRAY8_NV        0x8658
#define GL_VERTEX_ATTRIB_ARRAY9_NV        0x8659
#define GL_VERTEX_ATTRIB_ARRAY10_NV       0x865A
#define GL_VERTEX_ATTRIB_ARRAY11_NV       0x865B
#define GL_VERTEX_ATTRIB_ARRAY12_NV       0x865C
#define GL_VERTEX_ATTRIB_ARRAY13_NV       0x865D
#define GL_VERTEX_ATTRIB_ARRAY14_NV       0x865E
#define GL_VERTEX_ATTRIB_ARRAY15_NV       0x865F
#define GL_MAP1_VERTEX_ATTRIB0_4_NV       0x8660
#define GL_MAP1_VERTEX_ATTRIB1_4_NV       0x8661
#define GL_MAP1_VERTEX_ATTRIB2_4_NV       0x8662
#define GL_MAP1_VERTEX_ATTRIB3_4_NV       0x8663
#define GL_MAP1_VERTEX_ATTRIB4_4_NV       0x8664
#define GL_MAP1_VERTEX_ATTRIB5_4_NV       0x8665
#define GL_MAP1_VERTEX_ATTRIB6_4_NV       0x8666
#define GL_MAP1_VERTEX_ATTRIB7_4_NV       0x8667
#define GL_MAP1_VERTEX_ATTRIB8_4_NV       0x8668
#define GL_MAP1_VERTEX_ATTRIB9_4_NV       0x8669
#define GL_MAP1_VERTEX_ATTRIB10_4_NV      0x866A
#define GL_MAP1_VERTEX_ATTRIB11_4_NV      0x866B
#define GL_MAP1_VERTEX_ATTRIB12_4_NV      0x866C
#define GL_MAP1_VERTEX_ATTRIB13_4_NV      0x866D
#define GL_MAP1_VERTEX_ATTRIB14_4_NV      0x866E
#define GL_MAP1_VERTEX_ATTRIB15_4_NV      0x866F
#define GL_MAP2_VERTEX_ATTRIB0_4_NV       0x8670
#define GL_MAP2_VERTEX_ATTRIB1_4_NV       0x8671
#define GL_MAP2_VERTEX_ATTRIB2_4_NV       0x8672
#define GL_MAP2_VERTEX_ATTRIB3_4_NV       0x8673
#define GL_MAP2_VERTEX_ATTRIB4_4_NV       0x8674
#define GL_MAP2_VERTEX_ATTRIB5_4_NV       0x8675
#define GL_MAP2_VERTEX_ATTRIB6_4_NV       0x8676
#define GL_MAP2_VERTEX_ATTRIB7_4_NV       0x8677
#define GL_MAP2_VERTEX_ATTRIB8_4_NV       0x8678
#define GL_MAP2_VERTEX_ATTRIB9_4_NV       0x8679
#define GL_MAP2_VERTEX_ATTRIB10_4_NV      0x867A
#define GL_MAP2_VERTEX_ATTRIB11_4_NV      0x867B
#define GL_MAP2_VERTEX_ATTRIB12_4_NV      0x867C
#define GL_MAP2_VERTEX_ATTRIB13_4_NV      0x867D
#define GL_MAP2_VERTEX_ATTRIB14_4_NV      0x867E
#define GL_MAP2_VERTEX_ATTRIB15_4_NV      0x867F

/* NV_evaluators */
#define GL_EVAL_2D_NV                     0x86C0
#define GL_EVAL_TRIANGULAR_2D_NV          0x86C1
#define GL_MAP_TESSELLATION_NV            0x86C2
#define GL_MAP_ATTRIB_U_ORDER_NV          0x86C3
#define GL_MAP_ATTRIB_V_ORDER_NV          0x86C4
#define GL_EVAL_FRACTIONAL_TESSELLATION_NV 0x86C5
#define GL_EVAL_VERTEX_ATTRIB0_NV         0x86C6
#define GL_EVAL_VERTEX_ATTRIB1_NV         0x86C7
#define GL_EVAL_VERTEX_ATTRIB2_NV         0x86C8
#define GL_EVAL_VERTEX_ATTRIB3_NV         0x86C9
#define GL_EVAL_VERTEX_ATTRIB4_NV         0x86CA
#define GL_EVAL_VERTEX_ATTRIB5_NV         0x86CB
#define GL_EVAL_VERTEX_ATTRIB6_NV         0x86CC
#define GL_EVAL_VERTEX_ATTRIB7_NV         0x86CD
#define GL_EVAL_VERTEX_ATTRIB8_NV         0x86CE
#define GL_EVAL_VERTEX_ATTRIB9_NV         0x86CF
#define GL_EVAL_VERTEX_ATTRIB10_NV        0x86D0
#define GL_EVAL_VERTEX_ATTRIB11_NV        0x86D1
#define GL_EVAL_VERTEX_ATTRIB12_NV        0x86D2
#define GL_EVAL_VERTEX_ATTRIB13_NV        0x86D3
#define GL_EVAL_VERTEX_ATTRIB14_NV        0x86D4
#define GL_EVAL_VERTEX_ATTRIB15_NV        0x86D5
#define GL_MAX_MAP_TESSELLATION_NV        0x86D6
#define GL_MAX_RATIONAL_EVAL_ORDER_NV     0x86D7

/* NV_texture_shader */
#define GL_OFFSET_TEXTURE_RECTANGLE_NV    0x864C
#define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV 0x864D
#define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV 0x864E
#define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV 0x86D9
#define GL_UNSIGNED_INT_S8_S8_8_8_NV      0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV  0x86DB
#define GL_DSDT_MAG_INTENSITY_NV          0x86DC
#define GL_SHADER_CONSISTENT_NV           0x86DD
#define GL_TEXTURE_SHADER_NV              0x86DE
#define GL_SHADER_OPERATION_NV            0x86DF
#define GL_CULL_MODES_NV                  0x86E0
#define GL_OFFSET_TEXTURE_MATRIX_NV       0x86E1
#define GL_OFFSET_TEXTURE_SCALE_NV        0x86E2
#define GL_OFFSET_TEXTURE_BIAS_NV         0x86E3
#define GL_OFFSET_TEXTURE_2D_MATRIX_NV    GL_OFFSET_TEXTURE_MATRIX_NV
#define GL_OFFSET_TEXTURE_2D_SCALE_NV     GL_OFFSET_TEXTURE_SCALE_NV
#define GL_OFFSET_TEXTURE_2D_BIAS_NV      GL_OFFSET_TEXTURE_BIAS_NV
#define GL_PREVIOUS_TEXTURE_INPUT_NV      0x86E4
#define GL_CONST_EYE_NV                   0x86E5
#define GL_PASS_THROUGH_NV                0x86E6
#define GL_CULL_FRAGMENT_NV               0x86E7
#define GL_OFFSET_TEXTURE_2D_NV           0x86E8
#define GL_DEPENDENT_AR_TEXTURE_2D_NV     0x86E9
#define GL_DEPENDENT_GB_TEXTURE_2D_NV     0x86EA
#define GL_DOT_PRODUCT_NV                 0x86EC
#define GL_DOT_PRODUCT_DEPTH_REPLACE_NV   0x86ED
#define GL_DOT_PRODUCT_TEXTURE_2D_NV      0x86EE
#define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV 0x86F0
#define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV 0x86F1
#define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV 0x86F2
#define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV 0x86F3
#define GL_HILO_NV                        0x86F4
#define GL_DSDT_NV                        0x86F5
#define GL_DSDT_MAG_NV                    0x86F6
#define GL_DSDT_MAG_VIB_NV                0x86F7
#define GL_HILO16_NV                      0x86F8
#define GL_SIGNED_HILO_NV                 0x86F9
#define GL_SIGNED_HILO16_NV               0x86FA
#define GL_SIGNED_RGBA_NV                 0x86FB
#define GL_SIGNED_RGBA8_NV                0x86FC
#define GL_SIGNED_RGB_NV                  0x86FE
#define GL_SIGNED_RGB8_NV                 0x86FF
#define GL_SIGNED_LUMINANCE_NV            0x8701
#define GL_SIGNED_LUMINANCE8_NV           0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV      0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV    0x8704
#define GL_SIGNED_ALPHA_NV                0x8705
#define GL_SIGNED_ALPHA8_NV               0x8706
#define GL_SIGNED_INTENSITY_NV            0x8707
#define GL_SIGNED_INTENSITY8_NV           0x8708
#define GL_DSDT8_NV                       0x8709
#define GL_DSDT8_MAG8_NV                  0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV       0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV   0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV 0x870D
#define GL_HI_SCALE_NV                    0x870E
#define GL_LO_SCALE_NV                    0x870F
#define GL_DS_SCALE_NV                    0x8710
#define GL_DT_SCALE_NV                    0x8711
#define GL_MAGNITUDE_SCALE_NV             0x8712
#define GL_VIBRANCE_SCALE_NV              0x8713
#define GL_HI_BIAS_NV                     0x8714
#define GL_LO_BIAS_NV                     0x8715
#define GL_DS_BIAS_NV                     0x8716
#define GL_DT_BIAS_NV                     0x8717
#define GL_MAGNITUDE_BIAS_NV              0x8718
#define GL_VIBRANCE_BIAS_NV               0x8719
#define GL_TEXTURE_BORDER_VALUES_NV       0x871A
#define GL_TEXTURE_HI_SIZE_NV             0x871B
#define GL_TEXTURE_LO_SIZE_NV             0x871C
#define GL_TEXTURE_DS_SIZE_NV             0x871D
#define GL_TEXTURE_DT_SIZE_NV             0x871E
#define GL_TEXTURE_MAG_SIZE_NV            0x871F

/* NV_texture_shader2 */
#define GL_DOT_PRODUCT_TEXTURE_3D_NV      0x86EF

/* NV_texture_shader3 */
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV 0x8850
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV 0x8851
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8852
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV 0x8853
#define GL_OFFSET_HILO_TEXTURE_2D_NV      0x8854
#define GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV 0x8855
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV 0x8856
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8857
#define GL_DEPENDENT_HILO_TEXTURE_2D_NV   0x8858
#define GL_DEPENDENT_RGB_TEXTURE_3D_NV    0x8859
#define GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV 0x885A
#define GL_DOT_PRODUCT_PASS_THROUGH_NV    0x885B
#define GL_DOT_PRODUCT_TEXTURE_1D_NV      0x885C
#define GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV 0x885D
#define GL_HILO8_NV                       0x885E
#define GL_SIGNED_HILO8_NV                0x885F
#define GL_FORCE_BLUE_TO_ONE_NV           0x8860

/* NV_register_combiners2 */
#define GL_PER_STAGE_CONSTANTS_NV         0x8535

/* IBM_texture_mirrored_repeat */
#define GL_MIRRORED_REPEAT_IBM            0x8370

/* ARB_texture_env_dot3 */
#define GL_DOT3_RGB_ARB                   0x86AE
#define GL_DOT3_RGBA_ARB                  0x86AF

/* EXT_texture_env_dot3 */
#define GL_DOT3_RGB_EXT                   0x8740
#define GL_DOT3_RGBA_EXT                  0x8741

/* APPLE_transform_hint */
#define GL_TRANSFORM_HINT_APPLE           0x85B1

/* ARB_texture_border_clamp */
#define GL_CLAMP_TO_BORDER_ARB            0x812D

/* NV_texture_rectangle */
#define GL_TEXTURE_RECTANGLE_NV           0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_NV   0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_NV     0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_NV  0x84F8

/* SGIX_shadow */
#define GL_TEXTURE_COMPARE_SGIX           0x819A
#define GL_TEXTURE_COMPARE_OPERATOR_SGIX  0x819B
#define GL_TEXTURE_LEQUAL_R_SGIX          0x819C
#define GL_TEXTURE_GEQUAL_R_SGIX          0x819D

/* SGIX_depth_texture */
#define GL_DEPTH_COMPONENT16_SGIX         0x81A5
#define GL_DEPTH_COMPONENT24_SGIX         0x81A6
#define GL_DEPTH_COMPONENT32_SGIX         0x81A7

/* ARB_multisample */
#define GL_MULTISAMPLE_ARB                0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB   0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB        0x809F
#define GL_SAMPLE_COVERAGE_ARB            0x80A0
#define GL_SAMPLE_BUFFERS_ARB             0x80A8
#define GL_SAMPLES_ARB                    0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB      0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB     0x80AB
#define GL_MULTISAMPLE_BIT_ARB            0x20000000

/* NV_multisample_filter_hint */
#define GL_MULTISAMPLE_FILTER_HINT_NV     0x8534

/* NV_packed_depth_stencil */
#define GL_DEPTH_STENCIL_NV               0x84F9
#define GL_UNSIGNED_INT_24_8_NV           0x84FA

/* EXT_draw_range_elements */
#define GL_MAX_ELEMENTS_VERTICES_EXT      0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT       0x80E9

/* SGIS_generate_mipmap */
#define GL_GENERATE_MIPMAP_SGIS           0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS      0x8192

/* NV_pixel_data_range */
#define GL_WRITE_PIXEL_DATA_RANGE_NV      0x6001
#define GL_READ_PIXEL_DATA_RANGE_NV       0x6002
#define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV 0x6003
#define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV 0x6004
#define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV 0x6005
#define GL_READ_PIXEL_DATA_RANGE_POINTER_NV 0x6006

/* NV_copy_depth_to_color */
#define GL_DEPTH_STENCIL_TO_RGBA_NV       0x886E
#define GL_DEPTH_STENCIL_TO_BGRA_NV       0x886F

/* Shader Source */
#define GL_COMPILE_STATUS                 0x8B81
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_SHADER_COMPILER                0x8DFA

/* Shader Binary */
#define GL_PLATFORM_BINARY                0x8D63
#define GL_SHADER_BINARY_FORMATS          0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS      0x8DF9

/* Shader Precision-Specified Types */
#define GL_LOW_FLOAT                      0x8DF0
#define GL_MEDIUM_FLOAT                   0x8DF1
#define GL_HIGH_FLOAT                     0x8DF2
#define GL_LOW_INT                        0x8DF3
#define GL_MEDIUM_INT                     0x8DF4
#define GL_HIGH_INT                       0x8DF5

/* GetPName */
#define GL_LINE_WIDTH                     0x0B21
#define GL_ALIASED_POINT_SIZE_RANGE       0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
#define GL_CULL_FACE_MODE                 0x0B45
#define GL_FRONT_FACE                     0x0B46
#define GL_DEPTH_RANGE                    0x0B70
#define GL_DEPTH_WRITEMASK                0x0B72
#define GL_DEPTH_CLEAR_VALUE              0x0B73
#define GL_DEPTH_FUNC                     0x0B74
#define GL_STENCIL_CLEAR_VALUE            0x0B91
#define GL_STENCIL_FUNC                   0x0B92
#define GL_STENCIL_FAIL                   0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
#define GL_STENCIL_REF                    0x0B97
#define GL_STENCIL_VALUE_MASK             0x0B93
#define GL_STENCIL_WRITEMASK              0x0B98
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5
#define GL_VIEWPORT                       0x0BA2
#define GL_SCISSOR_BOX                    0x0C10
/*      GL_SCISSOR_TEST */
#define GL_COLOR_CLEAR_VALUE              0x0C22
#define GL_COLOR_WRITEMASK                0x0C23
#define GL_UNPACK_ALIGNMENT               0x0CF5
#define GL_PACK_ALIGNMENT                 0x0D05
#define GL_MAX_TEXTURE_SIZE               0x0D33
#define GL_MAX_VIEWPORT_DIMS              0x0D3A
#define GL_SUBPIXEL_BITS                  0x0D50
#define GL_RED_BITS                       0x0D52
#define GL_GREEN_BITS                     0x0D53
#define GL_BLUE_BITS                      0x0D54
#define GL_ALPHA_BITS                     0x0D55
#define GL_DEPTH_BITS                     0x0D56
#define GL_STENCIL_BITS                   0x0D57
#define GL_POLYGON_OFFSET_UNITS           0x2A00
/*      GL_POLYGON_OFFSET_FILL */
#define GL_POLYGON_OFFSET_FACTOR          0x8038
#define GL_TEXTURE_BINDING_2D             0x8069
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB

/* Framebuffer Object. */
#define GL_FRAMEBUFFER                    0x8D40
#define GL_RENDERBUFFER                   0x8D41

#define GL_RGBA4                          0x8056
#define GL_RGB5_A1                        0x8057
#define GL_RGB565                         0x8D62
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_STENCIL_INDEX                  0x1901
#define GL_STENCIL_INDEX8                 0x8D48

#define GL_RENDERBUFFER_WIDTH             0x8D42
#define GL_RENDERBUFFER_HEIGHT            0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
#define GL_RENDERBUFFER_RED_SIZE          0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55

#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE           0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME           0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL         0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3

#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_STENCIL_ATTACHMENT             0x8D20

#define GL_FRAMEBUFFER_COMPLETE                      0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT         0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS         0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS            0x8CDA
#define GL_FRAMEBUFFER_UNSUPPORTED                   0x8CDD

#define GL_FRAMEBUFFER_BINDING            0x8CA6
#define GL_RENDERBUFFER_BINDING           0x8CA7
#define GL_MAX_RENDERBUFFER_SIZE          0x84E8

#define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506

/* Read Format */
#define GL_IMPLEMENTATION_COLOR_READ_TYPE   0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B

/* BlendEquationSeparate */
#define GL_FUNC_ADD                       0x8006
#define GL_BLEND_EQUATION                 0x8009
#define GL_BLEND_EQUATION_RGB             0x8009    /* same as BLEND_EQUATION */
#define GL_BLEND_EQUATION_ALPHA           0x883D

/* BlendSubtract */
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_FUNC_REVERSE_SUBTRACT          0x800B

/* Separate Blend Functions */
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#define GL_BLEND_COLOR                    0x8005

/* StencilOp */
/*      GL_ZERO */
#define GL_KEEP                           0x1E00
#define GL_REPLACE                        0x1E01
#define GL_INCR                           0x1E02
#define GL_DECR                           0x1E03
#define GL_INVERT                         0x150A
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508

/* HintTarget */
#define GL_GENERATE_MIPMAP_HINT            0x8192

/* Shaders */
#define GL_FRAGMENT_SHADER                  0x8B30
#define GL_VERTEX_SHADER                    0x8B31
#define GL_MAX_VERTEX_ATTRIBS               0x8869
#define GL_MAX_VERTEX_UNIFORM_VECTORS       0x8DFB
#define GL_MAX_VARYING_VECTORS              0x8DFC
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS   0x8B4C
#define GL_MAX_TEXTURE_IMAGE_UNITS          0x8872
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS     0x8DFD
#define GL_SHADER_TYPE                      0x8B4F
#define GL_DELETE_STATUS                    0x8B80
#define GL_LINK_STATUS                      0x8B82
#define GL_VALIDATE_STATUS                  0x8B83
#define GL_ATTACHED_SHADERS                 0x8B85
#define GL_ACTIVE_UNIFORMS                  0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH        0x8B87
#define GL_ACTIVE_ATTRIBUTES                0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH      0x8B8A
#define GL_SHADING_LANGUAGE_VERSION         0x8B8C
#define GL_CURRENT_PROGRAM                  0x8B8D

/* Uniform Types */
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_CUBE                   0x8B60

/* Buffer Objects */
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895

#define GL_STREAM_DRAW                    0x88E0
#define GL_STATIC_DRAW                    0x88E4
#define GL_DYNAMIC_DRAW                   0x88E8

#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765

#define GL_CURRENT_VERTEX_ATTRIB          0x8626

/*************************************************************/

GL_APICALL void glAccum (GLenum op, GLfloat value);
GL_APICALL void glActiveTexture (GLenum texture);
GL_APICALL void glActiveTextureARB (GLenum texture);
GL_APICALL void glAddSwapHintRectWIN (GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void glAlphaFunc (GLenum func, GLclampf ref);
GL_APICALL GLboolean glAreProgramsResidentNV (GLsizei n, const GLuint *programs, GLboolean *residences);
GL_APICALL GLboolean glAreTexturesResident (GLsizei n, const GLuint *textures, GLboolean *residences);
GL_APICALL GLboolean glAreTexturesResidentEXT (GLsizei n, const GLuint *textures, GLboolean *residences);
GL_APICALL void glArrayElement (GLint i);
GL_APICALL void glArrayElementEXT (GLint i);
GL_APICALL void glBegin (GLenum mode);
GL_APICALL void glBindProgramNV (GLenum target, GLuint id);
GL_APICALL void glBindTexture (GLenum target, GLuint texture);
GL_APICALL void glBindTextureEXT (GLenum target, GLuint texture);
GL_APICALL void glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
GL_APICALL void glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
GL_APICALL void glBlendColorEXT (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
GL_APICALL void glBlendEquation (GLenum mode);
GL_APICALL void glBlendEquationEXT (GLenum mode);
GL_APICALL void glBlendFunc (GLenum sfactor, GLenum dfactor);
GL_APICALL void glCallList (GLuint list);
GL_APICALL void glCallLists (GLsizei n, GLenum type, const GLvoid *lists);
GL_APICALL void glClear (GLbitfield mask);
GL_APICALL void glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GL_APICALL void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
GL_APICALL void glClearDepth (GLclampd depth);
GL_APICALL void glClearIndex (GLfloat c);
GL_APICALL void glClearStencil (GLint s);
GL_APICALL void glClientActiveTexture (GLenum texture);
GL_APICALL void glClientActiveTextureARB (GLenum texture);
GL_APICALL void glClipPlane (GLenum plane, const GLdouble *equation);
GL_APICALL void glColor3b (GLbyte red, GLbyte green, GLbyte blue);
GL_APICALL void glColor3bv (const GLbyte *v);
GL_APICALL void glColor3d (GLdouble red, GLdouble green, GLdouble blue);
GL_APICALL void glColor3dv (const GLdouble *v);
GL_APICALL void glColor3f (GLfloat red, GLfloat green, GLfloat blue);
GL_APICALL void glColor3fv (const GLfloat *v);
GL_APICALL void glColor3i (GLint red, GLint green, GLint blue);
GL_APICALL void glColor3iv (const GLint *v);
GL_APICALL void glColor3s (GLshort red, GLshort green, GLshort blue);
GL_APICALL void glColor3sv (const GLshort *v);
GL_APICALL void glColor3ub (GLubyte red, GLubyte green, GLubyte blue);
GL_APICALL void glColor3ubv (const GLubyte *v);
GL_APICALL void glColor3ui (GLuint red, GLuint green, GLuint blue);
GL_APICALL void glColor3uiv (const GLuint *v);
GL_APICALL void glColor3us (GLushort red, GLushort green, GLushort blue);
GL_APICALL void glColor3usv (const GLushort *v);
GL_APICALL void glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
GL_APICALL void glColor4bv (const GLbyte *v);
GL_APICALL void glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
GL_APICALL void glColor4dv (const GLdouble *v);
GL_APICALL void glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GL_APICALL void glColor4fv (const GLfloat *v);
GL_APICALL void glColor4i (GLint red, GLint green, GLint blue, GLint alpha);
GL_APICALL void glColor4iv (const GLint *v);
GL_APICALL void glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha);
GL_APICALL void glColor4sv (const GLshort *v);
GL_APICALL void glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
GL_APICALL void glColor4ubv (const GLubyte *v);
GL_APICALL void glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha);
GL_APICALL void glColor4uiv (const GLuint *v);
GL_APICALL void glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha);
GL_APICALL void glColor4usv (const GLushort *v);
GL_APICALL void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GL_APICALL void glColorMaterial (GLenum face, GLenum mode);
GL_APICALL void glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glColorPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
GL_APICALL void glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
GL_APICALL void glColorSubTableEXT (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *table);
GL_APICALL void glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
GL_APICALL void glColorTableEXT (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
GL_APICALL void glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params);
GL_APICALL void glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params);
GL_APICALL void glCombinerInputNV (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
GL_APICALL void glCombinerOutputNV (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
GL_APICALL void glCombinerParameterfNV (GLenum pname, GLfloat param);
GL_APICALL void glCombinerParameterfvNV (GLenum pname, const GLfloat *params);
GL_APICALL void glCombinerParameteriNV (GLenum pname, GLint param);
GL_APICALL void glCombinerParameterivNV (GLenum pname, const GLint *params);
GL_APICALL void glCombinerStageParameterfvNV (GLenum stage, GLenum pname, const GLfloat *params);
GL_APICALL void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexImage1DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexImage2DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexImage3DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexSubImage1DARB (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexSubImage2DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glCompressedTexSubImage3DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
GL_APICALL void glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
GL_APICALL void glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
GL_APICALL void glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params);
GL_APICALL void glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat *params);
GL_APICALL void glConvolutionParameteri (GLenum target, GLenum pname, GLint params);
GL_APICALL void glConvolutionParameteriv (GLenum target, GLenum pname, const GLint *params);
GL_APICALL void glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
GL_APICALL void glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
GL_APICALL void glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
GL_APICALL void glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
GL_APICALL void glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
GL_APICALL void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GL_APICALL void glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GL_APICALL void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void glCopyTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void glCullFace (GLenum mode);
GL_APICALL void glDeleteFencesNV (GLsizei n, const GLuint *fences);
GL_APICALL void glDeleteLists (GLuint list, GLsizei range);
GL_APICALL void glDeleteProgramsNV (GLsizei n, const GLuint *programs);
GL_APICALL void glDeleteTextures (GLsizei n, const GLuint *textures);
GL_APICALL void glDeleteTexturesEXT (GLsizei n, const GLuint *textures);
GL_APICALL void glDepthFunc (GLenum func);
GL_APICALL void glDepthMask (GLboolean flag);
GL_APICALL void glDepthRange (GLclampd zNear, GLclampd zFar);
GL_APICALL void glDisable (GLenum cap);
GL_APICALL void glDisableClientState (GLenum array);
GL_APICALL void glDrawArrays (GLenum mode, GLint first, GLsizei count);
GL_APICALL void glDrawArraysEXT (GLenum mode, GLint first, GLsizei count);
GL_APICALL void glDrawBuffer (GLenum mode);
GL_APICALL void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
GL_APICALL void glDrawMeshNV (GLenum mode, GLsizei count, GLenum type, GLsizei stride, const GLvoid *indicesTexCoord, const GLvoid *indicesNormal, const GLvoid *indicesVertex);
GL_APICALL void glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
GL_APICALL void glDrawRangeElementsEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
GL_APICALL void glEdgeFlag (GLboolean flag);
GL_APICALL void glEdgeFlagPointer (GLsizei stride, const GLboolean *pointer);
GL_APICALL void glEdgeFlagPointerEXT (GLsizei stride, GLsizei count, const GLboolean *pointer);
GL_APICALL void glEdgeFlagv (const GLboolean *flag);
GL_APICALL void glEnable (GLenum cap);
GL_APICALL void glEnableClientState (GLenum array);
GL_APICALL void glEnd (void);
GL_APICALL void glEndList (void);
GL_APICALL void glEvalCoord1d (GLdouble u);
GL_APICALL void glEvalCoord1dv (const GLdouble *u);
GL_APICALL void glEvalCoord1f (GLfloat u);
GL_APICALL void glEvalCoord1fv (const GLfloat *u);
GL_APICALL void glEvalCoord2d (GLdouble u, GLdouble v);
GL_APICALL void glEvalCoord2dv (const GLdouble *u);
GL_APICALL void glEvalCoord2f (GLfloat u, GLfloat v);
GL_APICALL void glEvalCoord2fv (const GLfloat *u);
GL_APICALL void glEvalMapsNV (GLenum target, GLenum mode);
GL_APICALL void glEvalMesh1 (GLenum mode, GLint i1, GLint i2);
GL_APICALL void glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
GL_APICALL void glEvalPoint1 (GLint i);
GL_APICALL void glEvalPoint2 (GLint i, GLint j);
GL_APICALL void glExecuteProgramNV (GLenum target, GLuint id, const GLfloat *params);
GL_APICALL void glFeedbackBuffer (GLsizei size, GLenum type, GLfloat *buffer);
GL_APICALL void glFinalCombinerInputNV (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
GL_APICALL void glFinish (void);
GL_APICALL void glFinishFenceNV (GLuint fence);
GL_APICALL void glFlush (void);
GL_APICALL GLvoid* glFlushHold (void);
GL_APICALL void glFlushPixelDataRangeNV (GLenum target);
GL_APICALL void glFlushVertexArrayRangeNV (void);
GL_APICALL void glFogCoordPointerEXT (GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glFogCoorddEXT (GLdouble fog);
GL_APICALL void glFogCoorddvEXT (const GLdouble *fog);
GL_APICALL void glFogCoordfEXT (GLfloat fog);
GL_APICALL void glFogCoordfvEXT (const GLfloat *fog);
GL_APICALL void glFogf (GLenum pname, GLfloat param);
GL_APICALL void glFogfv (GLenum pname, const GLfloat *params);
GL_APICALL void glFogi (GLenum pname, GLint param);
GL_APICALL void glFogiv (GLenum pname, const GLint *params);
GL_APICALL void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GL_APICALL void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GL_APICALL void glFrontFace (GLenum mode);
GL_APICALL void glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GL_APICALL void glGenFencesNV (GLsizei n, GLuint *fences);
GL_APICALL GLuint glGenLists (GLsizei range);
GL_APICALL void glGenProgramsNV (GLsizei n, GLuint *programs);
GL_APICALL void glGenTextures (GLsizei n, GLuint *textures);
GL_APICALL void glGenTexturesEXT (GLsizei n, GLuint *textures);
GL_APICALL void glGetBooleanv (GLenum pname, GLboolean *params);
GL_APICALL void glGetClipPlane (GLenum plane, GLdouble *equation);
GL_APICALL void glGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid *table);
GL_APICALL void glGetColorTableEXT (GLenum target, GLenum format, GLenum type, GLvoid *table);
GL_APICALL void glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params);
GL_APICALL void glGetColorTableParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
GL_APICALL void glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params);
GL_APICALL void glGetColorTableParameterivEXT (GLenum target, GLenum pname, GLint *params);
GL_APICALL void glGetCombinerInputParameterfvNV (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
GL_APICALL void glGetCombinerInputParameterivNV (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params);
GL_APICALL void glGetCombinerOutputParameterfvNV (GLenum stage, GLenum portion, GLenum pname, GLfloat *params);
GL_APICALL void glGetCombinerOutputParameterivNV (GLenum stage, GLenum portion, GLenum pname, GLint *params);
GL_APICALL void glGetCombinerStageParameterfvNV (GLenum stage, GLenum pname, GLfloat *params);
GL_APICALL void glGetCompressedTexImage (GLenum target, GLint lod, GLvoid *img);
GL_APICALL void glGetCompressedTexImageARB (GLenum target, GLint lod, GLvoid *img);
GL_APICALL void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image);
GL_APICALL void glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params);
GL_APICALL void glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params);
GL_APICALL void glGetDoublev (GLenum pname, GLdouble *params);
GL_APICALL GLenum glGetError (void);
GL_APICALL void glGetFenceivNV (GLuint fence, GLenum pname, GLint *params);
GL_APICALL void glGetFinalCombinerInputParameterfvNV (GLenum variable, GLenum pname, GLfloat *params);
GL_APICALL void glGetFinalCombinerInputParameterivNV (GLenum variable, GLenum pname, GLint *params);
GL_APICALL void glGetFloatv (GLenum pname, GLfloat *params);
GL_APICALL void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint* params);
GL_APICALL void glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
GL_APICALL void glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params);
GL_APICALL void glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params);
GL_APICALL void glGetIntegerv (GLenum pname, GLint *params);
GL_APICALL void glGetLightfv (GLenum light, GLenum pname, GLfloat *params);
GL_APICALL void glGetLightiv (GLenum light, GLenum pname, GLint *params);
GL_APICALL void glGetMapAttribParameterfvNV (GLenum target, GLuint index, GLenum pname, GLfloat *params);
GL_APICALL void glGetMapAttribParameterivNV (GLenum target, GLuint index, GLenum pname, GLint *params);
GL_APICALL void glGetMapControlPointsNV (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points);
GL_APICALL void glGetMapParameterfvNV (GLenum target, GLenum pname, GLfloat *params);
GL_APICALL void glGetMapParameterivNV (GLenum target, GLenum pname, GLint *params);
GL_APICALL void glGetMapdv (GLenum target, GLenum query, GLdouble *v);
GL_APICALL void glGetMapfv (GLenum target, GLenum query, GLfloat *v);
GL_APICALL void glGetMapiv (GLenum target, GLenum query, GLint *v);
GL_APICALL void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params);
GL_APICALL void glGetMaterialiv (GLenum face, GLenum pname, GLint *params);
GL_APICALL void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
GL_APICALL void glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params);
GL_APICALL void glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params);
GL_APICALL void glGetPixelMapfv (GLenum map, GLfloat *values);
GL_APICALL void glGetPixelMapuiv (GLenum map, GLuint *values);
GL_APICALL void glGetPixelMapusv (GLenum map, GLushort *values);
GL_APICALL void glGetPointerv (GLenum pname, GLvoid* *params);
GL_APICALL void glGetPointervEXT (GLenum pname, GLvoid* *params);
GL_APICALL void glGetPolygonStipple (GLubyte *mask);
GL_APICALL void glGetProgramParameterdvNV (GLenum target, GLuint index, GLenum pname, GLdouble *params);
GL_APICALL void glGetProgramParameterfvNV (GLenum target, GLuint index, GLenum pname, GLfloat *params);
GL_APICALL void glGetProgramStringNV (GLuint id, GLenum pname, GLubyte *program);
GL_APICALL void glGetProgramivNV (GLuint id, GLenum pname, GLint *params);
GL_APICALL void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
GL_APICALL const GLubyte * glGetString (GLenum name);
GL_APICALL void glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params);
GL_APICALL void glGetTexEnviv (GLenum target, GLenum pname, GLint *params);
GL_APICALL void glGetTexGendv (GLenum coord, GLenum pname, GLdouble *params);
GL_APICALL void glGetTexGenfv (GLenum coord, GLenum pname, GLfloat *params);
GL_APICALL void glGetTexGeniv (GLenum coord, GLenum pname, GLint *params);
GL_APICALL void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
GL_APICALL void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params);
GL_APICALL void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params);
GL_APICALL void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
GL_APICALL void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
GL_APICALL void glGetTrackMatrixivNV (GLenum target, GLuint address, GLenum pname, GLint *params);
GL_APICALL void glGetVertexAttribPointervNV (GLuint index, GLenum pname, GLvoid* *pointer);
GL_APICALL void glGetVertexAttribdvNV (GLuint index, GLenum pname, GLdouble *params);
GL_APICALL void glGetVertexAttribfvNV (GLuint index, GLenum pname, GLfloat *params);
GL_APICALL void glGetVertexAttribivNV (GLuint index, GLenum pname, GLint *params);
GL_APICALL void glHint (GLenum target, GLenum mode);
GL_APICALL void glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
GL_APICALL void glIndexMask (GLuint mask);
GL_APICALL void glIndexPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glIndexPointerEXT (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
GL_APICALL void glIndexd (GLdouble c);
GL_APICALL void glIndexdv (const GLdouble *c);
GL_APICALL void glIndexf (GLfloat c);
GL_APICALL void glIndexfv (const GLfloat *c);
GL_APICALL void glIndexi (GLint c);
GL_APICALL void glIndexiv (const GLint *c);
GL_APICALL void glIndexs (GLshort c);
GL_APICALL void glIndexsv (const GLshort *c);
GL_APICALL void glIndexub (GLubyte c);
GL_APICALL void glIndexubv (const GLubyte *c);
GL_APICALL void glInitNames (void);
GL_APICALL void glInterleavedArrays (GLenum format, GLsizei stride, const GLvoid *pointer);
GL_APICALL GLboolean glIsEnabled (GLenum cap);
GL_APICALL GLboolean glIsFenceNV (GLuint fence);
GL_APICALL GLboolean glIsList (GLuint list);
GL_APICALL GLboolean glIsProgramNV (GLuint id);
GL_APICALL GLboolean glIsTexture (GLuint texture);
GL_APICALL GLboolean glIsTextureEXT (GLuint texture);
GL_APICALL void glLightModelf (GLenum pname, GLfloat param);
GL_APICALL void glLightModelfv (GLenum pname, const GLfloat *params);
GL_APICALL void glLightModeli (GLenum pname, GLint param);
GL_APICALL void glLightModeliv (GLenum pname, const GLint *params);
GL_APICALL void glLightf (GLenum light, GLenum pname, GLfloat param);
GL_APICALL void glLightfv (GLenum light, GLenum pname, const GLfloat *params);
GL_APICALL void glLighti (GLenum light, GLenum pname, GLint param);
GL_APICALL void glLightiv (GLenum light, GLenum pname, const GLint *params);
GL_APICALL void glLineStipple (GLint factor, GLushort pattern);
GL_APICALL void glLineWidth (GLfloat width);
GL_APICALL void glListBase (GLuint base);
GL_APICALL void glLoadIdentity (void);
GL_APICALL void glLoadMatrixd (const GLdouble *m);
GL_APICALL void glLoadMatrixf (const GLfloat *m);
GL_APICALL void glLoadName (GLuint name);
GL_APICALL void glLoadProgramNV (GLenum target, GLuint id, GLsizei len, const GLubyte *program);
GL_APICALL void glLoadTransposeMatrixd (const GLdouble *m);
GL_APICALL void glLoadTransposeMatrixdARB (const GLdouble *m);
GL_APICALL void glLoadTransposeMatrixf (const GLfloat *m);
GL_APICALL void glLoadTransposeMatrixfARB (const GLfloat *m);
GL_APICALL void glLockArraysEXT (GLint first, GLsizei count);
GL_APICALL void glLogicOp (GLenum opcode);
GL_APICALL void glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
GL_APICALL void glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
GL_APICALL void glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
GL_APICALL void glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
GL_APICALL void glMapControlPointsNV (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points);
GL_APICALL void glMapGrid1d (GLint un, GLdouble u1, GLdouble u2);
GL_APICALL void glMapGrid1f (GLint un, GLfloat u1, GLfloat u2);
GL_APICALL void glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
GL_APICALL void glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
GL_APICALL void glMapParameterfvNV (GLenum target, GLenum pname, const GLfloat *params);
GL_APICALL void glMapParameterivNV (GLenum target, GLenum pname, const GLint *params);
GL_APICALL void glMaterialf (GLenum face, GLenum pname, GLfloat param);
GL_APICALL void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params);
GL_APICALL void glMateriali (GLenum face, GLenum pname, GLint param);
GL_APICALL void glMaterialiv (GLenum face, GLenum pname, const GLint *params);
GL_APICALL void glMatrixMode (GLenum mode);
GL_APICALL void glMinmax (GLenum target, GLenum internalformat, GLboolean sink);
GL_APICALL void glMultMatrixd (const GLdouble *m);
GL_APICALL void glMultMatrixf (const GLfloat *m);
GL_APICALL void glMultTransposeMatrixd (const GLdouble *m);
GL_APICALL void glMultTransposeMatrixdARB (const GLdouble *m);
GL_APICALL void glMultTransposeMatrixf (const GLfloat *m);
GL_APICALL void glMultTransposeMatrixfARB (const GLfloat *m);
GL_APICALL void glMultiTexCoord1d (GLenum target, GLdouble s);
GL_APICALL void glMultiTexCoord1dARB (GLenum target, GLdouble s);
GL_APICALL void glMultiTexCoord1dSGIS (GLenum target, GLdouble s);
GL_APICALL void glMultiTexCoord1dv (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord1dvARB (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord1dvSGIS (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord1f (GLenum target, GLfloat s);
GL_APICALL void glMultiTexCoord1fARB (GLenum target, GLfloat s);
GL_APICALL void glMultiTexCoord1fSGIS (GLenum target, GLfloat s);
GL_APICALL void glMultiTexCoord1fv (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord1fvARB (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord1fvSGIS (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord1i (GLenum target, GLint s);
GL_APICALL void glMultiTexCoord1iARB (GLenum target, GLint s);
GL_APICALL void glMultiTexCoord1iSGIS (GLenum target, GLint s);
GL_APICALL void glMultiTexCoord1iv (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord1ivARB (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord1ivSGIS (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord1s (GLenum target, GLshort s);
GL_APICALL void glMultiTexCoord1sARB (GLenum target, GLshort s);
GL_APICALL void glMultiTexCoord1sSGIS (GLenum target, GLshort s);
GL_APICALL void glMultiTexCoord1sv (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord1svARB (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord1svSGIS (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t);
GL_APICALL void glMultiTexCoord2dARB (GLenum target, GLdouble s, GLdouble t);
GL_APICALL void glMultiTexCoord2dSGIS (GLenum target, GLdouble s, GLdouble t);
GL_APICALL void glMultiTexCoord2dv (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord2dvARB (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord2dvSGIS (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t);
GL_APICALL void glMultiTexCoord2fARB (GLenum target, GLfloat s, GLfloat t);
GL_APICALL void glMultiTexCoord2fSGIS (GLenum target, GLfloat s, GLfloat t);
GL_APICALL void glMultiTexCoord2fv (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord2fvARB (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord2fvSGIS (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord2i (GLenum target, GLint s, GLint t);
GL_APICALL void glMultiTexCoord2iARB (GLenum target, GLint s, GLint t);
GL_APICALL void glMultiTexCoord2iSGIS (GLenum target, GLint s, GLint t);
GL_APICALL void glMultiTexCoord2iv (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord2ivARB (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord2ivSGIS (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord2s (GLenum target, GLshort s, GLshort t);
GL_APICALL void glMultiTexCoord2sARB (GLenum target, GLshort s, GLshort t);
GL_APICALL void glMultiTexCoord2sSGIS (GLenum target, GLshort s, GLshort t);
GL_APICALL void glMultiTexCoord2sv (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord2svARB (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord2svSGIS (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r);
GL_APICALL void glMultiTexCoord3dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r);
GL_APICALL void glMultiTexCoord3dSGIS (GLenum target, GLdouble s, GLdouble t, GLdouble r);
GL_APICALL void glMultiTexCoord3dv (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord3dvARB (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord3dvSGIS (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r);
GL_APICALL void glMultiTexCoord3fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r);
GL_APICALL void glMultiTexCoord3fSGIS (GLenum target, GLfloat s, GLfloat t, GLfloat r);
GL_APICALL void glMultiTexCoord3fv (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord3fvARB (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord3fvSGIS (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r);
GL_APICALL void glMultiTexCoord3iARB (GLenum target, GLint s, GLint t, GLint r);
GL_APICALL void glMultiTexCoord3iSGIS (GLenum target, GLint s, GLint t, GLint r);
GL_APICALL void glMultiTexCoord3iv (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord3ivARB (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord3ivSGIS (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r);
GL_APICALL void glMultiTexCoord3sARB (GLenum target, GLshort s, GLshort t, GLshort r);
GL_APICALL void glMultiTexCoord3sSGIS (GLenum target, GLshort s, GLshort t, GLshort r);
GL_APICALL void glMultiTexCoord3sv (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord3svARB (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord3svSGIS (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
GL_APICALL void glMultiTexCoord4dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
GL_APICALL void glMultiTexCoord4dSGIS (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
GL_APICALL void glMultiTexCoord4dv (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord4dvARB (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord4dvSGIS (GLenum target, const GLdouble *v);
GL_APICALL void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
GL_APICALL void glMultiTexCoord4fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
GL_APICALL void glMultiTexCoord4fSGIS (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
GL_APICALL void glMultiTexCoord4fv (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord4fvARB (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord4fvSGIS (GLenum target, const GLfloat *v);
GL_APICALL void glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q);
GL_APICALL void glMultiTexCoord4iARB (GLenum target, GLint s, GLint t, GLint r, GLint q);
GL_APICALL void glMultiTexCoord4iSGIS (GLenum target, GLint s, GLint t, GLint r, GLint q);
GL_APICALL void glMultiTexCoord4iv (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord4ivARB (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord4ivSGIS (GLenum target, const GLint *v);
GL_APICALL void glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
GL_APICALL void glMultiTexCoord4sARB (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
GL_APICALL void glMultiTexCoord4sSGIS (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
GL_APICALL void glMultiTexCoord4sv (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord4svARB (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoord4svSGIS (GLenum target, const GLshort *v);
GL_APICALL void glMultiTexCoordPointerSGIS (GLenum target, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glNewList (GLuint list, GLenum mode);
GL_APICALL void glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz);
GL_APICALL void glNormal3bv (const GLbyte *v);
GL_APICALL void glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz);
GL_APICALL void glNormal3dv (const GLdouble *v);
GL_APICALL void glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
GL_APICALL void glNormal3fv (const GLfloat *v);
GL_APICALL void glNormal3i (GLint nx, GLint ny, GLint nz);
GL_APICALL void glNormal3iv (const GLint *v);
GL_APICALL void glNormal3s (GLshort nx, GLshort ny, GLshort nz);
GL_APICALL void glNormal3sv (const GLshort *v);
GL_APICALL void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glNormalPointerEXT (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
GL_APICALL void glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GL_APICALL void glPassThrough (GLfloat token);
GL_APICALL void glPixelDataRangeNV (GLenum target, GLsizei size, const GLvoid *pointer);
GL_APICALL void glPixelMapfv (GLenum map, GLint mapsize, const GLfloat *values);
GL_APICALL void glPixelMapuiv (GLenum map, GLint mapsize, const GLuint *values);
GL_APICALL void glPixelMapusv (GLenum map, GLint mapsize, const GLushort *values);
GL_APICALL void glPixelStoref (GLenum pname, GLfloat param);
GL_APICALL void glPixelStorei (GLenum pname, GLint param);
GL_APICALL void glPixelTransferf (GLenum pname, GLfloat param);
GL_APICALL void glPixelTransferi (GLenum pname, GLint param);
GL_APICALL void glPixelZoom (GLfloat xfactor, GLfloat yfactor);
GL_APICALL void glPointParameterfEXT (GLenum pname, GLfloat param);
GL_APICALL void glPointParameterfvEXT (GLenum pname, const GLfloat *params);
GL_APICALL void glPointSize (GLfloat size);
GL_APICALL void glPolygonMode (GLenum face, GLenum mode);
GL_APICALL void glPolygonOffset (GLfloat factor, GLfloat units);
GL_APICALL void glPolygonStipple (const GLubyte *mask);
GL_APICALL void glPopAttrib (void);
GL_APICALL void glPopClientAttrib (void);
GL_APICALL void glPopMatrix (void);
GL_APICALL void glPopName (void);
GL_APICALL void glPrioritizeTextures (GLsizei n, const GLuint *textures, const GLclampf *priorities);
GL_APICALL void glPrioritizeTexturesEXT (GLsizei n, const GLuint *textures, const GLclampf *priorities);
GL_APICALL void glProgramParameter4dNV (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GL_APICALL void glProgramParameter4dvNV (GLenum target, GLuint index, const GLdouble *v);
GL_APICALL void glProgramParameter4fNV (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GL_APICALL void glProgramParameter4fvNV (GLenum target, GLuint index, const GLfloat *v);
GL_APICALL void glProgramParameters4dvNV (GLenum target, GLuint index, GLsizei count, const GLdouble *v);
GL_APICALL void glProgramParameters4fvNV (GLenum target, GLuint index, GLsizei count, const GLfloat *v);
GL_APICALL void glPushAttrib (GLbitfield mask);
GL_APICALL void glPushClientAttrib (GLbitfield mask);
GL_APICALL void glPushMatrix (void);
GL_APICALL void glPushName (GLuint name);
GL_APICALL void glRasterPos2d (GLdouble x, GLdouble y);
GL_APICALL void glRasterPos2dv (const GLdouble *v);
GL_APICALL void glRasterPos2f (GLfloat x, GLfloat y);
GL_APICALL void glRasterPos2fv (const GLfloat *v);
GL_APICALL void glRasterPos2i (GLint x, GLint y);
GL_APICALL void glRasterPos2iv (const GLint *v);
GL_APICALL void glRasterPos2s (GLshort x, GLshort y);
GL_APICALL void glRasterPos2sv (const GLshort *v);
GL_APICALL void glRasterPos3d (GLdouble x, GLdouble y, GLdouble z);
GL_APICALL void glRasterPos3dv (const GLdouble *v);
GL_APICALL void glRasterPos3f (GLfloat x, GLfloat y, GLfloat z);
GL_APICALL void glRasterPos3fv (const GLfloat *v);
GL_APICALL void glRasterPos3i (GLint x, GLint y, GLint z);
GL_APICALL void glRasterPos3iv (const GLint *v);
GL_APICALL void glRasterPos3s (GLshort x, GLshort y, GLshort z);
GL_APICALL void glRasterPos3sv (const GLshort *v);
GL_APICALL void glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GL_APICALL void glRasterPos4dv (const GLdouble *v);
GL_APICALL void glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GL_APICALL void glRasterPos4fv (const GLfloat *v);
GL_APICALL void glRasterPos4i (GLint x, GLint y, GLint z, GLint w);
GL_APICALL void glRasterPos4iv (const GLint *v);
GL_APICALL void glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w);
GL_APICALL void glRasterPos4sv (const GLshort *v);
GL_APICALL void glReadBuffer (GLenum mode);
GL_APICALL void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
GL_APICALL void glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
GL_APICALL void glRectdv (const GLdouble *v1, const GLdouble *v2);
GL_APICALL void glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
GL_APICALL void glRectfv (const GLfloat *v1, const GLfloat *v2);
GL_APICALL void glRecti (GLint x1, GLint y1, GLint x2, GLint y2);
GL_APICALL void glRectiv (const GLint *v1, const GLint *v2);
GL_APICALL void glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
GL_APICALL void glRectsv (const GLshort *v1, const GLshort *v2);
GL_APICALL GLenum glReleaseFlushHold (const GLvoid *id);
GL_APICALL GLint glRenderMode (GLenum mode);
GL_APICALL void glRequestResidentProgramsNV (GLsizei n, const GLuint *programs);
GL_APICALL void glResetHistogram (GLenum target);
GL_APICALL void glResetMinmax (GLenum target);
GL_APICALL void glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
GL_APICALL void glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
GL_APICALL void glSampleCoverage (GLclampf value, GLboolean invert);
GL_APICALL void glSampleCoverageARB (GLclampf value, GLboolean invert);
GL_APICALL void glScaled (GLdouble x, GLdouble y, GLdouble z);
GL_APICALL void glScalef (GLfloat x, GLfloat y, GLfloat z);
GL_APICALL void glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void glSecondaryColor3bEXT (GLbyte red, GLbyte green, GLbyte blue);
GL_APICALL void glSecondaryColor3bvEXT (const GLbyte *v);
GL_APICALL void glSecondaryColor3dEXT (GLdouble red, GLdouble green, GLdouble blue);
GL_APICALL void glSecondaryColor3dvEXT (const GLdouble *v);
GL_APICALL void glSecondaryColor3fEXT (GLfloat red, GLfloat green, GLfloat blue);
GL_APICALL void glSecondaryColor3fvEXT (const GLfloat *v);
GL_APICALL void glSecondaryColor3iEXT (GLint red, GLint green, GLint blue);
GL_APICALL void glSecondaryColor3ivEXT (const GLint *v);
GL_APICALL void glSecondaryColor3sEXT (GLshort red, GLshort green, GLshort blue);
GL_APICALL void glSecondaryColor3svEXT (const GLshort *v);
GL_APICALL void glSecondaryColor3ubEXT (GLubyte red, GLubyte green, GLubyte blue);
GL_APICALL void glSecondaryColor3ubvEXT (const GLubyte *v);
GL_APICALL void glSecondaryColor3uiEXT (GLuint red, GLuint green, GLuint blue);
GL_APICALL void glSecondaryColor3uivEXT (const GLuint *v);
GL_APICALL void glSecondaryColor3usEXT (GLushort red, GLushort green, GLushort blue);
GL_APICALL void glSecondaryColor3usvEXT (const GLushort *v);
GL_APICALL void glSecondaryColorPointerEXT (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glSelectBuffer (GLsizei size, GLuint *buffer);
GL_APICALL void glSelectTextureCoordSetSGIS (GLenum target);
GL_APICALL void glSelectTextureSGIS (GLenum target);
GL_APICALL void glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
GL_APICALL void glSetFenceNV (GLuint fence, GLenum condition);
GL_APICALL void glSetWindowStereoModeNV (GLboolean displayMode);
GL_APICALL void glShadeModel (GLenum mode);
GL_APICALL void glStencilFunc (GLenum func, GLint ref, GLuint mask);
GL_APICALL void glStencilMask (GLuint mask);
GL_APICALL void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
GL_APICALL GLboolean glTestFenceNV (GLuint fence);
GL_APICALL void glTexCoord1d (GLdouble s);
GL_APICALL void glTexCoord1dv (const GLdouble *v);
GL_APICALL void glTexCoord1f (GLfloat s);
GL_APICALL void glTexCoord1fv (const GLfloat *v);
GL_APICALL void glTexCoord1i (GLint s);
GL_APICALL void glTexCoord1iv (const GLint *v);
GL_APICALL void glTexCoord1s (GLshort s);
GL_APICALL void glTexCoord1sv (const GLshort *v);
GL_APICALL void glTexCoord2d (GLdouble s, GLdouble t);
GL_APICALL void glTexCoord2dv (const GLdouble *v);
GL_APICALL void glTexCoord2f (GLfloat s, GLfloat t);
GL_APICALL void glTexCoord2fv (const GLfloat *v);
GL_APICALL void glTexCoord2i (GLint s, GLint t);
GL_APICALL void glTexCoord2iv (const GLint *v);
GL_APICALL void glTexCoord2s (GLshort s, GLshort t);
GL_APICALL void glTexCoord2sv (const GLshort *v);
GL_APICALL void glTexCoord3d (GLdouble s, GLdouble t, GLdouble r);
GL_APICALL void glTexCoord3dv (const GLdouble *v);
GL_APICALL void glTexCoord3f (GLfloat s, GLfloat t, GLfloat r);
GL_APICALL void glTexCoord3fv (const GLfloat *v);
GL_APICALL void glTexCoord3i (GLint s, GLint t, GLint r);
GL_APICALL void glTexCoord3iv (const GLint *v);
GL_APICALL void glTexCoord3s (GLshort s, GLshort t, GLshort r);
GL_APICALL void glTexCoord3sv (const GLshort *v);
GL_APICALL void glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
GL_APICALL void glTexCoord4dv (const GLdouble *v);
GL_APICALL void glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
GL_APICALL void glTexCoord4fv (const GLfloat *v);
GL_APICALL void glTexCoord4i (GLint s, GLint t, GLint r, GLint q);
GL_APICALL void glTexCoord4iv (const GLint *v);
GL_APICALL void glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q);
GL_APICALL void glTexCoord4sv (const GLshort *v);
GL_APICALL void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glTexCoordPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
GL_APICALL void glTexEnvf (GLenum target, GLenum pname, GLfloat param);
GL_APICALL void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params);
GL_APICALL void glTexEnvi (GLenum target, GLenum pname, GLint param);
GL_APICALL void glTexEnviv (GLenum target, GLenum pname, const GLint *params);
GL_APICALL void glTexGend (GLenum coord, GLenum pname, GLdouble param);
GL_APICALL void glTexGendv (GLenum coord, GLenum pname, const GLdouble *params);
GL_APICALL void glTexGenf (GLenum coord, GLenum pname, GLfloat param);
GL_APICALL void glTexGenfv (GLenum coord, GLenum pname, const GLfloat *params);
GL_APICALL void glTexGeni (GLenum coord, GLenum pname, GLint param);
GL_APICALL void glTexGeniv (GLenum coord, GLenum pname, const GLint *params);
GL_APICALL void glTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glTexImage3DEXT (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glTexParameterf (GLenum target, GLenum pname, GLfloat param);
GL_APICALL void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
GL_APICALL void glTexParameteri (GLenum target, GLenum pname, GLint param);
GL_APICALL void glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
GL_APICALL void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
GL_APICALL void glTrackMatrixNV (GLenum target, GLuint address, GLenum matrix, GLenum transform);
GL_APICALL void glTranslated (GLdouble x, GLdouble y, GLdouble z);
GL_APICALL void glTranslatef (GLfloat x, GLfloat y, GLfloat z);
GL_APICALL void glUnlockArraysEXT (void);
GL_APICALL GLboolean glValidBackBufferHintAutodesk (GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void glVertex2d (GLdouble x, GLdouble y);
GL_APICALL void glVertex2dv (const GLdouble *v);
GL_APICALL void glVertex2f (GLfloat x, GLfloat y);
GL_APICALL void glVertex2fv (const GLfloat *v);
GL_APICALL void glVertex2i (GLint x, GLint y);
GL_APICALL void glVertex2iv (const GLint *v);
GL_APICALL void glVertex2s (GLshort x, GLshort y);
GL_APICALL void glVertex2sv (const GLshort *v);
GL_APICALL void glVertex3d (GLdouble x, GLdouble y, GLdouble z);
GL_APICALL void glVertex3dv (const GLdouble *v);
GL_APICALL void glVertex3f (GLfloat x, GLfloat y, GLfloat z);
GL_APICALL void glVertex3fv (const GLfloat *v);
GL_APICALL void glVertex3i (GLint x, GLint y, GLint z);
GL_APICALL void glVertex3iv (const GLint *v);
GL_APICALL void glVertex3s (GLshort x, GLshort y, GLshort z);
GL_APICALL void glVertex3sv (const GLshort *v);
GL_APICALL void glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GL_APICALL void glVertex4dv (const GLdouble *v);
GL_APICALL void glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GL_APICALL void glVertex4fv (const GLfloat *v);
GL_APICALL void glVertex4i (GLint x, GLint y, GLint z, GLint w);
GL_APICALL void glVertex4iv (const GLint *v);
GL_APICALL void glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w);
GL_APICALL void glVertex4sv (const GLshort *v);
GL_APICALL void glVertexArrayRange (GLsizei size, const GLvoid *pointer);
GL_APICALL void glVertexAttrib1d (GLuint index, GLdouble x);
GL_APICALL void glVertexAttrib1dv (GLuint index, const GLdouble *v);
GL_APICALL void glVertexAttrib1f (GLuint index, GLfloat x);
GL_APICALL void glVertexAttrib1fv (GLuint index, const GLfloat *v);
GL_APICALL void glVertexAttrib1s (GLuint index, GLshort x);
GL_APICALL void glVertexAttrib1sv (GLuint index, const GLshort *v);
GL_APICALL void glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y);
GL_APICALL void glVertexAttrib2dv (GLuint index, const GLdouble *v);
GL_APICALL void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
GL_APICALL void glVertexAttrib2fv (GLuint index, const GLfloat *v);
GL_APICALL void glVertexAttrib2s (GLuint index, GLshort x, GLshort y);
GL_APICALL void glVertexAttrib2sv (GLuint index, const GLshort *v);
GL_APICALL void glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
GL_APICALL void glVertexAttrib3dv (GLuint index, const GLdouble *v);
GL_APICALL void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
GL_APICALL void glVertexAttrib3fv (GLuint index, const GLfloat *v);
GL_APICALL void glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z);
GL_APICALL void glVertexAttrib3sv (GLuint index, const GLshort *v);
GL_APICALL void glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GL_APICALL void glVertexAttrib4dv (GLuint index, const GLdouble *v);
GL_APICALL void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GL_APICALL void glVertexAttrib4fv (GLuint index, const GLfloat *v);
GL_APICALL void glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
GL_APICALL void glVertexAttrib4sv (GLuint index, const GLshort *v);
GL_APICALL void glVertexAttrib4ub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
GL_APICALL void glVertexAttrib4ubv (GLuint index, const GLubyte *v);
GL_APICALL void glVertexAttribPointer (GLuint index, GLint fsize, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glVertexAttribs1dv (GLuint index, GLsizei count, const GLdouble *v);
GL_APICALL void glVertexAttribs1fv (GLuint index, GLsizei count, const GLfloat *v);
GL_APICALL void glVertexAttribs1sv (GLuint index, GLsizei count, const GLshort *v);
GL_APICALL void glVertexAttribs2dv (GLuint index, GLsizei count, const GLdouble *v);
GL_APICALL void glVertexAttribs2fv (GLuint index, GLsizei count, const GLfloat *v);
GL_APICALL void glVertexAttribs2sv (GLuint index, GLsizei count, const GLshort *v);
GL_APICALL void glVertexAttribs3dv (GLuint index, GLsizei count, const GLdouble *v);
GL_APICALL void glVertexAttribs3fv (GLuint index, GLsizei count, const GLfloat *v);
GL_APICALL void glVertexAttribs3sv (GLuint index, GLsizei count, const GLshort *v);
GL_APICALL void glVertexAttribs4dv (GLuint index, GLsizei count, const GLdouble *v);
GL_APICALL void glVertexAttribs4fv (GLuint index, GLsizei count, const GLfloat *v);
GL_APICALL void glVertexAttribs4sv (GLuint index, GLsizei count, const GLshort *v);
GL_APICALL void glVertexAttribs4ubv (GLuint index, GLsizei count, const GLubyte *v);
GL_APICALL void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glVertexPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
GL_APICALL void glVertexWeightPointerEXT (GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_APICALL void glVertexWeightfEXT (GLfloat weight);
GL_APICALL void glVertexWeightfvEXT (const GLfloat *weight);
GL_APICALL void glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void glWindowBackBufferHintAutodesk (void);

#ifdef __DEFINED_GLAPI
# undef GLAPI
# undef __DEFINED_GLAPI
#endif

#ifdef __cplusplus
}
#endif

#endif /* __gl_h_ */
