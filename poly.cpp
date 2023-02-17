#include<iostream>
using namespace std;
class oj{
    public:
    void multiply(int a,int b){
        cout<<"Multiplication is "<<a*b<<endl;
    }
    void multiply(double x,double y){
        cout<<"Result is "<<x*y<<endl;
    }
};
int main(){
    oj s1;
    s1.multiply(5,8);
    s1.multiply(5.88,7.66);
    return 0;
}