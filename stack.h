#include <vector>
using namespace std;
#ifndef STACK
#define STACK

class Stack {
  
 public:
  Stack(vector<float>);
  void push(float);
  bool isEmpty();
  int getSize();
  float pop();

 private:
  vector<float> stackVec;
  bool empty;

};
#endif
