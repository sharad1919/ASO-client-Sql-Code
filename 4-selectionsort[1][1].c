#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,n,tmp;

	printf("enter size\t\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
		for(j=i;j<n;j++)
		{
		    if(a[i]>a[j])
		    {
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		    }
		 }
	   }
	   for(i=0;i<n;i++)
	   {
			printf("%d\t",a[i]);
	    }
	getch();
}



