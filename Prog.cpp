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
        if(n==2){
            cout<<"Enter age: ";
            cin>>age;
        }    
        if(n==3){
            cout<<"Enter occupation: ";
            cin>>occupation;
        }
        if(n==4){
            cout<<"Enter qualification: ";
            cin>>qualification;
        }
        else{
            cout<<"Invalid input"<<endl;
        }
        cout<<"Updated details:"<<endl;
        showperson();
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
    return 0;
}