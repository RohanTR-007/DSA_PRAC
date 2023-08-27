#include<bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    Animal()
    {
        cout << "Animal - constructor" << endl;
    }
    Animal(int age)
    {
        cout << "Animal - P - constructor" << endl;
        this->age=age;
    }
    void speak()
    {
        cout<<"Animal speaking"<<endl;
    }
};

class Dog : public Animal
{
    public:
    Dog():Animal(9)
    {
        cout<<"Dog - constructor"<<endl;
        cout<<this->age<<endl;
    }
    Dog(int x)
    {
        cout<<"value : "<<x<<endl;
    }
    void speak()
    {
        cout<<"Dog bow-bow"<<endl;
    }
};



class A
{
public:
    void call()
    {
        cout << "In class A" << endl;
    }
};

class B
{
    public:
    void call()
    {
        cout<<"In class B"<<endl;
    }
};

class C:public A,public B{
    //Class C is inherited by A & B which has same functions call
};
int main()
{
    Dog d1;
    d1.speak();
    C obj;
    obj.A::call();
    return 0;
}

// Refer this : Constructor & destructor order in in-heritance , how to call parameterized constructor of base claa from derived class
// https://www.geeksforgeeks.org/order-constructor-destructor-call-c/
