#include<stdio.h>
void main(){
  int LP,LW,LM,IM,IW,tm,tw,n;
  scanf("%d",&n);
  tm=0.52*n;
  tw=n-tm;
  LP=0.48*n;
  LM=0.35*n;
  LW=LP-LM;
  IM=tm-LM;
  IW=LP-LW;
  printf("The total number of illiterate men is %d\n",IM);
  printf("The total number of illiterate women is %d",IW);
}