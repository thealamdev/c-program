#include<iostream>
using namespace std;


// binary search by recursive:
 int arrayInsert(int arr[],int size, int pos, int target){
     for(int i=size;i>=pos;i--){
        arr[i+1] = arr[i];
        
        
     }
      arr[pos] =target;

    for(int i=0;i<size;i=i+1){
        cout << arr[i];
    }

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
    int pos;
    cout << "Enter the target position:";
    cin >> pos;
    cout << "Enter the target element " << endl;
    cin >> target;
    cout << arrayInsert(arr,n,pos,target);
}