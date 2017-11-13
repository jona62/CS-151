#ifndef RECEIPTS_H
#define RECEIPTS_H

#include <iomanip>
#include <fstream>

float calculateSubtotal(int entre1, int entre2){
  float subtotal = 20.0;
    if((entre1 == 3 || entre1 == 7) && (entre1 == 7 || entre2 == 3)){
      subtotal = subtotal + 7.0;
    }
    else if(entre1 == 3 || entre1 == 7 || entre1 == 7 || entre2 == 3){
      subtotal += 3.50;
    }
    return subtotal;
}

float calculateTotal(float subtotal){
  float tax,total;
  tax = subtotal - subtotal * 0.887;
  total = subtotal + tax ;
  return total;
}

// Creates text file

fstream file;
file.open("receipt.txt", fstream::out);

if  (file.is_open())
{

    file << fixed<<setprecision(2);
    file <<"Appetizer\n"<<Appetizer[choiceAppetizer]<<"\n\n";
    file <<"Entres \n"<<Entre[choiceEntre]<<"\n";
    file <<Entre[choiceEntre2]<<"\n\n";
    file <<"Total + tax = "<< total<<"\n\n";
    file <<"Gratuities are as follows\n";
    file <<"15 percent :____________________________________"<<subtotal * 0.15<<endl;
    file <<"18 percent :____________________________________"<<subtotal * 0.18<<endl;
    file <<"20 percent :____________________________________"<<subtotal * 0.20<<endl;
}
  file.close();

#endif //RECEIPTS_H
