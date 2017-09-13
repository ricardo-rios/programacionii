#include <iostream>

using namespace std; 



// Listing 7.1
// Looping with goto
int main()
{
       int counter = 0;   // initialize counter
 loop: counter ++;  // top of the loop
       cout << "counter: " << counter << "\n";
   
       if (counter < 5)   // test the value
         goto loop;       // jump to the top
       cout << "Complete. Counter: " << counter << ".\n";
       return 0;
}
