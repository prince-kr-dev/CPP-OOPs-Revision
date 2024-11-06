#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
        string name;
        string modelNo;
        int year;

    public:
        Car(string name, string modelNo, int year){
            //another way to write this pointer     *(this).name;
            this->name=name;
            this->modelNo=modelNo;
            this->year=year;
        }

        void printData(){
            cout<<"Name --> "<<name<<endl
                <<"Model Number --> "<<modelNo<<endl
                <<"Year of purchasing --> "<<year<<endl;
        }    
};

int main(){
    Car c1("Toyota", "TYT-FORTUNER", 2022);
    c1.printData();
    return 0;
}