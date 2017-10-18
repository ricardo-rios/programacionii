#include <iostream>
#include <string>
#include <cstring>

using namespace std; 


int main()
{

   char *String1 = "No man is an island";
   char String2[80] = "";
   char String3[80] = "";      
   cout << "String1: " << String1 << endl;
   strcpy(String2,String1);
   cout << "String2: " << String2 << endl;
   strncpy (String3, String1, 5); // not entire string
   String3[5] = '\0'; // you need a null terminator

   cout << "String3 after strncpy: " << String3 << endl;
   cout << "String1 is " << strlen (String1) << 
           " bytes long, \n String2 is " <<
           strlen (String2) << " bytes long, \n and String3 is " <<
           strlen (String3) << " bytes long" << endl;

   strcat(String3, String1);
   cout << "String3 after strcat: " << String3 << endl;
   cout << "String1 is still " << strlen (String1) <<
           " bytes long, \n String2 is still " <<
           strlen (String2) <<
           " bytes long, \n and String3 is now " <<
           strlen (String3) << " bytes long" << endl;
   

   String1 = "Now is the time for all good people...";
   cout << "String1: " << String1 << endl;
   strcat(String3, String1);
   cout << "String3 after strcat2: " << String3 << endl;
   cout << "String1 is now " << strlen (String1) <<
           " bytes long, \n String2 is still " <<
           strlen (String2) << 
           " bytes long, \n and String3 is now " <<
           strlen (String3) << " bytes long" << endl;

   

   return 0;
}
