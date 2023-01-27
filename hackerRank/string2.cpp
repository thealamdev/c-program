#include<iostream>
#include<string>
using namespace std;

int main(){
    string name1;
    string name2;

    cin >> name1;
    cin >> name2;

    int length =0;
    for(int i=0;i<name1[i] != '\0'; i++){
        length++;
    }
     
    int lenght2 = 0;
       for(int i=0;i<name2[i] != '\0'; i++){
        lenght2++;
    }

    cout << length << " " << lenght2 << endl;
    cout  << name1 << name2 << endl;

    char temp1 = ' ';
    char temp2  = ' ';
    for(int i=0;i<name1[i] != '\0';i++){
        if(i==0){
            temp1 = name1[0];
        }
    }

    for(int i=0;i<name2[i] != '\0';i++){
        if(i==0){
          temp2 = name2[0];
        }
    }

    string final1;
    string final2;

    for(int i =0;i<name1[i] != '\0';i++){
        if(i==0){
            name1[i] = temp2;
        }
        final1 += name1[i];
      

    }
 
       for(int i =0;i<name2[i] != '\0';i++){
        if(i==0){
            name2[i] = temp1;
        }

        final2 += name2[i];
    }

        cout << final1 << ' '<< final2;

}


