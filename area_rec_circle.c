#include <stdio.h>
    int main(){
    float l,b,R, perimeter, area;
 char ch;
    printf("Select rectangle (r) or circle (c)");
    scanf("%c",&ch);
    if(ch== 'r')
    {
      printf("Enter the length and Breadth .\n");
      scanf ("%f%f",&l,&b);
      perimeter = 2*(l+b);
      area= l*b;
      printf("Perimeter = %f\n", perimeter);
      printf("Area = %f", area);
    }
    else if (ch== 'c')
    {
      printf("Enter the Radius.\n");
      scanf ("%f",&R);
      perimeter = (2*22*R)/7;
      area= (22*R*R)/7;
      printf("Perimeter= %f\n",perimeter);
      printf("Area= %f",area);
    }
    else
    printf("INVALID");
    return 0;
}
