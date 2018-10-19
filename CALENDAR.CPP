#include<stdio.h>
#include<conio.h>
struct date
{
  int d,m,y,rem;
  int calc1()
{
  int h=0,g[12];
  g[0]=31;
  g[1]=29;
  g[2]=31;
  g[3]=30;
  g[4]=31;
  g[5]=30;
  g[6]=31;
  g[7]=31;
  g[8]=30;
  g[9]=31;
  g[10]=30;
  g[11]=31;
     if(m>1)
      {
	for(int i=0;i<=11;i++)
	 {
	   if(i==m-1)
	   {
	     for(int j=0;j<=i;j++)
	     {
	       }
	     for(int k=j-1;k>0;k--)
	     {
	       h=h+g[k-1];
	     }
	    d=d+h;
	   }
	}
      }
 else if(m==1)
   {
    d=d+0;
   }
  return d;
 }
int calc2()
{
 int h=0,g[12];
  g[0]=31;
  g[1]=28;
  g[2]=31;
  g[3]=30;
  g[4]=31;
  g[5]=30;
  g[6]=31;
  g[7]=31;
  g[8]=30;
  g[9]=31;
  g[10]=30;
  g[11]=31;
  if(m>1)
  {
   for(int i=0;i<=11;i++)
    {
     if(i==m-1)
      {
	for(int j=0;j<=i;j++)
	{
	}
	  for(int k=j-1;k>0;k--)
	  {
	    h=h+g[k-1];
	  }
	  d=d+h;
     }
    }
  }
 else if(m==1)
 {
   d=d+0;
 }
 return d;
}
  void accept()
  {
    printf("enter the date :");
    scanf("%d",&d);
    printf("enter the month :");
    scanf("%d",&m);
    printf("enter the year :");
    scanf("%d",&y);
  }
 int arg1()
 {
   int a;
   y=y%400;
   if(y%100!=0&&y%4==0||y%400==0)
    {
      a=calc1();
       if(y<100)
	{
	  rem=a+y+y/4-2;
	 }
	else if(y>=100&&y<200)
	    {
	       rem=a+(y+y/4)-3;
	     }
	else if(y>=200&&y<300)
	   {
	       rem=a+(y+y/4)-4;
	   }
	else if(y>=300&&y<400)
	   {
	     rem=a+(y+y/4)-5;
	   }
      }
      return rem;
  }
 int arg2()
 {
   int b;
   y=y%400;
   b=calc2();
	if(y<100)
	{
	  rem=b+y+y/4-1;
	 }
	 else if(y>=100&&y<200)
	    {
	       rem=b+(y+y/4)-2;
	     }
	else if(y>=200&&y<300)
	   {
	       rem=b+(y+y/4)-3;
	   }
	else if(y>=300&&y<400)
	   {
	     rem=b+(y+y/4)-4;
	   }
    return rem;
 }
 void show()
 {
   int p;
   y=y%400;
   if(y%100!=0&&y%4==0||y%400==0)
    {
      p=arg1();
    }
    else p=arg2();
   rem=rem%7;
   if(rem==0)
   {
     printf("sunday");
   }
   else if(rem==1)
   {
     printf("monday");
   }
   else if(rem==2)
   {
     printf("tuesday");
   }
   else if(rem==3)
   {
     printf("wednesday");
   }
   else if(rem==4)
   {
     printf("thursday");
   }
   else if(rem==5)
   {
     printf("friday");
   }
   else if(rem==6)
   {
     printf("saturday");
   }
 }
};
void main()
{clrscr();
date s;
s.accept();
if(s.y>0)
{
  if(s.m==1||s.m==3||s.m==5||s.m==7||s.m==8||s.m==10||s.m==12)
  {
     if(s.d<1||s.d>31)
     return;
   }
   if(s.m==4||s.m==6||s.m==9||s.m==11)
   {
     if(s.d<1||s.d>30)
     return;
   }
   if(s.m==2)
   {
     if(s.y%4==0&&s.y!=0||s.y%400==0)
      {
	if(s.d<1||s.d>29)
	 return;
	}
	else if(s.d<1||s.d>28)
	 return;
    }
    else goto dew;
 }
 dew:
 s.show();
 getch();
}