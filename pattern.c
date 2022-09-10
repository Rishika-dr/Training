#include<string.h>
#include <stdio.h>

int main()
{
    int k,i,j,l,m,h;
    for(i=1;i<=7;i++)
    {
         k=i;
        for(j=1;j<=i;j++)
        {
           
            printf("%d",k);
            k--;
        }
        printf("\n");
       
    }
    for(l=i-2;l>0;l--)
    {
         h=l;
        for( m=1;m<=l;m++)
        {
           
            printf("%d",h);
            h--;
        }
        printf("\n");
       
    }
    return 0;
}

