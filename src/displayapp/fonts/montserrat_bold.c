/*******************************************************************************
 * Size: 20 px
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
    0xf, 0x3, 0xfc, 0x79, 0xe7, 0xe, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0x70,
    0xe7, 0xe, 0x3f, 0xc1, 0xf8,

    /* U+0031 "1" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x70,

    /* U+0032 "2" */
    0x1f, 0x87, 0xfc, 0x71, 0xe0, 0xe, 0x0, 0xe0,
    0xe, 0x1, 0xe0, 0x3c, 0x7, 0x80, 0xf0, 0x1e,
    0x3, 0xc0, 0x7f, 0xf7, 0xff,

    /* U+0033 "3" */
    0x7f, 0xef, 0xfc, 0xf, 0x1, 0xc0, 0x70, 0x1e,
    0x3, 0xf0, 0x7f, 0x1, 0xe0, 0x1c, 0x3, 0xb0,
    0xf7, 0xfc, 0x7e, 0x0,

    /* U+0034 "4" */
    0x1, 0xc0, 0x1c, 0x1, 0xe0, 0x1e, 0x0, 0xe0,
    0xf, 0x0, 0xf3, 0x8f, 0x1c, 0x70, 0xe7, 0xff,
    0xff, 0xfe, 0x1, 0xc0, 0xe, 0x0, 0x70,

    /* U+0035 "5" */
    0x3f, 0xc7, 0xf8, 0xe0, 0x38, 0x7, 0x0, 0xff,
    0x1f, 0xf0, 0xf, 0x0, 0xe0, 0x1d, 0x3, 0xb0,
    0xef, 0xfc, 0x7e, 0x0,

    /* U+0036 "6" */
    0xf, 0xc7, 0xf9, 0xe1, 0x38, 0xe, 0x1, 0xdf,
    0x3f, 0xf7, 0x8f, 0xe0, 0xfc, 0x1f, 0x83, 0xb8,
    0xf3, 0xfc, 0x3e, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0x87, 0xf0, 0xe0, 0x3c, 0x7,
    0x0, 0xe0, 0x3c, 0x7, 0x1, 0xe0, 0x38, 0x7,
    0x1, 0xe0, 0x38, 0x0,

    /* U+0038 "8" */
    0x1f, 0x83, 0xfc, 0x70, 0xe7, 0xe, 0x70, 0xe3,
    0xfc, 0x7f, 0xef, 0xf, 0xe0, 0x7e, 0x7, 0xe0,
    0x7f, 0xe, 0x7f, 0xe1, 0xf8,

    /* U+0039 "9" */
    0x1f, 0xf, 0xf3, 0xc7, 0x70, 0x6e, 0xf, 0xe3,
    0xdf, 0xf9, 0xf7, 0x0, 0xe0, 0x1c, 0x7, 0x21,
    0xe7, 0xf8, 0xfc, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 217, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 125, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 189, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 189, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 220, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 190, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 204, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 198, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 211, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 204, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
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
    7, 0, 1
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 2, 3, 4, 5, 6, 1,
    7, 8, 9
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, -2, -2, -3, 0, 0, -1, 0,
    0, -1, 0, 0, 0, -3, 0, -1,
    0, 0, 0, 0, -2, -2, 0, -3,
    -3, 0, 0, 0, -8, -1, -2, 0,
    -1, -13, 3, -1, 0, 0, -2, -2,
    0, -2, -4, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, -6, 3,
    0, -2, -21, -5, 0, -5, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 7,
    .right_class_cnt     = 9,
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
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if MONTSERRAT_BOLD*/

