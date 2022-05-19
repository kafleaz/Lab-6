#include<iostream>
using namespace std;
class add
{
    int x;
    public:
    void getdata()
    {
        cout<<"Enter a number: ";
        cin>>x;
    }
    friend class num;
};
class num 
{
    int y;
    public:
    void getdata()
    {
        cout<<"Enter a number: ";
        cin>>y;
    }
    void average(add a)
    {
        float sum,avg;
        sum= a.x + y;
        avg=sum/2;
        cout<<"Average of numbers:"<<avg;
    }
};
int main()
{
    add a1;
    num n1;
    a1.getdata();
    n1.getdata();
    n1.average(a1);
}
