#include <stdio.h>
int main()
{
    int num, i, j;
    for (int i = 0; i < 8; i++)
    {
        printf("%d \n ", i);

        for (int j = 0; j < 8; j++)
        {
            printf("enter the number , enter 0 to exit : ");
            scanf("%d \n, num");
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
}