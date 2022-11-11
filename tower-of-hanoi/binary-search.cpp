#include<iostream>
using namespace std;

int binarySearch(int arr[],int toSearched, int first, int last){
    if(first>last){
        return -1;
    }

    int mid = (first+last)/2;
    if(arr[mid]== toSearched){
        return mid;
    }
    else if(arr[mid]>toSearched){
        return binarySearch(arr, toSearched,first,mid-1);
    }
    else{
        return binarySearch(arr,toSearched,mid+1,last);
    }
}



int main(){
    int arr[] = {2,3,4,7,3,2,5,7,9};
    cout << binarySearch(arr,100,0,6)<<endl;
}