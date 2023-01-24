#include<iostream>
using namespace std;

struct information
{
    int age;
    string fname;
    string lname;
    int mark;
};


int main(){
    struct information info;
    cin >> info.age;
    cin >> info.fname;
    cin >> info.lname;
    cin >> info.mark;

    cout << info.age << " " << info.fname << " " << info.lname << " " << info.mark;
}