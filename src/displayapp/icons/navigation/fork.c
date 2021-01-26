#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_FORK
#define LV_ATTRIBUTE_IMG_FORK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_FORK uint8_t fork_map[] = {
  0x04, 0x02, 0x04, 0xff, 	/*Color of index 0*/
  0xfc, 0xfe, 0xfc, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 
  0x7f, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xfe, 
  0x7f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xfe, 
  0x7f, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xfe, 
  0x7f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfe, 
  0x3f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfc, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x3f, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xfc, 
  0x3f, 0xf9, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xfc, 
  0x3f, 0xf8, 0x7f, 0xff, 0xff, 0xfe, 0x1f, 0xfc, 
  0x3f, 0xf0, 0x3f, 0xff, 0xff, 0xfc, 0x0f, 0xfc, 
  0x1f, 0xf0, 0x1f, 0xff, 0xff, 0xf8, 0x0f, 0xf8, 
  0x1f, 0xf0, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xf8, 
  0x1f, 0xe0, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xf8, 
  0x1f, 0xe0, 0x03, 0xff, 0xff, 0xc0, 0x07, 0xf8, 
  0x0f, 0xe0, 0x01, 0xff, 0xff, 0x80, 0x07, 0xf0, 
  0x0f, 0xe0, 0x00, 0xff, 0xff, 0x00, 0x07, 0xf0, 
  0x0f, 0xc0, 0x00, 0xff, 0xff, 0x00, 0x03, 0xf0, 
  0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t fork = {
      {
        LV_IMG_CF_INDEXED_1BIT,
        0,
        0,
        64,
        64
    },
    520,
fork_map,
};
