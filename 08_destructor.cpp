#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        string department;
        int* rollPtr;

        Student(string name, string department, int roll){
            this->name = name;
            this->department = department;
            rollPtr = new int;
            *rollPtr = roll;
        }

        //copy constructor
        Student(Student &new_Original_Object){
            this->name = new_Original_Object.name;
            this->department = new_Original_Object.department;

            rollPtr = new int;
            *rollPtr = *new_Original_Object.rollPtr;
            rollPtr = new_Original_Object.rollPtr;
        }

        ~Student(){
            cout<<"I am destructor, i called automatically when an object goes out of scope"<<endl;
            delete rollPtr;
        }
        void printData(){
            cout<<"Name --> "<<name<<endl
                <<"Department --> "<<department<<endl
                <<"Roll No. --> "<<*rollPtr<<endl;
        }
};

int main(){
    Student s1("Prince Kumar", "Computer Science", 145);
    s1.printData();
    return 0;
}