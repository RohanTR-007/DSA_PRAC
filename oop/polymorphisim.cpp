#include<bits/stdc++.h>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

double add(int a, double b)
{
    cout<<"In double"<<endl;
    return (a + b)*1.000;
}


class Complex
{
    public:
    int img,real;
    Complex(int a=0,int b=0)
    {
        real=a;
        img=b;
    }
    Complex operator +(Complex &c)
    {
        Complex a;
        a.real=real+c.real;
        a.img=img+c.img;
        return a;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};
int main()
{
    // cout<<add(2,3.0);
    Complex c1(3,4),c2(4,5);
    (c1+c2).print();
    return 0;
}