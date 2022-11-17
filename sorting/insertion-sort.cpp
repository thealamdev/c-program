#include<iostream>
using namespace std;

// PrintArray function:
int printArray(int  arr[], int size){
    for(int i=0;i<size;i++){
        cout << "[" << i << "]" "=" << arr[i] << endl;
    }
}

int insertionSort(int arr[],int size){
    for(int i=1;i<size-1;i++){
        int temp = arr[i];
        int j = i-1;
        while (j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
        
    }
}

int main(){
    // array input:
    int n;
    cout << "Enter array size" << endl;
    cin >> n;
    int arr[n];
    
    for(int i = 0;i <n;i++){
        cin >> arr[i];
    }

    // PrintArray function:
    // printArray(arr,n);
    // Insertion sort function:
    insertionSort(arr,n);
    printArray(arr,n);
    
}