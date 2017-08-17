#include <iostream>

using namespace std; 

typedef unsigned short int USHORT; // typedef defined 

int main()
{  
   

   USHORT Width = 5;
   USHORT Length;
   Length = 10;
   USHORT Area = Width * Length;
   cout << "Width:" << Width << "\n";
   cout << "Length: " << Length << endl;
   cout << "Area: " << Area <<endl;

   return 0;
}
