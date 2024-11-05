#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    //properties OR attributes
    int id;
    string name;
    string department;
    string subject;
    double salary;

    //methods OR member functins
    void printDetails(){
        
    }
};

int main(){
    Teacher t1; //object
    t1.id = 1234;
    t1.name = "Prince";
    t1.department = "Computer Science";
    t1.subject = "DBMS";
    t1.salary = 20929.90;

    cout<<"ID --> "<<t1.id<<endl
        <<"Name --> "<<t1.name<<endl
        <<"Department --> "<<t1.department<<endl
        <<"Subject --> "<<t1.subject<<endl
        <<"Salary --> "<<t1.salary<<endl;
    return 0;
}