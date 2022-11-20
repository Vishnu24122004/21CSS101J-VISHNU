#include <stdio.h>
int main() {
  printf("RA2211042010043"\n)
  int age;
  printf("Enter age : ");
  scanf("%d", &age);
  
  if(0<=age && age<18)
    printf("Not elgible to vote");
  else 
    printf("Elgible to vote");
  return 0;
}
