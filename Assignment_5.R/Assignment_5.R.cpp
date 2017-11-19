//Name: Jonathan James
//Creation: 11/10/2017
//Version: 5.R

//Name: main()
//Parameter(s): none
//Return: int
//Description: Request two numbers from the user, generates a random number between those numbers, requests for limit of tries from the user.

// Label         Task                                                                    Goto
// 00            (start)                                                                 01
// 01            /int min,max,limit,list[100]/                                           02
// 02            /srand(time(NULL))/                                                     03
// 03            /cout(Enter two numbers)/                                               04
// 04            /cin(min)(max)/                                                         05
// 05            /cout(Enter the limit)/                                                 06
// 06            /cin(limit)/                                                            07
// 07            [GuessNumber(min,max,limit,list)]                                       08
// 08            (exit)

#include <cstdlib>
#include <ctime>
#include "Guess_No.h"

int main(){
  int min,max,limit, list[100];
  srand (time(NULL));

  cout<<"Enter two Numbers: ";
  cin>>min>>max;
  cout<<"Enter a limit: ";
  cin>>limit;
  GuessNumber(min,max,limit, list);
  return 0;
}
