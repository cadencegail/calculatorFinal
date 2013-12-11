#include <vector>
#include "stack.h"
using namespace std;

Stack::Stack(vector<char> myVec) {
  this->stackVec = myVec;
}


void push(char myChar) {
  stackVec.push_back(myChar);
}

char pop() {
  char save = stackVec[-1];
  stackVec.pop_back();
  return save;
}
