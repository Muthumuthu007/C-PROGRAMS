#include<iostream>
using namespace std;
 int main()
 {
     int i,j,k=9,s=0,l;
       
     for(i=0;i<5;i++,k-=2,s+=1)
     {
          for(l=s;l>=0;l--)
          cout<<' ';
          for(j=k;j>0;j--)
               cout<<"*";
          cout<<endl;
     }
     for(i=0;i<5;i++,k-=2,s-=1)
     {
          for(l=s-1;l>=0;l--)
          cout<<' ';
          for(j=k;j<0;j++)
              cout<<"*";
          cout<<endl;
    }

 }
