#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,j,n,tmp;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
    {

        printf("%d\t",a[i]);
    }
}
