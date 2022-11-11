#include<iostream>
using namespace std;

/* user define function */

/* print array function */
int arrGet (int a, int b){
     int c = a+b;
     return c;
}

/* user define function end here */

/* Main function of program */
int main(){
    int num1,num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;

    cout << "The sum of those two number is " << arrGet(num1, num2);


    return 0;
}