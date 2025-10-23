#include<stdio.h>
int main()
{
    int x,y,m,n,k,l,i,j;
    printf("enter X :");
    scanf("%d",&x);
    printf("enter Y :");
    scanf("%d",&y);
    printf("enter M :");
    scanf("%d",&m);
    printf("enter N :");
    scanf("%d",&n);
    int a[x][y],b[m][n],c[k][l];//a[x][y] x is the number of row and y is the number of collum.

    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("enter the a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\nMatrix A\n");
    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
         printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter the a[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\nMatrix B\n");
    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
         printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    if (x==m && y==n)
    {
        printf("\n\n MatrixC\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    }
     else
    {
        printf("SORRY");
    }
    return 0;
}
