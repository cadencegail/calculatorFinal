#include <vector>
#include "stack.h"
using namespace std;

Stack::Stack(vector<float> myVec) {
  this->stackVec = myVec;
}


void Stack::push(float myInt) {
  stackVec.push_back(myInt);
}

float Stack::pop() {
  float save = stackVec[stackVec.size()-1];
  stackVec.pop_back();
  return save;
}
