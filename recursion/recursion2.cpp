#include<iostream>
using namespace std;

int max(int n){
    cout << n << " ."  << endl;
    if(n<5){
    max(n+1);
    max(n+2); 
    cout << n << "+" << endl;
    }
    
}

int main(){
    max(1);
}