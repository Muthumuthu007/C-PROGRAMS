#include <iostream>
using namespace std;
int main()
{
    int age;

    cout<<"enter the age"<<endl;
    cin>>age;
if (age>=18)
    {
        cout<<"you are elibible for voting:"<<endl;
        
    }
    else if (age<=0)
    {
        cout<<"age cannot be negative:"<<endl;
        
    }
    else if(age<18)
    {
        cout<<"not eligible for voting"<<endl;
    }
    return 0;
}
 
