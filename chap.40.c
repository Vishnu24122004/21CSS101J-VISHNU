int main()
{
    float base, perpendicular, area;
    printf("Enter base of right angled triangle=");
    scanf("%f", &base);
    printf("Enter perpendicular of right angled triangle=");
    scanf("%f", &perpendicular);
    
    area =(base * perpendicular)/2;
    printf("Area of triangle : %0.2f\n", area);
     
   
    return 0;
