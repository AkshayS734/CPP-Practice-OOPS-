#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    int age;
    string name;
    string occupation;
    string qualification;
    void setperson(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter occupation: ";
        cin>>occupation;
        cout<<"Enter qualification: ";
        cin>>qualification;
    }
    void showperson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Occupation: "<<occupation<<endl;
        cout<<"Qualification: "<<qualification<<endl;
    }
    void editperson(){
        int n;
        cout<<"Which detail would you like to edit ?"<<endl;
        cout<<"Press 1 for Name, 2 for Age, 3 for Occupation, 4 for qualification: ";
        cin>>n;
        if(n==1){
            cout<<"Enter name: ";
            getline(cin,name);
        }
        else if(n==2){
            cout<<"Enter age: ";
            cin>>age;
        }    
        else if(n==3){
            cout<<"Enter occupation: ";
            cin>>occupation;
        }
        else if(n==4){
            cout<<"Enter qualification/persuing: ";
            cin>>qualification;
        }
        else{
            cout<<"Invalid input"<<endl;
        }
        cout<<"Updated details:"<<endl;
        showperson();
    }
};
class Student:person{
        private:
        int rollno;
        char institutename[100];
        int years;
        public:
        void setstudent(){
            cout<<"Enter institute name: ";
            fflush(stdin);
            cin.getline(institutename,100);
            cout<<"Enter enrollment number: ";
            cin>>rollno;
            cout<<"Enter years: ";
            cin>>years;
        }
        void showstudent(){
            cout<<"Institute name: "<<institutename<<endl;
            cout<<"Enrollment number: "<<rollno<<endl;
            cout<<"Years: "<<years<<endl;
        }
    };
int main(){
    string decision;
    person p1;
    p1.setperson();
    p1.showperson();
    cout<<"Are above details correct: y/n: ";
    cin>>decision;
    if(decision=="n"){
        p1.editperson();
    }
    if(p1.occupation=="Student"||p1.occupation=="student"||p1.occupation=="STUDENT"){
        Student s1;
        s1.setstudent();
        cout<<"Name: "<<p1.name<<endl;
        cout<<"Age: "<<p1.age<<endl;
        cout<<"Persuing: "<<p1.qualification<<endl;
        s1.showstudent();
    }
    return 0;
}