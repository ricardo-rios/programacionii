#include <iostream>

using namespace std; 


class CAT
{
public:
   CAT() { itsAge = 1; itsWeight=5; }
   ~CAT();
   // destructor
   int GetAge() const { return itsAge; }
   int GetWeight() const { return itsWeight; }
   void SetAge(int age) { itsAge = age; }

private:
   int itsAge;
   int itsWeight;
};

CAT :: ~CAT()
{
   // cout << "Destructor called!\n";
}


int main()
{

   CAT * Family = new CAT[500];
   int i;

   for (i = 0; i < 500; i++)
   {  
      Family[i].SetAge(2*i +1);
   }


   for (i = 0; i < 500; i++)
   {
      cout << "Cat #" << i+1 << ": ";
      cout << Family[i].GetAge() << endl;
   }

   delete [] Family;

   return 0;
}
