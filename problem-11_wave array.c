#include<stdio.h>
int main ()
{
    int i,j,n,a[100],temp;
    printf("Enter array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //sort array
    for(i=0;i<n;i++)
    {
         for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //swap array
    for(i=0;i<n-1;i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
         printf("%d%d",a[i],a[i+1]);
    }

    return 0;
}
