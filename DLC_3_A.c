#include<stdio.h>
#include<math.h>
void main ()
{
  int x,n;
  x=15;
  while (x<=200)
  {
      n=x*x;
      printf("%d^2 = %d\n", x,n);
      x++;
  }
}