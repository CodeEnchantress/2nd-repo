#include<stdio.h>
int main()
{
    int i,j,n,m=1;
    printf("\t********INPUT*********\n\n");
    printf("Enter the no of rows");
    scanf("%d",&n);
    printf("\t********OUTPUT*********\n\n");
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf(" %d",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}
