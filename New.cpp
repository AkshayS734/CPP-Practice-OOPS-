#include<iostream>
#include<string>
using namespace std;
class questions{
    private:
    string reasons;
    public:
    void setwhy(){
       cout<<"Enter the reason: ";
       getline(cin,reasons);
    }
    void getwhy(){
        cout<<"Reason was '"<<reasons<<"'"<<endl;
    }
};

int main(){
    cout<<"Hello"<<endl;
    questions person1;
    person1.setwhy();
    person1.getwhy();
    cout<<"Thanks for using";
    return 0;

}