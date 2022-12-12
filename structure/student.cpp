#include<string>
#include<iostream>
using namespace std;

int CGPA(string name ,int id, int i, int totalMark){
    std::cout << i+1 << "st Student Name is " << name << std::endl;
    // printf("%d st Student Name is %s",i+1, name);
    cout << i+1 << "st Student Name is :" << id << endl;
    cout << i+1 << "st Student total mark is " << totalMark << endl;
    if(totalMark>=80){
        cout << i+1 << "st student CGPA is " << 4.00 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
        
    }
    else if(totalMark>=75){
        cout << i+1 << "st student CGPA is " << 3.75 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
    }

    else if(totalMark>=70){
        cout << i+1 << "st student CGPA is " << 3.50 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
    }

     else if(totalMark>=65){
        cout << i+1 << "st student CGPA is " << 3.25 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
    }

     else if(totalMark>=60){
        cout << i+1 << "st student CGPA is " << 3.00 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
    }

     else if(totalMark>=55){
        cout << i+1 << "st student CGPA is " << 2.75 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
    }

     else if(totalMark>=50){
        cout << i+1 << "st student CGPA is " << 2.50 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
    }

     else if(totalMark>=45){
        cout << i+1 << "st student CGPA is " << 2.25 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
    }
    
     else if(totalMark>=40){
        cout << i+1 << "st student CGPA is " << 2.00 << endl;
        cout << "-------------------" << i+1 << " student information" << "---------------" << endl;
    }

    else{
        cout << "The student is fail";
    }
}

struct student
{
    /* data */
    string name;
    int id;
    int quiz1;
    int quiz2;
    int attendence;
    int assignment;
    int mid;
    int final;
};


int main(){
    int n;
    cout << "Ente the number of students" << endl;
    cin >> n;
    struct student std[n];

    for(int i=0;i<n;i++){
        int totalMark;

        cout << "Enter " << i+1 << "'st student Name:";
        cin >> std[i].name;
        // scanf("%s",&std[i].name);
        // char std_name = std[i].name;
        cout << "Enter " << i+1 << "'st student id number :";
        cin >> std[i].id;

        cout << "Enter" << i+1 << "'st student first quiz number :";
        cin >> std[i].quiz1;

        cout << "Enter " << i+1 << "'st student second quiz number :";
        cin >> std[i].quiz2;

        cout << "Enter" << i+1 << "'st student attendence number :";
        cin >> std[i].attendence;

        cout << "Enter" << i+1 << "'st student assignment number :";
        cin >> std[i].assignment;

        cout << "Enter " << i+1 << "'st student mid number :";
        cin >> std[i].mid;

        cout << "Enter" << i+1 << "'st student final number :";
        cin >> std[i].final;

        if(std[i].quiz1 > std[i].quiz2){
            totalMark = std[i].mid + std[i].final + std[i].assignment + std[i].attendence + std[i].quiz1;
        }
        else{
            totalMark = std[i].mid + std[i].final + std[i].assignment + std[i].attendence + std[i].quiz2;
        }
         
        CGPA(std[i].name, std[i].id, i, totalMark);
        
    }
    

}