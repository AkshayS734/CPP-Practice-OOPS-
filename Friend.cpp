#include<iostream>
using namespace std;
class something{
    private:
    int a,b,c;
    friend int ok(something);
};
int ok(something x){
    x.a=10;
    x.b=30;
    x.c=x.a+x.b;
    return (x.c);
}
int main(){
    something obj1;
    cout<<ok(obj1);
}