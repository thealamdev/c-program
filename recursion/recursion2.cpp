#include<iostream>
using namespace std;

int max(int n){
    cout << n << " ."  << endl;
    if(n<6){
    max(n+1);
    max(n+2); 
   
    }
    
}

int main(){
    max(1);
}