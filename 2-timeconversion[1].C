#include<stdio.h>
#include<conio.h>
int main()
{
    float h,m,s;
    char c;
    printf("enter time in format hh:mm:ss A/P\n\t");
	scanf("%f%f%f%s",&h,&m,&s,&c);
    if(c=='P'&&h<12)
	{
	       h=h+12;
	}
	 if(c =='A'&& h==12)
	{
		h=0;
    }
    printf("24 hr format->%1.f:%1.f:%1.f",h,m,s);
    getch();
}

