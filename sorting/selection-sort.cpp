#include<iostream>
using namespace std;

// printArray funtion:
int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << "[" << i << "]" << "=" << arr[i] << endl;
    }
}


int selectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int min = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    selectionSort(arr,n);
   

     printArray(arr, n);
}