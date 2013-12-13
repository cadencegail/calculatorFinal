#include <string>
#include <cstdlib>
#include <cstdio>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

#include "opButton.h" 


OpButton::OpButton(int x, int y, int w, int h, char* label, string mySymbol, Fl_Box* myWindow1) : Fl_Button(x,y,w,h,label) {
  this->symbol = mySymbol;
  this->myWin = myWindow1;
  //this->copy_label(symbol); 
}

string OpButton::getSymbol() {
  return symbol; 
}

void OpButton::changeDisplay(float num) {
  myWin->copy_label(std::to_string(num).c_str());
}
