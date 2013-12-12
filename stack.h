#include <vector>
using namespace std;

class Stack {
  
 public:
  Stack(vector<float>);
  void push(float);
 
  float pop();

 private:
  vector<float> stackVec;

};
