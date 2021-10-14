/*******************************************************************************
 * Size: 64 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef MONTSERRAT_BOLD
#define MONTSERRAT_BOLD 1
#endif

#if MONTSERRAT_BOLD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x0, 0x7, 0xf8, 0x0, 0x0, 0xe, 0x1, 0xc0,
    0x0, 0xc, 0x0, 0x1c, 0x0, 0x6, 0x0, 0x1,
    0x80, 0x3, 0x0, 0x0, 0x30, 0x1, 0x0, 0x0,
    0x2, 0x0, 0xc0, 0x0, 0x0, 0xc0, 0x20, 0x0,
    0x0, 0x10, 0x10, 0x0, 0x0, 0x2, 0x4, 0x0,
    0x0, 0x0, 0x82, 0x0, 0x0, 0x0, 0x10, 0x80,
    0x0, 0x0, 0x4, 0x40, 0x0, 0x0, 0x0, 0x90,
    0x0, 0x0, 0x0, 0x24, 0x0, 0x0, 0x0, 0x9,
    0x0, 0x0, 0x0, 0x2, 0x80, 0x0, 0x0, 0x0,
    0x60, 0x0, 0x0, 0x0, 0x18, 0x0, 0x0, 0x0,
    0x6, 0x0, 0x0, 0x0, 0x1, 0x80, 0x0, 0x0,
    0x0, 0x60, 0x0, 0x0, 0x0, 0x18, 0x0, 0x0,
    0x0, 0x6, 0x0, 0x0, 0x0, 0x1, 0x80, 0x0,
    0x0, 0x0, 0x60, 0x0, 0x0, 0x0, 0x18, 0x0,
    0x0, 0x0, 0x6, 0x0, 0x0, 0x0, 0x1, 0x40,
    0x0, 0x0, 0x0, 0x90, 0x0, 0x0, 0x0, 0x24,
    0x0, 0x0, 0x0, 0x9, 0x0, 0x0, 0x0, 0x2,
    0x20, 0x0, 0x0, 0x1, 0x8, 0x0, 0x0, 0x0,
    0x41, 0x0, 0x0, 0x0, 0x20, 0x40, 0x0, 0x0,
    0x8, 0x8, 0x0, 0x0, 0x4, 0x3, 0x0, 0x0,
    0x3, 0x0, 0x40, 0x0, 0x0, 0x80, 0x8, 0x0,
    0x0, 0xc0, 0x1, 0x80, 0x0, 0x60, 0x0, 0x30,
    0x0, 0x30, 0x0, 0x3, 0x80, 0x70, 0x0, 0x0,
    0x1f, 0xe0, 0x0,

    /* U+0031 "1" */
    0xff, 0xf8, 0x0, 0x40, 0x2, 0x0, 0x10, 0x0,
    0x80, 0x4, 0x0, 0x20, 0x1, 0x0, 0x8, 0x0,
    0x40, 0x2, 0x0, 0x10, 0x0, 0x80, 0x4, 0x0,
    0x20, 0x1, 0x0, 0x8, 0x0, 0x40, 0x2, 0x0,
    0x10, 0x0, 0x80, 0x4, 0x0, 0x20, 0x1, 0x0,
    0x8, 0x0, 0x40, 0x2, 0x0, 0x10, 0x0, 0x80,
    0x4, 0x0, 0x20, 0x1, 0x0, 0x8, 0x0, 0x40,
    0x2, 0x0, 0x10, 0x0, 0x80, 0x4, 0x0, 0x20,
    0x1, 0x0, 0x8, 0x0, 0x40, 0x2, 0x0, 0x10,

    /* U+0032 "2" */
    0x0, 0x7f, 0xe0, 0x0, 0x7, 0x80, 0x38, 0x0,
    0x30, 0x0, 0xc, 0x1, 0x80, 0x0, 0x4, 0x6,
    0x0, 0x0, 0x4, 0x18, 0x0, 0x0, 0xc, 0x0,
    0x0, 0x0, 0x8, 0x0, 0x0, 0x0, 0x10, 0x0,
    0x0, 0x0, 0x10, 0x0, 0x0, 0x0, 0x20, 0x0,
    0x0, 0x0, 0x40, 0x0, 0x0, 0x0, 0x80, 0x0,
    0x0, 0x1, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0,
    0x0, 0x4, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0,
    0x0, 0x20, 0x0, 0x0, 0x0, 0xc0, 0x0, 0x0,
    0x1, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0,
    0x18, 0x0, 0x0, 0x0, 0x60, 0x0, 0x0, 0x1,
    0x80, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x8,
    0x0, 0x0, 0x0, 0x20, 0x0, 0x0, 0x0, 0x80,
    0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x8, 0x0,
    0x0, 0x0, 0x20, 0x0, 0x0, 0x0, 0x80, 0x0,
    0x0, 0x2, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0,
    0x0, 0x20, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0,
    0x2, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0,
    0x20, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0, 0x2,
    0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0, 0x20,
    0x0, 0x0, 0x0, 0x80, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xf0,

    /* U+0033 "3" */
    0x7f, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0xc0,
    0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x10, 0x0,
    0x0, 0x0, 0xc0, 0x0, 0x0, 0x6, 0x0, 0x0,
    0x0, 0x30, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0,
    0x4, 0x0, 0x0, 0x0, 0x30, 0x0, 0x0, 0x1,
    0x80, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x20,
    0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0xc, 0x0,
    0x0, 0x0, 0x60, 0x0, 0x0, 0x3, 0x0, 0x0,
    0x0, 0x8, 0x0, 0x0, 0x0, 0x40, 0x0, 0x0,
    0x3, 0xfc, 0x0, 0x0, 0x0, 0xe, 0x0, 0x0,
    0x0, 0x6, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0,
    0x0, 0x8, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0,
    0x0, 0x60, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0,
    0x2, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0,
    0x10, 0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x1,
    0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x10,
    0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x2, 0x0,
    0x0, 0x0, 0xa, 0x0, 0x0, 0x0, 0x24, 0x0,
    0x0, 0x1, 0xc, 0x0, 0x0, 0x8, 0x18, 0x0,
    0x0, 0x40, 0x18, 0x0, 0x6, 0x0, 0x1e, 0x0,
    0xe0, 0x0, 0xf, 0xfc, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x0, 0x2,
    0x0, 0x0, 0x0, 0x0, 0x18, 0x0, 0x0, 0x0,
    0x0, 0xc0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0,
    0x0, 0x0, 0x10, 0x0, 0x0, 0x0, 0x0, 0x80,
    0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0,
    0x30, 0x0, 0x0, 0x0, 0x1, 0x80, 0x0, 0x0,
    0x0, 0xc, 0x0, 0x0, 0x0, 0x0, 0x20, 0x0,
    0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x8,
    0x0, 0x0, 0x0, 0x0, 0x60, 0x0, 0x0, 0x0,
    0x3, 0x0, 0x0, 0x0, 0x0, 0x18, 0x0, 0x0,
    0x0, 0x0, 0x40, 0x0, 0x0, 0x0, 0x2, 0x0,
    0x2, 0x0, 0x0, 0x10, 0x0, 0x8, 0x0, 0x0,
    0xc0, 0x0, 0x20, 0x0, 0x6, 0x0, 0x0, 0x80,
    0x0, 0x30, 0x0, 0x2, 0x0, 0x0, 0x80, 0x0,
    0x8, 0x0, 0x4, 0x0, 0x0, 0x20, 0x0, 0x20,
    0x0, 0x0, 0x80, 0x1, 0x80, 0x0, 0x2, 0x0,
    0xc, 0x0, 0x0, 0x8, 0x0, 0x60, 0x0, 0x0,
    0x20, 0x1, 0x0, 0x0, 0x0, 0x80, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x8, 0x0,
    0x0, 0x0, 0x0, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x80, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0,
    0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x80, 0x0, 0x0, 0x0, 0x2,
    0x0, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0,
    0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x80, 0x0,
    0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x8,
    0x0,

    /* U+0035 "5" */
    0x7, 0xff, 0xff, 0xf0, 0x10, 0x0, 0x0, 0x0,
    0x40, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x4,
    0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0, 0xc0,
    0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x8, 0x0,
    0x0, 0x0, 0x20, 0x0, 0x0, 0x0, 0x80, 0x0,
    0x0, 0x2, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0,
    0x0, 0x20, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0,
    0x6, 0x0, 0x0, 0x0, 0x18, 0x0, 0x0, 0x0,
    0x40, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x3c, 0x0, 0x0,
    0x0, 0xe, 0x0, 0x0, 0x0, 0xc, 0x0, 0x0,
    0x0, 0x8, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0,
    0x0, 0x60, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0,
    0x2, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0,
    0x10, 0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x1,
    0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x10,
    0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x2, 0x0,
    0x0, 0x0, 0x8, 0x0, 0x0, 0x0, 0x64, 0x0,
    0x0, 0x1, 0x8, 0x0, 0x0, 0x8, 0x18, 0x0,
    0x0, 0x40, 0x38, 0x0, 0x6, 0x0, 0x1e, 0x0,
    0xe0, 0x0, 0xf, 0xfc, 0x0,

    /* U+0036 "6" */
    0x0, 0x3, 0xff, 0x80, 0x0, 0x1c, 0x0, 0x70,
    0x0, 0x60, 0x0, 0x8, 0x0, 0x80, 0x0, 0x0,
    0x3, 0x0, 0x0, 0x0, 0x6, 0x0, 0x0, 0x0,
    0x4, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0,
    0x10, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0,
    0x20, 0x0, 0x0, 0x0, 0x20, 0x0, 0x0, 0x0,
    0x40, 0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x0,
    0x40, 0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x0,
    0x80, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0, 0x0,
    0x80, 0x7, 0xfc, 0x0, 0x80, 0x38, 0x3, 0x80,
    0x80, 0xc0, 0x0, 0x60, 0x83, 0x0, 0x0, 0x30,
    0x86, 0x0, 0x0, 0x8, 0x8c, 0x0, 0x0, 0xc,
    0x88, 0x0, 0x0, 0x4, 0x98, 0x0, 0x0, 0x2,
    0x90, 0x0, 0x0, 0x2, 0xb0, 0x0, 0x0, 0x1,
    0xe0, 0x0, 0x0, 0x1, 0x60, 0x0, 0x0, 0x1,
    0x60, 0x0, 0x0, 0x1, 0x60, 0x0, 0x0, 0x1,
    0x60, 0x0, 0x0, 0x1, 0x20, 0x0, 0x0, 0x1,
    0x30, 0x0, 0x0, 0x1, 0x10, 0x0, 0x0, 0x2,
    0x18, 0x0, 0x0, 0x2, 0x8, 0x0, 0x0, 0x4,
    0x4, 0x0, 0x0, 0xc, 0x2, 0x0, 0x0, 0x8,
    0x1, 0x0, 0x0, 0x30, 0x0, 0xc0, 0x0, 0x60,
    0x0, 0x38, 0x3, 0x80, 0x0, 0x7, 0xfc, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0xe,
    0x0, 0x0, 0x0, 0x14, 0x0, 0x0, 0x0, 0x68,
    0x0, 0x0, 0x0, 0x90, 0x0, 0x0, 0x3, 0x20,
    0x0, 0x0, 0x4, 0x40, 0x0, 0x0, 0x18, 0x80,
    0x0, 0x0, 0x21, 0x0, 0x0, 0x0, 0xc0, 0x0,
    0x0, 0x1, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0,
    0x0, 0xc, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0,
    0x0, 0x60, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0,
    0x3, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0,
    0x18, 0x0, 0x0, 0x0, 0x20, 0x0, 0x0, 0x0,
    0xc0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x6,
    0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0, 0x30,
    0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x0, 0x80,
    0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x4, 0x0,
    0x0, 0x0, 0x18, 0x0, 0x0, 0x0, 0x20, 0x0,
    0x0, 0x0, 0xc0, 0x0, 0x0, 0x1, 0x0, 0x0,
    0x0, 0x6, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0,
    0x0, 0x30, 0x0, 0x0, 0x0, 0x40, 0x0, 0x0,
    0x1, 0x80, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0,
    0xc, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0,
    0x20, 0x0, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x1,
    0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x1f, 0xf8, 0x0, 0x0, 0x78, 0x3, 0xc0,
    0x0, 0xc0, 0x0, 0x38, 0x0, 0xc0, 0x0, 0x6,
    0x0, 0x80, 0x0, 0x1, 0x80, 0xc0, 0x0, 0x0,
    0x60, 0x40, 0x0, 0x0, 0x10, 0x60, 0x0, 0x0,
    0xc, 0x20, 0x0, 0x0, 0x2, 0x10, 0x0, 0x0,
    0x1, 0x8, 0x0, 0x0, 0x0, 0x84, 0x0, 0x0,
    0x0, 0x42, 0x0, 0x0, 0x0, 0x21, 0x0, 0x0,
    0x0, 0x10, 0x40, 0x0, 0x0, 0x10, 0x30, 0x0,
    0x0, 0x18, 0x8, 0x0, 0x0, 0x8, 0x3, 0x0,
    0x0, 0x18, 0x0, 0xc0, 0x0, 0x18, 0x0, 0x1e,
    0x0, 0xf0, 0x0, 0x1, 0xff, 0xc0, 0x0, 0x7,
    0x0, 0x1c, 0x0, 0x1c, 0x0, 0x1, 0xc0, 0x18,
    0x0, 0x0, 0x30, 0x10, 0x0, 0x0, 0x4, 0x10,
    0x0, 0x0, 0x1, 0x18, 0x0, 0x0, 0x0, 0xc8,
    0x0, 0x0, 0x0, 0x2c, 0x0, 0x0, 0x0, 0x1c,
    0x0, 0x0, 0x0, 0x6, 0x0, 0x0, 0x0, 0x3,
    0x0, 0x0, 0x0, 0x1, 0x80, 0x0, 0x0, 0x0,
    0xc0, 0x0, 0x0, 0x0, 0x60, 0x0, 0x0, 0x0,
    0x28, 0x0, 0x0, 0x0, 0x24, 0x0, 0x0, 0x0,
    0x13, 0x0, 0x0, 0x0, 0x18, 0x80, 0x0, 0x0,
    0x8, 0x20, 0x0, 0x0, 0x8, 0xc, 0x0, 0x0,
    0x18, 0x3, 0x80, 0x0, 0x30, 0x0, 0x78, 0x0,
    0xe0, 0x0, 0x3, 0xff, 0x80, 0x0,

    /* U+0039 "9" */
    0x0, 0x3f, 0xe0, 0x0, 0x1, 0xc0, 0x1c, 0x0,
    0x6, 0x0, 0x3, 0x0, 0xc, 0x0, 0x0, 0x80,
    0x10, 0x0, 0x0, 0x40, 0x20, 0x0, 0x0, 0x20,
    0x60, 0x0, 0x0, 0x10, 0x40, 0x0, 0x0, 0x8,
    0x40, 0x0, 0x0, 0x8, 0x80, 0x0, 0x0, 0xc,
    0x80, 0x0, 0x0, 0x4, 0x80, 0x0, 0x0, 0x4,
    0x80, 0x0, 0x0, 0x6, 0x80, 0x0, 0x0, 0x6,
    0x80, 0x0, 0x0, 0x6, 0x80, 0x0, 0x0, 0xe,
    0x40, 0x0, 0x0, 0x9, 0x40, 0x0, 0x0, 0x9,
    0x60, 0x0, 0x0, 0x11, 0x20, 0x0, 0x0, 0x31,
    0x10, 0x0, 0x0, 0x61, 0xc, 0x0, 0x0, 0xc1,
    0x6, 0x0, 0x3, 0x1, 0x1, 0xc0, 0x1c, 0x1,
    0x0, 0x3f, 0xe0, 0x1, 0x0, 0x0, 0x0, 0x1,
    0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1,
    0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x2,
    0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x2,
    0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x4,
    0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0, 0x8,
    0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0, 0x30,
    0x0, 0x0, 0x0, 0x60, 0x0, 0x0, 0x0, 0xc0,
    0x0, 0x0, 0x1, 0x0, 0x18, 0x0, 0x6, 0x0,
    0xf, 0x0, 0x78, 0x0, 0x1, 0xff, 0x80, 0x0,

    /* U+003A ":" */
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 668, .box_w = 34, .box_h = 44, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 350, .box_w = 13, .box_h = 44, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 568, .box_w = 31, .box_h = 44, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 561, .box_w = 30, .box_h = 44, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 659, .box_w = 38, .box_h = 44, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 561, .box_w = 30, .box_h = 44, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 606, .box_w = 32, .box_h = 44, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1145, .adv_w = 584, .box_w = 31, .box_h = 44, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 639, .box_w = 33, .box_h = 44, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1498, .adv_w = 606, .box_w = 32, .box_h = 44, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1674, .adv_w = 186, .box_w = 3, .box_h = 33, .ofs_x = 4, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 0, 2, 3, 4, 5, 6,
    7, 0, 1, 8
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 2, 3, 4, 5, 6, 1,
    7, 8, 9, 10
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -10, 0, 0, -10, 0,
    0, 0, -5, 0, 0, 0, -31, 0,
    -5, 0, 0, 0, 0, 0, -5, -5,
    0, -10, -15, 0, 0, 0, 0, -26,
    -5, -20, 0, -5, -56, 10, -10, 5,
    0, 0, -5, -5, 0, -5, -15, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, -20, 10, 0, -10,
    -67, -20, 0, -20, 0, -20, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 8,
    .right_class_cnt     = 10,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t montserrat_bold = {
#else
lv_font_t montserrat_bold = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 44,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -5,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if MONTSERRAT_BOLD*/

