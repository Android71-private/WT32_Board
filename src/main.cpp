#include <Arduino.h>
#include <lvgl.h>
#include "lv_conf.h"
#include <WT32settings.h>
//#include <Buttons_demo.h>

#include <ScrollBar.h>
// место для инклуда нового Демо.h

void setup() {
  Serial.begin(115200); /* prepare for possible serial debug */
  DisplayInit();
  // вызов функции нового демо из Демо.h
  
  //lv_button_demo();
  //lv_example_scroll_4();
  lv_example_scroll_6();
  
}

void loop() {
  lv_timer_handler(); /* let the GUI do its work */
  delay(5);
}