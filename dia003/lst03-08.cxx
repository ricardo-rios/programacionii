#include <iostream>

using namespace std; 


int main()
{  
   
   const int Sunday = 0;
   const int Monday = 1;
   const int Tuesday = 2;
   const int Wednesday = 3;
   const int Thursday = 4;
   const int Friday = 5;
   const int Saturday = 6;
   int choice;

   cout << "Enter a day (0-6): ";
   cin >> choice;
   if (choice == Sunday || choice == Saturday)
     cout << "\nYou’re already off on weekends!\n";
   else
     cout << "\nOkay, I’ll put in the vacation day.\n";

   
   return 0;
}
