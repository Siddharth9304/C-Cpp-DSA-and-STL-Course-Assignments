#include<iostream>
#include<string.h>
using namespace std;

//1.,2.,3.,4.
class Time
{
    private:
        int hr, min, sec;
    public:
        void setTime(int hr, int min, int sec)
        {
            this->hr = hr;
            this->min = min;
            this->sec = sec;
        }
        void showTime()
        {
            cout << hr << " hr " << min << " min " << sec << " sec " << endl;
        }
        Time* TimeArray(int size)
        {
            return new Time[size];
        }
        void showTimeArr(Time t[],int size)
        {
            for(int i=0; i<size; i++)
                (t+i)->showTime();
        }
        void normalizeTime()
        {
            min += sec/60;
            sec %= 60;
            hr += min/60;
            min %= 60;  
        }
        bool isTimeGreater(Time t)
        {
            Time temp1,temp2;
            temp1 = *this;
            temp2 = t;
            temp1.normalizeTime();
            temp2.normalizeTime();
            if(temp1.hr>temp2.hr)
                return true;
            else if(temp1.hr==temp2.hr)
                if(temp1.min>temp2.min)
                    return true;
                else if(temp1.min==temp2.min)
                    if(temp1.sec>temp2.sec)
                        return true;
                    else
                        return false;
                else
                    return false;
            else
                return false;
        }
        void swapTime(Time &t1)
        {
            Time temp;
            temp = *this;
            *this = t1;
            t1 = temp;
        }
        void sortTimeArr(Time t[], int size)
        {
            for(int i=0; i<size-1; i++)
                for(int j=i+1; j<size; j++)
                    if((t+i)->isTimeGreater(t[j]))
                        (t+i)->swapTime(t[j]);
        }
};

//5.,6.,7.
class String
{
    private:
        char *c;
        int len;
    public:
        String(char s[])
        {
            len = strlen(s);
            c = new char[len+1];
            strcpy(c,s);
        }
        void upper()
        {
            for(int i=0; c[i]; i++)
                if(c[i]>='a' && c[i]<='z')
                    c[i] = c[i] - ('a'-'A');
        }
        void lower()
        {
            for(int i=0; c[i]; i++)
                if(c[i]>='A' && c[i]<='Z')
                    c[i] = c[i] + ('a'-'A');
        }
        void printStr()
        {
            cout << c;
        }
        char* getStr()
        {
            return c;
        }
        int length()
        {
            return len;
        }
        ~String()
        {
            delete []c;
        }
};


int main2()
{
   String s1("Prem Siddharth");
   cout << s1.length() << endl;
   s1.printStr(); cout << endl;
   cout << s1.getStr() << endl;
   s1.upper();
   cout << s1.getStr() << endl;
   s1.lower();
   cout << s1.getStr() << endl;
   
}
int main()
{
    Time t1,*p;
    p = t1.TimeArray(3);
    p->setTime(3,5,61);
    (p+1)->setTime(3,4,63);
    (p[2]).setTime(3,5,62);
    t1.showTimeArr(p,3);
    p->sortTimeArr(p,3);
    t1.showTimeArr(p,3);
}



