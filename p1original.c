#include<stdio.h>
void input(float*base, float*height)
{
  printf("Enter the value of BASE:-\n");
  scanf("%f",base);
  printf("Enter the value of HEIGHT:-\n");
  scanf("%f",height);
}

void find_area(float base, float height,float*area)
{

  *area=0.5*base*height;
}

void output(float a, float b,float area)

{
  printf("The Area of trinagle is %f",area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}