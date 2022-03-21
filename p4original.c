#include<stdio.h>
int input_aray_size()
{
  int n;
  printf("enter n value\n");
  scanf("%d",&n);
  return n;
}
int aray(int n,int a[10])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("enter array value\n");
    scanf("%d",&a[i]);
  }
}
int sum_composite_number(int n,int a[10])
{
  int sum=0,i;
  for(i=0;i<=n/2;++i)
  {
    sum=sum+a[i];
  }
  return sum;
}
void output(int sum)
{
  printf("sum is %d",sum);
}
int main()
{
  int n,a[10],i,sum;
  n=input_aray_size();
  aray(n,a);
  sum=sum_composite_number(n,a);
  output(sum);
  return 0;
}