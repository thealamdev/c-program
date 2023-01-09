#include<iostream>
using namespace std;

struct list
{
    /* data */
    int info;
    struct list *next;
};


int main(){

struct list *p,*q,*t;
    p = new list;
    cout << "Enter first element: ";
    cin >> p->info;

    q = p->next;

    

}