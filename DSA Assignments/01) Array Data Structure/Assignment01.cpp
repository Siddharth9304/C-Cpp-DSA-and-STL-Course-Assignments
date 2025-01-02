#include<iostream>
using namespace std;

class Array
{
    private:
        int capacity;
        int last_ind;
        int *ptr;
    public:
        Array(int size): capacity(size), last_ind(-1)
        {
            ptr = new int[size];
        }
        bool is_empty()
        {
            return last_ind==-1;
        }
        void append(int val)
        {
            if(last_ind+1<capacity)
            {
                ptr[++last_ind] = val;
            }
            else
            {
                cout << "array is overflowing\n";
                throw 0;
            }
        }
        void insert(int ind, int val)
        {
            if(ind>=0 && ind<capacity)
            {
                if(ind>last_ind)
                    ptr[++last_ind] = val;
                else
                {
                    cout << "'given index elememnt has already filled, Enter valid index.'\nBut, if you want to change that value you can use 'edit' method\n";
                    throw 0;
                }
            }
            else
            {
                cout << "index out of range\n";
                throw 0;
            }
        }
        void edit(int ind, int val)
        {
            if(ind>=0 && ind<capacity)
            {
                if(ind>last_ind)
                    ptr[++last_ind] = val;
                else
                    ptr[ind] = val;
            }
            else
            {
                cout << "index out of range\n";
                throw 0;
            }
        }
        void del(int ind)
        {
            if(ind>=0 && ind<capacity)
            {
                if(ind<=last_ind)
                {
                    for(int i=ind; i<last_ind; i++)
                        ptr[i] = ptr[i+1];
                    ptr[last_ind]=432357;
                    last_ind--;
                }
            }
            else
            {
                cout << "index out of range\n";
                throw 0;
            }
        }
        bool is_full()
        {
            if(last_ind==capacity-1)
                return true;
            else
                return false;
        }
        int getElement(int ind)
        {
            if(ind>=0 && ind<capacity)
                if(ind<=last_ind)
                    return ptr[ind];
                else
                {
                    cout << "element at the given index does not contain any value\n";
                    throw 0;
                }
            else
            {
                cout << "index out of range\n";
                throw 0;
            }
        }
        int no_Elements()
        {
            return last_ind+1;
        }
        int find(int val)
        {
            for(int i=0; i<=last_ind; i++)
                if(ptr[i]==val)
                    return i;
            return -1;
        }
        ~Array()
        {
            delete []ptr;
        }
};


int main()
{
    Array a1(8);
    cout << a1.is_full() << endl;
    a1.append(5);
    a1.append(2);
    a1.append(3);
    a1.append(8);
    cout << a1.no_Elements() << endl;
    cout << a1.getElement(1) << endl;
    a1.del(1);
    cout << a1.no_Elements() << endl;
    cout << a1.getElement(2) << endl;
    cout << a1.no_Elements() << endl;
    a1.edit(5,-2);
    cout << a1.getElement(2) << endl;
    cout << a1.no_Elements() << endl;
    a1.append(5);
    a1.append(2);
    a1.append(3);
    a1.append(5);
    cout << a1.is_full() << endl;
    a1.edit(5,-100);
    cout << a1.getElement(6) << endl;
    cout << a1.no_Elements() << endl;
}