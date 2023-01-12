#include<iostream>
using namespace std;

struct node
{
    int value;
    struct node *next; 
};

int main(){
    struct node *head, *middle, *last;
    int element;

    head = new node;
    cout << "Enter the first element:" << endl;
    cin >> head->value;

    cout <<  "Enter the second element:" << endl;
    cin >> element;

    middle = head;
    // cout << head->value;
    // cout << middle->value;

    //  cout << head->next;
    // cout << middle->next;

    while (element > 0)
    {
        last = new node;
        last->value = element;
         
        middle->next = last;
        cout << "last node adress : " << last << endl;
        cout << "middle next : "<< middle->next << endl;
        middle = middle->next;
        cout << "middle node address : " << middle << endl;
        cout << "last next : "  << last->next << endl;
         

        cout << "Enter thired elemet:" << endl;
        cin >> element;
    }

    middle->next = NULL;
    last = head;

    while (last)
    {
        /* code */
        cout << last->value;
        last = last->next;
    }
    
    


}
