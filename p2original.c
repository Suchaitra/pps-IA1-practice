#include<stdio.h>
int cmp(int a,int b,int c)
{
  int x;
  x=a>b?(a>c?a:c):(b>c?b:c);
  return x;
}
int input()
{
  int n;
  printf("enter the numbers\n");
  scanf("%d",&n);
  return n;
}
int main ()
{
  int a,b,c;
  a=input();
  b=input();
  c=input();
  printf("%d is the largest of the three\n",cmp(a,b,c));
}