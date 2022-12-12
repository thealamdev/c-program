#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size-1;
    

    for(int i=0;i<size;i++){
        int mid = (low +high)/2;
        if(arr[mid] == target){
            cout << "Target value is " << arr[mid];
            break;
        }

        else if(arr[mid]>target){
            high = mid-1;
        }

        else{
            low = mid+1;
        }

    }
}

int printArray(int size, int arr[]){
    for(int i=0;i<size;i++){
        cout << arr[i];
    }
}
int main(){
    int n;
    cout << "Enter array size";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter a target value";
    cin >> target;
    // printArray(n,arr);
    binarySearch(arr,n,target);
     


}