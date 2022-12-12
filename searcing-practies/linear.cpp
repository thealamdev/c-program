#include<iostream>
using  namespace std;

int linearSearch(int n, int arr[], int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            cout << "The target value is exist and this is " << arr[i] << "and it's index is " << i;
        }
    }
}

int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter a target value";
    cin >> target;

    linearSearch(n,arr,target);

}