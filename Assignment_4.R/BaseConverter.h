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

// Name:NumberGenerator()
// Parameter(s): int value, int base
// Return: nothing
// Label          Task                                 Goto
// 01             (start: value, base)                 02
// 02             <if(base >= 2) && (base <= 9)>       03,04
// 03             [NumberGenerator(value,base)]        04
// 04             (exit)

void NumberGenerator(int value, int base){
  if ( (base >= 2) && (base <= 9) ) {
      NumberGenerator(value, base);
  }
}
// Name:BaseConverter()
// Parameter(s): int value, int base
// Return: nothing
// Label          Task                                  Goto
// 01             (start: value, base)                  02
// 02             /int rem/                             03
// 03             <if (value >=1)                       04,10
// 04             [cout (value)]                        05
// 05             /return/                              06
// 06             [rem = value % base]                  07
// 07             [baseConverter((value/base),base)]    08
// 08             [NumberGenerator(value,base)]         09
// 09             /cout (rem)/                          10
// 10             (exit)

void BaseConverter(int value,int base){
    int rem;
   if (value >= 1){
      cout << value;
      return;
    }
    rem = value % base;
    BaseConverter((value / base), base);
    NumberGenerator(value, base);
    cout << rem;
}
#endif //BASECONVERTER_H
