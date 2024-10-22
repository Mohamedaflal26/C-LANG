
/*importants. 9*/

/*1.print a name*/

/*#include<stdio.h>
int main()
{
    printf ("hello nigga");
    
    return 0;
}*/

/*2.print a variable*/

/*#include <stdio.h>
int main()
{
    int a,b;
    a=90;
    b=9;
    printf("%d %d",a,b);
    return 0;
}*/

/*3.arithmetic operation

#include <stdio.h>
int main()
{
    int a,b;
    a=90;
    b=9;
    scanf("%d %d",&a,&b);
    printf("mod=%d",a%b);
    return 0;
}*/

/*4.get input from user and print

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("add=%d\n",a+b);
    printf("sub=%d\n",a-b);
    return 0;

}*/

/*5.allignment

#include<stdio.h>
int main()
{
    int a=2.345;
    printf("%016d",a);
    return 0;
}*/

/* 6.get two outuputs 5 and 20 width spaces

#include<stdio.h>
int main()
{
    int a,b;
    a=5.55;
    b=8;
    printf("%05d\n %020d",a,b);
    return 0;
}*/

/* 7.get width from user 

#include<stdio.h>
int main()
{
    int a,w;
    scanf("%d %d",&a,&w);
    printf("%0*d",w,a);
    return 0;
}*/

/* 8.float value from user and print 

#include <stdio.h>
float main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    printf(" %f %f \n",a,b);
    return 0;
} */

/* 9.precision of zeros (%g)

#include <stdio.h>
float main ()
{
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%f %g\n",a,b);
    return 0;
    
}*/

/* 10. float value and its nearest integer (.of)

#include <stdio.h>
float main()
{
    float a;
    scanf("%f",&a);
    printf("%.0f",a);
    return 0;
}
*/

/* 11.integer or float with its sign (%+d)

#include <stdio.h>
float main()
{
    float a;
    scanf("%f",&a);
    printf("%+f",a);
    return 0;
}*/


/* ext get 2 integer 5 and 2 output 

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%g",(float)a/b);
}*/


/* 12.character

#include <stdio.h>
char main()
{
    char ch;
    scanf("%c",&ch);
    printf("%d",ch);
    
}*/

/*13.lower case input upper case output

#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    char a = c & ~32;
    printf("%c", a);
    return 0;
}*/



/*14.increment and decrement 

#include <stdio.h>
int main()
{
    int a=69,b,c;
    b=--a;
    c=b++;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n%d\n%d",a,b,c);
    
}*/

/*15.random

#include <stdio.h>
int main()
{
    int x=69;
    printf("%d\n%d\n%d\n%d",x--,x++,--x,++x);
}
*/

/*16. if else 

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    if (a>b)
      printf("a is greater");
    else
       printf("b is nigga");
    
}*/


/*17.random program 
#include<stdio.h>
int main()
{
    int a=0;
    if (a)
       printf("A");
    else 
       printf("B");
}*/

/*18.odd or even

#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%2==0)
       printf("even");
    else
       printf("odd");
} */

/*19.postive negative zero

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
       printf("postive");
    else if(a==0) 
        printf("zero");
    else 
        printf("negative");
}*/

/*20.logical operations

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%12==0 && n%6==0)
       printf("hai");
    else if(n%5==0)
       printf("bye");
    else
        printf("gay");
}      */

/*21.age calculator

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("your are ");
    if (a>=50)
       printf("old");
    else if (a>=30 && a<=49)
        printf("adult");
    else if(a>=18 && a<29)
        printf("teenage");
    else 
       printf("kid");
} */


/* 22. leap or not leap year 

#include<stdio.h>
int main()
{
    int yr;
    printf("enter a year :");
    scanf("%d",&yr);
    if (yr%400==0 || yr%4==0 && yr%100!=0)
      printf("it is a leap year");
    else
      printf("not a leap year");
}
 */

/*23.switch case 


#include<stdio.h>
int main()
{
    int a;
    printf("enter your value :");
    scanf("%d",&a);
    switch(a)
     {
        case 1:
          {
            printf("vruthi sunmusic");
            break;
          }
        case 2:  
          {
            printf("nigga");
            break;    
          }
        default:  
           printf("invalid");
     }
   
}*/



/*24.check wether it is vowel

#include <stdio.h>
char main ()
{
    char p;
    printf("enter your letter :");
    scanf("%c",&p);
    switch(p)
      {
          case 'a' :
          case 'e' :
          case 'i' :
          case 'o' :
          case 'u' :
            printf("vowel");
            break ;
          default :
            printf("consonant");
        
      }
}*/


/*25.looping name 10 times

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    printf("nanban naresh \n");
} */

/*26.num from1 to 1000 for entering value use(scanf)

#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=1000;i++)
    printf("%d",i);
}*/


/*27.get 2 values from user 

#include<stdio.h>
int main()
{
    int i,y,z;
  
    scanf("%d %d",&y,&z);
    for(i=y;i>=z;i--)
    printf("%d",i);
}
*/
/*28.print all odd numbers from given term 

#include<stdio.h>
int main()
{
    int i ,u,s;
    scanf("%d %d",&u,&s);
    for(i=u;i<=s;i++)
       {
          if(i%2==1)
            printf("%d",i);
       }
}*/


