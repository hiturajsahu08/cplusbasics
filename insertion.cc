#include <iostream>

using namespace std;

int main()
{
    int num[5]={0}; int old_num[5]={0};
    int swap=0; int temp=0;int key=0; int k=0;
    for(int i=0;i<5;i++)
    {
        cout<<"enter a "<< i <<"st number ";
        cin>>num[i];
        old_num[i]=num[i];
    }
    for(int j=1; j<5; j++)
    {
        key= num[j];
        k = j-1;
        while(key<num[k] && k>=0)
        {
            num[k+1]=num[k];
            k--;
        }
        num[k+1]=key;
    }

    cout<<"orignial-order of array";
    for(int i=0;i<5;i++)
    {
        cout<<" "<< old_num[i];
    }
    cout<<endl<<"ascending order of array";
    for(int i=0;i<5;i++)
    {
        cout<<" "<< num[i];
    }
    cout<<endl;
    return 0;
}