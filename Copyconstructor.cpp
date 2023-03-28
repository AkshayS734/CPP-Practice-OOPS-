#include<iostream>
using namespace std;
class wall{
    private:
    double length;
    double breadth;
    public:
    wall(double len,double bre){
        length=len;
        breadth=bre;
    }
    wall(wall&obj){
        length=obj.length;
        breadth=obj.breadth;
    }
    double area(){
        return length*breadth;
    }
};
int main(){
    double len,bre;
    cout<<"Enter length and breadth: ";
    cin>>len>>bre;
    wall obj1(len,bre);
    wall obj2(obj1);
    cout<<"Area of wall 1: "<<obj1.area()<<endl;
    cout<<"Area of wall 2: "<<obj2.area()<<endl;
}