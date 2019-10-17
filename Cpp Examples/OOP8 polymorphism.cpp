#include <iostream>
using namespace std;
class Base {
public:
  virtual Base() {}   //constructor cannot be virtual (compiling error)
};
int main() {
   return 0;
}

//-----------------------------------------------------

#include <iostream>
using namespace std;
class Base {
public:
  virtual ~Base() {}   //descructor can be virtual. (compiled)
};
int main() {
   return 0;
}