#include<iostream>
using namespace std;

/* user define funciton from here */
int arrGet(int arr[], int n){
    int i,arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
        return arr[i];
    }
     
}

/* main function start from here*/
int main(){
    int size,array[10];
    cout << "Please Enter array size";
    cin >> size;
    
    cout << "The array is" << arrGet(array, size);

    return 0;
    

}