/*29. series of numbers

#include<stdio.h>
int main()
{
    int i ,u,s,c=0;
    scanf("%d %d",&u,&s);
    for(i=u;i<=s;i++)
       {
          if(i%2==1)
            c=c+1;
       }
      printf("%d",c);  
}*/

/*30.random for loop 

#include<stdio.h>
int main()
{
    int i ,n,c=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
            c=c+1;
            sum=sum+i;
        }
    }
    printf("\n%d \n%d",c,sum);
}    */



/*31.finding factorial 

 #include <stdio.h>
 int main()
 {
     int n,fact=1,i;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
      {
          fact=fact*i;
      }
      printf("%d",fact);
 }*/


/*32.multipication a-user value b-total value

#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter the table you want : ");
    scanf("%d %d",&a,&b);
    for (i=1;i<=b;i++)
    printf("%d*%d=%d\n",i,a,i*a);
}*/


/* 33.prime number 

#include <stdio.h>
#include<math.h>
int main()
{
    long long int n,i,c=0;
    scanf("%lld",&n);
    if(n%2==0 && n!=2)
       printf("no");
    else
      {
          for(i=3;i<sqrt(n);i++)
           {
               if(n%i==0)
               c=c+1;
           }
          if(c==0)
            printf("prime");
          else
            printf("no");
      }
    return 0;  
}*/

/* 34. nested for loop (for inside for )

#include <stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++,printf("\n"))
    {
      for (j=1;j<=m;j++)
        printf("%d %d\n",i,j);
    }
}*/


/* 35.patters

#include <stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=1;row<=n;row++,printf("\n"))
    {
        for (col=1;col<=row;col++)
        printf("*");
    }
}*/

/*36.more patterns

#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=1;row<=n;row++,printf("\n"))
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || row==n || col==1 || col==n)
                printf("*");
            else
                printf(" ");
        }
    }
} */

/*37.more patterns
 
#include<stdio.h>
int main()
{
    long int n,row,col;
    printf("enter only odd number :");
    scanf("%ld",&n);
    for (row=1;row<=n;row++,printf("\n"))
    {
        for(col=1;col<=n;col++)
        {
            if(row==n/2+1 || col==n/2+1)
                printf("*");
            else
                printf(" ");
        }
    }
} */

/*38.more pattern using number 

#include<stdio.h>
int main()
{
    long int n,row,col;
    printf("enter only odd number :");
    scanf("%ld",&n);
    for (row=1;row<=n;row++,printf("\n"))
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 ||row==n|| col==1||col==n)
                printf("1");
            else
                printf(" ");
        }
    }
}*/

/*38.using val

#include<stdio.h>
int main()
{
    int n,row,col,val=1;
    scanf("%d",&n);
    for (row=1;row<=n;row++,printf("\n"))
    {
        for (col=1;col<=n;col++)
        {
            printf("%2d ",val++);
        }
    }
    
}*/

/*39.number zig zag ways  

#include<stdio.h>
int main()
{
    int n,row,col,val=1;
    scanf("%d",&n);
    for(row=1;row<=n;row++,printf("\n"))
    {
        for(col=1;col<=n;col++)
        {
            if(row%2==1)
              printf("%d ",val++);
            else
              printf("%d ",val--);
        }
        if(row%2==1)
           val=val+n-1;
        else 
           val=val+n+1;
    }
    
}*/

/*40.box pattern
#include <stdio.h>
int main()
{
    int n,row,col,spc;
    printf("enter the number : ");
    scanf("%d",&n);
    for(row=n;row>=1;row--,printf("\n"))
      { 
        for(spc=n;spc>=row+1;spc--)
          printf("%d ",spc);
        for(col=1;col<=2*row-1;col++)
          printf("%d ",row);
        for(col=row+1;col<=n;col++)
          printf("%d ",col);
       }
    for(row=2;row<=n;row++,printf("\n"))
      {
        for(spc=n;spc>=row+1;spc--)
          printf("%d ",spc);
        for(col=1;col<=2*row-1;col++)
          printf("%d ",row);
        for(col=row+1;col<=n;col++)
          printf("%d ",col);
       }
}
*/

/*41.number crunching count the number of digits

#include<stdio.h>
int main()
{
    int n,c=0;
    printf("enter a number :");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        c=c+1;
    }
    printf("%d",c);
} */



/*42.palindrome 

#include <stdio.h>
int main()
{
    int n,t,rev=0,dig;
    printf("enter a number :");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        dig=n%10 ;
        rev=rev*10 + dig;
        n=n/10;
        
    }
      printf("reverse number is :%d \n",rev);
    if(rev==t){
      printf("palindrome");
    }
    else {
        printf("not a palindrome");
    }
*/

/*43.REVERSE
#include<stdio.h>
int main()
{
    int n,c=0,dig;
    scanf("%d",&n);
    while (n)
    {
        dig=n%10;
        printf("%d",dig);
        n=n/10;
    }
}
*/












































































































































































































































































































































































































































































































