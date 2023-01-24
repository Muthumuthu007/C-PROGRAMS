//the number is said to be a perfect number when its equal to the sum of all its positive diviser except itself
#include <iostream>
using namespace  std;
int main()
{
    int n,i=1,sum=0;
    cout<<"enter the number:";
    cin>>n;
    while (i<n)
    {
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    if(sum==n)
    {
        cout<<i<<"is perfect number:";
    }
    else{
        cout<<i<<"is not a perfect number";
    }
}
