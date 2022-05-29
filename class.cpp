#include <iostream>
using std::string;

class AbstractEmployee
{
    virtual void SayHello() = 0;
};

class Employee : AbstractEmployee
{

private:
    string Name;
    string Company;
    int Age;

public:
    void SayHello() {

    }
    void setName(string n)
    {
        Name = n;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string c)
    {
        Company = c;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int a)
    {
        Age = a;
    }
    int getAge()
    {
        return Age;
    }
    virtual void IntroduceYourSelf()
    {
        std::cout << "My name is " << Name << std::endl;
        std::cout << "and I work at " << Company << std::endl;
        std::cout << "and I am " << Age << " years old." << std::endl;
        std::cout << "---------------------------------" << std::endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("John", "Google", 4);
    employee1.IntroduceYourSelf();
    Employee* e  = &employee1;
    e->setName("SAMU***************************");
    e->IntroduceYourSelf();
}

// clear; g++ -o run .\class.cpp ; .\run.exe