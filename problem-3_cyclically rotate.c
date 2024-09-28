#include<stdio.h>
int main ()
{
    int i,n,a[100];
    printf("Enter array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int last=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=last;
    printf("Rotated element=");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
