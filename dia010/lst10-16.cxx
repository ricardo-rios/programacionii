#include <iostream>

using namespace std; 

// This code won't compile!

class Counter
{
   public:
      Counter(); 
      ~Counter(); 
      int GetItsVal()const {return itsVal; }
      void SetItsVal(int x) {itsVal = x; }
   
   private: 
      int itsVal; 

}; 

Counter::Counter():
itsVal(0)
{}


int main()
{
   int theShort = 5; 
   Counter theCtr = theShort; 
   cout << "theCtr: " << theCtr.GetItsVal() << endl;   
 
  
   return 0; 

}
