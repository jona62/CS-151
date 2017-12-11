#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

bool IsPalindrome(char *str){
  Stack stack;
  string newtemp, oldtemp;
  int j=0;
  initialize (stack);

  for(int i=0; str[i] != '\0'; i++){
    push(stack, str[i]);
    oldtemp +=str[i];
  }

   while(!isEmpty(stack)){
     newtemp += top(stack);
     pop(stack);
  }
  if(newtemp == oldtemp){
    return true;
  }
  return false;
}

int main(){
  char *test;
  char text[256];
  cout<<"Enter a string: ";
  cin>>text;
  test = text;
  if(IsPalindrome(test)){
    cout<<"Is a Palindrome!";
  }
  else{
    cout<<"Not a palindrome";
  }

  return 0;
}
