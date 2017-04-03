#include"header.h"
int a[1002][1002]={0};
int main()
{

    int i,src,dest,n,wt,vertex,test;
    ifstream myfile;
    myfile.open("input.txt");
    myfile>>test;
    for(int j=0;j<test;j++)
    {
          myfile>>vertex;
          myfile>>n;
          for(i=0;i<n;i++)
          {
                myfile>>src>>dest>>wt;
                a[src][dest]=wt;
                a[dest][src]=wt;
          }
    minsp(a,vertex);
    user(a);

    }
}
