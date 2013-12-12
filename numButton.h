#include <FL/Fl.H>
#include <FL/Fl_Button.H>

class NumButton : public Fl_Button {
  
 public:
  NumButton(int,int,int,int,char*,float);

  float getValue();

 private:
  float value;
};
