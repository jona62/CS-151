//Name: Jonathan James
//Creation: 11/28/2017
//Version: 7.R

//Name: main()
//Parameter(s): none
//Return: int
//Description: checks min and max and calls the functions to populate array randomly using values between min and max inclusively, then sorts it in descending order and prints it out.

// Label           Task                                           Goto
// 01              [declare min, max and arr[10] as ints]          02
// 02              [initialize size to length of arr]              03
// 03              [srand(time(NULL)) ]                            04
// 04              /print (Enter a minimum and a maximum)/         05
// 05              /cin(min)(max)/                                 06
// 06              [RandomNumber(arr, size, min, max]              07
// 07              [printArray (arr, size)]                        08
// 08              /print (endl)/                                  09
// 09              [sort (arr, size)]                              10
// 10              [printArray (arr, size)]                        11
// 11              (exit)

#include "randandsort.h"
int main(){
  int min, max, arr[10];
  int size = length(arr);
  srand(time(NULL));

  cout<<"Enter a minimum and maximum Number: ";
  cin>> min>> max;

  RandomNumber(arr, size,min,max);
  printArray(arr, size);
    cout<<endl;
  sort(arr,size);
  printArray(arr, size);
return 0;
}
