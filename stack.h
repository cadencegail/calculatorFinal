#include <vector>
using namespace std;

class Stack {
  
 public:
  Stack(vector<char>);
  void push(char);
 
  char pop();

  vector<char> stackVec;

};
