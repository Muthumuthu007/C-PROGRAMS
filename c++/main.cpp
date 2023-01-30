#include <iostream>
using namespace std;

class student
{
public:
        char  name[30];
        int   rollNo;
        int   total,i;
        float perc;
    int tot;
        void getData(void);
        void putData(void);
};


void student::getData(void){
   

    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks out of 200: ";
    cin >> total;
    
    perc=total/2;
}

void student::putData(void){
    cout << "Student details:\n";
    cout << "Name:"<< name <<endl<< "Roll Number:" << rollNo<<endl<< "Total:" << total<<endl << "average:" << perc<<endl;
}

int main()
{
    student std;        
    
    std.getData();
    std.putData();
    
  
}


