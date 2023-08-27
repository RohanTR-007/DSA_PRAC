#include<bits/stdc++.h>
using namespace std;
class Hero
{
    // properties
    public:
    int age;
    char level;
    char* name; 
    static int time;
    Hero()
    {
        name = new char[50];
        cout<<"Simple constructor"<<endl;
    }
    Hero(int age,int level)
    {
        this->age = age;
        this->level = level;
    }

    Hero(int age, int level,char* name)
    {
        
        this->age = age;
        this->level = level;
        strcpy(this->name,name);
    }
    Hero(Hero &tmp)
    {
        name = new char[strlen(tmp.name)+1];
        cout<<"COPY"<<endl;
        this->age=tmp.age;
        this->level=tmp.level;
        strcpy(this->name,tmp.name);
    }
    void print_age()
    {
        cout<<"Age : "<<age<<endl;
    }
    void set_age(int a)
    {
        age = a;
    }
    void set_level(char l)
    {
        level=l;
    }
    void set_name(char *name)
    {
        this->name = name;
    }
    void print()
    {
        cout<<"Age :"<<age<<" Level :"<<level<<endl;
        cout<<"Name :"<<name<<endl;
    }
    static int timr()
    {
        cout<<"Static func"<<endl;
        cout<<time<<endl;
        return 0;
    }
    ~Hero()
    {
        cout<<"Destructor called"<<endl;
    }
};

int Hero::time = 5;

int main()
{
    // cout<<sizeof(Hero)<<endl;
    // Hero h1;
    // cout << sizeof(h1) << endl;
    // Hero h1 = Hero();
    // cout<<h1.age;
    // cout<<sizeof(h1)<<endl;
    // // getter & setter for acessing private members
    // h1.print_age(); 
    // h1.set_age(90);
    // h1.print_age();
    // // Dynamic allocation
    // Hero *l = new Hero();
    // // Parameterised Constructor
    // Hero h2(12,'C'); 
    // h2.print();
    // // Copy Constructor
    // Hero h3(h2); 
    // h3.print();
    
    //Shallow Copy
    // Same address gets copied
    // Hero x1;
    // x1.set_age(9);
    // x1.set_level('O');
    // char name[6] = "Rocky";
    // x1.set_name(name);
    // Hero x2 = x1;
    // x1.name[0]='X';
    // x1.print();
    // x2.print();

    //Deep Copy
    //New Address space is allocated & Same address doesn't gets copied
    // Hero x1;
    // x1.set_age(9);
    // x1.set_level('O');
    // char name[6] = "Rocky";
    // x1.set_name(name);
    // Hero x2 = x1;
    // x1.name[0] = 'X';
    // x1.print();
    // x2.print();
    cout<<Hero::timr()<<endl;

    return 0;
}