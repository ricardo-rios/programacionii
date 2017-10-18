#include <iostream>

using namespace std; 


int main()
{
// sentinels
long sentinelOne[3];
long TargetArray[25]; // array to fill
long sentinelTwo[3];
int i;

for (i=0; i<3; i++)
   sentinelOne[i] = sentinelTwo[i] = 0;

for (i=0; i<25; i++)
   TargetArray[i] = 0;

cout << "Test 1: \n"; // test current values (should be 0)
cout << "TargetArray[0]: " << TargetArray[0] << "\n";
cout << "TargetArray[24]: " << TargetArray[24] << "\n\n";


for (i = 0; i<3; i++)
{
   cout << "sentinelOne[" << i << "]: ";
   cout << sentinelOne[i] << "\n";
   cout << "sentinelTwo[" << i << "]: ";
   cout << sentinelTwo[i]<< "\n";
}

cout << "\nAssigning...";
for (i = 0; i<=25; i++)
   TargetArray[i] = 20;

cout << "\nTest 2: \n";
cout << "TargetArray[0]: " << TargetArray[0] << "\n";
cout << "TargetArray[24]: " << TargetArray[24] << "\n";
cout << "TargetArray[25]: " << TargetArray[25] << "\n\n";


for (i = 0; i<3; i++)
{
   cout << "sentinelOne[" << i << "]: ";
   cout << sentinelOne[i]<< "\n";
   cout << "sentinelTwo[" << i << "]: ";
   cout << sentinelTwo[i]<< "\n";
}

return 0;
}
