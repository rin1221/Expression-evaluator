//---------------------------------------------------------------------
// Name:    Nicholas Watkins
// Project: Processing expressions based on inputed values/Prog1
// Purpose: This file evaluates the operands and operators that are inputed
// through the standard input and outputs the operators and operands in the
// order they were inputed and outputs the intermidiate values of the expression.
//---------------------------------------------------------------------
#include "RPNEval.h"
#include <iostream>

void RPNEval::ProcessExpression()
{
   valid = true;
   bool done = false;
   char ch;
   while ( valid && !done )
   {
      cin >> ch;
      if ( ch <= '9' && ch >= '0' )
      {
         cin.putback(ch);
         ProcessOperand();
      }
      else if ( ch == '+' || ch == '-' ||
                ch == '/' || ch == '*' )
      {
         cout << ch << " ";
         ProcessOperator(ch);
      }
      else if ( ch == '#' )
         done = true;
      else
      {   
         cout << ch << " ";
         valid = false;
      }
   }
   cin.ignore(100,'\n');
   if ( stack.isEmpty())
      valid = false;
   else
   {
      answer = stack.pop();
      if ( !stack.isEmpty())
      {
          valid = false;
          while ( !stack.isEmpty() )
             stack.pop();
      }
   }
}


void RPNEval::PrintIntermediateResults()
{
   cout << "The Intermediate Results are: ";
   while ( !queue.isEmpty() )
      cout << queue.dequeue() << " ";
   cout << endl;
}

void RPNEval::ProcessOperand ()
{
   OperandType operand;
   cin >> operand;
   cout << operand << " ";
   stack.push(operand);
}

void RPNEval::ProcessOperator ( char ch )
{
   OperandType op1, op2;
   if ( !stack.isEmpty() )
   {
      op2 = stack.pop();
      if ( !stack.isEmpty() )
      {
         op1 = stack.pop();
         switch ( ch )
         {
            case '-': answer = op1 - op2;
               stack.push(answer);
               queue.enqueue(answer);
               break;
            case '+': answer = op1 + op2;
               stack.push(answer);
               queue.enqueue(answer);
               break;
            case '*': answer = op1 * op2;
               stack.push(answer);
               queue.enqueue(answer);
               break;
            case'/' : if ( op2 == 0 ) 
                         valid = false;
                      else
                      {
                         answer = op1 / op2;
                         stack.push(answer);
                         queue.enqueue(answer);
                      }
                      break;
            default: valid = false;
         }
      }
      else
         valid = false;
   }   
   else 
      valid = false;
}
