//Name: Jonathan James
//Creation: 10/08/2017
//Version: 2.R

//Name: main()
//Paramter(s): none
//Return: int
//Description: Asks for two pairs of vector quantity, converts from polar to rectangular coordinates, sums and subtract and display their values in polar and rectangular coordinates

//Label       Task                                                          Goto
//01          (start)                                                       02
//02          [double x, y, mag1, mag2, mag3, ang1, ang2, ang3]             03
//03          /cout("Enter the first vector:")/                             04
//04          /cin  =  mag1, ang1/                                          05
//05          /cout("Enter the second vector:")                             06
//06          /cin  =  mag2, ang2/                                          07
//07          /cout(endl)/                                                  08
//08          [toRectangular(mag1, ang1, x, y)]                             09
//09          [toPolar(mag1, ang1, x, y)]                                   10
//10          /cout("v1:"(endl))                                            11
//11          /cout(fixed)(setprecision(1))                                 12
//12          /cout("Polar Coordinates: (" mag1 "," ang1 ")\n")/            13
//13          /cout("Rectangular Coordinates: (" x "," y ")\n\n")/          14
//14          [toRectangular(mag2, ang2, x, y)]                             15
//15          [toPolar(x, y, mag2, ang2)]                                   16
//16          /cout("v2:")(endl)/                                           17
//17          /cout("Polar Coordinates: (" mag2 "," ang2 ")\n")/            18
//18          /cout("Rectangular Coordinates: (" x "," y ")\n\n"/           19
//19          [add(mag1, ang1, mag2, ang2, mag3, ang3)]                     20
//20          [toRectangular(mag3, ang3, x, y)]                             21
//21          /cout("v1 + v2:")(endl)/                                      22
//22          /cout("Polar Coordinates: (" mag3 "," ang3 ")\n")             23
//23          /cout("Rectangular Coordinates: (",x,",",y,")\n\n")/          24
//24          [subtract(mag1, ang1, mag2, ang2, mag3, ang3)]                25
//25          [toRectangular(mag3, ang3, x, y)]                             26
//26          /cout("v1 - v2:")(endl)/                                      27
//27          /cout("Polar Coordinates: (" mag3 "," ang3 ")\n")/            28
//28          /cout("Rectangular Coordinates: (" x "," y ")\n\n")/          29
//29          [subtract(mag2, ang2, mag1, ang1, mag3, ang3)]                30
//30          [toRectangular(mag3, ang3, x, y)]                             31
//31          /cout("v2 - v1:")(endl)/                                      32
//32          /cout("Polar Coordinates: (" mag3 "," ang3 ")\n")/            33
//33          cout("Rectangular Coordinates: (" x "," y ")\n")/             34
//34          (exit: 0)

#include "Vector.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
  double mag1, mag2, mag3, ang1, ang2, ang3, x, y;

  cout<< "Enter the first vector: ";
  cin>>mag1 >>ang1;
  cout<< "Enter the second vector: ";
  cin>>mag2 >>ang2;
  cout<<endl;

  toRectangular(mag1,ang1,x,y);
  toPolar(mag1,ang1,x,y);
  cout<<"v1:"<<endl;
  cout << fixed << setprecision(1);
  cout<<"Polar Coordinates: ("<< mag1 <<", "<< ang1  <<")\n";
  cout<<"Rectangular Coordinates: ("<<x  <<", "<< y  <<")\n\n";


  toRectangular(mag2,ang2,x,y);
  toPolar(mag2,ang2,x,y);
  cout<<"v2:"<<endl;
  cout<<"Polar Coordinates: ("<< mag2 <<", "<< ang2  <<")\n";
  cout<<"Rectangular Coordinates: ("<< x  <<", "<< y <<")\n\n";


  add(mag1, ang1, mag2, ang2, mag3, ang3);
  toRectangular(mag3, ang3, x, y);
  cout << "v1 + v2:"<<endl;
  cout << "Polar Coordinates: (" << mag3 << ", " << ang3 << ")\n";
  cout << "Rectangular Coordinates: (" << x << ", " << y << ")\n\n";


  subtract(mag1, ang1, mag2, ang2, mag3, ang3);
  toRectangular(mag3, ang3, x, y);
  cout << "v1 - v2:"<<endl;
  cout << "Polar Coordinates: (" << mag3 << ", " << ang3 << ")\n";
  cout << "Rectangular Coordinates: (" << x << ", " << y << ")\n\n";


  subtract(mag2, ang2, mag1, ang1, mag3, ang3);
  toRectangular(mag3, ang3, x, y);
  cout << "v2 - v1:"<<endl;
  cout << "Polar Coordinates: (" << mag3 << ", " << ang3 << ")\n";
  cout << "Rectangular Coordinates: (" << x << ", " << y << ")\n";

  return 0;
}
