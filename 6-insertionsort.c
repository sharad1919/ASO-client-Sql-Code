#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,j,tmp=0,n;
    printf("enter limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        tmp=a[i];
        j=i-1;
        while(a[j]>a[i]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tmp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return(0);
}
