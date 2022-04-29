#include<iostream>
using namespace std;
#define pi 3.14
class shape
{
    protected:
    double length, breadth;
    public:
    void display()
    {
        cout<<"Enter l and b: ";
        cin>>length>>breadth;
    }
    void getdatar()
    {
        cout<<"Enter radious: ";
        cin>>length; 
    }
    virtual float displayarea()=0;
};
class triangle: public shape
{
    public:
    float displayarea()
    {
        return (length*breadth/2);
    }
};
class rectangle: public shape 
{
    public:
    float displayarea()
    {
        return (length*breadth);
    }
};
class circle :public shape 
{
    public:
    float displayarea()
    {
        return (pi*length*length);
    }
};
int main()
{
    triangle t;
    rectangle r;
    circle c;
    shape *s=&t;
    s->display();
    cout<<"Area of triangle: "<< s->displayarea() <<endl;
    
    s=&r;
    s->display();
    cout<<"Area of rectangle: "<<s->displayarea()<<endl;

    s=&c;
    s->getdatar();
    cout<<"Area of circle: "<<s->displayarea()<<endl;
    return 0;
}