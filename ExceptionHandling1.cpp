#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
try{
    cout<<"Not yet"<<endl;
    if(x>1){
        throw x;
    }
}
catch(int x){
    cout<<"Exception caught"<<endl;
    cout<<"Input "<<x<<" is greater than 1"<<endl;
}
cout<<"Ok!"<<endl;
}