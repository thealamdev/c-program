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
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size-1;j++){
            if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
            printArray(arr,size);

        }
        cout << endl;
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
   

    //  printArray(arr, n);
}