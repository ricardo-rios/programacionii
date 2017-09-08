// Demonstrates inline functions
// and inclusion of header files


#include "cat.hxx" // be sure to include the header files!


Cat::Cat(int initialAge) // 
{
   itsAge = initialAge;
}
Cat::~Cat()
{
}
//constructor
//destructor, takes no action
// Create a cat, set its age, have it
// meow, tell us its age, then meow again.
int main()
{
   Cat Frisky(5);
   Frisky.Meow();
   cout << "Frisky is a cat who is " ;
   cout << Frisky.GetAge() << " years old.\n";
   Frisky.Meow();
   Frisky.SetAge(7);
   cout << "Now Frisky is " ;
   cout << Frisky.GetAge() << " years old.\n";

   return 0;
}



