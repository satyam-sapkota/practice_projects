//Calculator in CLI
#include<iostream>
using namespace std;
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b); 

int main(){
    char op;
    double a,b;

    cout << "************\n";
    cout << "C++ Calculator\n";
    cout << "************\n";

    cout << "Enter operator to perform the operation(+,-,*,/):";
    cin >> op;

    cout << "Enter two numbers:\n";
    cin >> a >> b;

     cout << "result:" << a << op << b << "=";

    switch(op){
        case '+': cout <<  add(a,b) << endl;
        break; 

        case '-': cout << subtract(a,b) << endl;
        break;

        case '*': cout <<  multiply(a,b) << endl;
        break;

        case '/': if(b == 0){
            cout << "Divsion by zero not possible\n";
        }else{
         cout << divide(a,b) << endl;
        }
        break;

        default:cout << "Invalid sign. Please use(+,-,*,/)";
        break;
    }
    

    return 0;
}
double add(double a, double b){
    return a + b;
}
double subtract(double a, double b){
    return a - b;
}
double multiply(double a, double b){
    return a * b;
}
double divide(double a, double b){
    return a / b;
} 
