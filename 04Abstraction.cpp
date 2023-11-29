//Abstraction means hiding complex things behind a procedure that makes those things look simple.
#include <iostream>
using namespace std;

class abstractEmployee{
    virtual void askForPromotion()=0;
    //by using virtual and putting =0 we are making the function obligatory
    //in order to make a function purly obligtory we have to make it a virtual function

    //by doing that we have made the class a abstract class.
};

//in order to make the employee class implement the abstractEmployee we have to make use of ":"
//  and mention the name of the Abstract Class.
class Employee:abstractEmployee {
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

    void askForPromotion(){
        if (Age>40){
            cout << Name << " is eligible for promotion!" << endl; 
        } else {cout << Name << " is not eligibe for promotion" << endl;}
    };
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
    employee1.askForPromotion();
    employee2.askForPromotion();
    return 0;
}


