#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	char b[10];
	int c[2];
	int acount=0,bcount=0,i,j,k=0,n,m,temp,flag=0;
	scanf("%s",&a);
	scanf("%s",&b);
	for(i=0;a[i]!='\0';i++)
	{
		acount=acount+1;
	}
	for(i=0;b[i]!='\0';i++)
	{
		bcount=bcount+1;
	}
	if(acount==bcount)
	{	
		for(i=0;i<acount;i++)
		{
				if(a[i]!=b[i])
				{
					c[k]=i;
					k++;
					if(k==2)
					break;
				}	
		}
		n=c[0];
		m=c[1];
		temp=b[n];
		b[n]=b[m];
		b[m]=temp;
		printf("%s",a);
		printf("%s",b);
		for(i=0;i<acount;i++)
		{
			if(a[i]!=b[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
	}
	else
	printf("0");
}
