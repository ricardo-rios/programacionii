#include <iostream>

using namespace std; 

enum { kIsSmaller, kIsLarger, kIsSame};

// Data class to put into the linked list
// Any class in this linked list must support two methods:
// Show (displays the value) and Compare (returns relative position) 

class Data
{
public:
   Data(int val):myValue(val){}
   ~Data(){}
   int Compare(const Data &);
   void Show() { cout << myValue << endl; }

private:
   int myValue;

};



// Compare is used to decide where in the list
// a particular object belongs.
int Data::Compare(const Data & theOtherData)
{
   if (myValue < theOtherData.myValue)
     return kIsSmaller;
   if (myValue > theOtherData.myValue)
     return kIsLarger;
   else
     return kIsSame;
}


// forward declarations
class Node;
class HeadNode;
class TailNode;
class InternalNode;


// ADT representing the node object in the list
// Every derived class must override Insert and Show

class Node
{
public:
   Node(){}
   virtual ~Node(){}
   virtual Node * Insert(Data * theData)=0;
   virtual void Show() = 0;
private:
};


// This is the node which holds the actual object
// In this case the object is of type Data
// We’ll see how to make this more general when
// we cover templates
class InternalNode: public Node
{
public:
   InternalNode(Data * theData, Node * next);
   ~InternalNode(){ delete myNext; delete myData; }
   virtual Node * Insert(Data * theData);
   virtual void Show() { myData->Show(); myNext->Show(); }
   // delegate!

private:
   Data * myData; // the data itself
   Node * myNext; // points to next node in the linked list
};


// All the constructor does is to initialize
InternalNode::InternalNode(Data * theData, Node * next):
myData(theData),myNext(next)
{
}

// the meat of the list
// When you put a new object into the list
// it is passed to the node which figures out
// where it goes and inserts it into the list

Node * InternalNode::Insert(Data * theData)
{
// is the new guy bigger or smaller than me?
int result = myData->Compare(*theData);

switch(result)
{
   // by convention if it is the same as me it comes first
   case kIsSame: // fall through
   case kIsLarger: // new data comes before me
   {
      InternalNode * dataNode = new InternalNode(theData, this);
      return dataNode;
   }


   // it is bigger than I am so pass it on to the next
   // node and let HIM handle it.
   case kIsSmaller:
      myNext = myNext->Insert(theData);
      return this;
}

return this; //appease compiler 

}


// Tail node is just a sentinel
class TailNode : public Node
{
public:
   TailNode(){}
   ~TailNode(){}
   virtual Node * Insert(Data * theData);
   virtual void Show() { }

private:
};



// If data comes to me, it must be inserted before me
// as I am the tail and NOTHING comes after me
Node * TailNode::Insert(Data * theData)
{
   InternalNode * dataNode = new InternalNode(theData, this);
   return dataNode;
}
   

// Head node has no data, it just points
// to the very beginning of the list
class HeadNode : public Node
{
public:
   HeadNode();
   ~HeadNode() { delete myNext; }
   virtual Node * Insert(Data * theData);
   virtual void Show() { myNext->Show(); }
private:
Node * myNext;
};



// As soon as the head is created
// it creates the tail
HeadNode::HeadNode()
{
   myNext = new TailNode;
}

// Nothing comes before the head so just
// pass the data on to the next node
Node * HeadNode::Insert(Data * theData)
{
   myNext = myNext->Insert(theData);
   return this;
}


// I get all the credit and do none of the work
class LinkedList
{
public:
   LinkedList();
   ~LinkedList() { delete myHead; }
   void Insert(Data * theData);
   void ShowAll() { myHead->Show(); }

private:
   HeadNode * myHead;
};

// At birth, i create the head node
// It creates the tail node
// So an empty list points to the head that
// points to the tail and has nothing between

LinkedList::LinkedList()
{

   myHead = new HeadNode;

}





// Delegate, delegate, delegate
void LinkedList::Insert(Data * pData)
{
   myHead->Insert(pData);
}



int main()
{  

   Data * pData;
   int val;
   LinkedList ll;
   // ask the user to produce some values
   // put them in the list

   for (;;)
   {
      cout << "What value? (0 to stop): ";
      cin >> val;
  
      if (!val)
        break;

      pData = new Data(val);
      ll.Insert(pData);
   }

   ll.ShowAll(); 
   return 0; // ll falls out of scope and is destroyed!

}

