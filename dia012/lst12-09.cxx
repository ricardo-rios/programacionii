#include <iostream>

using namespace std; 


int main()
{
   char buffer[80];
   cout << "Enter the string: ";
   cin.get(buffer, 79); 
   cout << "Here’s the buffer: " << buffer << endl;

   return 0;
}
