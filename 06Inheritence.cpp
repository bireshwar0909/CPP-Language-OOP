//The idea of inheritence is the following:
//  There is that base class known as the super class or parent class and then there is that derived class or the children class
//  or the sub class. The parent class has some certain attributes or behavior and then if the sub-class decides to inherit from
//  from the super class then the child-class is going to obtain all the members of the base class.
// The base class can also have their own methods and attributes.

#include <iostream>
using namespace std;

class abstractEmployee
{
    virtual void askForPromotion() = 0;
};

class Employee : abstractEmployee
{
private:
    string Name;
    string Company;

protected:
    int Age;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void Introduction()
    {
        cout << "Name is " << Name << endl;
        cout << "my age is " << Age << endl;
        cout << "I work in " << Company << endl;
    }

    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age < 18)
        {
            cout << "You cant work here" << endl;
        }
        else
        {
            Age = age;
        }
    }
    int getAge()
    {
        return Age;
    }

    void askForPromotion()
    {
        if (Age > 40)
        {
            cout << Name << " is eligible for promotion!" << endl;
        }
        else
        {
            cout << Name << " is not eligibe for promotion" << endl;
        }
    };
};

class Developer : public Employee
{ //dont forget to mention public
public:
    string favProgrammingLanguage;
    //creating a contructor
    Developer(string name, string company, int age, string FavProgrammingLanguage)
        : Employee(name, company, age)
    {   //what we have done here is that we have created a new contructor for the Developer Class
        //  but the Employee Class already had a constructor. Since Developer class is inheriting
        //  from the Employee class, with help of ":" we passed the required information back to the
        //  parent class.
        favProgrammingLanguage = FavProgrammingLanguage;
    }

    void fixBugs()
    {
        cout << getName() << " is fixing bugs in " << favProgrammingLanguage << endl;
        cout << getName() << " is having an age of " << Age << endl;
    }
};

int main()
{

    Developer developer1 = Developer("Tom", "Google", 40, "Python");
    developer1.fixBugs();
    developer1.askForPromotion();
    return 0;
}
