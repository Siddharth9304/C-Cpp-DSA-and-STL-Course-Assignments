#include<iostream>
using namespace std;


//1.
class Person
{
    private:
        string name;
        int age;
    protected:
        void setPerson(string n, int a)
        {
            name = n;
            age = a;
        }
        string getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
};
class Employee : public Person
{
    private:
        int salary;
    public:
        void setEmployee(string n, int a, int s)
        {
            setPerson(n, a);
            salary = s;
        }
        void showEmployee()
        {
            cout << "name - " << getName() << endl;
            cout << "age - " << getAge() << endl;
            cout << "salary - " << salary << endl;
        }
};


//2.
class Circle
{
    private:
        int radius;
    public:
        void setRad(int r)
        {
            radius = r;
        }
        int getRadI()
        {
            return radius;
        }
        float getArea()
        {
            return 3.14f*radius*radius;
        }
};
class ThickCircle : public Circle
{
    private:
        int thickness;
    public:
        void setThickness(int t)
        {
            thickness = t;
        }
        int getThickness()
        {
            return thickness;
        }
};

int main()
{
   // Employee e1;
    //e1.setEmployee("prem", 20, 100000);
    //e1.showEmployee();

}