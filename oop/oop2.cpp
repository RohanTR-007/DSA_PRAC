#include<bits/stdc++.h>
using namespace std;
class Hooman{
    public:
    int age;
    protected:
    int height,weight;
    private:
    int level;
    public:
    int getage()
    {
        return this->age;
    }
    void setage(int age)
    {
        this->age=age;
    }
};
class Male : public Hooman{
    public:
    string color;
    void sleep()
    {
        height=90;
        cout<<"Male is sleeping"<<endl;
        cout<<"Height :"<<height<<endl;
    }
};
int main()
{
    Male m;
    m.sleep();
    // cout<<m.sleep()<<endl;
    return 0;
}