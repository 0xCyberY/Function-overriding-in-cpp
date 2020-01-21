#include <iostream>
using namespace std;
class BaseClass {
public:
   void disp(){
      cout<<"Function of Parent Class\n";
   }
};
class DerivedClass: public BaseClass{
public:
   void disp() {
      cout<<"Function of Child Class\n";
   }
};
int main() {
   DerivedClass obj = DerivedClass();
   obj.disp();
   BaseClass obj1;
   obj1.disp();
   return 0;
}
