// Workshop 5 - Fraction Adder
 // w5x.cpp
 // Feb 23 2011

 #include <iostream>
 using namespace std;
 #include "Fraction.h"

 int main() {
     char op;
     Fraction leftOp, rightOp, result, reference;

     cout << "Fraction Adder\n";
     cout << "==============\n";

     cout << "Enter Left Operand : " << endl;
     leftOp.enter();

     cout << "Enter Right Operand : " << endl;
     rightOp.enter();

     cout << "Result of First Addition : " << endl;
     leftOp.display();
     cout << " + ";
     rightOp.display();
     cout << " = ";
     result = leftOp + rightOp;
     result.display();
     cout << endl;

     cout << "Enter Second Right Operand : " << endl;
     rightOp.enter();

     cout << "Result of Second Addition : " << endl;
     result.display();
     cout << " += ";
     rightOp.display();
     cout << " => ";
     result += rightOp;
     result.display();
     cout << endl;

     cout << "Enter Reference : " << endl;
     reference.enter();
     if (result == reference)
         cout << "Result is equal to the reference" << endl;
     else
         cout << "Result differs from the reference" << endl; 
 }