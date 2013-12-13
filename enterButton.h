#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <string>
#include "stack.h"

using namespace std;

class EnterButton : public Fl_Button {
 public:
  EnterButton(int,int,int,int,char*,Stack*,Stack*);
  float getPushValue();
  void pushToStack(float);

 private:
  Stack* mainStack;
  Stack* valueStack;
};
