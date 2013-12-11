#include <string>
#include <cstdlib>
#include <cstdio>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include "numButton.h"

NumButton::NumButton(int x, int y, int w, int h, char *label, int myValue) : Fl_Button(x,y,w,h,label) {
  this->value = myValue;
  this->copy_label(std::to_string(value).c_str());

}


int NumButton::getValue() {
  return value;
}
