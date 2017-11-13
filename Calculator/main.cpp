#include <iostream>
#include "calculator.h"

using namespace std;

int main(){
  string choice,quit;
  int operand1,operand2;

  while (check(quit)){
  cout<<"1. Addition\n"
  <<    "2. Subtraction\n"
  <<    "3. Multiplication \n"
  <<    "4. Division\n"
  <<    "5. Quit\n";
  cout<<"Enter choice: ";
  cin>>choice;

  if (choice == "quit" || choice == "Quit"){
    quit = choice;
}

  if (choice == "1"){
    cout<<"Enter operand1: ";
    cin>>operand1;
    cout<<"Enter operand2: ";
    cin>>operand2;
    cout<<addition(operand1,operand2)<<endl;
  }
  else if (choice == "2"){
    cout<<"Enter operand1: ";
    cin>>operand1;
    cout<<"Enter operand2: ";
    cin>>operand2;
    cout<<subtraction(operand1,operand2)<<endl;
  }
  else if (choice == "3"){
    cout<<"Enter operand1: ";
    cin>>operand1;
    cout<<"Enter operand2: ";
    cin>>operand2;
    cout<<multiplication(operand1,operand2)<<endl;
  }
  else if (choice == "4"){
    cout<<"Enter operand1: ";
    cin>>operand1;
    cout<<"Enter operand2: ";
    cin>>operand2;
    cout<<division(operand1,operand2)<<endl;
  }
    }
  return 0;
}
