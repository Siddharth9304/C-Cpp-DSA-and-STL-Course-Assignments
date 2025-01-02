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
            ptr = new int[capacity];
        }
        Array(Array &arr): capacity(arr.capacity), last_ind(arr.last_ind)
        {
            ptr = new int[capacity];
            for(int i=0; i<=last_ind; i++)
                ptr[i] = arr.ptr[i];
        }
        Array& operator=(Array &arr)
        {
            if(ptr != nullptr)
                delete []ptr;
            capacity = arr.capacity;
            last_ind = arr.last_ind;
            ptr = new int[capacity];
            for(int i=0; i<=last_ind; i++)
                ptr[i] = arr.ptr[i];
            return *this;
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
                throw 0;
        }
        void insert(int ind, int val)
        {
            if(ind>=0 && ind<capacity)
            {
                if(ind>last_ind)
                    ptr[++last_ind] = val;
                else
                    throw 1;
            }
            else
                throw 0;
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
                throw 0;
        }
        void del(int ind)
        {
            if(ind>=0 && ind<capacity)
            {
                if(ind<=last_ind)
                {
                    for(int i=ind; i<last_ind; i++)
                        ptr[i] = ptr[i+1];
                    last_ind--;
                }
            }
            else
                throw 0;
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
                    throw 1;
            else
                throw 0;
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