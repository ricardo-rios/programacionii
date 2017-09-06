// Demonstrates declaration of a class and
// definition of class methods,

#include <iostream>

using namespace std; 




class Cat
{ 
  public:
     int GetAge();
     void SetAge (int age);
     void Meow();

  private: 
     int itsAge;
};


// GetAge, Public accessor function
// returns value of itsAge member
int Cat::GetAge()
{
  return itsAge;
}
// definition of SetAge, public
// accessor function
// sets itsAge member
void Cat::SetAge(int age)
{
// set member variable itsAge to
// value passed in by parameter age
  itsAge = age;
}


// definition of Meow method
// returns: void
// parameters: None
// action: Prints "meow" to screen
void Cat::Meow()
{
  cout << "Meow.\n";
}
// create a cat, set its age, have it
// meow, tell us its age, then meow again.
int main()
{
  Cat Frisky;
  Frisky.SetAge(5);
  Frisky.Meow();
  cout << "Frisky is a cat who is ";
  cout << Frisky.GetAge() << " years old.\n";
  Frisky.Meow();
  return 0;
}

