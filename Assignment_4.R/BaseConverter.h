/*
//Name: Jonathan James
//Creation: 11/10/2017
//Version: 4.R
//Description: Takes three bases from the user between 2 and 9, generates two random numbers and converts them according to the user input.
********************************************************************************************/

#include <iostream>
#ifndef BASECONVERTER_H
#define BASECONVERTER_H
using namespace std;

#include <iostream>
#ifndef BASECONVERTER_H
#define BASECONVERTER_H
using namespace std;

// Name:NumberGenerator()
// Parameter(s): int value, int base
// Return: nothing
// Label          Task                                  Goto
// 01             (start: value, base)                  02
// 02             [int rem = value/base]                03
// 03             <if (value >=1)                       04,07
// 04             [value = value / base]                05
// 05             [NumberGenerator(value,base)]         06
// 06             /cout (rem)/                          07
// 07             (exit)

void NumberGenerator(int value,int base){
  int rem = value % base;
 if (value >= 1){
    value = value / base;
    NumberGenerator(value, base);
   }
   cout << rem;
}


// Name:BaseConverter()
// Parameter(s): int value, int base
// Return: nothing
// Label          Task                                 Goto
// 01             (start: value, base)                 02
// 02             <if(base >= 2) && (base <= 9)>       03,04
// 03             [NumberGenerator(value,base)]        04
// 04             (exit)

void BaseConverter(int value, int base){
  if ((base >= 2) && (base <= 9)) {
      NumberGenerator(value, base);
  }
  else return;
}
#endif //BASECONVERTER_H


