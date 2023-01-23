#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};


int main(){
    struct node *head, *temp, *end, *finsert,*linsert,*minsert;
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

    // search form a linked list:
    
    
    int target;
    cout << endl;
    cout << "Enter a value to search: " << " ";
    cin >> target;
    end = head;
    while (end)
    {
        /* code */
        if(target == end->data){
            cout << "founded value is : " << end->data;
            break;

        }
        end = end->next;
    }
    

        // insert element:
    int insert;
    cout << endl;
    cout << "Insert a value " << " ";
    cin >> insert;
    finsert = new node;
    end = head;
    while(end){
        if(insert < end->data){
            finsert->data = insert;
            finsert->next = head;
            head = finsert;
            break;
        }

// middle insert
        else if(insert > end->data && insert < end->next->data){
            minsert = new node;
            minsert->data = insert;
            minsert->next = end->next;
            end->next = minsert;
            // end->next = minsert;
            break;
        }

        else if(end->next == NULL || insert <= end->next->data){
            linsert = new node;
            linsert->data = insert;
            linsert->next = end->next;
            end->next = linsert;
            break;
        }
        end = end->next;
    }

    // output:
    end = head;
    while(end){
        cout << end->data << " ";
        end = end->next;
    }

    
    



    
}

