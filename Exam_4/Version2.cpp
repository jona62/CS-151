#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

bool IsPalindrome(char *str){
  Stack stack;
  initialize (stack);
  int n=0;
  while(1){
    if(str[n] == '\0'){
      break;
    }
    n++;
  }
  for(int i = 0; i < n/2; i++){
    push(stack, str[i]);
  }

  for(int i = (n+1)/2; i < n; i++){
    if(top(stack) != str[i]){
    return false;
    }
      pop(stack);
  }
return true;
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
