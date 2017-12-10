#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

#define size(arr) sizeof(arr) / sizeof(arr[0])

struct ApplicationForm{
   string fullname;
   string firstname;
   string lastname;
   string DateOfBirth;
   string AccountType;
   int pin;
   int balance = 0;
   int accountNumber;
   int transId;
} customer;

struct Transfer{
  string name;
  int money;
}recepient;

bool commonPin(int digit);
void pullData(ApplicationForm& customer);
bool checkChar (char c);
void accountNumGen(ApplicationForm& customer);
void randTransactionID(ApplicationForm& customer);
void pinCheck();
void registerCustomer(ApplicationForm& customer);
void displayNewCustomer(ApplicationForm& customer);
void login(const ApplicationForm& customer);
void cashDeposit(ApplicationForm& customer);
void loggedInterface(ApplicationForm& customer);
void balaceEnquiry(ApplicationForm& customer);
void cashWithdrawal(ApplicationForm& customer);
void fundTransfers(ApplicationForm& customer);
void changePin(ApplicationForm& customer);
void miniStatement(ApplicationForm& customer);
void alreadyRegist(ApplicationForm& customer);
void userDetails(ApplicationForm& customer);

int main(){
  // alreadyRegist(customer);
  registerCustomer(customer);
  accountNumGen(customer);
  displayNewCustomer(customer);
  login(customer);
  randTransactionID(customer);
  loggedInterface(customer);
  randTransactionID(customer);
  userDetails(customer);

 return 0;
}

bool commonPin(int digit){
  int arr[]={0000,1111,2222,3333,4444,5555,6666,7777,8888,9999,1234};
  for(int i=0; i<size(arr); i++){
    if(arr[i] == digit)
      return true;
  }
  return false;
}

bool checkChar (char c){
  char arr[] = {'c', 's', 'S', 'C'};
  for(int i=0; i<size(arr); i++){
    if(c == arr[i])
      return false;
    }
  return true;
}

string xOutHalf(int num){
  string str = to_string(num);
  string half = str.substr(0, str.length()/2);
  string final;
  for(int i=0; i<half.length(); i++){
    final += 'x';
  }
  for(int i=half.length(); i<str.length(); i++){
    final += str[i];
  }
    return final;
}

void accountNumGen(ApplicationForm& customer){
  srand(unsigned(time(NULL)));
  customer.accountNumber = rand() % 10999 + 200000;
}

void randTransactionID(ApplicationForm& customer){
  srand(unsigned(time(NULL)));
  customer.transId = rand() % 99999 + 109999;
}

void QuitORBack(){
  string str;
  cout<<"\nTo go back press e\nTo exit press q ";
  cin>>str;
  while(str == "q"){
    break;
  }
  if(str == "e"){
    loggedInterface(customer);
  }
}

void pinCheck(){
    while(commonPin(customer.pin)){
    cout<<"Do not use common pins!\nCreate a 4 digit pin (xxxx): ";
    cin>>customer.pin;
  }
}

void alreadyRegist(ApplicationForm& customer){
  char choice;

  cout<<"Do you have an account? Y/N: ";
  cin>>choice;
  if(choice == 'y' || choice == 'Y'){
    pullData(customer);
  }
  else if (choice == 'n' || choice == 'N'){
    registerCustomer(customer);
  }
}

void pullData(ApplicationForm& customer){
//   string input,acctNo,pass;

//   cout<<"Enter your account Number: ";
//   cin>>acctNo;
//   cout<<"Enter your password: ";
//   cin>>pass;
//   ifstream ifile;
//   stringstream out(acctNo);
//   stringstream out1(pass);
//   ifile.open("users.txt", fstream::in);
//   if(ifile.is_open()){
//     while(getline(ifile, input)){
//       for(int i=0; i<input.length(); i++){
//         if(acctNo == input[i] && pass == input[i]){
//           out>>customer.accountNumber;
//           out1>>customer.pin;
//         }
//       }
//     }
//   }
//   ifile.close();
//     loggedInterface(customer);
}

void registerCustomer(ApplicationForm& customer){
  cout<<"Enter your First Name and Last Name: ";
  getline(cin, customer.fullname);

  cout<<"Enter date of birth (mm/dd/yyyy): ";
  getline(cin, customer.DateOfBirth);
  char c;
  cout<<"Enter Account Type (S/C): ";
  cin>>c;

  while(checkChar(c)){
    cout<<"Enter Account Type (S/C): ";
    cin>>c;
  }
  (c) ? customer.AccountType = "Checkings" : customer.AccountType = "Savings";

  cout<<"Create a 4 digit pin (xxxx): ";
  cin>>customer.pin;

  pinCheck();

  while ((to_string(customer.pin).length() > 4) || (to_string(customer.pin).length() < 4)){
    cout<<"It should be exactly 4 digits!\nCreate a 4 digit pin (xxxx): ";
    cin>>customer.pin;
    if((commonPin(customer.pin)))
      pinCheck();
  }
  cout<<"\n";
}

void login(const ApplicationForm& customer){
  int lpass,acctNo;
  do{
    cout<<"Enter your Account Number: ";
    cin>>acctNo;
    cout<<"Enter your pin: ";
    cin>>lpass;
    if(lpass != customer.pin || acctNo != customer.accountNumber){
      cout<<"Invalid Account Number or pin!\n";
    }
  }while(lpass != customer.pin || acctNo != customer.accountNumber);
  cout<<"You have Logged in Successfully!!\n";
}

