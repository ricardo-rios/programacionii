#include <iostream>
#include "fib.h"

using namespace std; 



int fib (int n)
{
   cout << "Processing fib(" << n << ")... ";
   if (n < 3 )
   {
     cout << "Return 1!\n";
     return (1);  
   }

   else
   {
     cout << "Call fib(" << n-2 << ") and fib(" << n-1 << ").\n";
     return( fib(n-2) + fib(n-1));
   }

}



