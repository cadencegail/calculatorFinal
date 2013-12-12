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
using namespace std;

vector<float> myVec;
Stack *myStack = new Stack(myVec);

void divide(Fl_Widget *w, void *) {
  OpButton *myButton = (OpButton *)w;
  string symbol = myButton->getSymbol();
  float int1 = myStack->pop();
  float int2 = myStack->pop();
  float result = int2 / int1;
  myStack->push(result);
  cout << int2 << " " << symbol << " " << int1 << " " << "=" << result << endl;

}

void beepcb(Fl_Widget *w, void *) { //Fl_Widget is a parameter that contains a pointer to the button that was pressed
  NumButton *myButton = (NumButton *)w;
  float value = myButton->getValue();
  myStack->push(value);
  cout << value << endl;
}


int main(int argc, char *argv[]) {

  Fl_Window *window = new Fl_Window(420,470);
  window->color(FL_DARK_GREEN);
  Fl_Box *box = new Fl_Box(30,20,270,80,"");
  box->labelfont(FL_HELVETICA_BOLD_ITALIC);
  box->labelsize(40);
  box->color(FL_WHITE);
  
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

  OpButton *o1 = new OpButton(250,110,60,60,"/","/");
  o1->callback(divide,0);

  window->end();
  window->show(argc, argv);
  return Fl::run();
  
}
