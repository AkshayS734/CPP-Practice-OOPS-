#include<iostream>
using  namespace std;
class ok{
    private:
    int x;
    int y;
    public:
    void set(int a, int b){
        x=a;
        y=b;
    }
    int sum(){
        return x+y;
    }};
    int main(){
        ok p1;
        p1.set(3,5);
        cout<<"Sum is "<<p1.sum()<<endl;
        return 0;
    }