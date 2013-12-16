#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include "dropButton.h"
using namespace std;


DropButton::DropButton(int x, int y, int w, int h, char* label, Stack* Stack1, Fl_Box* myWindow1) : Fl_Button(x,y,w,h,label) {
  this->mainStack = Stack1;
  this->myWin = myWindow1;
}

float DropButton::dropLast() {
  float irrelevant = mainStack->pop();
  float newVal = mainStack->getLastValue();
  return newVal;
}

void DropButton::changeDisplay(float num) {
  myWin->copy_label(std::to_string(num).c_str());
}
