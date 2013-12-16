#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <string>
#include <FL/Fl_Box.H>

class NumButton : public Fl_Button {
  
 public:
  NumButton(int,int,int,int,char*,float,Fl_Box*);
  void changeDisplay(float);

  float getValue();

 private:
  float value;
  Fl_Box* myWin;
};
