#include <iostream>

using namespace std;

int main()
{
    int num[5]={0}; int old_num[5]={0};
    int swap=0; int temp=0;
    for(int i=0;i<5;i++)
    {
        cout<<"enter a "<< i <<"st number ";
        cin>>num[i];
        old_num[i]=num[i];
    }
    do{
        swap=0;
        for (int j = 0; j < 4; j++)
        {
            /* code */
            if( num[j] > num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
                swap++;
            }   
        }
    }while(swap!=0);
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