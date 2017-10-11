#include <iostream>

using namespace std; 

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
public:
   // constructors
   Mammal() { cout << "Mammal constructor...\n"; }
   ~Mammal() { cout << "Mammal destructor...\n"; } 


   //accessors
   int GetAge() const { return itsAge; }
   void SetAge(int age) { itsAge = age; }
   int GetWeight() const { return itsWeight; }
   void SetWeight(int weight) { itsWeight = weight; }


   //Other methods
   void Speak() const { cout << "Mammal sound!\n"; }
   void Sleep() const { cout << "shhh. I’m sleeping.\n"; }


protected:
   int itsAge;
   int itsWeight;

};


class Dog : public Mammal
{
public:

   // Constructors
   Dog(){ cout << "Dog constructor...\n"; }
   ~Dog(){ cout << "Dog destructor...\n"; }

   // Other methods
   void WagTail() const { cout << "Tail wagging...\n"; }
   void BegForFood() const { cout << "Begging for food...\n"; }
   void Speak() const { cout << "Woof!\n"; }

private:
   BREED itsBreed;
};

int main()
{
   Mammal bigAnimal;
   Dog fido;
   bigAnimal.Speak();
   fido.Speak();
   return 0;
}
