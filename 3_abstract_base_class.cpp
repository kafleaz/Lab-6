#include<iostream>
using namespace std;
class place
{
    protected:
    char name[20];
    int address, mobile;
    public:
    void getdata()
    {
        cout<<"Enter data,"<<endl<<"Name:";
        cin>>name;
        cout<<"Address:";
        cin>>address;
        cout<<"Mobile No.:";
        cin>>mobile;
    }
    virtual void display()=0;
};
class KTM : public place
{
    public:
    void getdata();
    void display()
    {
        cout<<endl<<"Detail KTM:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Mobile NO.: "<<mobile<<endl<<endl;
    }
};
class MNR: public place
{
    void getdata();
    void display()
    {
        cout<<"Detail MNR:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Mobile NO.: "<<mobile<<endl;
    }
};
int main()
{
    KTM k;
    MNR m;
    place *p=&k;
    p->getdata();

    p=&m;
    p->getdata();

    p=&k;
    p->display();

    p=&m;
    p->display();
    return 0;
}