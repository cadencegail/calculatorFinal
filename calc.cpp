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
  myButton->changeDisplay(result);
}

void beepcb(Fl_Widget *w, void *) { //Fl_Widget is a parameter that contains a pointer to the button that was pressed
  NumButton *myButton = (NumButton *)w;
  float value = myButton->getValue();
  numStack->push(value);
  cout << value << endl;
}

void enter(Fl_Widget *w, void *) {
  EnterButton *myButton = (EnterButton *)w;
  if(!numStack->isEmpty()) {
    float f = numStack->getPushValue();
    myStack->push(f);
    myButton->changeDisplay(f);
  }  
}

int main(int argc, char *argv[]) {

  Fl_Window *window = new Fl_Window(550,500);
  window->color(FL_DARK_GREEN);
  Fl_Box *window1 = new Fl_Box(30,20,350, 45, "aslfdaliesj");
  window1->box(FL_FLAT_BOX);
  window1->labelfont(FL_HELVETICA_BOLD_ITALIC);
  window1->labelsize(40);
  window1->color(FL_WHITE);
  
  NumButton *b0 = new NumButton(105,350,60,60,"0",0);
  b0->callback(beepcb,0);

  NumButton *b1 = new NumButton(30,110,60,60,"1",1);
  b1->callback(beepcb,0);

  NumButton *b2 = new NumButton(105,110,60,60,"2",2);
  b2->callback(beepcb,0);
 
  NumButton *b3 = new NumButton(180,110,60,60,"3",3);
  b3->callback(beepcb,0);

  NumButton *b4 = new NumButton(30,190,60,60,"4",4);
  b4->callback(beepcb,0);
  
  NumButton *b5 = new NumButton(105,190,60,60,"5",5);
  b5->callback(beepcb,0);

  NumButton *b6 = new NumButton(180,190,60,60,"6",6);
  b6->callback(beepcb,0);
 
  NumButton *b7 = new NumButton(30,270,60,60,"7",7);
  b7->callback(beepcb,0);

  NumButton *b8 = new NumButton(105,270,60,60,"8",8);
  b8->callback(beepcb,0);
 
  NumButton *b9 = new NumButton(180,270,60,60,"9",9);
  b9->callback(beepcb,0);

  OpButton *o1 = new OpButton(270,110,40,40,"/","/", window1);
  o1->callback(divide,0);

  OpButton *o2= new OpButton(270,170,40,40,"*","*", window1);
  o2->callback(multiply,0);

  OpButton *o3 = new OpButton(270,230,40,40,"+","+", window1);
  o3->callback(add,0);

  OpButton *o4 = new OpButton(270,290,40,40,"-","-", window1);
  o4->callback(subtract,0);

  OpButton *o5 = new OpButton(340,110,40,40,"^","^", window1);
  o5->callback(to,0);

  OpButton *o6 = new OpButton(340,170,40,40,"sqrt","sqrt",window1);
  o6->callback(sqrt,0);

  OpButton *o7 = new OpButton(340,230,40,40,"+/-","+/-",window1);
  o7->callback(changeSign,0);

  EnterButton *e1 = new EnterButton(340,290,40,40,"enter", myStack, numStack, window1);
  e1->callback(enter,0);
  

  window->end();
  window->show(argc, argv);
  return Fl::run();
  
}
