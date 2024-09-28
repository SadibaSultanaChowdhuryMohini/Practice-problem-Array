#include<stdio.h>
int main ()
{
     int r, c,i,j,count;
    printf("Enter rows and column size : ");
    scanf("%d%d", &r,&c);

    int a[r][c];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)

    {
        for (int j = 0; j < c; j++)
         {
            scanf("%d", &a[i][j]);
         }
    printf("\n");
    }
    int max_count=0;
    int index=0;

    for(i=0;i<r;i++)
    {
        count=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
             if(count>max_count)
             {
                 max_count=count;
                    index=i;
             }
    }



    printf("Index of row with maximum number of 1s is=%d",index);
    return 0;
}
