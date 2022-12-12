#include<iostream>
using namespace std;

int insertionSortx(int arr[], int size){
    for(int i = 1;i<size; i++){
        int temp = arr[i];
        int j = i-1;
         while (j>=0 && arr[j]>temp)
         {
            arr[j+1] = arr[j];
            j = j-1;
         }
         
         arr[j+1] = temp;
    }
    
}

int arrPrint(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout << arr[i];
    }
}



int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insertionSortx(arr,n);
    arrPrint(arr,n);

}