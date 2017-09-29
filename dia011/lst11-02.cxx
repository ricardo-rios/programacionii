#include <iostream>

using namespace std; 



enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };
class Mammal
{
public:
   // constructors
   Mammal():itsAge(2), itsWeight(5){}
   ~Mammal(){}
   //accessors
   int GetAge()const { return itsAge; }
   void SetAge(int age) { itsAge = age; }
   int GetWeight() const { return itsWeight; }
   void SetWeight(int weight) { itsWeight = weight; }
   //Other methods
   void Speak()const { cout << "Mammal sound!\n"; }
   void Sleep()const { cout << "shhh. I’m sleeping.\n"; }

protected:
   int itsAge;
   int itsWeight;
};


class Dog : public Mammal
{
public:
   // Constructors
   Dog():itsBreed(GOLDEN){}
  ~Dog(){}
   // Accessors
   BREED GetBreed() const { return itsBreed; }
   void SetBreed(BREED breed) { itsBreed = breed; }
   // Other methods
   void WagTail() const { cout << "Tail wagging...\n"; }
   void BegForFood() const { cout << "Begging for food...\n"; }
private:
   BREED itsBreed;
}; 


int main()
{
   Dog fido;
   fido.Speak();
   fido.WagTail();
   cout << "Fido is " << fido.GetAge() << " years old\n";


return 0;
}




