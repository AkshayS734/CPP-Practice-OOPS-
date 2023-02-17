#include<iostream>
using namespace std;
class st{
    public:
    static int x;
    static void sum(int x){
        cout<<"Sum is "<<x+x<<endl;
    }

};
int st::x;
int main(){
    st s1;
    st::sum(5);
}