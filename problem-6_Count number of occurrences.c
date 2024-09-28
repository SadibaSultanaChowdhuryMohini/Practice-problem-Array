#include<stdio.h>
int main ()
{
    int i,N,X,temp,a[100],count=0;
    printf("Enter array size:");
    scanf("%d",&N);
    for (i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<N;i++)
    {
       if (a[i]>a[i+1])
       {
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
       }
    }
    printf("Enter number=");
    scanf("%d",&X);

    for(i=0;i<N;i++)
    {
        if (a[i]==X)
        {

            count++;
        }

    }
                printf("%d occurs %d times ",X,count);

    return 0;

}
