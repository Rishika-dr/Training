#include <stdio.h>
#include <string.h>
int main()
{
	char a[]="simplest";
	int i,j,flag=0,k,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		count=count+1;
	}
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(a[i]==a[j])
			{
				a[i]='\0';
				a[j]='\0';
			}	
		}
	}
	for(k=0;k<count;k++)
	{
		if(a[k]!='\0')
		{
			printf("%c",a[k]);
			break;
	    }
	}
}
