//Polymorphism means many forms. It is mostly used when a parent class reference is used to refer to a object of a child class.

#include <iostream>
using namespace std;

class abstractEmployee{
    virtual void askForPromotion()=0;
};

class Employee:abstractEmployee {
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

    //polymorphism
    virtual void work(){
    cout << getName() << " is checking email, task backlog, performing tasks" << endl;
    }
};

class Developer:public Employee { 
    public:
    string favProgrammingLanguage;
    Developer(string name, string company, int age, string FavProgrammingLanguage)
    :Employee(name, company, age){
        favProgrammingLanguage = FavProgrammingLanguage;
    }

    void fixBugs(){
        cout << getName() << " is fixing bugs in " << favProgrammingLanguage << endl;
        cout << getName() << " is having an age of " << Age << endl;
    }

    //polymorphism
    void work(){
    cout << getName() << " is coding" << endl;
    }

};

class Teacher: Employee{
    public:
    string subjectName;
    Teacher(string name, string company, int age, string SubjectName)
    :Employee(name, company, age){
        subjectName = SubjectName;
    }
    //polymorphism
    void work(){
    cout << getName() << " is teaching" << endl;
    }
};

int main()
{
    
    Developer developer1 = Developer("Tom", "Google", 40, "Python");
    Teacher teacher1 = Teacher("Max", "SSU", 45, "Physics");

    developer1.work();
    teacher1.work();

    Employee *e = &developer1;
    e -> work(); //At first it print the employee version but to print the correct version,
                 // make the work function virtual in Employee, it will work.
    return 0;
}


