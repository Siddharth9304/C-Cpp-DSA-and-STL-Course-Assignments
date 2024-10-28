#include<iostream>
using namespace std;
//Q1.
class Numbers
{
    private:
        int size;
        int *arr;
    public:
        Numbers(int s)
        {
            size = s;
            arr = (int*)calloc(size,sizeof(int));
        }
        Numbers(Numbers &n)
        {
            size = n.size;
            arr = (int*)calloc(n.size,sizeof(int));
            for(int i=0; i<size; i++)
            {
                arr[i] = n.arr[i];
            }
        }
        ~Numbers()
        {
            free(arr);
        }
        void insertNumbers(int num[])
        {
            for(int i=0; i<size; i++)
                arr[i] = num[i];
        }
        void showNumbers()
        {
            for(int i=0; i<size; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
};

//Q2. 
class Student
{
    private :
        int roll_no;
        string name;
        int age;
    public:
        Student(int r, string n, int a)
        {
            roll_no = r;
            name = n;
            age = a;
        }
        void showDetails()
        {
            cout << "roll no. - " << roll_no << endl;
            cout << "name - " << name << endl;
            cout << "age - " << age << endl;
        }
};

//Q3. 
class Date
{
    int d, m, y;
    public:
        Date(int a, int b, int c):d(a),m(b),y(c)
        {}
        void showDate()
        {
            cout << d << "-" << m << "-" << y << endl;
        }
};

//Q4. 
class Room
{
    private:
        int room_no;
        string room_type;
        bool is_AC;
        int price;
    public:
        Room(int rn, string rt, bool is, int p)
        {
            room_no = rn;
            room_type = rt;
            is_AC = is;
            price = p;
        }
        Room(int rn)
        {
            room_no = rn;
            room_type = "Single Bed";
            is_AC = true;
            price = 2000;
        }
        void ShowRoomDet()
        {
            cout << "Room no. - " << room_no << endl;
            cout << "Room type - " << room_type << endl;
            cout << "is_A.C - " << is_AC << endl;
            cout << "Price - " << price << endl;
        }
};

//Q5.
class Circle
{
    float rad;
    public:
        Circle()
        {
            rad=1;
        }
        Circle(int r)
        {
            rad = r;
        }
};

int main()
{
    //Student s(19,"Prem Siddhartha", 20);
    //s.showDetails();
    //Date d(11,6,2024);
    //d.showDate();
    Room r1(101),r2(102,"Double Bed",false,2100),r3(103,"Double Bed",1,2300);
    r1.ShowRoomDet();
    cout << endl;
    r2.ShowRoomDet();
    cout << endl;
    r3.ShowRoomDet();
    cout << endl;

}