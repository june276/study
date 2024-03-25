#include <iostream>
using namespace std;
int main()
{
    int a[8]={};
    int temp=0;
    int c;
    for (int i=0;i<8;i++)
    {
        cin>>temp;
        a[i]=temp;
    }
    for (int i=0;i<7;i++)
    {
        if (a[i]-a[i+1]==-1)
            c=0;
        else if (a[i]-a[i+1]==1)
            c=1;
        else
        {
            c=2;
            break;
        }
    }
    if (c==0)
        cout<<"ascending";
    else if (c==1)
        cout<<"descending";
    else
        cout<<"mixed";
    return 0;
}