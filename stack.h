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
  float getPushValue();
  float getLastValue();

 private:
  vector<float> stackVec;
  bool empty;

};
#endif
