#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3],b[3],i,m=0,n=0;
    printf("enter alice score\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter bob score\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            m++;
        }
        else if(b[i]>a[i])
        {
            n++;
        }
    }
    printf("alice score=%d\nbob scaore  =%d",m,n);

}
