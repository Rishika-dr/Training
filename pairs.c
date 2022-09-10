#include<stdio.h>
int main()
{
	int a[8]={5,6,6,5,7,6,5,6};
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(a[i]==a[j])
			{
				a[i]='\0';
				a[j]='\0';
				break;
			}
		}
	}
	for(i=8;i>0;i--)
	{
		if(a[i]!='\0')
		{
			printf("%d ",a[i]);
		}
	}
}
