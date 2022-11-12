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
            flag++;
            cout << "Target element " << t << " is found";
            break;
        }

        else{
          if(flag==0){
           cout << "Target element " << t << " is not found";
           break;
          }
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


}


