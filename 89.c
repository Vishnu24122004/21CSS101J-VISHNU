#include <stdio.h>
int main() {
    float a,u,t,s;
    printf("RA2211042010043\n");
    printf("Enter the acceleration value : ");
    scanf("%f",&a);
    printf("Enter the initial velocity : ");
    scanf("%f", &u);
    printf("Enter the time taken : ");
    scanf("%f",&t);
     
    s = u*t + 0.5*a*t*t;
    
    printf("Distance travelled : %.3f\n", s);

    return 0;
}
