#include<string.h>
#include <stdio.h>
int main()
{
    char a[]="string";
    char b[]="tsring";
    int i,j;
    int n=strlen(a);
    int m=strlen(b);
    int r,q,flag=0;
    if(n==m)
    {
           for( i=0;i<n;i++)
           {
              for( j=0;j<m;j++)
              {
                  if(a[i]==b[j])
                  {
                  a[i]='\0';
                  b[j]='\0';
                  break;
                  }
              }
           }
          for( i=0;i<n;i++)
          {
              if(a[i]!='\0' || b[i]!='\0')
              {
               flag=1;
              break;
              }
          }   
		  if(flag==1)
		  printf("false");
		  else
		  printf("true");  
    }
    else
    {
        printf("false");
	}
    return 0;
}

