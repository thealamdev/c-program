#include<iostream>
#include<stack>

using namespace std;


struct  student_info
{
    /* data */
    int id;
    int mid;
    int final;
};

int total(int mid, int final){
    int  total = mid + final;
    cout << "total mark is " << total;
}


int main(){
    int std_number;
    cout << "Enter student Number";
    cin >> std_number;

    for(int i=0;i<std_number;i++){
        student_info std;
        cin >> std.id;
        cin >> std.mid;
        cin >> std.final;

        total(std.mid, std.final);

    }
}
