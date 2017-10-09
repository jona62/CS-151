/*
//Name: Jonathan James
//Creation: 10/08/2017
//Version: 2.R
//Description: Defines PI, , function that converts degrees to radians, function that converts radians to degrees, function that converts polar to rectangular coordinates, function that converts rectangular to polar coordinates, function that adds and subtract vectors.
********************************************************************************************/
#ifndef VECTORS_H
#define VECTORS_H
#include <cmath>


//Name: PI()
//Parameter(s): none
//Return: double
//Label    Task                                 Goto
//01       (start)                              02
//02       (exit: 3.14159265358979)

// const double PI  = 3.14159265358979;
// #define PI 3.14159265358979

//Function to define PI
double PI(){
  return 3.14159265358979;
}

//Name: toDegrees()
//Parameter(s): double rad
//Return: double
//Label    Task                                 Goto
//01       (start: rad)                         02
//02       (exit: rad *(180/PI()))

//Function to convert from Rads to Degrees
double toDegrees(double rad){
 return rad *(180/PI());
}

//Name: toRadian()
//Parameter(s): double deg
//Return: double
//Label     Task                                Goto
//01        (start: deg)                        02
//02        (exit: deg *(PI()/180))

//Function to convert from Degrees to Rads
double toRadian(double deg){
  return deg *(PI()/180);
}

//Name: toRectangular()
//Parameter(s): double magnitude, double angle, double &x, double &y
//Return: none
//Label     Task                                Goto
//01        (start: magnitude, angle, x, y)     02
//02        [toRadian(angle)  =  angle]         03
//03        [magnitude * cos(angle)  =  x]      04
//04        [magnitude * sin(angle)  =  y]      05
//05        (exit)

//Function to convert from Polar to Rectangular
void toRectangular(double magnitude,double angle,double& x, double& y)
{
  angle = toRadian(angle);
  x = magnitude* cos(angle);
  y = magnitude* sin(angle);
}

//Name: toPolar()
//Parameter(s): double &magnitude, double &angle, double x, double y
//Return: none
//Label       Task                                  Goto
//01          (start: magnitude, angle, x, y)       02
//02          [sqrt(x*x + y*y)  =  magnitude]       03
//03          [toDegrees(atan2(y,x))  =  angle]     04
//04          (exit)

//Function to convert from Rectangular to Polar
void toPolar(double &magnitude, double &angle, double x, double y)
{
// magnitude = sqrt(pow(x,2)+pow(y,2));
 magnitude =sqrt((x*x)+(y*y));
 angle = toDegrees(atan2(y,x));
}

//Name: add()
//Parameter(s): double mag1, double ang1, double mag2, double ang2, double &mag3, double &ang3
//Return: double
//Label       Task                                            Goto
//01          (start: mag1, ang1, mag2, ang2, mag3, ang3)     02
//02          [double x1, x2, y1, y2]                         03
//03          [toRectangular(mag1, ang1, x1, y1)]             04
//04          [toRectangular(mag2, ang2, x2, y2)]             05
//05          [x1 + x2  =  mag3]                              06
//06          [y1 + y2  =  ang3]                              07
//07          [toPolar(mag3, ang3, mag3, ang3)]               08
//08          (exit: 0.0)

double add(double mag1, double ang1, double mag2, double ang2, double &mag3, double &ang3) {
  double x1, x2, y1, y2;
  toRectangular(mag1, ang1, x1, y1);
  toRectangular(mag2, ang2, x2, y2);
  mag3 = x1 + x2;
  ang3 = y1 + y2;
  toPolar(mag3, ang3, mag3, ang3);
  return 0.0;
}

//Name: subtract()
//Parameter(s): double mag1, double ang1, double mag2, double ang2, double &mag3, double &ang3
//Return: double
//Label       Task                                            Goto
//01          (start: mag1, ang1, mag2, ang2, mag3, ang3)     02
//02          [double x1, x2, y1, y2]                         03
//03          [toRectangular(mag1, ang1, x1, y1)]             04
//04          [toRectangular(mag2, ang2, x2, y2)]             05
//05          [x1 - x2) =  mag3]                              06
//06          [y1 - y2) =  ang3]                              07
//07          [toPolar(mag3, ang3, mag3, ang3)]               08
//08          (exit: 0.0)

double subtract(double mag1, double ang1, double mag2, double ang2, double &mag3, double &ang3) {
  double x1, x2, y1, y2;
  toRectangular(mag1, ang1, x1, y1);
  toRectangular(mag2, ang2, x2, y2);
  mag3 = x1 - x2;
  ang3 = y1 - y2;
  toPolar(mag3, ang3, mag3, ang3);
  return 0.0;
}

#endif //VECTORS_H
