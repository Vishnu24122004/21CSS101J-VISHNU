int main()
{
  
  float side, area, temp;

  printf("Enter the Side of the triangle: ");
  scanf("%f",&side);

  temp = sqrt(3) / 4 ;
  area = temp * side * side ;
  printf("Area of Equilateral Triangle is: %.3f",area);

  return 0;
}
