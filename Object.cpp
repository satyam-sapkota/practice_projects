// Banking program to deposite money, withdraw money and show account balance
#include<iostream>
#include<iomanip>
using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

   double balance = 0;
   int choice = 0 ;
   do{
    cout << "Enter your choice\n";
    cout << "1) Check Balance\n";
    cout << "2) Deposit Money\n";
    cout << "3) Withdraw Money\n";
    cout << "4) Exit:";
    cin >> choice;
    cin.clear();
    fflush(stdin);
    switch(choice){
      case 1: showBalance(balance);
      break;

      case 2: balance += deposit();
             showBalance(balance);
      break;

      case 3: balance -= withdraw(balance);

      showBalance(balance);
      break;

      case 4:cout << "Thanks for using. Please visit again";
      break;

      default:cout << "Invalid choice\n";
    }
   } while (choice != 4);
 
}

void showBalance(double balance){
   cout << "Your balance is:$" << ::setprecision(4) << ::fixed  << balance << endl ;

}
double deposit(){
   double amount = 0;
   cout << "Enter amount you want to deposit\n" ;
   cin >> amount ;
   if( amount > 0){
      cout <<"Deposit successfull\n";
      return amount;
}
else{

   cout << "Please enter valid amount";

   return 0;
}
}
double withdraw(double balance){
   double amount = 0;
   cout << "Enter amount you want to withdraw\n" ;
   cin >> amount ;
   if( amount <= 0 ){
      cout << "Please enter amount greater than zero\n";
      return 0;
   }
   if( amount > balance) {
      cout << "Insufficient funds\n";  
      return 0;
   }
   else{
      cout << "Withdraw successfull\n";
  return amount;
   }
   
}
