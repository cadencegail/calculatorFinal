#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <string>
#include "stack.h"
#include <FL/Fl_Box.H>

using namespace std;

class DropButton : public Fl_Button {
 public:
  DropButton(int,int,int,int,char*,Stack*, Fl_Box*);

  float dropLast();
  void changeDisplay(float);

 private:
  Stack* mainStack;
  Fl_Box* myWin;
};
