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

    // element search:
    int target;
    cout << "Enter a element for search" << endl;
    cin >> target;

    end = head;
    while (end->next != NULL)
    {
        if(target == end->data){
            cout << "data found" << endl;
             break;
        }
        end = end->next;
    }

    if(end->data == target){
        cout << "Data found" << endl;
    }


    // data insert:
    temp = head;
    struct node *first;
    int f;
    cout << "Enter an element in first position:";
    cin >> f;

    first = new node;
    first->data = f;
    first->next = temp;


    end = first;
    while(end){
        cout << end->data;
        end = end->next;
    }


// element insert in last position:
    struct node *last;
    int l;
    cout << "Enter an element in last position:";
    cin >> l;

    last = new node;
    last->data = l;
    // last->next = NULL;
    // end->next = last->next;

    end = first;
    
    while (end->next != NULL)
    {
        if(end->next == NULL){
          end->next = last;
        }
        end = end->next;
    }
    
 
    last->next = NULL;
    end->next = last->next;
    end = last;
    while(end){
        cout << end->data;
        end = end->next;
    }

}