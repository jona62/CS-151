/*
//Name: Jonathan James
//Creation: 10/24/2017
//Version: 3.R
//Description: Takes five variables and arranges them in ascending order, then returns the maximum, minimum, median, firstQuatile and thirdQuatile respectively.
********************************************************************************************/
#ifndef _5POINTSTATS_H
#define _5POINTSTATS_H

// Name:swap()
// Parameter(s): float &a,float &b
// Return: nothing
// Label         Task                          Goto
// 01            [float temp = a]                02
// 02            [a = b]                       03
// 03            [b = temp]                    04
// 04            (exit)
void swap(float &a,float &b)
{
  float temp = a;
  a = b;
  b = temp;
}
// Name:maximum()
// Parameter(s): float x, float y, float z, float w, float v
// Return: v
// Label         Task                          Goto
//01             (start:x,y,z,w,v)             02
//02             < y < x >                     03, 04
//03             [swap (y,x)]                  04
//04             < z < x >                     05, 06
//05             [swap (z,x)]                  06
//06             < w < x >                     07, 08
//07             [swap (w,x)]                  08
//08             < v < x >                     09, 10
//09             [swap (v,x)]                  10
//10             < z < y >                     11, 12
//11             [swap (z,y)]                  12
//12             < w < y >                     13, 14
//13             [swap (w,y)]                  14
//14             < v < y >                     15, 16
//15             [swap (v,y)]                  16
//16             < w < z >                     17, 18
//17             [swap (w,z)]                  18
//18             < v < z >                     19, 20
//19             [swap (v,z)]                  20
//20             < v < w >                     21, 22
//21             [swap (v,w)]                  22
//22             (exit: v)

float maximum(float x, float y, float z, float w, float v){
  if(y<x){
    swap(y,x);
  }
  if(z<x){
    swap(z,x);
  }
  if(w<x){
    swap(w,x);
  }
  if(v<x){
    swap(v,x);
  }
  if(z<y){
    swap(z,y);
  }
  if(w<y){
    swap(w,y);
  }
  if(v<y){
    swap(v,y);
  }
  if(w<z){
    swap(w,z);
  }
  if(v<z){
    swap(v,z);
  }
  if(v<w){
    swap(v,w);
  }
  return v;
}

// Name:minimum()
// Parameter(s): float x, float y, float z, float w, float v
// Return: x
// Label         Task                          Goto
//01             (start:x,y,z,w,v)             02
//02             < y < x >                     03, 04
//03             [swap (y,x)]                  04
//04             < z < x >                     05, 06
//05             [swap (z,x)]                  06
//06             < w < x >                     07, 08
//07             [swap (w,x)]                  08
//08             < v < x >                     09, 10
//09             [swap (v,x)]                  10
//10             < z < y >                     11, 12
//11             [swap (z,y)]                  12
//12             < w < y >                     13, 14
//13             [swap (w,y)]                  14
//14             < v < y >                     15, 16
//15             [swap (v,y)]                  16
//16             < w < z >                     17, 18
//17             [swap (w,z)]                  18
//18             < v < z >                     19, 20
//19             [swap (v,z)]                  20
//20             < v < w >                     21, 22
//21             [swap (v,w)]                  22
//22             (exit: x)

float minimum(float x, float y, float z, float w, float v){
  if(y<x){
    swap(y,x);
  }
  if(z<x){
    swap(z,x);
  }
  if(w<x){
    swap(w,x);
  }
  if(v<x){
    swap(v,x);
  }
  if(z<y){
    swap(z,y);
  }
  if(w<y){
    swap(w,y);
  }
  if(v<y){
    swap(v,y);
  }
  if(w<z){
    swap(w,z);
  }
  if(v<z){
    swap(v,z);
  }
  if(v<w){
    swap(v,w);
  }
  return x;
}

