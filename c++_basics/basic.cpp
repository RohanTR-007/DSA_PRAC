#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Conversion
    // 1. int to string
    // Using to_string() function accepts a number(which can be any data type like (int,float,double,long)) 
    // and returns the number in the desired string. 

    int num=235453;
    float f1=429490.34324;
    double d1=7493.8309432432;
    long l1=3943284;
    long long l2=93493423082;
    string sInt = to_string(num),sFloat=to_string(f1),sDouble=to_string(l1),sLong=to_string(l1),sLLong=to_string(l2);
    cout<<sInt<<" "<<sFloat<<" "<<sDouble<<" "<<sLong<<" "<<sLLong<<endl;

    // 2. string to int
    // Using stoi() function accepts a string as an argument and returns number(int,double,float,long)
    // stoi() function stops traversing the string when it encounters a non-integer character or a white space character.
    // stoi() exits => if first character is non-integer
    string s1="39493";
    string s2="489302 dkasj";
    string s3="93489.040342";

    int myint1=stoi(s1);
    int myint2=stoi(s2);
    double myx1=stoi(s3);
    
    cout<<myint1<<" "<<myint2<<" "<<myx1<<endl; 

    //for-each loop
    // for(data_type var_name: container_name)
    // {

    // }
    for(auto s:s1)
    {
        cout<<s<<" ";
    }

    return 0;
}