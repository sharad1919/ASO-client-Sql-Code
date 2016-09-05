#include<stdio.h>
#include<conio.h>
void quicksort(int [10],int,int);
int main()
{
    int a[20],i,n;
    printf("enter size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quiksort(a,0,n-1);
        printf("sorted elements:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
void quiksort(int a[10],int f,int l)
{
    int pivot,i,j,tmp;
    if(f<l)
    {
        pivot=f;
        i=f;
        j=l;

    while(i<j)
    {
        while(a[i]<=a[pivot]&&i<l)
            i++;
        while(a[j]>a[pivot])
            j--;
        if(i<j)
        {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
    tmp=a[pivot];
    a[pivot]=a[j];
    a[j]=tmp;

    quiksort(a,f,j-1);
    quiksort(a,j+1,l);
}
}
