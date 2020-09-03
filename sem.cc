#include<iostream>
using namespace std;

class student{
    public:
        int id;
};
class midsem : virtual public student{
    public:
        int marks_m;
};
class endsem : virtual public student{
    public:
        int marks_e;
};
class total: public midsem, public endsem{
    public:
        int tot;
        total()
        {

        }
        total(int x, int y, int z)
        {
            id=x; marks_e=y; marks_m=z;
        }
        void total_marks()
        {
            tot= marks_e + marks_m;
            cout<<"total marks "<<tot<<endl;
        }
};
void base_test()
{
    total t;
    total y(251,45,32);
    total *z=&y;
    cout<<"enter you marks for presem and endsem and his id ";
    cin>>t.marks_m;
    cin>>t.marks_e;
    cin>>t.id;
    t.total_marks();
    y.total_marks();
    cout<<"id of z object is "<<z->id<<endl;
}
struct data
{
    /* data */
    int x1;
    int x2;
    float x3;
}data_t;
int sum(int &a, int &b)
{
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    return *ptr1 + *ptr2;
}
void pointer()
{
    data x,*y;
    int total_x;
    y=&x;
    x.x1=23;
    x.x2=35;
    cout<<"enter value of x3 ";
    cin>>(y->x3);
    cout<<"value of x1 "<<(y->x1)<<endl;
    total_x= sum(y->x1, y->x2);
    cout<<"total is "<<total_x<<endl;
}
void structpoiner()
{
        struct  Driver
    {
        int age;
        char name[50];
    };
    struct Taxiq
    {
        int id;
        Driver *drv;
        Taxiq *next;
    };
    Taxiq t1,t2;
    Driver d1={23,"Aman"};
    Driver d2={22,"Nissu"};
    t1.drv = &d1;
    t2.drv = &d2;
    t1.drv->age=23;
    t1.id=212;
    // d1.name="Aman";
    t1.next=nullptr;
    t2.drv->age=25;
    // d2.name="Nissu";
    t2.id=214;
    t2.next=&t1;
    cout<< (t2.next)->drv->name<<endl;
}
int main()
{
//    base_test(); 
//    pointer();
//    structpoiner();

    return 0;
}