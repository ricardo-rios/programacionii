#include <iostream>

using namespace std; 



class Cat
{
 public:
      Cat (int initialAge);
      ~Cat();

      int GetAge() const { return itsAge;}  // inline 
      void SetAge (int age) { itsAge = age;} // inline 
      void Meow() const { cout << "Meow.\n";} // inline 

 private:
      int itsAge;
};
