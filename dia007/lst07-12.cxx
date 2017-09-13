#include <iostream>

using namespace std; 


int main()
{

   int counter=0; // initialization
   int max;

   cout << "How many hellos?";
   cin >> max;

   for (;;) // a for loop that doesn’t end
   {
      if (counter < max) // test
      {
         cout << "Hello!\n";
         counter++; // increment
      }
      else
         break;
   }


   return 0;

}
   

