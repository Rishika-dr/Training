#include <stdio.h>
#include <string.h>
int main()
{
    int a[]={1,2,3,6,5,4};
    int b[6];
    int i,j,k,temp,h,g;
    for(i=6-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        break;
    }
    if(i<0)
    {
           for(k=0;k<=i;k++)
        {
            b[k]=a[k];
        }
        g=i+1;
        for(h=5;h>i;h--)
        {
            b[g]=a[h];
            g++;
        }
        for(i=0;i<6;i++)
        {
            printf("%d",b[i]);
        }
    }
    else
    {
        for(k=6-1;k>i;k--)
        {
           if(a[k]>a[i])
           break;
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
       
        for(k=0;k<=i;k++)
        {
            b[k]=a[k];
        }
        g=i+1;
        for(h=5;h>i;h--)
        {
            b[g]=a[h];
            g++;
        }
        for( i=0;i<6;i++)
        {
            printf("%d",b[i]);
        }
    }
}
