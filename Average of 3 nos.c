#include<stdio.h>
float calculate(float a,float b,float c)
{
  float avg = 0,sum = 0;
  avg = a+b+c/3;
  return avg;
  }
  int main()
  {
  float a,b,c,K;
  printf("Enter the values of three numbers\n");
  scanf("%f %f %f",&a,&b,&c);
  K = calculate(a,b,c);
  printf("Average of the three numbers is %f",K);
  return 0;
  }
