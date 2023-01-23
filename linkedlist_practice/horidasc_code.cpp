#include<stdio.h>
#include<iostream>
using namespace std;

struct list
{
    int info;
    struct list *next;
};

int main()
{
    struct list *p,*q,*t;

    int x,pos,count,r;

    p = new list;

    printf("\n1. Enter The first Element: ");
    scanf("%d",&p->info);

    printf("\n2. Enter the next value: ");
    scanf("%d",&x);

    q=p;

    while (x>0)
    {
        t = new list;

        t->info = x;

        q->next = t;

        q = q->next;

        printf("\n3. Enter the next value: ");
        scanf("%d",&x);
    }

    q->next = NULL;

    t=p;

    while(t)
    {
        printf("%d",t->info);
        t=t->next;
    }
  


    // search a value by position:
 
}