#include<iostream>
#include<string>
using namespace std;

//Non Parameterized constructor
class Teacher{
    public:
        Teacher(){
            cout<<"1. I am non parameterized Constructor"<<endl;
        }
};

//Parameterized constructor
class Student{
    private:
        string name;
        string department;
        int roll;
    public:
        Student(string n, string d, int r){
            cout<<"2. I am parameterized Constructor"<<endl;
            name = n;
            department = d;
            roll = r;
        }

        void printData(){
            cout<<"Name --> "<<name<<endl
                <<"Department --> "<<department<<endl
                <<"Roll No. --> "<<roll<<endl;
        }
};

int main(){
    Teacher t1;
    Student s1("Prince", "Computer Science", 145);
    s1.printData();
    return 0;
}