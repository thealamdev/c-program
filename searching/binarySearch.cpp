#include<iostream>
using namespace std;

/* User Define Function */
int binarySearch(int arr[],int sizeOfArray, int key){
    int start =0;
    int end = sizeOfArray;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == key){
           return mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
         
        else{
            end = mid - 1;
        }
    }

  return -1;

    
    
}


int main(){
    /* Binary Search */
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    /* Enter target value */
    int target;
    cout << "Enter the target element " << endl;
    cin >> target;
    cout << binarySearch(arr,n,target);
}