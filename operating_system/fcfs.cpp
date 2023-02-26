#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter jobs  number:";
    cin >> n;

    int job[n],arrival_time[n],service_time[n],completion[n];

    //Enter the jobs:
    cout << "Enter the jobs ( it should be in sequence)";
    for(int i=0;i<n;i++){
        cin >> job[n];
    }

    //Enter the arrivals time:
    cout << "Enter the arrivals time";
    for(int i=0;i<n;i++){
        cin >> arrival_time[n];
    }
    //Enter the service_time time:
    cout << "Enter the service time";
    for(int i=0;i<n;i++){
        cin >> service_time[n];
    }



    // completion time:
    completion[0] = 0 + service_time[0];
    
    for(int i = 1; i<n; i++){
        if(completion[i-1] <= arrival_time[i]){
            completion[i] = arrival_time[i]+ service_time[i];
            cout << completion[i] << " ";
        }
        else{
            completion[i] = completion[i-1] + service_time[i];
            cout << completion[i] << " ";
        }
    }

    






}