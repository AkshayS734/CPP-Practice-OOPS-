#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"Base class"<<endl;
    }
    void Show(){
        cout<<"Base class 1"<<endl;
    }
};
class derived:public base{
    public:
    void print(){
        cout<<"Derived class"<<endl;
    }
    void Show(){
        cout<<"Derived class 1"<<endl;
    }
};
int main(){
    base *ptr;
    derived d;
    ptr=&d;
    ptr->print();
    ptr->Show();
}