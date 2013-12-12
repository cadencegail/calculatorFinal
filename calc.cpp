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
using namespace std;

vector<int> myVec;
Stack *myStack = new Stack(myVec);

void beepcb(Fl_Widget *w, void *) { //Fl_Widget is a parameter that contains a pointer to the button that was pressed
  NumButton *myButton = (NumButton *)w;
  int value = myButton->getValue();
  myStack->push(value);
}

int main(int argc, char *argv[]) {

  Fl_Window *window = new Fl_Window(420,470);
  window->color(FL_DARK_GREEN);
  Fl_Box *box = new Fl_Box(30,20,270,80,"Calculator!!!!!");
  box->labelfont(FL_HELVETICA_BOLD_ITALIC);
  box->labelsize(40);
  
  NumButton *b0 = new NumButton(105,350,60,60,"&none",0);
  b0->callback(beepcb,0);

  NumButton *b1 = new NumButton(30,110,60,60,"&none",1);
  b1->callback(beepcb,0);

  NumButton *b2 = new NumButton(105,110,60,60,"&none",2);
  b2->callback(beepcb,0);
 
  NumButton *b3 = new NumButton(180,110,60,60,"&none",3);
  b3->callback(beepcb,0);

  NumButton *b4 = new NumButton(30,190,60,60,"&none",4);
  b4->callback(beepcb,0);
  
  NumButton *b5 = new NumButton(105,190,60,60,"&none",5);
  b5->callback(beepcb,0);

  NumButton *b6 = new NumButton(180,190,60,60,"&none",6);
  b6->callback(beepcb,0);
 
  NumButton *b7 = new NumButton(30,270,60,60,"&none",7);
  b7->callback(beepcb,0);

  NumButton *b8 = new NumButton(105,270,60,60,"&none",8);
  b8->callback(beepcb,0);
 
  NumButton *b9 = new NumButton(180,270,60,60,"&none",9);
  b9->callback(beepcb,0);
  window->end();
  window->show(argc, argv);
  return Fl::run();
  
}
