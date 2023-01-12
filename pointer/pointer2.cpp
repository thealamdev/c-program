#include<iostream>
using namespace std;

int main(){
    int num1=4;
    int num2=6;

    int *p1,*p2;

    p1 = &num1;
    p2 = &num2;

    cout <<  num1 << endl;
    cout << num2 <<  endl;

    cout <<  *p1 << endl;
    cout << *p2 <<  endl;


}