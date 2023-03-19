#include <iostream>
using namespace std;

int main(){
    int j,work_t=0,fixed_t;
    cout<<"Enter total job no : ";
    cin>>j;
    int at[j],bt[j],s_bt[j],st[j],ft[j],wt[j],tat[j];

    cout<<"Enter Arrival time and Brust time : "<<endl;
    for(int i=0;i<j;i++){
        cout<<"Enter arrival time for Job no "<<i+1<<" : ";
        cin>>at[i];
        cout<<"Enter brust time for Job no "<<i+1<<" : ";
        cin>>bt[i];
        s_bt[i]=bt[i];
    }

    cout<<"Arrival time \t"<<"Brust time "<<endl;
    for(int i=0;i<j;i++){
        cout<<"\t"<<at[i]<<"\t\t"<<bt[i]<<endl;
    }
    cout<<"Enter fixed time : ";
    cin>>fixed_t;
   // gantt chart
   int k=0,count=0;
    while(count<j&&k<j){
         if(work_t>=at[k]){
            if(bt[k]<=fixed_t){
                if(bt[k]!=0){
                cout<<work_t<<"-J"<<k+1<<"-";
                work_t+=bt[k];
                cout<<work_t;
                bt[k]=0;
                ft[k]=work_t;
                wt[k]=((ft[k])-(at[k]+s_bt[k]));
                tat[k]=ft[k]-at[k];
                count++;
                if(work_t>=at[k+1]){
                        if(k==j-1){
                                k=0;
                        }
                        else
                        k++;
                }
                else
                    k=0;
                    }
                    else if (bt[k]==0){
                        if(work_t>=at[k+1]){
                        if(k==j-1){
                                k=0;
                        }
                        else
                        k++;
                }
                else
                    k=0;
                    }

            }
            else {
                cout<<work_t<<"-J"<<k+1<<"-";
                work_t+=fixed_t;
                cout<<work_t;
                bt[k]-=fixed_t;
                if(work_t>=at[k+1]){
                    if(k==j-1){
                                k=0;
                        }
                        else
                        k++;
                }
                else
                    k=0;
                }

         }

    }

int sum_w=0,sum_tat=0;
double avg_w=0,avg_tat=0;
    cout<<endl<<"\t JOBS \t Arrival time \t Finish time \t Waiting time \t Turn around time "<<endl;
    for(int i=0;i<j;i++){
            cout<<"\t  "<<i+1<<"\t\t"<<at[i]<<"\t\t"<<ft[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
            //sum of waiting time
            sum_w+=wt[i];
            //sum of turn around time
            sum_tat+=tat[i];
    }

            avg_w=sum_w/(double)j;
            avg_tat=sum_tat/(double)j;
            cout<<"Average waiting time : "<<avg_w<<endl<<"Average turn around time : "<<avg_tat;



}