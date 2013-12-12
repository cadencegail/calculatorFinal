#include <vector>
using namespace std;

class Stack {
  
 public:
  Stack(vector<int>);
  void push(int);
 
  int pop();

 private:
  vector<int> stackVec;

};
