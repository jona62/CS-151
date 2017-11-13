#ifndef CALCULATOR_H
#define CALCULATOR_H

bool check(string x){
  if (x == "quit"){
    return false;
  }
  else {
    return true;
  }
}

int addition(int x, int y){
  return x + y;
}
int subtraction(int x, int y){
  return x - y;
}
int multiplication(int x, int y){
  return x * y;
}
int division(int x, int y){
  return x / y;
}

#endif //CALCULATOR_H
