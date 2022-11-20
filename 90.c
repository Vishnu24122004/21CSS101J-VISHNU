#include <stdio.h>
int main() {
    float a,u,t,v;
    printf("RA2211042010043");
    printf("Enter the acceleration value : ");
    scanf("%f",&a);
    printf("Enter the initial velocity : ");
    scanf("%f", &u);
    printf("Enter the time taken : ");
    scanf("%f",&t);
     
    v = u + (a*t);
    
    printf("Final velocity : %.3f\n", v);

    return 0;
}
