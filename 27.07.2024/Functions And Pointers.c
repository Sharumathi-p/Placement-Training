#include<stdio.h>
void swap(int*n1,int*n2);
int main()
{
  int num1,num2;
  scanf("%d%d",&num1,&num2);
  swap(&num1,&num2);
  printf("%d\n",num1);
  printf("%d",num2);
  return 0;
}
void swap(int*s,int*p)
{
  int temp;
  temp=*s;
  *s=*p;
  *p=temp;
}
