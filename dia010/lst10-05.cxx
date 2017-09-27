#include <iostream>

using namespace std; 


class CAT
{
    public:
         CAT(); // default constructor
         CAT (const CAT &); // copy constructor
         ~CAT(); // destructor
         int GetAge() const { return *itsAge; }
         int GetWeight() const { return *itsWeight; }
         void SetAge(int age) { *itsAge = age; }
    private:
         int *itsAge;
         int *itsWeight;
};


CAT::CAT()
{
    itsAge = new int;
    itsWeight = new int;
    *itsAge = 5;
    *itsWeight = 9;
}

CAT::CAT(const CAT & rhs)
{
    itsAge = new int;
    itsWeight = new int;
    *itsAge = rhs.GetAge(); // public access
    *itsWeight = *(rhs.itsWeight); // private access
}


CAT::~CAT()
{
    delete itsAge;
    itsAge = NULL;
    delete itsWeight;
    itsWeight = NULL;
}



int main()
{
    CAT frisky;
    cout << "frisky’s age: " << frisky.GetAge() << endl;
    cout << "Setting frisky to 6...\n";
    frisky.SetAge(6);
    cout << "Creating boots from frisky\n";
    CAT boots(frisky);
    cout << "frisky’s age: " <<
    frisky.GetAge() << endl;
    cout << "boots’ age: " << boots.GetAge() << endl;
    cout << "setting frisky to 7...\n";
    frisky.SetAge(7);
    cout << "frisky’s age: " << frisky.GetAge() << endl;
    cout << "boot’s age: " << boots.GetAge() << endl;
    
    return 0;
}
