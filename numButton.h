#include <FL/Fl.H>
#include <FL/Fl_Button.H>

class NumButton : public Fl_Button {
  
 public:
  NumButton(int,int,int,int,char*,int);

  int getValue();

 private:
  int value;
};