void cashDeposit(ApplicationForm& customer){
  int money;
  cout<<"\nPlease Enter Amount: ";
  cin>>money;
 if(money > 0){
    customer.balance += money;
}
  QuitORBack();
}

void cashWithdrawal(ApplicationForm& customer){
  int money;
  cout<<"\nPlease Enter Amount : ";
  cin>>money;
  if(customer.balance == 0 || (customer.balance - money) < 0){
    cout<<"Sorry your transaction cannot be completed due to insufficient funds.";
  }
  if(customer.balance > 0){
    customer.balance -= money;
  }
  QuitORBack();
}

void fundTransfers(ApplicationForm& customer, Transfer& recepient){
  int money, fpass;
  cout<<"Enter recepients name: ";
  getline(cin,recepient.name);

  cout<<"Please Enter Amount: ";
  cin>>money;
  if(customer.balance == 0 || (customer.balance - money) < 0){
    cout<<"Sorry your transaction cannot be completed due to insufficient funds.";
  }
  do{
    cout<<"Enter Your pin: ";
    cin>>fpass;
  }while(fpass != customer.pin);

  cout<<"Your transfer to "<<recepient.name<<" was Successful";
    QuitORBack();
}

void changePin(ApplicationForm& customer){
  int pass, pass1, pass2;
  do{
    cout<<"Enter Original pin: ";
    cin>>pass;
    cout<<"\nEnter new pin: ";
    cin>>pass1;
    cout<<"Confirm new pin: ";
    cin>>pass2;
  }while((pass != customer.pin) || (pass1 != pass2) && ((pass1 != customer.pin) || (pass2 != customer.pin)));
}
void balaceEnquiry(ApplicationForm& customer){
    cout<<"You have $ "<<customer.balance<<" left in you account.";
    QuitORBack();
}

void miniStatement(ApplicationForm& customer){
  fstream file;
  file.open("receipt.txt", fstream::out);
  if(file.is_open()){
    cout<<file.rdbuf();
  }
}
void loggedInterface(ApplicationForm&customer){
  int choice;
  cout<<"*****************************************************************************\n";
  stringstream aha(customer.fullname);
  string fname, lname;
  aha >> fname;
  getline (aha, lname);
  customer.firstname = fname;
  customer.lastname = lname;
  cout<<"\nMr. "<<customer.lastname<<"\n\n";
  stringstream out;
  out<<left<<"1.Cash Deposit"<<setw(60)<<right<<"5.Cash Withdrawal\n\n";
  out<<left<<"2.Fund Transfer"<<setw(59)<<right<<"6.Balance Enquiry\n\n";
  out<<left<<"3.Change Pin"<<setw(61)<<right<<"7.Mini Statement\n\n";
  out<<left<<"4.Other Services"<<setw(47)<<right<<"8.Quit\n\n";
  out<<"Select your Transaction: ";
  cout<<out.str();

  cin>>choice;
  switch (choice){
    case 1:
      cashDeposit(customer);
    break;
    case 2:
      fundTransfers(customer,recepient);
    break;
    case 3:
      changePin(customer);
    break;
    case 4:
    break;
    case 5:
      cashWithdrawal(customer);
    break;
    case 6:
      balaceEnquiry(customer);
    break;
    case 7:
      miniStatement(customer);
    break;
    case 8:
    break;
    default:
      cout<<"Invalid! Operation Try again ";
      loggedInterface(customer);
  }

  fstream file;
  file.open("receipt.txt", fstream::out);
  if(file.is_open()){
    file<<left;
    file<<"*****************************************************************************\n\n";
    file<<setw(19)<<"Name: "<<customer.fullname<<endl;
    file<<setw(19)<<"Account Number: "<<xOutHalf(customer.accountNumber)<<endl;
    file<<setw(19)<<"Account Type: "<<customer.AccountType<<endl;
    file<<setw(19)<<"Your current balance: $"<<customer.balance<<endl;
    file<<setw(19)<<"Transaction ID: "<<customer.transId<<endl;
    file<<"\n\n*****************************************************************************\n\n";
  }
  file.close();
}

void userDetails(ApplicationForm& customer){
   fstream file;
  file.open("users.txt", fstream::out | fstream::app);
  if(file.is_open()){
    file<<customer.fullname<<" "<<customer.DateOfBirth<<" "<<customer.accountNumber<<" "<<"$"<<customer.balance<<" "<<customer.AccountType<<" "<<customer.pin<<endl;
  }
  file.close();
}
void displayNewCustomer(ApplicationForm& customer){
  stringstream out;
  out<<left;
  out<<"*****************************************************************************\n\n";
  out<<setw(19)<<"Name: "<<customer.fullname<<endl;
  out<<setw(19)<<"Date Of Birth: "<<customer.DateOfBirth<<endl;
  out<<setw(19)<<"Account Number: "<<customer.accountNumber<<endl;
  out<<setw(19)<<"Account Type: "<<customer.AccountType<<endl;
  out<<setw(19)<<"pin: "<<"xxxx"<<endl;
  out<<setw(19)<<"\nYour account has been created Successfully";
  out<<"\n\n*****************************************************************************\n\n";
  cout<<out.str();

}
