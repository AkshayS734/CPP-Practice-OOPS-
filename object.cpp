#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(int r,int i){
        real=r;
        imag=i;
    }
    complex operator +(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void showcomplex(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
    int r1,i1,r2,i2;
    cout<<"Enter real and imaginary parts of first complex number: ";
    cin>>r1>>i1;
    cout<<"Enter real and imaginary parts of second complex number: ";
    cin>>r2>>i2;
    complex c1(r1+r2,i1+i2);
    cout<<"Sum of these complex numbers is : ";
    c1.showcomplex();
    return 0;

}