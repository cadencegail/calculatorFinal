#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include "enterButton.h"
using namespace std;

EnterButton::EnterButton(int x, int y, int w, int h, char* label, Stack* Stack1, Stack* Stack2) : Fl_Button(x,y,w,h,label) {
  this->mainStack = Stack1;
  this->valueStack = Stack2;
}

float EnterButton::getPushValue() {
  string numString="";
  while(!valueStack->isEmpty()) {
    float save = valueStack->pop();
    stringstream ss;
    ss << save;
    string floatstr = ss.str();
    numString = floatstr + numString;
  }
  cout << numString << endl;
  stringstream sstrm(numString);
  float i;
  sstrm >> i;////NEED TO CONVERT THIS TO A FLOAT CORRECTLY!!!
  return i;
}

void EnterButton::pushToStack(float myFloat) {
  mainStack->push(myFloat);
}
