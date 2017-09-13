#include <iostream>

using namespace std; 


int fib(int position);


int main()
{

   int answer, position;
   cout << "Which position? ";
   cin >> position;
   cout << "\n";
   answer = fib(position);
   cout << answer << " is the ";
   cout << position << "th Fibonacci number.\n";




   return 0;

}
   


int fib(int n)
{
   int minusTwo=1, minusOne=1, answer=2;
   
   if (n < 3)
     return 1;
 
   for (n -= 3; n; n--)
   {
     minusTwo = minusOne; 
     minusOne = answer; 
     answer = minusOne + minusTwo; 

   }

 
   return answer;
}



