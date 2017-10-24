/*
// Name: Jonathan James Mshelia
// Creation: 09/06/2017
// Version: 1.R
// Description: Convert Height, Weight and Calculate your BMI and Display it
************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
  {
//Declaring Varibles
    float ft, in, kg, lb, lb_to_kg,HeightInMeters, HeightSquared;
    double BMI;
//Input weight
    cout<< "Enter your weight (lb): ";
    cin>> lb;

//Input Height takes two inputs height in feets and inches
	cout << "Enter Your Height (ft in): ";
	cin>> ft;
	cin>> in;
	cout<< endl;
//Weight conversion
    lb_to_kg = lb/ 2.20462;

//Height conversion
    HeightInMeters = ((ft * 12 + in) * 2.54 ) / 100;

//Calculate BMI
    HeightSquared = HeightInMeters * HeightInMeters;
    BMI = lb_to_kg / HeightSquared;

//Display Data
    cout << "Your Weight: "<< fixed << setprecision(2) << lb_to_kg <<"kg"<< endl;
	cout << "Your Height: "<< fixed << setprecision(2) << HeightInMeters <<"m"<< endl;
	cout << "Your BMI is "<< fixed << setprecision(2) << BMI <<endl;
    return 0;
}

//Name: main()
//Parameters: Nothing
//Return:int
//Description: Convert Height, Weight and Calculate your BMI and Display it

//  Label                     Task                                                                                                  Goto
//  01                        #include <iostream>                                                                                   02
//  02                        #include <iomanip>                                                                                    03
//  03                        /cout<< "Enter your weight (lb): ";/                                                                  04
//  04                        /cin>> lb;/                                                                                           05
//  05                        [lb_to_kg = lb/ 2.20462;]                                                                             06
// 	06                        /cout << "Enter Your Height (ft in): ";/                                                              07
// 	07                        /cin>> ft;/                                                                                           08
// 	08                        /cin>> in;/                                                                                           09
// 	09                        /cout<< endl;/                                                                                        10
//  10                        [HeightSquared = HeightInMeters * HeightInMeters;]                                                    11
//  11                        [HeightInMeters = ((ft * 12 + in) * 2.54 ) / 100;]                                                    12
//  12                        [BMI = lb_to_kg / HeightInMeters * HeightInMeters;]                                                   13
//  13                        /cout << "Your Weight: "<< fixed << setprecision(2) << lb_to_kg <<"kg"<< endl;/                       14
// 	14                        /cout << "Your Height: "<< fixed << setprecision(2) << HeightInMeters <<"m"<< endl;/                  15
// 	15                        /cout << "Your BMI is "<< fixed << setprecision(2) << BMI <<endl;/                                    16
//  16                        (exit:0)


    
