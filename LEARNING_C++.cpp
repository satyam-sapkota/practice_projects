/*Classes and objects
#include <iostream>
#include<string>
using namespace std;

class Student{
   public:
   string name;
   int roll_no;

   void display(){
      cout<< "Roll " << roll_no << ": " << name << endl;
   }
};
int main()
{
Student s1;
s1.name = "Satyam";
s1.roll_no = 10;

Student s2;
s2.name = "SiwaniSapkota";
s2.roll_no = 20;

s1.display();
s2.display();

cout<< "Size of first student object =" << sizeof(s1)<< "bytes"<<endl;
cout<<"Size of second student object=" << sizeof(s2) << "bytes"<<endl;

   

return 0;
}


//Encapsulation
#include<iostream>
using namespace std;
class BankAccount{
   private:
   double balance;

   public:
   BankAccount(double opening)
   {
      balance = (opening > 0) ? opening : 0;
   }
   void deposit(double amt) {
      if(amt > 0) balance += amt;
      else cout << "Withdrawal rejected: amount must be positive" << endl;
   }
   void withdraw(double amt) {
      if (amt > 0 && amt <= balance) balance -= amt;
      else cout << "Withdrawl rejected: invalid or insufficient funds " << endl;
   }
   double getBalance() const { return balance; }
};
int main()
{
   BankAccount acc(1000);
   acc.deposit(500);
   acc.withdraw(2000);
   acc.withdraw(300);
   acc.deposit(-50);
   cout << "Final balance = " << acc.getBalance() <<endl;
   return 0;
}

//Data Hiding
#include<iostream>
using namespace std;
class Base{
   private:
   int secret = 1;
   protected:
   int semiOpen = 2;
   public:
   int open = 3;
    void showAll(){
      cout<< "Inside base -> semiOpen=" << secret
      << "semiOpen=" << semiOpen
      << "open=" << open <<endl;
    }
};

class Derived : public Base {
   public :
   void tryAccess()
   {
      cout<< "Inside Derived -> semiOpen=" << semiOpen
      <<"open=" <<  open << "(secret is NOT visible)" << endl;
   }
};

int main() {
   Base b;
   b.showAll();
   Derived d;
   d.tryAccess();

   cout << "Inside main -> open=" << b.open
   << "(secret and semiOpen are NOT visible)" << endl;
   return 0;
}
   
  //Inheritance
  #include<iostream>
  #include<string>
  using namespace std;

  class Employee {
   protected:
   string name;
   double basicPay;

   public:
   Employee(string n, double p) : name(n), basicPay(p) {}

   void showBasic() {
      cout << name << " | basic pay = " << basicPay << endl;
   }
  };

  class Manager : public Employee {
   private:
    double bonus;
    public:
    Manager(string n, double p, double b) : Employee(n, p), bonus(b) {}
    void showTotal() {
      cout<< name<< " | total pay = " << basicPay + bonus << endl;
    }
  };
   
  int main(){
   Employee e("Aarav", 40000);
   e.showBasic();
   
   Manager m("Siwani", 60000, 15000);
   m.showBasic();
   m.showTotal();
   return 0;
  }
  
  //Polymorphism
  #include<iostream>

  using namespace std;

  int add(int a, int b) {return a+b;}
  double add(double a, double b) {return a+b;}
  int add(int a, int b, int c) {return a+b+c;}

  class Shape {
   public:
   virtual double area() const { return 0; }
   virtual  void name() const { cout << "Shape"; }
   virtual ~Shape() {}
  };

  class Circle : public Shape {
   double r;
   public: 
   Circle(double radius) : r(radius) {}
   double area() const override { return 3.14159 * r *r;}
   void name() const override { cout << "Rectangle";}

  };
  class Rectangle : public Shape {
   double w,h;
   public:
   Rectangle(double W, double H) : w(W), h(H) {}
   double area() const override { return w * h ; }
   void name() const override { cout << "Rectangle"; }

  };

  int main() {
   cout << "add(2,3) =" << add(2,3) << endl;
   cout << "add(2.5,3.5) =" << add(2.5,3.5) << endl;
   cout << "add(1,2,3) =" << add(1,2,3) << endl;

   Shape* shapes[2];
   shapes[0] = new Circle(2.0);
   shapes[1] = new Rectangle(3.0,4.0);
    
   for(int i = 0; i<2 ; i++) {
      shapes[i] ->name();
      cout << "area =" << shapes[i] ->area() <<endl;

   }
   for( int i = 0; i<2 ; i++) delete shapes[i];
   return 0;
  }
// Small project
#include<iostream>
using namespace std;
int main(){
   char op;
   double a;
   double b;
   
   cout<<"*******CALCULATOR*******"<<endl;

   cout<<"Enter the operator(/ * + -) "<<endl; 
   cin>>op;

   cout<<"Enter the first number"<<endl;
   cin>>a;

   cout<<"Enter the second number"<< endl;
   cin>>b;

   switch(op){
      case '/' :
      cout<<"result: "<<a/b;
      break;

      case '*' :
      cout<<"result: "<<a*b;
      break;

      case '+' :
      cout<<"result: "<<a+b;
      break;

      case '-' :
      cout<<"result: "<<a-b;
      break;

      default :
      cout<<"You have entered the worng operator";
   }
}
  
   #include<iostream>
   using namespace std;

   int main(){
      double temp;
      char unit;
      cout << " ****** Temperature Conversion ******\n";
      cout << " F = Fahrenheit\n";
      cout << " C = Celsius\n";
      cout << "What unit could you like to convert to: ";
      cin >> unit;
      
      if(unit == 'F'){
         
      }
   }


// number guessing game
#include<iostream>
#include<ctime>
using namespace std;
int main(){
   int num;
   int guess;
   int tries = 0;
    
   srand(time(NULL));
   num = (rand() % 100) + 1;
   cout << " **** Number Guessing game ****\n" ;
   do{
      cout << "Enter a number between 1-100\n";
      cin >> guess;
      tries++;

      if( guess > num) {
         cout << "high\n";
      }
      else if( guess < num){
         cout << "low\n";
      }
      else {
         cout << "CORRECT" << endl;
         cout << "Number of tries: " << tries ;
      }
   }while (guess != num);


   return 0;
}
 
  //Multiplication table
  #include<iostream>
  using namespace std;
  int main(){
   int n, mul;
   cout << "Enter the number to calculate its multiplication table\n";
   cin >> n;
   cout << "The multiplication table of " << n << " is: \n";
   for (int i = 1 ; i <= 10 ; i++ ){
      mul = n * i ;
      cout << n << "*"<< i << " = "<< mul << '\n';
   }
   return 0;
  }
   
    // reverse printing numbers
    #include <iostream>
    using namespace std;
    int main(){
      for( int i = 10 ; i >=0 ; i--){
         cout << i << ' ';
      }
      return 0;
    }
      
     // check prime numbers
     #include<iostream>
     using namespace std;
     int isprime (int n)
     {
      if( n <= 1){
         return 0;
      }
      for ( int i = 2 ; i<= n/2 ; i++){
         if( n % i == 0){
            return 0;
         }
      }
      return 1;
     }
     
     int main(){
      int n;
      cout << "Enter a number: \n";
      cin >> n;

      if(isprime(n) == 1){
         cout << n << " is a prime number.";
      }
      else{
         cout << n << " is not a prime number.";
      }
      return 0;
     }
//Pascal's triangle
#include <iostream>
using namespace std;
int main(){
   int rows = 5;
   for ( int i = 0 ; i< rows ; i++){
      for ( int j = 0 ; j< rows -i ; j++){
         cout << ' ';
      }
      int value = 1;
      for ( int j = 0 ; j <= i ; j++){
         cout << value << " ";
         value = value * (i-j)/(j + 1);
      }
      cout << '\n';
   }
}

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--) {
        // print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // print stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
} 
    */
   
   #include<iostream>
   int main(){
      double temp, c, k;
     std :: cout << "Enter the temperature in celsius";
     std :: cin >> c;
     std :: cout << "In Kelvin is: " << std :: endl;
     k = c + 273.15;
     std :: cout << k;

   } 
