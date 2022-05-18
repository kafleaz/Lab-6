#include<iostream>
using namespace std;
class x 
{
    int a,b,temp;
    public:
    void datainx()
    {
        cout<<"Enter a number: ";
        cin>>a>>b;
    }
    friend class y;
};
class y 

{
    public:
    void datain(x m)
    {
        cout<<"Before Swap: "<<m.a<<" "<<m.b;
        m.temp=m.a;
        m.a= m.b;
        m.b=m.temp;
        cout<<"After swap: "<<m.a<<" "<< m.b;
    }
};
int main()
{
    x x1;
    y y1;
    x1.datainx();
    y1.datain(x1);

}