#include <vector>
#include "stack.h"
using namespace std;

Stack::Stack(vector<int> myVec) {
  this->stackVec = myVec;
}


void Stack::push(int myInt) {
  stackVec.push_back(myInt);
}

int Stack::pop() {
  int save = stackVec[-1];
  stackVec.pop_back();
  return save;
}
