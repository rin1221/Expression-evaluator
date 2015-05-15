//---------------------------------------------------------------------
// Name:    Nicholas Watkins
// Project: Processing expressions based on inputed values/Prog1
// Purpose: The purpose of this file is to create methods that 
// manipulate the QInfoType and to allow for testing the methods 
// of this file.
//---------------------------------------------------------------------

#ifndef __QUEUE_H
//#define TESTING_QUEUE
#ifdef TESTING_QUEUE
    #include <iostream>
    typedef float QInfoType;
    using namespace std;
#endif
#define __QUEUE_H
using namespace std;

const int MAXQ = 80;
typedef float QInfoType[MAXQ];

//----------------------------------------------------------------------
//This class represents an array of floats that are the intermediate results.
//----------------------------------------------------------------------
class Queue
{

private:
   
   QInfoType intermediateVals;
   int count;
   int front;
   int rear;
   
public:
   
   //-------------------------------------------------------------------------
   // Queue's constructor:Initializes the queue's front, rear and count to 0
   //-------------------------------------------------------------------------
   Queue () { front = rear = count = 0; };
   
   //-------------------------------------------------------------------------
   // Adds the specified float element to the queue.
   //-------------------------------------------------------------------------
   void enqueue ( float inVal );
   
   //-------------------------------------------------------------------------
   // Removes the rear element of the queue and returns it.
   //-------------------------------------------------------------------------
   float dequeue ();
   
   //-------------------------------------------------------------------------
   // Returns a boolean specifying if the queue is empty.
   //-------------------------------------------------------------------------
   bool isEmpty () { return count == 0; };
};

#endif