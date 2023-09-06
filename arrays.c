#include<stdio.h>
int main ()
{
     int marks [4];
     //marks [0]= 34;
     //printf("marks of student 1 is %d", marks [0]) ;
     //marks [0]= 4; 
     //marks [1]= 24;
     //marks [0]= 34;
     //marks [0]= 44;
     //printf("marks of student 1 is %d\n", marks [0]);
      for (int i =0; i< 4; i++)
      {
        printf(" enter the value of %d elment of the arry \n", i);
        scanf("%d ", &marks [i]);

      }
       for (int i=0 ; i<4; i++)
       {
        printf("the value of %d element of the arry \n", i , marks [i]);
        
       }
     return 0;
}
