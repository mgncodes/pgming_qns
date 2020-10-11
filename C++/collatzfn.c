//collatz function, repeat till 1
#include<stdio.h>

int f(int n)
{   int res;
    if (n%2 != 0)
     res = (3*n)+1;
    else
     res = n/2;
    return res;
}

void main()
{  int n;
   scanf("%d",&n);
   int value;
   int count=1;
   value=f(n);
   while(value != 1)
   {  value = f(value);
      count = count+1;
   }
   printf("%d",count);
}
