#include<iostream>
using namespace std;
class y;
class x 
{
    int a;
    public:
    void datainx()
    {
        cout<<"Enter the value of a:";
        cin>>a;
    }
    friend void swap(x,y);
};
class y 
{
    int b;
    public:
    void getdata()
    {
        cout<<"Enter the value of b:";
        cin>>b;
    }
    friend void swap(x,y);
};
void swap(x m, y n)
{
        int temp;
        temp=m.a;
        m.a= n.b;
        n.b=temp;
        cout<<"After swap: "<<endl;
        cout<<"Value of a:"<<m.a<<" & b:"<< n.b;
}
int main()
{
    x x1;
    y y1;
    x1.datainx();
    y1.getdata();
    swap(x1, y1);
    return 0;
}