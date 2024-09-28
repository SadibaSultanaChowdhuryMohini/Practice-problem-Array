#include<stdio.h>
int main ()
{
    int i,n,a[100];
    printf("Enter array size:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original_array[] =");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("Reversed_array[] =");
    for (i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

    return 0;
}
