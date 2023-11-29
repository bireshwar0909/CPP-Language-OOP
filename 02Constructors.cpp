#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string company;
    int age;

    //A constructor is like any other method but somewhat different as it does not require any return type.
    //A constructor has the same name as of the class.
    //A constructor has to be public mostly

    Employee(string Name, string Company, int Age)
    {
        name = Name;
        company = Company;
        age = Age;
    }

    void Introduction()
{
    cout << "Name is " << name << endl;
    cout << "my age is " << age << endl;
    cout << "I work in " << company << endl;
}

};

int main()
{
    //Employee employee1 = Employee("John", "Youtube", 25);
    Employee employee1("John", "Youtube", 25);
    employee1.Introduction();
    return 0;
}