 #include<stdio.h>
 int main ()
 {
     int i,n,min,max,a[100];
     printf("Enter array size:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     max=a[0];
     min=a[0];
     for(i=0;i<n;i++)
     {
         if(a[i]>max)
         {

             max=a[i];
         }
         if(a[i]<min)
         {

             min=a[i];
         }

     }
     printf("Max=%d\n",max);
    printf("Min=%d\n",min);
     return 0;
 }
