#include<iostream>
using namespace std;
struct list{
    int info;
    list* link;
};
int main(){
    list *head,*temp1,*temp2,*insert_v,*insert_v_af;
    int x,y;
    head=new list;
    cout<<"Enter first value : ";
    cin>>head->info;
    /*cout<<"Enter next value : ";
    cin>>x;*/
    temp1=head;
    int user=1;
    while(user==1){//input linked list
        cout<<"Enter next value : ";
        cin>>x;
        temp2=new list;
        temp2->info=x;
        temp1->link=temp2;
        temp1=temp1->link;
        cout<<"Enter 1 if you need to running the linked list else enter any key to exit from linked list : ";
        cin>>user;
    }

    temp1->link=NULL;
    temp1=head;
    while(temp1->link!=NULL){//output linked list
            cout<<" "<<temp1->info;
            temp1=temp1->link;

    }
    cout<<" "<<temp1->info;
    int s,i=0;
    cout<<endl<<"Enter search value : ";// linked list searching
    cin>>s;
    temp1=head;
    while(temp1->link!=NULL){
        if(temp1->info==s){
            i++;
            temp1=temp1->link;
        }
        else
            temp1=temp1->link;

    }
    if(temp1->info==s){
        i++;
    }

    if(i>0){
        cout<<endl<<"found "<<i<<" times .";
    }
    else{
        cout<<"not found";
    }


    temp1=head;//update value after value
    int pre_value;
    cout<<"Enter prevesais value for insert value : ";
    cin>>pre_value;
    while(temp1->link!=NULL){
        if(temp1->info==pre_value){
            cout<<endl<<"Enter new list info value :";
            cin>>x;
            insert_v=new list;
            insert_v->info=x;
            insert_v->link=temp1->link;
            temp1->link=insert_v;
            break;
    }
    else
        temp1=temp1->link;

}
    if(temp1->info==pre_value){
        cout<<endl<<"Enter new list info value :";
        cin>>x;
        insert_v=new list;
        insert_v->info=x;
        temp1->link=insert_v;
        insert_v->link=NULL;
    }

temp1=head;
while(temp1->link!=NULL){//print output
    cout<<" "<<temp1->info;
    temp1=temp1->link;
}
cout<<" "<<temp1->info;



temp1=head;//update value after value
    int pr_value;
    cout<<"Enter before value for insert value : ";
    cin>>pr_value;

    if(temp1->info==pr_value){
            cout<<endl<<"Enter new list info value :";
            cin>>x;
            insert_v_af=new list;
            insert_v_af->info=x;
            insert_v_af->link=temp1;
            //temp1=insert_v_af;
           // temp1->link=insert_v_af;

           temp1=insert_v_af;
            head=temp1;
while(temp1->link!=NULL){//print output
    cout<<" "<<temp1->info;
    temp1=temp1->link;
}
cout<<" "<<temp1->info;
    }
    else{

    while(temp1->link!=NULL){
        if(temp1->link->info==pr_value){
            cout<<endl<<"Enter new list info value :";
            cin>>x;
            insert_v_af=new list;
            insert_v_af->info=x;
            insert_v_af->link=temp1->link;
            temp1->link=insert_v_af;

            temp1=head;
            head=temp1;
while(temp1->link!=NULL){//print output
    cout<<" "<<temp1->info;
    temp1=temp1->link;
}
cout<<" "<<temp1->info;



            break;
    }
    else
        temp1=temp1->link;
    }
    }/*
    else
        temp1=temp1->link;

}
    if(temp1->info==pre_value){
        cout<<endl<<"Enter new list info value :";
        cin>>x;
        insert_v_af=new list;
        insert_v_af->info=x;
        temp1->link=insert_v_af;
        insert_v_af->link=NULL;
    }*/

/*temp1=insert_v_af;
while(temp1->link!=NULL){
    cout<<" "<<temp1->info;
    temp1=temp1->link;
}
cout<<" "<<temp1->info;*/

temp1=head;//insert new node position wise
    int p;
    cout<<"Enter position : ";
    cin>>p;
    i=0;
    while(temp1->link!=NULL){
        ++i;
        if(i==p){
            list *p_n;
            p_n=new list;
            cout<<"Enter new node info : ";
            cin>>p_n->info;
            p_n->link=temp1->link;
            temp1->link=p_n;
            break;
        }
        else{
            temp1=temp1->link;
        }
    }
    ++i;
    if(temp1->link==NULL&&i==p){ //if position is last then
            list *p_n;
            p_n=new list;
            cout<<"Enter new node info : ";
            cin>>p_n->info;
            p_n->link=temp1->link;
            temp1->link=p_n;

    }

    temp1=head;//print output
    while(temp1->link!=NULL){
        cout<<" "<<temp1->info;
        temp1=temp1->link;
    }
    cout<<" "<<temp1->info;
cout<<endl<<"Delete linked list ";
temp1=head;//delete node using node position
    int d_p;
    cout<<"Enter position : ";
    cin>>d_p;
    i=1;
    if(d_p==i){
        temp1=temp1->link;
        while(temp1->link!=NULL){
            cout<<" "<<temp1->info;
            temp1=temp1->link;
        }
        cout<<" "<<temp1->info;
    }
    else{
    while(temp1->link->link!=NULL){
        ++i;
        if(i==d_p){
                temp1->link=temp1->link->link;
                temp1=head;
            while(temp1->link!=NULL){
            cout<<" "<<temp1->info;
            temp1=temp1->link;
        }
        cout<<" "<<temp1->info;
        break;

        }
        temp1=temp1->link;



    }
    ++i;
        if(i==d_p){
            temp1->link=NULL;
            temp1=head;
            while(temp1->link!=NULL){
            cout<<" "<<temp1->info;
            temp1=temp1->link;
        }
        cout<<" "<<temp1->info;
        }
    }

    temp1=head;//insert node in sorted list
    list *sort_n;
    sort_n=new list;
    cout<<endl<<"Enter value for new node in sorted linked list : ";
    cin>>sort_n->info;
    if(temp1->info>sort_n->info){
        sort_n->link=temp1;
        head=sort_n;

    }
    //temp1=head;
    else if(temp1->info<=sort_n->info){
    do{


    if((temp1->info<=sort_n->info)&&(temp1->link->info>=sort_n->info)){
        sort_n->link=temp1->link;
        temp1->link=sort_n;
        break;
    }

    else{
        temp1=temp1->link;

}
    }

    while(temp1->link!=NULL);
   // cout<<"* "<<temp1->info;
   // cout<<" "<<sort_n->info;
    if((temp1->link==NULL)&&(temp1->info<sort_n->info)){
        temp1->link=sort_n;
        sort_n->link=NULL;
    }
    /**/
    }
    /*
    if(temp1->info<=sort_n->info&&temp1->link->info>=sort_n->info){
        sort_n->link=temp1->link;
        temp1->link=sort_n;
        head=temp1;
        while(temp1->link!=NULL){
        cout<<" "<<temp1->info;
        temp1=temp1->link;
    }
    cout<<" "<<temp1->info;


    }
    while(temp1->link!=NULL){
            cout<<" "<<temp1->info;-
            temp1=temp1->link;
        }
        cout<<" "<<temp1->info;

        */

    temp1=head;
    while(temp1->link!=NULL){
        cout<<" "<<temp1->info;
        temp1=temp1->link;
    }
    cout<<" "<<temp1->info;
}