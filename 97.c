#include <stdio.h>
int main() {
  printf("RA2211042010043"\n)
  int number;
  printf("Enter a number : ");
  scanf("%d", &number);
  
  if(number % 3 == 0)
    printf("The number is divisible by 3");
  else 
    printf("The number is not divisible by 3");
  return 0;
}
