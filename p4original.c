#include<stdio.h>
int input_array_size()
{
  int x;
  printf("how many numbers do you want to enter:");
  scanf("%d",&x);
  return x;
}
void input_array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("enter %dth number:",i+1);
      scanf("%d",&a[i]);
    }
}
int sum_composite(int n,int a[n])
{
  int k,i,sum=0,count;
  for(i=0;i<n;i++)
    {
      count=0;
      for(k=1;a[i]%k==0&&k<a[i];k++)
        {
          if((a[i]%k)==0)
            count=count+1;
        }
      if(count<2)
      sum=sum+a[i];
    }
  return sum;
}