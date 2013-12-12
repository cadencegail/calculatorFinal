#include <FL/Fl.H>
#include <FL/Fl_Button.H>

//+, -, /, *, neg, 
class OpButton : public Fl_Button {
 public: 
  OpButton(int, int, int, int, char*, char) 

    int getSymbol(); 

 private: 
  char symbol; 

};
