//---------------------------------------------------------------------
// Name:    Nicholas Watkins
// Project: Processing expressions based on inputed values/Prog1
// Purpose: The purpose of this file is to define methods that 
// manipulate the QInfoType and make the tests that check the methods 
// of this file.
//---------------------------------------------------------------------

#include "Queue.h"

void  Queue::enqueue (float inVal)
{
   intermediateVals[rear] = inVal;
   rear = (rear + 1) % MAXQ;
   count++;
}

float Queue::dequeue ()
{
   float returnFloat = intermediateVals[front];
   front = (front + 1) % MAXQ;
   count--;
   return returnFloat;
}

#ifdef TESTING_QUEUE

// ------------------------------
// Testbed main
// ------------------------------
void main()
{
   Queue q;
   cout << q.isEmpty() << endl;
   q.enqueue(12.88);
   cout << q.isEmpty() << endl << q.dequeue();
}

#endif
