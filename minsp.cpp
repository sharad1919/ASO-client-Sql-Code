#include"header.h"
void minsp(int a[1002][1002],int e)
{
    int mi,q,p;
    for(int i=1;i<=1000;i++)
        {
              mi=999;
              for(int j=1;j<=1000;j++)
              {
                    if(a[i][j]!=0 &&a[i][j]<mi &&i!=j )
                    {
                         mi=a[i][j];
                         p=i;
                         q=j;
                    }
               }a[p][q]=-1;
                a[q][p]=0;
        }
}
