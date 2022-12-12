#include<iostream>
using namespace std;

int total(int mid, int final){
    int total = mid + final;
    cout << "Tola number is " << total;
}

struct student
{
    /* data */
    int mid;
    int final;
};


int main(){
    int n;
    cout << "Ente a  number" << endl;
    cin >> n;
    struct student std[n];

    for(int i=1;i<=n;i++){
        cout << "Enter " << i << "'st student mid number";
        cin >> std[i].mid;
        cout << "Enter" << i << "'st student final number";
        cin >> std[i].final;

        total(std[i].mid, std[i].final);
        // cout << i << " student mid number is" << std[i].mid << endl;
        // cout << i << " student final number is" << std[i].final << endl;
    }
     

    //  for(int i=1;i<=n;i++){
           
    //  }

    
    

}