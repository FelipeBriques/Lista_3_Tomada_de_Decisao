#include<stdio.h>
#include<math.h>
void main ()
{
  int x,n,y;
  scanf("%d",&x);
  n=1;
  while (n<=10)
  {
      y=x*n;
      printf("%d x %d = %d\n", x,n,y);
      n++;
  }
}