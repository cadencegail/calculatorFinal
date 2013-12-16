#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include "numButton.h"
#include "stack.h"
#include "opButton.h"
#include "enterButton.h"
#include "dropButton.h"
#include <stdio.h>     
#include <math.h> 

using namespace std;

vector<float> myVec;
vector<float> numVec;
Stack *myStack = new Stack(myVec);
Stack *numStack = new Stack(numVec);

void divide(Fl_Widget *w, void *) {
  OpButton *myButton = (OpButton *)w;
  if(!numStack->isEmpty()) {
    float f = numStack->getPushValue();
    myStack->push(f);
  }
  string symbol = myButton->getSymbol();
  float int1 = myStack->pop();
  float int2 = myStack->pop();
  float result = int2 / int1;
  myStack->push(result);
  myButton->changeDisplay(result);
}

void multiply(Fl_Widget *w, void *) {
  OpButton *myButton = (OpButton *)w;
  if(!numStack->isEmpty()) {
    float f = numStack->getPushValue();
    myStack->push(f);
  }
  string symbol = myButton->getSymbol();
  float int1 = myStack->pop();
  float int2 = myStack->pop();
  float result = int2 * int1;
  myStack->push(result);
  myButton->changeDisplay(result);
}

void add(Fl_Widget *w, void *) {
  OpButton *myButton = (OpButton *)w;
  if(!numStack->isEmpty()) {
    float f = numStack->getPushValue();
    myStack->push(f);
  }
  string symbol = myButton->getSymbol();
  float int1 = myStack->pop();
  float int2 = myStack->pop();
  float result = int2 + int1;
  myStack->push(result);
  myButton->changeDisplay(result);
}


void subtract(Fl_Widget *w, void *) {
  OpButton *myButton = (OpButton *)w;
  if(!numStack->isEmpty()) {
    float f = numStack->getPushValue();
    myStack->push(f);
  }
  string symbol = myButton->getSymbol();
  float int1 = myStack->pop();
  float int2 = myStack->pop();
  float result = int2 - int1;
  myStack->push(result);
  myButton->changeDisplay(result);
}

void to(Fl_Widget *w, void *) {
  OpButton *myButton = (OpButton *)w;
  if(!numStack->isEmpty()) {
  float f = numStack->getPushValue();
  myStack->push(f);
  }
  string symbol = myButton->getSymbol();
  float int1 = myStack->pop();
  float int2 = myStack->pop();
  float result = 1;
  for (int r = 0; r < int1; r++) {
    result = result*int2; 
  }
  myStack->push(result);
  myButton->changeDisplay(result);
}

void sqrt(Fl_Widget *w, void *) {
  OpButton *myButton = (OpButton *)w;
  if(!numStack->isEmpty()) {
    float f = numStack->getPushValue();
    myStack->push(f);
  }
  string symbol = myButton->getSymbol();
  float int1 = myStack->pop();
  float result = sqrt (int1);
  myStack->push(result);
  myButton->changeDisplay(result);
}

void changeSign(Fl_Widget *w, void *) {
  OpButton *myButton = (OpButton *)w;
  if(!numStack->isEmpty()) {
    float f = numStack->getPushValue();
    myStack->push(f);
  }
  string symbol = myButton->getSymbol();
  float int1 = myStack->pop();
  float result =  -1 * int1;
  myStack->push(result);
  //if statement that says, if there is something in window1 let int = thatNum, then window2->copy_label(thatNum), window1->copy_label(result)  
  myButton->changeDisplay(result);
}

void number(Fl_Widget *w, void *) {
  NumButton *myButton = (NumButton *)w;
  float value = myButton->getValue();
  numStack->push(value);
  myButton->changeDisplay(value);
}

void enter(Fl_Widget *w, void *) {
  EnterButton *myButton = (EnterButton *)w;
  if(!numStack->isEmpty()) {
    float f = numStack->getPushValue();
    myStack->push(f);
    myButton->changeDisplay(f);
  }  
}

