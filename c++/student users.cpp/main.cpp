#include<iostream>
using namespace std;

 int main(){
     int tu;
     int stu;
     int ntsu;
     int n;
     
     cout << "Enter total users:" ;
     cin >> tu;
     
     cout << "Enter student users:";
     cin >> stu;
     
     ntsu = stu / 3;
     n = ntsu + stu;
     
     
     stu = tu - n;
     
     cout << "Student users :" << stu ;
 }
