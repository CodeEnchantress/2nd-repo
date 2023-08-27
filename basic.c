#include <stdio.h>

int main(void)
{
    // int i=0;
    // int bool=0;
    // for ( i = 1; i < 10; i++)
    // {

    // code of break and continue basic
    // if(i%5==0){

    //  printf("inside 5 \n");
    //  break;

    // }
    // else{
    // printf("%d inside if \n",i*i);
    // }

    // for loop
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        /* code */
        int j = 2;
        for (j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                printf("%d is not prime \n",i);
                break;
            }

        }

        if (j == i)
        {
            printf("%d is prime\n", i);
        }
    }



}
