#include<stdio.h>
int main()
{
    int i,j,n,temp,a[20];
    printf("How many elements");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array is\n");
    for(i=0;i<n;i++){
        printf("%d",&a[i]);
    }

    //Body of insertion sort
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 &&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Sort array