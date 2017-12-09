/*
//Name: Jonathan James
//Creation: 12/06/2017
//Version: 8.R
//Description: Displays all the possible three letter arrangement of the string array and limits that output to ten per line.
********************************************************************************************/
#ifndef COMBINATION_H
#define COMBINATION_H
#include <iostream>
#include <string>
using namespace std;

//Name: comboWithout()
//Parameter(s): nothing
//Return: nothing
//Description: Displays all the possible three letter arrangement of the string array and limits that output to ten per line.
// Label             Task                                                     Goto
// 01                  [int count=0, i=0, counter = 0]                        02
// 02                  [string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"]            03
// 03                  [len = str.length()]                                   04
// 04                  [int iterator i starts from 0]                         05
// 05                  <i<len-2>                                              06,18
// 06                  [int iterator j starts from j= i+1]                    07
// 07                  <j<len-1>                                              08,05
// 08                  [int iterator k starts from k= j+1]                    09
// 09                  <k<len>                                                10,07
// 10                  /print (str[i], str[j], str[k], " ")/                  11
// 11                  [count++]                                              12
// 12                  <count == 10>                                          13,15
// 13                  /print("\n")/                                          14
// 14                  [count = 0]                                            15
// 15                  [k++]                                                  09
// 16                  [j++]                                                  07
// 17                  [i++]                                                  05
// 18                  (exit)

void comboWithout(){
  int count = 0, counter = 0;
  string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int len = str.length();
  for(int i=0; i< len-2; i++){
    for(int j=i+1; j< len-1; j++){
      for(int k=j+1; k< len; k++){
        cout<<str[i]<<str[j]<<str[k]<<" ";
        count++;
        counter++;
      if(count == 10){
        cout<<"\n";
        count = 0;
        }
      }
    }
  }
  // cout<<counter;
}

#endif // COMBINATION_H
