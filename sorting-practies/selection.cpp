#include<iostream>
using namespace std;
int arrPrint(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout << arr[i];
    }
}


int selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
             
        }
        int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
    }
}
int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    selectionSort(arr, n);
    arrPrint(arr, n);
}