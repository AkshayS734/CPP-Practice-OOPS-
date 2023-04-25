#include<iostream>
using namespace std;
class BaseClass{
    protected:
    int a,b,c;
    public:
    void marks(){
        cout<<"Enter the marks of first subject : ";
        cin>>a;
        cout<<"Enter the marks of second subject : ";
        cin>>b;
        cout<<"Enter the marks of third subject : ";
        cin>>c;
    }
};
class DerivedClass:public BaseClass{
    protected:
    int tot;
    public:
    int total(){
        tot=a+b+c;
        return tot;
    }
};
class SecondDerivedClass:public DerivedClass{
    protected:
    float avg;
    public:
    int average(){
        avg=tot/3; 
        return avg;
    }
};
int main(){
    SecondDerivedClass obj;
    obj.marks();
    cout<<"Total marks are "<<obj.total()<<endl;
    cout<<"Average is "<<obj.average();
    return 0;
}
