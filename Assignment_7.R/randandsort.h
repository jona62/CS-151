/*
//Name: Jonathan James
//Creation: 11/28/2017
//Version: 7.R
//Description: Fills in array with random values, sorts them in descending order and prints them with square brackets and commas between them.
********************************************************************************************/


#ifndef RANDANDSORT_H
#define RANDANDSORT_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Name:length()
// Parameter(s): array
// Return: int
// Label            Task                                               Goto
// 01               [(sizeof((array))/sizeof((array[0])))]               02
// 02               (exit)
#define length(array) (sizeof((array))/sizeof((array[0])))

// Name:RandomNumber()
// Parameter(s): int data[], int size, int min, int max
// Return: bool
// Label            Task                                               Goto
// 01               (start: data[], size, min, max)                     02
// 02               [int low, high]                                     03
// 03               <min>max>                                           04,06
// 04               [high = min]                                        05
// 05               [low = max]                                         08
// 06               <min<=max>                                          09
// 09               [high = max]                                        10
// 10               [low = min]                                         11
// 11               [int range = high - low + 1]                        12
// 12               [initialize an iterator i=0]                        13
// 13               <i < size>                                          14,16
// 14               [data[i] = rand() % range + low]                    15
// 15               [i++]                                               13
// 16               (exit)
bool RandomNumber(int data[],int size, int min, int max){
  int low, high;
  if(min>max){
    high = min;
    low = max;
    }
  else{
     high = max;
    low = min;
  }
  int range = high - low + 1;
  for(int i=0; i<size; i++){
    data[i] = rand() % range + low;
  }
}

// Name:swap()
// Parameter(s): int &x, int &y
// Return: nothing
// Label              Task                                       Goto
// 01                 (start: &x, &y)                               02
// 02                 [int temp]                                  03
// 03                 [temp = x]                                  04
// 04                 [x = y]                                     05
// 05                 [y = temp]                                  06
// 06                 (exit)
void swap(int &x, int &y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}

// Name:sort()
// Parameter(s): int data[], int size
// Return: nothing
// Label              Task                                        Goto
// 01                 [int i,j]                                   02
// 02                 [initialize an iterator i = 0]              03
// 03                 <i < size>                                  04,08
// 04                 [initialize an iterator j = i+1]            05
// 05                 <j < size>                                  06,03
// 06                 <data[i] < data[j]>                         07,05
// 07                 [swap (data[i], data[j])]                   08
// 08                 [j++]                                       05
// 09                 [i++]                                       03
// 10                 (exit)
void sort(int data[], int size){
  int i,j;
  for(i=0; i<size; i++){
    for(j=i+1; j<size; j++){
     if (data[i] < data[j])
      swap(data[i], data[j]);
    }
  }
}

// Name:printArray()
// Parameter(s): int data[], int size
// Return: nothing
// Label              Task                                    Goto
// 01                 [int i=0]                               02
// 02                 /print("[")/                            03
// 03                 <i < size>                              04,10
// 04                 /print(data[i])/                        05
// 05                 <i < size - 1>                          06,07
// 06                 /print(",")/                            07
// 07                 <i == size - 1>                         08,09
// 08                 /print("]")/                            09
// 09                 [i++]                                   03
// 10                 /print(endl)/                           11
// 11                 (exit)
void printArray(int data[], int size){
  int i=0;

  cout<<"[";
    while(i < size){
        cout <<data[i];
        if(i < size - 1){
            cout<<",";
        }
        if(i == size - 1){
            cout<<"]";
        }
        i++;
    }
    cout<<"\n";
}

#endif //RANDANDSORT_H
