#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


bool IsPalindrome(const string &str, int start, int end);

int main(){
  // SECTION 1
  // 1.
  // char arr1[] = {'I','n','i','t','i','a','l','\0'};
  // char arr2[] = "Initial";

  //2.
  // while (1){
  //   cout<<"Why?\n";
  // }

  //3.
  // int i=1, squared=0,count=0;
  // while (i<=n){
  //   squared += i*i;
  //   i++;
  // }
  // cout<<squared;

  //4.
  // char str[] = "ADER";
  // cout<<str[1]<<str[2]<<str[2]<<str[3];
  // cout<<endl<<str[3]<<str[2]<<str[0]<<str[3];


  // 5
  // for(int i=0; i<str.length(); i++){
  //   cout<<str[i];
  // }
  // for(int i=str.length(); i>=0; i--){
  //   cout<<str[i];
  // }

  //6.
  // int i=1,n=3,count=0;
  // while(i<=n){
  //   if(n%i == 0){
  //     count++;
  //   }
  //   i++;
  // }
  //   cout<<"The number "<<n<<" has "<<count<<" factors.";

  //7.
  // string input = "";
  //   cout<<"Enter a word that consists only of lowercase letters: ";
  //   cin>>input;
  // for(int i=0; i<input.length(); i++){
  //   while(!islower(input[i])){
  //   cout<<"Enter a word that consists only of lowercase letters: ";
  //   cin>>input;
  //   }
  // }

//SECTION 2
//1.
/* Output - ABCD
            ABC
            AB
            A
*/
// step  n     i     i<n     j        c       j<n     Display
// 1.    4     0
// 2.                T
// 3.                        0       'A'
// 4.                                          T
// 5.                                                  A
// 6.                        1       'B'
// 7.                                          T
// 8.                                                  B
// 9.                       2       'C'
// 10.                                         T
// 11.                                                 C
// 12.                       3       'D'
// 13.                                         T
// 14.                                                 D
// 15.                       4       'E'
// 16.                                         F
// 17.                                                 /n
// 18.         1
// 19.               T
// 20.                      1        'A'
// 21.                                         T
// 22.                                                  A
// 23.                      2        'B'
// 24.                                         T
// 25.                                                  B
// 26.                      3        'C'
// 27.                                         T
// 28.                                                  C
// 29.                      4        'D'
// 30.                                         F
// 31.                                                   \n
// 32.         2
// 33.               T
// 34.                      2        'A'
// 35.                                         T
// 36.                                                   A
// 37.                      3        'B'
// 38.                                         T
// 39.                                                   B
// 40.                      4        'C'
// 41.                                         F
// 42.                                                   \n
// 43.         3
// 44.               T
// 45.                     3          'A'
// 46.                                         T
// 47.                                                   A
// 48.                     4           'B'
// 49.                                         F
// 50.                                                   \n
// 51.         4
// 52.               F

//2.
//Output - 3 0 2 3 3 2
// step      val[]                  i     j     i<6     i<4    i>=4        Display
// 01.       {3,0,2}                3     0
// 02.                                           T
// 03.       {3,0,2,3}
// 04.                                                                     3 0
// 05.                                                   T
// 06.                                    2
// 07.                                                          F
// 08.                              4            T
// 09.       {3,0,2,3,2}
// 10.                                                                     2 3
// 11.                                                   F
// 12.                                                          T
// 13.                                    3
// 14.                              5
// 15.                                           T
// 16.       {3,0,2,3,2,5}
// 17.                                                                     3 2
// 18.                                                          T
// 19.                                    4
// 20.                              6
// 21.                                           F

//  EXTRA CREDIT
  // string str = "NuuN";
  // int start = 0, end = str.length()-1;
  // cout<<IsPalindrome(str, start, end);


  return 0;
}

bool IsPalindrome(const string &str, int start, int end)
{
  if (start >= end)
    return true;
  if (str[start] != str[end])
    return false;
  return IsPalindrome(str, ++start, --end);
}
