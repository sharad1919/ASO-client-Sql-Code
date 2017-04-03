#include"header.h"
void user(int a[1002][1002])
{
    int n,s,d,f=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        cin>>d;
        if(a[s][d]==-1 ||a[d][s]==-1)
        {
            f++;
        }
    }
    cout<<f<<"/"<<n;
}
