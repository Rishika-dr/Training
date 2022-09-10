/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5];
    int b[5];
    int flag=0,n;
    int i,j;
    for( i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    
    for( i=0;i<5;i++)
    {
         for( j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            } 
        }
          if(flag==0)
        {
        printf("%d",a[i]);
        }
        flag=0;
    }
    return 0;
}

