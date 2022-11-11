#include<iostream>
using namespace std;


void towerOfHanoi(int start, int end, char source, char aux, char destination){
    if(start>end){
        return;
    }

    towerOfHanoi(start,end-1,source , destination, aux);
    cout << "move disk "<< end <<" from " << source <<  " to " << destination <<endl;
    towerOfHanoi(start,end-1,aux,source,destination);
}
int main(){
    towerOfHanoi(1,6,'A','B','C');
}