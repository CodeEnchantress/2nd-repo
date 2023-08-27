#include <stdio.h>
int main(void)
{   
    int len;

    
    printf("enter a number :");
    scanf("%d",&len);
    
    for (int i = 1; i <= len; i++)
    {

        for(int j=1;j<=len -i;j++){
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}