#include<iostream>
using namespace std;

/* User define function: */
int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout  << "[" << i << "]" << "=" << arr[i] <<endl;
    }
}

/* Linear search */
int linearSearch(int arr[],int size,int key){
    int flag = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag ++;
            if(flag > 0){
                cout << "Target value is found" << endl;
            }
        } 
    }
            if(flag == 0){
                cout << "Target value is not found" << endl;
            }
}

int main(){
    int n;
    cout << "Enter the element of array" << endl;
    cin >> n;
    int arr[n];
    cout << "the array is " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    printArray(arr,n);

    cout << "Enter the target element: " << endl;
    int key;
    cin >> key;
    linearSearch(arr,n,key);

}