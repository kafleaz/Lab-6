#include<iostream>
using namespace std;
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
    virtual int displayarea()=0;
};
class triangle: public shape
{
    public:
    int displayarea()
    {
        return (length*breadth/2);
    }
};
class rectangle: public shape 
{
    public:
    int displayarea()
    {
        return (length*breadth);
    }
};
int main()
{
    triangle t;
    rectangle r;
    shape *s=&t;
    s->display();
    cout<<"Area of triangle: "<< s->displayarea() <<endl;
    
    s=&r;
    s->display();
    cout<<"Area of rectangle: "<<s->displayarea()<<endl;
    return 0;

}