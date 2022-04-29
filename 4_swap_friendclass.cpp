#include<iostream>
using namespace std;
class y;
class x 
{
    int a;
    public:
    void datainx()
    {
        cout<<"Enter a number: ";
        cin>>a;
    }
    friend class y;
};
class y 
{
    int b;
    public:
    void datain(x m)
    {
        cout<<"Swapped: "<<m.a;
    }
};
int main()
{
    x x1;
    y y1;
    x1.datainx();
    y1.datain(x1);

}