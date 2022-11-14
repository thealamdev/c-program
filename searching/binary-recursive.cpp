#include<iostream>
using namespace std;


// binary search by recursive:
int binarySearch(int arr[],int size, int low, int high, int target){
    if(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]== target){
            return mid;
        }

        if(arr[mid]>target){
            binarySearch(arr,size,low, mid-1,target);
        }
        else{
            binarySearch(arr,size,mid+1,high,target);
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
    int low = 0;
    cout << binarySearch(arr,n,low,n,target);
}