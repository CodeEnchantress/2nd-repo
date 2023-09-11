#include<stdio.h>
int main ()
( 
    char input ;
     float kmsTomiles = 0.621371;
     float inchesToFoot =0.0833333;
     float cmsToInches = 0.393701;
     float poundsToKgs = 0.453592;
     float inchesToMeters =0.0254
     while (1)
     { 
        printf (" enter yhe input charcter .q to quit \n      1. kms to miles \n         2. inches to foot \n")
        scanf ("%c ", &input );
        switch (input )
        {
            case 'q':
            printf ("quitting the program ");
            goto end; 
            break;
            case' 1':

             default :
             break;

        }
      } 
      end:

      return 0;
)