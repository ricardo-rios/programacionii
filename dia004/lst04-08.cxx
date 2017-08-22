#include <iostream>

using namespace std; 


int main()
{  
   
   int x;
   
   cout << "Enter a number less than 10 or greater than 100: ";
   cin >> x;
   cout << "\n";

   if (x >= 10)
     if (x > 100)
       cout << "More than 100, Thanks!\n";
   else
     // not the else intended!
     cout << "Less than 10, Thanks!\n";
 
    
   return 0;
}
