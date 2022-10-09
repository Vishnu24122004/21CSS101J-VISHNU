int main()
{
  
  float length, breadth,perimeter;
  
  printf("Enter the length of the rectangle: ");
  scanf("%f",&length);
  printf("Enter the breadth of the rectangle:");
  scanf("%f",&breadth);
  
  perimeter =  2 * (length + breadth) ;
  printf("perimeter of rectangle is: %.2f",perimeter);

  return 0;
}
