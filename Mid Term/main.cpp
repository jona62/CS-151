#include <iostream>
#include <string>
#include "receipts"
using namespace std;

int main(){
  int choiceAppetizer, choiceEntre, choiceEntre2;
  float subtotal, total;
  string Appetizer[5] = {
    "Two Caesar Side Salads                            (800 Cal.)",
    "Spinach + Artichoke Dip                           (960 Cal.)",
    "Crunchy Onion Rings                               (1300 Cal.)",
    "Boneless Wings                                    (1160 Cal.)",
    "Mozzarella Sticks                                 (910 Cal.)"
  };

  string Entre[10] = {
    "Chicken Tenders Basket                            (1150 Cal.)",
    "Oriental Chicken Salad                            (1420 Cal.)",
    "Firecracker Shrimp Cavatappi                      (1970 Cal.) [Plus 3.50]",
    "The American Standard                             (1010 Cal.)",
    "Blackened Tilapia                                 (510 Cal.)",
    "Whisky Bacon Burger                               (1240 Cal.)",
    "Double-Glazed Baby Back Ribs - Half Rack          (550 Cal.) [Plus 3.50]",
    "Cedar Grilled Lemon Chicken                       (580 Cal.)",
    "Fiesta Lime Chicken                               (1140 Cal.)",
    "Three-Cheese Chicken Cavatappi                   (1280 Cal.)"
  };

  int appetizer,entre1,entre2;

  cout<<"Appetizer\n\n"
    << "1. Two Caesar Side Salads                            (800 Cal.)\n"
    << "2. Spinach + Artichoke Dip                           (960 Cal.)\n"
    << "3. Crunchy Onion Rings                               (1300 Cal.)\n"
    << "4. Boneless Wings                                    (1160 Cal.)\n"
    << "5. Mozzarella Sticks                                 (910 Cal.)\n\n";

  cout<<"Select an Appetizer: ";
  cin>>appetizer;
  if(appetizer > 5 || appetizer < 1){
    appetizer = 1;
  }

  choiceAppetizer = appetizer - 1;
  cout<<Appetizer[choiceAppetizer]<<endl;

  cout<<endl;
  cout<< "Entŕe\n\n"
    << "1. Chicken Tenders Basket                            (1150 Cal.)\n"
    << "2. Oriental Chicken Salad                            (1420 Cal.)\n"
    << "3. Firecracker Shrimp Cavatappi                      (1970 Cal.) [Plus 3.50]\n"
    << "4. The American Standard                             (1010 Cal.)\n"
    << "5. Blackened Tilapia                                 (510 Cal.)\n"
    << "6. Whisky Bacon Burger                               (1240 Cal.)\n"
    << "7. Double-Glazed Baby Back Ribs - Half Rack          (550 Cal.) [Plus 3.50]\n"
    << "8. Cedar Grilled Lemon Chicken                       (580 Cal.)\n"
    << "9. Fiesta Lime Chicken                               (1140 Cal.)\n"
    << "10. Three-Cheese Chicken Cavatappi                   (1280 Cal.)\n\n";

    cout<<"Select an Entŕes: ";
    cin>>entre1;

    cout<<endl;
    cout<< "Entŕe\n\n"
      << "1. Chicken Tenders Basket                            (1150 Cal.)\n"
      << "2. Oriental Chicken Salad                            (1420 Cal.)\n"
      << "3. Firecracker Shrimp Cavatappi                      (1970 Cal.) [Plus 3.50]\n"
      << "4. The American Standard                             (1010 Cal.)\n"
      << "5. Blackened Tilapia                                 (510 Cal.)\n"
      << "6. Whisky Bacon Burger                               (1240 Cal.)\n"
      << "7. Double-Glazed Baby Back Ribs - Half Rack          (550 Cal.) [Plus 3.50]\n"
      << "8. Cedar Grilled Lemon Chicken                       (580 Cal.)\n"
      << "9. Fiesta Lime Chicken                               (1140 Cal.)\n"
      << "10. Three-Cheese Chicken Cavatappi                   (1280 Cal.)\n\n";

    cout<<"Select another Entŕes: ";
    cin>>entre2;

      if(entre1 > 10 || entre1 < 1 || entre2 > 10 || entre2 < 1){
        entre1 = 1;
        entre2 = 1;
      }
  choiceEntre = entre1 - 1;
  choiceEntre2 = entre2 - 1;

  subtotal = calculateSubtotal(entre1,entre2);
  total = calculateTotal(subtotal);

  return 0;
}
