#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    int age;
    string name;
    string occupation;
    void setperson(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter occupation: ";
        cin>>occupation;
    }
    void showperson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Occupation: "<<occupation<<endl;
    }
    void editperson(){
        int n;
        cout<<"Which detail would you like to edit ?"<<endl;
        cout<<"Press 1 for Name, 2 for Age, 3 for Occupation: ";
        cin>>n;
        if(n==1){
            cout<<"Enter name: ";
            getline(cin,name);
        }
        if(n==2){
            cout<<"Enter age: ";
            cin>>age;
        }    
        if(n==3){
            cout<<"Enter occupation: ";
            cin>>occupation;
        }
        else{
            cout<<"Invalid input";
        }

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
        cout<<"Updated details:"<<endl;
        p1.showperson();
    }

}