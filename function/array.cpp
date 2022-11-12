#include<iostream>
using namespace std;


// print array:
int printArray(int arr[], int sizeOfArray){
    for(int i=0;i<sizeOfArray;i++){
        cout << "[" << i << "]" << "=" <<  arr[i] << endl;
    }
}

// search a target value function:
int SearchArray(int arr[], int sizeOfArray, int t){
    int flag = 0;
    for(int i=0;i<sizeOfArray;i++){
        if(arr[i]==t){
            flag ++;
            if(flag > 0 ){
               cout << "The target value " << t << " is found" << endl;
            }
        }   
    }
    if(flag == 0){
        cout << "The target value " << t << " is not found" << endl;
    }
}


// Delete an element form array function:
int DeleteElement(int arr[], int sizeOfArray,int DeleteElement){
    int count=0;
    for(int i=0;i<sizeOfArray;i++){
        if(arr[i]==DeleteElement){
            count ++;
            int position = i;
            for(int i = position;i<sizeOfArray;i++){
                arr[i] = arr[i+1];
            }
        }
    }

    // print new array:
    if(count > 0){
        cout << "After deleting element new array is: " << endl;
        for(int i=0;i<sizeOfArray-1;i++){
        cout << "[" << i << "]" << "=" <<  arr[i] << endl;
        }
    }
    else{
        cout << "Deleted element is not found and old array is " << endl;
        for(int i=0;i<sizeOfArray;i++){
        cout << "[" << i << "]" << "=" <<  arr[i] << endl;
        }
    }
     
}



int main(){

    // array input:
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    printArray(arr,size);

    // Search for a value:
    int target;
    cout << "Enter a target value to search in array:" << endl;
    cin >> target;
    SearchArray(arr,size,target);


    // Delete an elemet from array:
    int element;
    cout << "Enter  an element to delete from array: " << endl;
    cin >> element;
    DeleteElement(arr,size,element);


}


