//---------------------------------------------------------------------
// Name:    Nicholas Watkins
// Project: Processing expressions based on inputed values/Prog1
// Purpose: This file will run the instances of the RPNEval file and 
// by using that obtain the answer to the expressions that are given
// and also outputs the headers.
//---------------------------------------------------------------------

#include <iostream>
#include "Queue.h"
#include "RPNEval.h"
#include "Stack.h"
using namespace std;

//-----------------------------------------------------------------------------
// This function is the main body of the program and runs the entire thing.
//-----------------------------------------------------------------------------
void main ()
{
   RPNEval rpn;
   int num_expressions;
   cin >> num_expressions;
   for ( int i = 1; i <= num_expressions; i++ )
   {
      cout << "Expression " << i << ":" << endl;
      rpn.ProcessExpression();
      cout << endl;
      if ( rpn.IsValid())
         cout << "The value is: " << rpn.Value() << endl;
      else 
         cout << "Invalid Expression" << endl; 
      rpn.PrintIntermediateResults();   
      cout << endl;
   }
   cout << "Normal Termination of Program 1!";
}