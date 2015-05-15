//---------------------------------------------------------------------
// Name:    Nicholas Watkins
// Project: Processing expressions based on inputed values/Prog1
// Purpose: This code is being used to test the stack to see if they are
// working properly and to manipulate the elements of the StackInfoType array. 
//---------------------------------------------------------------------

#include "Stack.h"

#ifdef TESTING_STACK

// ------------------------------
// Testbed main
// ------------------------------
void main()
{
   Stack s;
   s.push(12.1);
   cout << s.pop() << endl << s.isEmpty() << endl;
}

#endif