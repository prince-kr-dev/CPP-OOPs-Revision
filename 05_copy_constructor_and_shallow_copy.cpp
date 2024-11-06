#include<iostream>
#include<string>
using namespace std;

//It is also an example of shallow copy constructor type

class Student{
    private:
        string name;
        string department;
        int roll;
    public:
        Student(string n, string d, int r){
            cout<<"I am parameterized Constructor"<<endl;
            name = n;
            department = d;
            roll = r;
        }

        //copy constructor
        Student(Student &new_Original_Object){
            cout<<"I am copy constructor"<<endl;
            this->name=new_Original_Object.name;
            this->department=new_Original_Object.department;
            this->roll=new_Original_Object.roll;
        }
        void printData(){
            cout<<"Name --> "<<name<<endl
                <<"Department --> "<<department<<endl
                <<"Roll No. --> "<<roll<<endl;
        }
};

int main(){
    Student s1("Prince", "Computer Science", 145);
    // s1.printData();

    Student s2(s1);
    s2.printData();
    return 0;
}