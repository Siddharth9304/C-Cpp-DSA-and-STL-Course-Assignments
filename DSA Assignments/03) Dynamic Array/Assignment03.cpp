#include<iostream>
using namespace std;
#define invalid_index 0

class DynArray
{
    private:
        int capacity;
        int last_ind;
        int *ptr;
    protected:
        void doubleArray();
        void halfArray();
    public:
        DynArray(int);
        int getCapacity();
        bool isEmpty();
        void append(int);
        void insert(int, int);
        void edit(int, int);
        void del(int);
        bool isFull();
        int getValue(int);
        int noElements();
        ~DynArray();
        int find(int);
};
DynArray::DynArray(int cap): capacity(cap), last_ind(-1)    
{
    ptr = new int[capacity];
}
void DynArray::doubleArray()
{
    int *temp = new int[capacity*2];
    for(int i=0; i<=last_ind; i++)
        temp[i] = ptr[i];
    delete []ptr;
    ptr = temp;
    capacity *= 2;
}
void DynArray::halfArray()
{
    int *temp = new int[capacity/2];
    for(int i=0; i<=last_ind; i++)
        temp[i] = ptr[i];
    delete []ptr;
    ptr = temp;
    capacity /= 2;
}
int DynArray::getCapacity()
{
    return capacity;
}
bool DynArray::isEmpty()
{
    return last_ind==-1;
}
void DynArray::append(int val)
{
    if(isFull())
        doubleArray();
    ptr[++last_ind] = val;
}
void DynArray::insert(int ind, int val)
{
    if(ind<0 || ind>last_ind+1)
        throw invalid_index;
    if(isFull())
        doubleArray();
    for(int i=last_ind; i>=ind; i--)
        ptr[i+1] = ptr[i];
    ptr[ind] =  val;
    last_ind++;
}
void DynArray::edit(int ind, int val)
{
    if(ind<0 || ind>last_ind)
        throw invalid_index;
    ptr[ind] = val;
}
void DynArray::del(int ind)
{
    if(ind<0 || ind>last_ind)
        throw invalid_index;
    for(int i=ind; i<last_ind; i++)
        ptr[i] = ptr[i+1];
    last_ind--;
    if(capacity>1 && noElements()==capacity/2)
        halfArray();
}
bool DynArray::isFull()
{
    return last_ind==capacity-1;
}
int DynArray::getValue(int ind)
{
    if(ind<0 || ind>last_ind)
        throw invalid_index;
    return ptr[ind];
}
int DynArray::noElements()
{
    return last_ind+1;
}
DynArray::~DynArray()
{
    free(ptr);
}
int DynArray::find(int val)
{
    for(int i=0; i<=last_ind; i++)
        if(ptr[i] == val)
            return i;
    return -1;
}

int main()
{
    DynArray arr(7);
    arr.append(23);
    arr.append(43);  
    cout << arr.getCapacity() << endl;
    cout << arr.getCapacity() << endl;
    cout << arr.getCapacity() << endl;
    cout << arr.noElements() << endl;
    cout << arr.getCapacity() << endl;
    cout << arr.noElements();
    return 0;
}