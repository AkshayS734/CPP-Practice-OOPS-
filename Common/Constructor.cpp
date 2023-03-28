
#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"Welcome!"<<endl;
    }
    ~demo(){
        cout<<"Bye";
    }
};
int main(){
    demo obj1;
}