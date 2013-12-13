#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <string>
#include <FL/Fl_Box.H>

using namespace std;

class OpButton : public Fl_Button {
 public: 
  OpButton(int, int, int, int, char*, string, Fl_Box*);
  void changeDisplay(float);
  string getSymbol(); 

 private: 
  string symbol; 
  Fl_Box* myWin; 

};
