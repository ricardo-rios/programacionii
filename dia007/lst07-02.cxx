#include <iostream>

using namespace std; 


int main()
{
   int counter = 0;   // initialize the condition

   while(counter < 5) // test condition still true
   {
       counter++; // body of the loop
       cout << "counter: " << counter << "\n";
   }

   cout << "Complete. Counter: " << counter << ".\n";
   return 0;
}