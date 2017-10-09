#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

// const double PI  = 3.14159265358979;
// #define PI 3.14159265358979

//Function to define PI
double PI(){
  return 3.14159265358979;
}

//Function to convert from Rads to Degrees
double toDegrees(double rad){

 return rad *(180/PI());

}

//Function to convert from Degrees to Rads
double toRadian(double deg){
  return deg *(PI()/180);

}

//Function to convert from Rectangular to Polar
void toPolar(double& magnitude, double& angle, double x, double y)
{
// magnitude = sqrt(pow(x,2)+pow(y,2));
 magnitude =sqrt((x*x)+(y*y));
 angle = toDegrees(atan2(y,x));
}

//Function to convert from Polar to Rectangular
void toRectangular(double magnitude,double angle,double& x, double& y)
{
  angle = toRadian(angle);
  x = magnitude* cos(angle);
  y = magnitude* sin(angle);
}

double add(double mag1, double ang1, double mag2, double ang2, double& mag3, double& ang3) {
  double x1, x2, y1, y2;
  toRectangular(mag1, ang1, x1, y1);
  toRectangular(mag2, ang2,x2, y2);
  mag3 = x1 + x2;
  ang3 = y1 + y2;
  toPolar(mag3, ang3, mag3, ang3);
  return 0.0;
}

double subtract(double mag1, double ang1, double mag2, double ang2, double& mag3, double& ang3) {
  double x1, x2, y1, y2;
  toRectangular(mag1, ang1, x1, y1);
  toRectangular(mag2, ang2, x2, y2);
  mag3 = x1 + (-1 * x2);
  ang3 = y1 + (-1 * y2);
  toPolar(mag3, ang3, mag3, ang3);
  return 0.0;
}


int main()
{
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
