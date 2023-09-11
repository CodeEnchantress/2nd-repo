include<stdio.h>
 int arr[]= {311,52,3,4,5,6,67};
 int* arrayptr =arr;
 printf("value at the position 3 of the array is %d\n", arry[3]);
 printf ("the address of the 1st element of the array is %d \n ", &arr [0]);
 printf ("the address of the 1st element of the array is %d \n ", arr );
 printf ("the address of the 2st element of the array is %d \n ", &arr [1]);
printf ("the address of the 2st element of the array is %d \n ", arr +1);
 printf ("the address of the 3rd element of the array is %d \n ", &arr [2]);
 printf ("the address of the 3rd element of the array is %d \n ", arr +2);


 // arr--; // this line will throw an error