#include <lvgl.h>
#include "lv_conf.h"
#include <WT32settings.h>
//#include <Buttons_demo.h>

#include<Get_Started.h>
// место для инклуда нового Демо.h

void setup() {
  Serial.begin(115200); /* prepare for possible serial debug */
  DisplayInit();
  // вызов функции нового демо из Демо.h
  //lv_button_demo();
  lv_example_get_started_1();
  //lv_example_get_started_2();
  //lv_example_get_started_3();
}

void loop() {
  lv_timer_handler(); /* let the GUI do its work */
  delay(5);
}