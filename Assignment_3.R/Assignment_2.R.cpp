//Name: Jonathan James
//Creation: 10/24/2017
//Version: 3.R

//Name: main()
//Parameter(s): none
//Return: int
//Description: Asks for 5 user input and returns the maximum, thirdQuatile, median, firstQuatile and minimum.

// Label         Task                                                                    Goto
// 01            (start)                                                                 02
// 02            [float a, b, c, d, e]                                                   03
// 03            /cout("Enter five Numbers: ")/                                          04
// 04            /cin >> a, b, c, d, e/                                                  05
// 05            /cout(endl)/                                                            06
// 06            /cout(fixed)(setprecision(1))/                                          07
// 07            /cout("The maximum is "[maximum(a,b,c,d,e)](endl));                     08
// 08            /cout("The third Quatile is "[thirdQuatile(a,b,c,d,e)](endl));          09
// 09            /cout("The median is "[median(a,b,c,d,e)](endl));                       10
// 10            /cout("The first Quatile is "[firstQuatile(a,b,c,d,e)](endl));          11
// 11            /cout("The minimum is "[minimum(a,b,c,d,e)](endl));                     12
// 12            (exit:0)

#include "_5pointstats.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  float a,b,c,d,e;
  cout<<"Enter five numbers: ";
  cin >>a>>b>>c>>d>>e;
  cout<<endl;

  cout<< fixed << setprecision(1);
  cout <<"The maximum is " <<maximum(a,b,c,d,e)<<endl;
  cout <<"The third Quatile is " <<thirdQuatile(a,b,c,d,e)<<endl;
  cout <<"The median is " <<median(a,b,c,d,e)<<endl;
  cout <<"The first Quatile " <<firstQuatile(a,b,c,d,e)<<endl;
  cout <<"The minimum is " <<minimum(a,b,c,d,e)<<endl;


return 0;
}
