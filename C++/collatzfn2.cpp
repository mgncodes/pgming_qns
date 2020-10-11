//collatz function 2
#include<stdio.h>

int f(int n)
{  int c=1;
   int val;
   scanf("%d",&n);
   if (n%2 != 0)
     val=(3*n)+1;
   else
     val=n/2;
   while(val != 1)
   {   val = f(val);
       c = c+1;
   }
   return c;
}
void main()
{
    int n;
    scanf("%d",&n);
    f(n);
}
