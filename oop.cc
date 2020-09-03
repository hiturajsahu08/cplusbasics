#include<iostream>
using namespace std;

class base{
    private:
        int id;
    public:
        int age;
        static int count;
        base()
        {
            id = 250;
        }
        ~base()
        {
            cout<<"deleting this object"<<endl;
        }
        virtual void print_acc()
            {
                cout<<"class is base "<<id<<endl;
            }
};
class saving: public base{
    private:
        int sav;
    public:
        saving()
        {
            sav = 35;
        }
        ~saving()
        {
            cout<<"deleting this object"<<endl;
        }
        void print_acc()
            {
                cout<<"class is saving "<<sav<<endl;
                cout<<"and age is "<<age<<endl;
            }
};
class current: public base{
    private:
        int cur;
    public:
        current()
        {
            cur = 45;
        }
        ~current()
        {
            cout<<"deleting this object"<<endl;
        }
        void print_acc()
            {
                cout<<"class is current "<<cur<<endl;
                cout<<"and age is "<<age<<endl;
            }
};

int main()
{
    base b;
    saving s; current c;
    c.print_acc();
    b.print_acc();
    c.age = 23;
    c.print_acc();
    return 0;
}