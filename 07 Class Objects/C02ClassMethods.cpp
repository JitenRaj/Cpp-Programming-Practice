#include<iostream>
using namespace std;

class MyClass {

    private:

    int age;
    string name;

    public:

    int myAge(int age) {
        return age;
    }

    void myName() {
        name = "Jiten";
        cout << name;
    }

    
};

int main() {
    MyClass myObj;

    myObj.myAge(21);

    cout<<myObj.myAge(21)<<" ";
    myObj.myName();

    return 0;
}