void drop(Fl_Widget *w, void *) {
  DropButton *myButton = (DropButton *)w;
  float f = myButton->dropLast();
  myButton->changeDisplay(f);
}

int main(int argc, char *argv[]) {

  Fl_Window *window = new Fl_Window(320,340);
  window->color(FL_DARK_GREEN);

  //very bottom of windows
  Fl_Box *window1 = new Fl_Box(30,90,260,20," ");
  window1->box(FL_DOWN_BOX);
  window1->labelfont(FL_HELVETICA_BOLD_ITALIC);
  window1->labelsize(18);
  window1->color(FL_WHITE);
  
  //next window up... 
  Fl_Box *window2 = new Fl_Box(30,70,260,20," ");
  window2->box(FL_DOWN_BOX);
  window2->labelfont(FL_HELVETICA_BOLD_ITALIC);
  window2->labelsize(18);
  window2->color(FL_WHITE);

  Fl_Box *window3 = new Fl_Box(30,50,260,20," ");
  window3->box(FL_DOWN_BOX);
  window3->labelfont(FL_HELVETICA_BOLD_ITALIC);
  window3->labelsize(18);
  window3->color(FL_WHITE);

  Fl_Box *window4 = new Fl_Box(30,30,260,20," ");
  window4->box(FL_DOWN_BOX);
  window4->labelfont(FL_HELVETICA_BOLD_ITALIC);
  window4->labelsize(18);
  window4->color(FL_WHITE);

  NumButton *b1 = new NumButton(30,170,50,30,"1",1,window1);
  b1->callback(number,0);

  NumButton *b2 = new NumButton(100,170,50,30,"2",2,window1);
  b2->callback(number,0);
 
  NumButton *b3 = new NumButton(170,170,50,30,"3",3,window1);
  b3->callback(number,0);

  NumButton *b4 = new NumButton(30,210,50,30,"4",4,window1);
  b4->callback(number,0);
  
  NumButton *b5 = new NumButton(100,210,50,30,"5",5,window1);
  b5->callback(number,0);

  NumButton *b6 = new NumButton(170,210,50,30,"6",6,window1);
  b6->callback(number,0);
 
  NumButton *b7 = new NumButton(30,250,50,30,"7",7,window1);
  b7->callback(number,0);

  NumButton *b8 = new NumButton(100,250,50,30,"8",8,window1);
  b8->callback(number,0);
 
  NumButton *b9 = new NumButton(170,250,50,30,"9",9,window1);
  b9->callback(number,0);

  NumButton *b0 = new NumButton(30,290,120,30,"0",0,window1);
  b0->callback(number,0);

  OpButton *o1 = new OpButton(240,170,50,30,"/","/", window1);
  o1->callback(divide,0);

  OpButton *o2= new OpButton(240,130,50,30,"*","*", window1);
  o2->callback(multiply,0);

  OpButton *o3 = new OpButton(240,210,50,30,"+","+", window1);
  o3->callback(add,0);

  OpButton *o4 = new OpButton(240,250,50,30,"-","-", window1);
  o4->callback(subtract,0);

  OpButton *o5 = new OpButton(170,130,50,30,"^","^", window1);
  o5->callback(to,0);

  OpButton *o6 = new OpButton(100,130,50,30,"sqrt","sqrt",window1);
  o6->callback(sqrt,0);

  OpButton *o7 = new OpButton(170,290,50,30,"+/-","+/-",window1);
  o7->callback(changeSign,0);

  EnterButton *e1 = new EnterButton(240,290,50,30,"enter", myStack, numStack, window1);
  e1->callback(enter,0);

  DropButton *d1 = new DropButton(30,130,50,30,"drop", myStack,window1);
  d1->callback(drop,0);
  

  window->end();
  window->show(argc, argv);
  return Fl::run();
  
}
