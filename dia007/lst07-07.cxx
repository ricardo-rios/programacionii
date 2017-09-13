#include <iostream>

using namespace std; 


int main()
{
   int counter;
   cout << "How many hellos?: ";
   cin >> counter;

   do 
   {
       cout << "Hello!\n";
       counter--;

   }   while (counter > 0); 

   cout << "Counter is OutPut: " << counter << endl;
   return 0;
}
