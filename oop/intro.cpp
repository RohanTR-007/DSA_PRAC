#include<bits/stdc++.h>
using namespace std;
// #include "Hero.cpp"
class Hero
{
    //properties
    private: //only inside class
    int health=40;
    public: //outside class
    int age=21;

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health=h;
    }
};

//For empty call obj will get 1byte

int main()
{
    //obj creation
    Hero obj;;
    cout<<"size of Class - Hero = "<<sizeof(obj)<<endl;
    cout<<"Age : "<<obj.age<<endl;
    obj.setHealth(9);
    cout<< "Health : " << obj.getHealth() << endl;
    return 0;
}