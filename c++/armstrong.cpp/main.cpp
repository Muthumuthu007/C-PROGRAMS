#include<iostream>
using namespace std;
int main()
{
    int a,num,b,result=0;
    cout<<"enter the three digit number"<<endl;
    cin>>num;
    a=num;
    while(a!=0)
    {
        b=a%10;
        result+=b*b*b;
        a/=10;
    }
    if(result==num)
    {
        cout<<num<<"is a armstrong number"<<endl;
    }
    else{
        cout<<num<<"is not a armstrong number"<<endl;
    }
}
