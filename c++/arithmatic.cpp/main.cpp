#include<iostream>
using namespace std;
int main()
{
    char op;
    int num1,num2;
    cout<<"enter the operator either + or - or * or /";
    cin>>op;
    cout<<"enter the numbers:";
    cin>>num1>>num2;
    switch (op)
    {
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        default:
            cout<<"enter the correct operator";
            break;
    }
}
