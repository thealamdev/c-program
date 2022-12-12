#include<iostream>
using namespace std;

//Bubble sort:

int bubbleSort(int size,int arr[]){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
} 

// Print the array:
int printArray(int size, int arr[]){
for(int i=0;i<size;i++){
    cout << arr[i];
}
}

int main(){
    int n;
    cout << "Enter the array size:";
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bubbleSort(n,arr);
    printArray(n,arr);
}
