#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void f1()=0;
};
class Derived:public Parent{
    public:
    void f1(){
        cout<<"Done"<<endl;
    }
};
int main(){
    Derived d1;
    d1.f1();
    Parent *ptr=new Derived;
    ptr->f1();
}