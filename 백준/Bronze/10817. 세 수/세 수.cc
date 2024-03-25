#include <iostream>
using namespace std;
int main()
{
    int m1=0,m2=0;
    int l[3]={};

    for (int i=0;i<3;i++)
    {
        cin>>l[i];
    }

    for (int i=0;i<3;i++)
    {
        if (l[i]>=m1)
        {
           m2=m1;
            m1=l[i];
        }
        else if (l[i]>m2)
            m2=l[i];
    }
    cout<<m2;

    return 0;
}