#include<iostream>
using namespace std;

// printArray funtion:
int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << "[" << i << "]" << "=" << arr[i] << endl;
    }
}

// swap function:



int bubbleSort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-j;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    // array input:
    int n;
    cout << "Enter array input" << endl;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    
    // bubble sort:
    bubbleSort(arr,n);
   

     printArray(arr, n);
}