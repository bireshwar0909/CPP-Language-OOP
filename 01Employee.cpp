#include <iostream>
using namespace std;

class Employee
{
    //everything in c++ inside a class is private by default
    //so unless we dont mention public it will be private
    //in c++ we have three access modifiers, private, public and protected.
public:
    string name;
    string company;
    int age;

    void introduceYourSelf()
    { //we dont need any arguments here as they are inside the same block.
        cout << "Name is " << name << endl;
        cout << "my age is " << age << endl;
        cout << "I work in " << company << endl;
    }
};

int main()
{

    Employee employee1;
    employee1.name = "John";
    employee1.company = "Youtube Community";
    employee1.age = 25;
    employee1.introduceYourSelf();

    return 0;
}