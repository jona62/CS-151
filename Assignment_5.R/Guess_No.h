/*
//Name: Jonathan James
//Creation: 11/10/2017
//Version: 5.R
//Description: generates random number between the minimum and maximum, then asks the user to guess the number as long as the limit is not zero and the choice of the user is false. When the limit is now zero or the choice is equal to the randomly generated number, it prints you won with the number of tries. But when you run out of tries, you see the guesses you made.
********************************************************************************************/

#include <iostream>
#include <string>
using namespace std;
#ifndef GUESS_NO_H
#define GUESS_NO_H

// Name:GuessNumber()
// Parameter(s): int min, int max, int limit, int logs[]
// Return: nothing
// Label            Task                                               Goto
// 00               (start: min, max, limit, logs[])                   01
// 01               /int i, range,num,choice, li = 0/                  02
// 02               [range = max - min + 1]                            03
// 03               [num = rand() % range + min]                       04
// 04               <while(choice != num && limit > 0)>                05,21
// 05               /cout(Guess a number)/                             06
// 06               /cin(choice)/                                      07
// 07               <if(choice == num)>                                08,21
// 08               /cout("You won")/                                  09
// 09               [logs[i] = choice]                                 10
// 10               [li++]                                             11
// 11               [limit++]                                          12
// 12               [i=0]                                              13
// 13               /cout([])/                                         14
// 14               <while (i < li)>                                   15,21
// 15               /cout(logs[i])/                                    16
// 16               <if(i<li-1)>                                       17,21
// 17               /cout(",")/                                        18
// 18               <if(i == li - 1)>                                  19,21
// 19               /cout("]")/                                        20
// 20               [i++]                                              21
// 21               (exit)


void GuessNumber(int min, int max, int limit, int logs[]){
  int i,range,num,choice, li = 0;

  range = max - min + 1;
  num = rand() % range + min;

  while(choice != num && limit > 0){
    cout<<"Guess my Number: ";
    cin>>choice;

    if(choice == num){
      cout<<"You won\n";
    }
    logs[li] = choice;
    li++;
    limit--;
  }
  i= 0;
  cout<<"[";
  while(i < li){
    cout <<logs[i];
    if(i < li - 1){
      cout<<",";
    }
    if(i == li - 1){
      cout<<"]";
    }
    i++;
  }
}

#endif// GUESS_NO_H
