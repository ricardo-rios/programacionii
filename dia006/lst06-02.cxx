#include <iostream>

using namespace std; 


class Cat
{
  public:
  // public accessors
     unsigned int GetAge();
     void SetAge(unsigned int Age);
     unsigned int GetWeight();
     void SetWeight(unsigned int Weight);
  
  // public member functions
  void Meow();
  // private member data
  
  private:
  unsigned int itsAge;
  unsigned int itsWeight;
};



