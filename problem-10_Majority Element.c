#include<stdio.h>
int main ()
{
    int i,j,n,a[100],c,m;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
         c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                m= a[i];
                c++;
            }
        }

    }
     if(c>(n/2))
           {

              printf("Majority element of the array is=%d",m);
           }
           else
           {
               printf("-1");
           }


    return 0;
}
