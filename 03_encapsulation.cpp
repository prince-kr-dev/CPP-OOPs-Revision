#include<iostream>
#include<string>
using namespace std;

class Account{
    private:
        //data hiding
        string password;
        double balance;

    public:
        string name;
        string address;   

        void setPassword(string p){
            password = p;
        } 
        string getPassword(){
            return password;
        }
};

int main(){
    Account a1;
    a1.setPassword("prince@897#54");
    cout<<a1.getPassword();
    return 0;
}