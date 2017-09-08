#include <iostream>

using namespace std; 



// Demonstrates compiler errors
// this will not compile!!!
// for cout
class Cat
{
 public:
    Cat(int initialAge);
    ~Cat();
    int GetAge() const;
    void SetAge (int age);
    void Meow();

 private:
    int itsAge;
};


// const accessor function
// constructor of Cat,
Cat::Cat(int initialAge)
{
   itsAge = initialAge;
   cout << "Cat Constructor\n";
}

Cat::~Cat() // destructor, takes no action
{
   cout << "Cat Destructor\n";
}


// GetAge, const function
// but we violate const!
int Cat::GetAge() const
{
   return (itsAge++); // violates const!

}

// definition of SetAge, public
// accessor function
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

// demonstrate various violations of the
// interface, and resulting compiler errors
int main()
{
    Cat Frisky;
    // doesn’t match declaration
    Frisky.Meow();
    Frisky.Bark();
    // No, silly, cats can’t bark.
    Frisky.itsAge = 7; // itsAge is private
    return 0;
}
