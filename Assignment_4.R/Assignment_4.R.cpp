//Name: Jonathan James
//Creation: 11/10/2017
//Version: 4.R

//Name: main()
//Parameter(s): none
//Return: int
//Description: Generates random numbers between 1 to 99 and request three integers from the user and performs a base conversion of the random numbers in three different bases

// Label         Task                                                                    Goto
// 01            /int base1,base2,base3/                                                 02
// 02            /int num1,num2/                                                         03
// 03            /cout (Enter three bases)/                                              04
// 04            /cin (base1,base2,base3)/                                               05
// 05            /srand(time(NULL))/                                                     06
// 06            [num1 = rand() % 100 + 1]                                               07   
// 07            [num2 = rand() % 100 + 1]                                               08
// 08            /cout(num1)" in base "(base1) " is "/                                   09
// 09            [BaseConverter(num1,base1)]                                             10
// 10            /cout(endl)/                                                            11
// 11            /cout(num1)" in base "(base2) " is "/                                   12
// 12            [BaseConverter(num1,base2)]                                             13
// 13            /cout(endl)/                                                            14
// 14            /cout(num1)" in base "(base3) " is "/                                   15
// 15            [BaseConverter(num1,base3)]                                             16
// 16            /cout(endl)(endl)/                                                      17
// 17            /cout(num2)" in base "(base1) " is "/                                   18
// 19            /cout(endl)/                                                            19
// 18            [BaseConverter(num1,base1)]                                             20
// 20            /cout(num2)" in base "(base2) " is "/                                   21
// 21            [BaseConverter(num1,base2)]                                             22
// 22            /cout(endl)/                                                            23
// 23            /cout(num2)" in base "(base3) " is "/                                   24
// 24            [BaseConverter(num1,base3)]                                             25
// 25            /cout(endl)/                                                            26
// 26            (exit)

#include <cstdlib>
#include <ctime>
#include "BaseConverter.h"

int main(){
  int base1, base2, base3;
  int num1, num2;

  cout<<"Enter three bases: ";
  cin>>base1>>base2>>base3;

  srand (time(NULL));
  num1 = rand() % 100 + 1;
  num2 = rand() % 100 + 1;

  cout<<num1<<" in base "<<base1<< " is ";
  BaseConverter(num1,base1);
  cout<<endl;

  cout<<num1<<" in base "<<base2<< " is ";
  BaseConverter(num1,base2);
  cout<<endl;

  cout<<num1<<" in base "<<base3<< " is ";
  BaseConverter(num1,base3);
  cout<<endl<<endl;

  cout<<num2<<" in base "<<base1<< " is ";
  BaseConverter(num1,base1);
  cout<<endl;

  cout<<num2<<" in base "<<base2<< " is ";
  BaseConverter(num1,base2);
  cout<<endl;

  cout<<num2<<" in base "<<base3<< " is ";
  BaseConverter(num1,base3);
  cout<<endl;

  return 0;
}
