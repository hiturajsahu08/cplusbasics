#include<iostream>
using namespace std;

class marks{
    public:
        int phy, chm, mat;
        marks()
        {
            phy=30; chm=30; mat=30;
        }
        marks(int x, int y, int z)
        {
            phy=x; chm=y; mat=z;
        }
        ~marks()
        {
            cout<<"object deleted"<<endl;
        }
        void total_marks()
        {
            cout<<"total marks "<<(phy+chm+mat)<<endl;
        }
        marks operator+(const int factor)
        {
            return marks(chm+factor, mat+factor, phy+factor);
        }
};
int main()
{
    marks aman,nissu;
    marks hitu(29,33,65);
    cout<<"chemistry me kitne "<<aman.chm<<endl;
    nissu=aman+10;
    cout<<"ab kitne bc "<<nissu.chm<<" "<<nissu.mat<<" "<<nissu.phy<<endl;
    cout<<"hitu ka maths me "<<hitu.mat<<endl;
    return 0;
}