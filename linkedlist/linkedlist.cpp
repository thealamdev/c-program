#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};



int main(){
    int input;
    struct node *head, *temp, *end;
    head = new node;

    cout << "Enter first element:" << endl;
    cin >> head->data;

    cout << "Enter second element" << endl;
    cin >> input;

    temp = head;

    while (input > 0)
    {
        
        end = new node;
        end->data = input;
        temp->next = end;
        temp = temp->next;


        // decriment part or condition false part:
        cout << "Enter thired element" << endl;
        cin >> input;
    }
    
    temp->next = NULL;
    end = head;
    while(end){
        cout << end->data;
        end = end->next;
    }

}