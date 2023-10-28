#include <stdio.h>
void main()
{
    
    for(int i=0;i<5;i++){

        // printf("#");
        int j=4;
        for(j=4;j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("#");
        }
        printf("\n");

        
    }

    
}