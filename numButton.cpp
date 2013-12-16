#include <string>
#include <cstdlib>
#include <cstdio>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include "numButton.h"

NumButton::NumButton(int x, int y, int w, int h, char *label, float myValue, Fl_Box* myWindow1) : Fl_Button(x,y,w,h,label) {
  this->value = myValue;
  this->myWin = myWindow1;
  //this->copy_label(std::to_string(value).c_str());

}

void NumButton::changeDisplay(float num) {
  myWin->copy_label(std::to_string(num).c_str());
}


float NumButton::getValue() {
  return value;
}
