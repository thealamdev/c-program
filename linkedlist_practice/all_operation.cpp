#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};


int main(){
    struct node *head, *temp, *end;
    int input;
    head = new node;
    cout << "Enter first value of list: " << " ";
    cin >> head->data;

    cout << "Ente second value of list : " << " ";
    cin >> input;



    cout << head->data << input;


    temp = head;

    while (input > 0)
    {
        end = new node;
        end->data = input;
        temp->next = end;
        temp = temp->next;
        

        cout << "Enter next value of list : " << " ";
        cin >> input;
    }


    temp->next = NULL;
    end = head;

    while (end)
    {
        cout << end->data << "  ";
        end = end->next;
    }

    
    



    
}