// Name:median()
// Parameter(s): float x, float y, float z, float w, float v
// Return: z
// Label         Task                          Goto
//01             (start:x,y,z,w,v)             02
//02             < y < x >                     03, 04
//03             [swap (y,x)]                  04
//04             < z < x >                     05, 06
//05             [swap (z,x)]                  06
//06             < w < x >                     07, 08
//07             [swap (w,x)]                  08
//08             < v < x >                     09, 10
//09             [swap (v,x)]                  10
//10             < z < y >                     11, 12
//11             [swap (z,y)]                  12
//12             < w < y >                     13, 14
//13             [swap (w,y)]                  14
//14             < v < y >                     15, 16
//15             [swap (v,y)]                  16
//16             < w < z >                     17, 18
//17             [swap (w,z)]                  18
//18             < v < z >                     19, 20
//19             [swap (v,z)]                  20
//20             < v < w >                     21, 22
//21             [swap (v,w)]                  22
//22             (exit: z)

float median(float x, float y, float z, float w, float v){
  if(y<x){
    swap(y,x);
  }
  if(z<x){
    swap(z,x);
  }
  if(w<x){
    swap(w,x);
  }
  if(v<x){
    swap(v,x);
  }
  if(z<y){
    swap(z,y);
  }
  if(w<y){
    swap(w,y);
  }
  if(v<y){
    swap(v,y);
  }
  if(w<z){
    swap(w,z);
  }
  if(v<z){
    swap(v,z);
  }
  if(v<w){
    swap(v,w);
  }
  return z;
}

// Name:firstQuatile()
// Parameter(s): float x, float y, float z, float w, float v
// Return: y
// Label         Task                          Goto
//01             (start:x,y,z,w,v)             02
//02             < y < x >                     03, 04
//03             [swap (y,x)]                  04
//04             < z < x >                     05, 06
//05             [swap (z,x)]                  06
//06             < w < x >                     07, 08
//07             [swap (w,x)]                  08
//08             < v < x >                     09, 10
//09             [swap (v,x)]                  10
//10             < z < y >                     11, 12
//11             [swap (z,y)]                  12
//12             < w < y >                     13, 14
//13             [swap (w,y)]                  14
//14             < v < y >                     15, 16
//15             [swap (v,y)]                  16
//16             < w < z >                     17, 18
//17             [swap (w,z)]                  18
//18             < v < z >                     19, 20
//19             [swap (v,z)]                  20
//20             < v < w >                     21, 22
//21             [swap (v,w)]                  22
//22             (exit: y)

float firstQuatile(float x, float y, float z, float w, float v){
  if(y<x){
    swap(y,x);
  }
  if(z<x){
    swap(z,x);
  }
  if(w<x){
    swap(w,x);
  }
  if(v<x){
    swap(v,x);
  }
  if(z<y){
    swap(z,y);
  }
  if(w<y){
    swap(w,y);
  }
  if(v<y){
    swap(v,y);
  }
  if(w<z){
    swap(w,z);
  }
  if(v<z){
    swap(v,z);
  }
  if(v<w){
    swap(v,w);
  }
  return y;
}

// Name:thirdQuatile()
// Parameter(s): float x, float y, float z, float w, float v
// Return: w
// Label         Task                          Goto
//01             (start:x,y,z,w,v)             02
//02             < y < x >                     03, 04
//03             [swap (y,x)]                  04
//04             < z < x >                     05, 06
//05             [swap (z,x)]                  06
//06             < w < x >                     07, 08
//07             [swap (w,x)]                  08
//08             < v < x >                     09, 10
//09             [swap (v,x)]                  10
//10             < z < y >                     11, 12
//11             [swap (z,y)]                  12
//12             < w < y >                     13, 14
//13             [swap (w,y)]                  14
//14             < v < y >                     15, 16
//15             [swap (v,y)]                  16
//16             < w < z >                     17, 18
//17             [swap (w,z)]                  18
//18             < v < z >                     19, 20
//19             [swap (v,z)]                  20
//20             < v < w >                     21, 22
//21             [swap (v,w)]                  22
//22             (exit: w)

float thirdQuatile(float x, float y, float z, float w, float v){
  if(y<x){
    swap(y,x);
  }
  if(z<x){
    swap(z,x);
  }
  if(w<x){
    swap(w,x);
  }
  if(v<x){
    swap(v,x);
  }
  if(z<y){
    swap(z,y);
  }
  if(w<y){
    swap(w,y);
  }
  if(v<y){
    swap(v,y);
  }
  if(w<z){
    swap(w,z);
  }
  if(v<z){
    swap(v,z);
  }
  if(v<w){
    swap(v,w);
  }
  return w;
}
#endif //_5POINTSTATS_H
