/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int year,date,month,m,u,x,y,r,z,a,b,c,k,o,p,d,v,t,w,f,j,i,s,l,z,g,e,num,nui;
int cal(int);
int calu(int,int,int);
int mul(int);
int muli(int,int,int);
void main()
{
    scanf("%d%d%d",&date,&month,&year);
    if(((month==1)&&date<32)||((month==2)&&date<=29)||((month==3)&&date<32)||((month==4)&&date<31)||
    ((month==5)&&date<32)||((month==6)&&date<31||((month==7)&&date<32)||((month==8)&&date<32)||
    ((month==9)&&date<31)||((month==10)&&date<32)||((month==11)&&date<31)||((month==12)&&date<32)))
    
    {
    if(month<=12&&(year<2000||year>1600))
     {
        m=cal(year);
        u=calu(date,month,year);
        v=0+1+m+u;
        if(v>7)
        {
            r=v%7;
             switch(r)
        {
            case 1:
            printf("\033[0;31m");
            printf("Mon");
             printf("\033[0;32m");
              printf("day");
            break;
            case 2:
            printf("\033[0;32m");
            printf("Tues");
             printf("\033[0;33m");
              printf("day");
            break;
            case 3:
            printf("\033[0;33m");
            printf("Wednes");
             printf("\033[0;34m");
              printf("day");
            break;
            case 4:
            printf("\033[0;34m");
            printf("Thurs");
             printf("\033[0;35m");
              printf("day");
            break;
            case 5:
            printf("\033[0;35m");
            printf("Fri");
             printf("\033[0;36m");
              printf("day");
            break;
            case 6:
            printf("\033[0;36m");
            printf("Satur");
             printf("\033[0;32m");
              printf("day");
            break;
            case 7:
            printf("\033[0;35m");
            printf("Sun");
              printf("\033[0;31m");
              printf("day");
            
        }
           
        }
        else
        {
            v=v;
             switch(v)
        {
            case 1:
            printf("\033[0;31m");
            printf("Mon");
             printf("\033[0;32m");
              printf("day");
            break;
            case 2:
            printf("\033[0;32m");
            printf("Tues");
             printf("\033[0;33m");
              printf("day");
            break;
            case 3:
            printf("\033[0;33m");
            printf("Wednes");
             printf("\033[0;34m");
              printf("day");
            break;
            case 4:
            printf("\033[0;34m");
            printf("Thurs");
             printf("\033[0;35m");
              printf("day");
            break;
            case 5:
            printf("\033[0;35m");
            printf("Fri");
             printf("\033[0;36m");
              printf("day");
            break;
            case 6:
              printf("\033[0;36m");
             printf("Satur");
              printf("\033[0;32m");
              printf("day");
            break;
            case 7:
            printf("\033[0;35m");
            printf("Sun");
              printf("\033[0;31m");
              printf("day");
        }
        }
        
        
        

    }
    
    else if (month<=12&&year>2000)
    {
        w=mul(year);
        f=muli(date,month,year);
        t=0+w+f;
        if(t>7)
        {
            j=t%7;
             switch(j)
        {
            case 1:
             printf("\033[0;31m");
            printf("Mon");
             printf("\033[0;32m");
              printf("day");
            break;
            case 2:
            printf("\033[0;32m");
            printf("Tues");
             printf("\033[0;33m");
              printf("day");
            break;
            case 3:
            printf("\033[0;33m");
            printf("Wednes");
             printf("\033[0;34m");
              printf("day");
            break;
            case 4:
            printf("\033[0;34m");
            printf("Thurs");
             printf("\033[0;35m");
              printf("day");
            break;
            case 5:
            printf("\033[0;35m");
            printf("Fri");
             printf("\033[0;36m");
              printf("day");
            break;
            case 6:
            printf("\033[0;36m");
            printf("Satur");
             printf("\033[0;32m");
              printf("day");
            break;
            case 7:
            printf("\033[0;35m");
            printf("Sun");
              printf("\033[0;31m");
              printf("day");
        }
        }
        else
        {
            t=t;
             switch(t)
        {
            case 1:
             printf("\033[0;31m");
            printf("Mon");
             printf("\033[0;32m");
              printf("day");
            break;
            case 2:
             printf("\033[0;32m");
            printf("Tues");
             printf("\033[0;33m");
              printf("day");
            break;
            case 3:
             printf("\033[0;33m");
            printf("Wednes");
             printf("\033[0;34m");
              printf("day");
            break;
            case 4:
             printf("\033[0;34m");
            printf("Thurs");
             printf("\033[0;35m");
              printf("day");
            break;
            case 5:
             printf("\033[0;35m");
            printf("Fri");
             printf("\033[0;36m");
              printf("day");
            break;
            case 6:
             printf("\033[0;36m");
            printf("Satur");
             printf("\033[0;32m");
              printf("day");
            break;
            case 7:
             printf("\033[0;35m");
            printf("Sun");
             printf("\033[0;31m");
              printf("day");
            
        }
        }
    }
    }
    else
    {
         printf("\033[0;31m");
         printf("You entered the wrong input,please correct it");
    }
    }    
    
    

int calu(int date,int month,int year)
{
  if(month==1)  
  {
      p=date;
  }
  else if(month==2)
  {
      p=31+date;
  }
  else if(month==3)
  {
      p=59+date;
  }
  else if(month==4)
  {
      p=90+date;
  }
  else if(month==5)
  {
      p=120+date;
  }
  else if(month==6)
  {
      p=151+date;
  }
  else if(month==7)
  {
      p=181+date;
  }
  else if(month==8)
  {
      p=212+date;
  }
  else if(month==9)
  {
      p=243+date;
  }
  else if(month==10)
  {
      p=273+date;
  }
  else if(month==11)
  {
      p=304+date;
  }
  else
  {
      p=334+date;
  }
  if(year%4==0)
  {
  u=(p+1)%7;
  }
  else{
      u=p%7;
  }
  return u;
}
int cal(int year)
{
  k=year-1900;
  a=k-1;
  b=a/4;
  c=a-b;
  d=b*2+c;
  m=d%7;
  return m;
}
int mul(int year)
{
    i=year-2000;
    s=i-1;
    l=s/4;
    z=s-l;
    g=l*2+z;
    w=g%7;
    return w;
}
int muli(int date,int month,int year)
{
  if(month==1)  
  {
      e=date;
  }
  else if(month==2)
  {
      e=31+date;
  }
  else if(month==3)
  {
      e=59+date;
  }
  else if(month==4)
  {
      e=90+date;
  }
  else if(month==5)
  {
      e=120+date;
  }
  else if(month==6)
  {
      e=151+date;
  }
  else if(month==7)
  {
      e=181+date;
  }
  else if(month==8)
  {
      e=212+date;
  }
  else if(month==9)
  {
      e=243+date;
  }
  else if(month==10)
  {
      e=273+date;
  }
  else if(month==11)
  {
      e=304+date;
  }
  else
  {
      e=334+date;
  }
  if(year%4==0)
  {
  f=(e+1)%7;
  }
  else{
      f=e%7;
  }
  return f;  
}









