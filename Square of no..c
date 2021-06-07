#include<stdio.h>
int square(int n)
{
return (n*n);
}
void main()
{
  int number,answer;
  printf("enter the number");
  scanf ("%d",&number);

  answer = square(number);

  printf("square of %d is %d.",number,answer);
  return 0;
  }
