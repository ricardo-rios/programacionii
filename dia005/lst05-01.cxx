#include <iostream>

using namespace std; 


int Area(int length, int width); //function prototype

int main()
{  


   int lengthOfYard;
   int widthOfYard;
   int areaOfYard;

   cout << "\nHow wide is your yard? ";
   cin >> widthOfYard;
   cout << "\nHow long is your yard? ";
   cin >> lengthOfYard;

   areaOfYard= Area(lengthOfYard,widthOfYard);

   cout << "\nYour yard is ";
   cout << areaOfYard;
   cout << " square feet\n\n";
   
   return 0;
}


int Area(int yardLength, int yardWidth)
{ 
   return yardLength * yardWidth;
}

