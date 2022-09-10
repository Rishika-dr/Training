#include<stdio.h>
int isprime(int n)
{
	int i;
	if(n==0 || n==1)
		return 0;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,sum=0,flag=0,flag2=0,count=0,i,j;
	scanf("%d",&n);
	for( i=2;i<n;i++)
	{
		if(isprime(i) && sum<n)
		{
			sum+=i;
			printf("sum %dc\n",sum);
		
		if(isprime(sum) && sum!=2)
		{
			printf("psum %d\n",sum);
			count++;
			
		}
	}
	} 
	printf("cnt %d",count);
}
