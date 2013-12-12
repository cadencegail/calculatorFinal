#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <string>

using namespace std;

class OpButton : public Fl_Button {
 public: 
  OpButton(int, int, int, int, char*, string);
  
  string getSymbol(); 

 private: 
  string symbol; 

};
