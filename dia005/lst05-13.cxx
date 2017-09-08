#include <iostream>
#include "fib.h"

using namespace std; 


int main()
{  
   
   int n, answer;
   cout << "Enter number to find: ";
   cin >> n;
   cout << "\n\n";
   answer = fib(n);
   cout << answer << " is the " << n << "th Fibonacci number\n";
   cout << "Hola Mundo\n";    
   
   return 0; 
}




