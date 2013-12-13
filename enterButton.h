#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <string>
#include "stack.h"
#include <FL/Fl_Box.H>

using namespace std;

class EnterButton : public Fl_Button {
 public:
  EnterButton(int,int,int,int,char*,Stack*,Stack*, Fl_Box*);
  float getPushValue();
  void pushToStack(float);
  void changeDisplay(float);

 private:
  Stack* mainStack;
  Stack* valueStack;
  Fl_Box* myWin;
};
