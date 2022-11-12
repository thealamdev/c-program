#include<iostream>
using namespace std;


int main(){
    int arr[20] ={1,2,3,4,7};

    int target = 3;

    for(int i=0;i<5;i++){
        if(arr[i]==target){
            int pos = i;
            
            for(int i = pos;i<5;i++){
                arr[i] = arr[i+1];
                 
            }
        }
    }

    // print the new array:
    for(int i=0;i<4;i++){
     cout << arr[i];
    }             
}