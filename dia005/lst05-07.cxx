#include <iostream>

using namespace std; 


int VolumeCube(int length, int width = 25, int height = 1);

int main()
{  
   

   int length = 100;
   int width = 50;
   int height = 2;
   int volume;

   volume = VolumeCube(length, width, height);
   cout << "First volume equals: " << volume << "\n";
   volume = VolumeCube(length, width);
   cout << "Second time volume equals: " << volume << "\n";
   volume = VolumeCube(length);
   cout << "Third time volume equals: " << volume << "\n";

   
   return 0; 

}




// int VolumeCube(int length, int width, int height) produces a compilation error 
int VolumeCube(int length, int width, int height)
{
   return (length * width * height);
}
