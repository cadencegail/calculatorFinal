#include <vector>
#include "stack.h"
using namespace std;

Stack::Stack(vector<float> myVec) {
  this->stackVec = myVec;
}


void Stack::push(float myFloat) {
  stackVec.push_back(myFloat);
}

int Stack::getSize() {
  int i= stackVec.size();
  return i;
}
  
bool Stack::isEmpty() {
  if(stackVec.size() == 0) {
    empty = true;
  }
  else {
    empty = false;
  }
  return empty;
}

float Stack::pop() {
  float save = stackVec[stackVec.size()-1];
  stackVec.pop_back();
  return save;
}

float Stack::getPushValue() {
  string numString;
  while(stackVec.size()>0) {
    float save = stackVec[stackVec.size()-1];
    stackVec.pop_back();
    stringstream ss;
    ss << save;
    string floatstr = ss.str();
    numString = floatstr + numString;
  }
  cout << numString << endl;
  stringstream sstrm(numString);
  float i;
  sstrm >> i;
  return i;
}
