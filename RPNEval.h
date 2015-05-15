//---------------------------------------------------------------------
// Name:    Nicholas Watkins
// Project: Processing expressions based on inputed values/Prog1
// Purpose: This file evaluates the operands and operators that are inputed
// through the standard input and outputs the operators and operands in the
// order they were inputed and outputs the intermidiate values of the expression.
//---------------------------------------------------------------------

#ifndef __RPNEVAL_H
#define __RPNEVAL_H
#include "Stack.h"
#include "Queue.h"

typedef float OperandType;
//---------------------------------------------------------------------
// This class uses the number of expressions and finds the answers by 
// using the following methods.
//---------------------------------------------------------------------
class RPNEval
{
   public:

      //---------------------------------------------------------------------
      // RPNEval constructor
      //---------------------------------------------------------------------
      RPNEval() { valid = false; }

      //---------------------------------------------------------------------
      // Reads and processes the next RPN expression from the standard input.
      //---------------------------------------------------------------------
      void ProcessExpression();

      //---------------------------------------------------------------------
      // Returns true if RPN expression is valid, false otherwise.
      //---------------------------------------------------------------------
      bool IsValid() const { return valid; }

      //---------------------------------------------------------------------
      // Returns the value of the RPN expression if it is valid.
      // Returns garbage if RPN expression is not valid.
      //---------------------------------------------------------------------
      OperandType Value() const { return answer; }

      //---------------------------------------------------------------------
      // Print out the intermediate results to the standard
      // output, with one space after each result.
      // Does NOT print any header or any newlines.
      //---------------------------------------------------------------------
      void PrintIntermediateResults();

   private:
      bool valid;                   // Is RPN expression valid?
      OperandType answer;           // Value of RPN expression if it is valid
      Stack stack;                  // Used to process RPN
      Queue queue;                  // Used to store intermediate results
      // You can't add any more private data but you MUST have
      // some private methods!

      //---------------------------------------------------------------------
      //Adds the new integer/float to the stack and outputs the operand
      //---------------------------------------------------------------------
      void ProcessOperand();

      //---------------------------------------------------------------------
      //Using the character inputed this method does the specified expression
      // and adds the new value to the stack and queue
      //---------------------------------------------------------------------
      void ProcessOperator(char ch );
};

#endif