#include <iostream>

using namespace std; 

class Counter
{
   public:
      Counter();
      ~Counter(){}
      int GetItsVal()const { return itsVal; }
      void SetItsVal(int x) {itsVal = x; }

   private:
      int itsVal;
};

Counter::Counter():
   itsVal(0)
{}


int main()
{
   Counter i;
   cout << "The value of i is " << i.GetItsVal() << endl;

   return 0;
}