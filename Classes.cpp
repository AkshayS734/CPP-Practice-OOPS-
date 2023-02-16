#include <iostream>
using namespace std;
class student
{ public:
    int rollno;
    string name;
    float marks;
    class CR
    {public:
    int enrollmentno;
    int rollno;
    string name;
    float marks;
    void getcr(){
        cout<<"Enrollment no. of cr is  "<<enrollmentno<<endl;
        cout<<"Rollno. is "<<rollno<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Marks = "<<marks<<endl;
    }};
    void getstudent(){
        cout<<"Rollno. is "<<rollno<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Marks = "<<marks<<endl;
    }};
int main(){
    student S1;
    S1.rollno=876;
    S1.name="Akshay Shukla";
    S1.marks=87.8;
    S1.getstudent();
    student::CR S2;
    S2.rollno=879;
    S2.name="XYZ";
    S2.marks=98;
    S2.enrollmentno=69;
    S2.getcr();
    return 0;}