#include<iostream>
using namespace std;
class num;
class add
{
    int x;
    public:
    void getdata()
    {
        cout<<"Enter a number: ";
        cin>>x;
    }
    friend void average(add, num);
};
class num 
{
    int b;
    public:
    void getdata()
    {
        cout<<"Enter a number: ";
        cin>>b;
    }
    friend void average(add, num);
};
void average(add a, num n)
{
    float sum, avg;
    sum=a.x + n.b;
    avg= sum/2;
    cout<<"The average of number is: "<<avg;
}
int main()
{
    add a1;
    num n1;
    a1.getdata();
    n1.getdata();
    average(a1,n1);
}