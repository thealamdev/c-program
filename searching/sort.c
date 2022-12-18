#include<stdio.h>
int main(){
    int i,j,n,a[10],temp,min;
    printf("How many elements ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }

    printf("The array is \n");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }

    // body of insertion sort
    printf("BUbble sort is \n");


    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }


 

  

    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }

     
}