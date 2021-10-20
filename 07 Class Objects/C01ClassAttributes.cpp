#include<iostream>
using namespace std;

class MyClass {
    public:
    int age;
    string name;
};

int main(){
    MyClass myObj;
    myObj.age = 21;
    myObj.name = "Jiten";

    cout << myObj.age << " " << myObj.name << endl;
    
    return 0;
}