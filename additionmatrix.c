#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("Enter elements for 1st matrix:\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements for 2nd matrix:\n");
    for(int k=0;k<=2;k++)
    {
        for(int l=0;l<=2;l++)
        {
            scanf("%d",&b[k][l]);
        }
    }
    for(int m=0;m<=2;m++)
    {
        for(int n=0;n<=2;n++)
        {
            c[m][n]=a[m][n]+b[m][n];
        }
    }
    printf("Elements of new matrix after addition are:\n");
    for(int x=0;x<=2;x++)
    {
        for(int y=0;y<=2;y++)
        {
            printf("%d ",c[x][y]);
        }
        printf("\n");
    }
    return 0;
}