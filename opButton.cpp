#include <string>
#include <cstdlib>
#include <cstdio>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include "numButton.h" 


OpButton::OpButton(int x, int y, int w, int h, char* label, char mySymbol) : Fl_Button(x,y,w,h,label) {
  this->symbol = mySymbol;
  this->copy_label(std::to_string(symbol).c_str()); 
}

char OpButton::getSymbol() {
  return symbol; 
}

