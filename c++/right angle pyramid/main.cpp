#include<iostream>
using namespace std;

int main()
{
    int row = 5,i,j;
 
    for(i=0;i<row;i++)
{
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
