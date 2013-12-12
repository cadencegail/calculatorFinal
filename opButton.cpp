#include <string>
#include <cstdlib>
#include <cstdio>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include "opButton.h" 


OpButton::OpButton(int x, int y, int w, int h, char* label, string mySymbol) : Fl_Button(x,y,w,h,label) {
  this->symbol = mySymbol;
  //this->copy_label(symbol); 
}

string OpButton::getSymbol() {
  return symbol; 
}

