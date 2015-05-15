//---------------------------------------------------------------------
// Name:    Nicholas Watkins
// Project: Processing expressions based on inputed values/Prog1
// Purpose: This code is being used to test the stack to see if they are
// working properly and to manipulate the elements of the StackInfoType array. 
//---------------------------------------------------------------------

#ifndef __STACK_H
//#define TESTING_STACK
#ifdef TESTING_STACK
    #include <iostream>
    typedef float StackInfoType;
    using namespace std;
#endif
#define __STACK_H

using namespace std;

const int MAXSTACK = 80;
typedef float StackInfoType[MAXSTACK];

//----------------------------------------------------------------------------
// This class instantiates a stack of floats which represents the operands
//----------------------------------------------------------------------------
class Stack
{

private:

   StackInfoType operands;
   int top;

public:

   //-------------------------------------------------------------------------
   // This constructor creates a new stack of float type with a max size 
   // of 10.
   //-------------------------------------------------------------------------
   Stack () { top = 0; };
   
   //-------------------------------------------------------------------------
   // This function returns a boolean that represents weather the stack is empty
   //-------------------------------------------------------------------------
   bool isEmpty() { return top == 0; };

   //-------------------------------------------------------------------------
   // This function adds a value specified from a parameter to the 
   // top of the stack.
   //-------------------------------------------------------------------------
   void push ( float inVal ) { operands[top++] = inVal; };
   
   //-------------------------------------------------------------------------
   // This function returns the top element of the stack.
   //-------------------------------------------------------------------------
   float pop() { return operands[--top]; };

};

#endif
