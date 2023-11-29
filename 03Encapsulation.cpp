#include <iostream>
using namespace std;

//The idea of encapsulation is bundling and tieing together data so that they operate in a perticular class.
//We do this in order to prevent anyone to anything outside our class to access that perticular information,
//  modify it or to change it.
//Encapsulation helps to create our own way for the data modification to happen through public function
//  that the other class can invoke and interact with the data.

class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void Introduction(){
        cout << "Name is " << Name << endl;
        cout << "my age is " << Age << endl;
        cout << "I work in " << Company << endl;
    }

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    
    void setAge(int age){
        if (age < 18){
            cout << "You cant work here" << endl;
        } else {Age = age;}
    }
    int getAge(){
        return Age;
    }
};

int main()
{
    Employee employee1 = Employee("John", "Youtube", 25);
    Employee employee2 = Employee("Rajesh", "Microsoft", 30);
    employee1.Introduction();
    employee2.Introduction();
    cout << employee1.getAge() << endl;
    employee1.setAge(34);
    cout << employee1.getAge() << endl;
    return 0;
}


