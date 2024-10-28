#include<iostream>
using namespace std;

//1.
class Complex
{
    private:
        int real, imag;
    public:
        Complex(int r=0, int i=0):real(r),imag(i){}
        friend Complex operator-(Complex);
};
Complex operator-(Complex c)
{
    Complex temp;
    temp.real = -c.real;
    temp.imag = -c.imag;
    return temp;
}


//2. 
class Integer
{
    private:
        int i;
    public:
        Integer(int n=0):i(n){}
        friend bool operator!(Integer);
        friend bool operator==(Integer,Integer);
};
bool operator!(Integer num)
{
    return !(num.i);
}
bool operator==(Integer num1, Integer num2)
{
    return (num1.i==num2.i);
}


//3.
class Coordinate
{
    private:
        int x, y;
    public:
        Coordinate(int a=0, int b=0):x(a),y(b){}
        Coordinate operator,(Coordinate c)
        {
            return c;
        }
        friend istream& operator>>(istream &, Coordinate &);
        friend ostream& operator<<(ostream &, Coordinate );
        
};
//4.
istream& operator>>(istream &din, Coordinate &c)
{
    cin >> c.x >> c.y;
    return cin;
}
ostream& operator<<(ostream &dout, Coordinate c)
{
    cout << "(" << c.x << ", " << c.y << ")";
    return cout;
}


//5.
class Student
{
    private:
        int roll_no;
        string name;
        int age;
    public:
        void setStudent(int r, string n, int a)
        {
            if(r>0)
                roll_no = r;
            else if(r==0)
                roll_no = 1;
            else    
                roll_no = -r;
            name = n;
            if(a>0)
                age = a;
            else
                age = -a;
        }
        void showStudent()
        {
            cout << "roll no. - " << roll_no << endl;
            cout << "name - " << name << endl;
            cout << "age - " << age << endl;
        }
        bool operator==(Student s)
        {
            return roll_no==s.roll_no && name==s.name && age==s.age;
        }
};
 int f1()
    {
        cout << "ans";
    }
int main()
{
   
    f1();
}