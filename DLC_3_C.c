#include<stdio.h>
#include<math.h>
void main ()
{
  int x,s;
  s=0;
  for (x=1;x<=100;x++)
  {
      s=s+x;
      printf("%d\n", s);
  }
}