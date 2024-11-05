#include<iostream>
using namespace std;

class Teacher{
    private:    //access modifiers OR access specifiers
        int age;

    public:     //access modifiers OR access specifiers

        //setter function
        void setAge(int a){
            age = a;
        }

        //getter function
        int getAge(){
            return age;
        }
};

int main(){
    Teacher t1;
    t1.setAge(20);
    int recievedAge = t1.getAge();
    cout<<"Age --> "<<recievedAge<<endl;
    return 0;
}