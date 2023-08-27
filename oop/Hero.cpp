#include<bits/stdc++.h>
using namespace std;
class Hero
{
    // properties
    public:
    int age = 21;
    char level = 'A';
    void print_age()
    {
        cout<<"Age : "<<age<<endl;
    }
    void set_age(int a)
    {
        age = a;
    }
};

int main()
{
    Hero h1 = Hero();
    // cout<<h1.age;
    cout<<sizeof(h1)<<endl;
    h1.print_age();
    h1.set_age(90);
    h1.print_age();
    return 0;
}