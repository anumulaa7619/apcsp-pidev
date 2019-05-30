#include <stdio.h>
#include <math.h>

float areaOfCircle(float r) 
{
  float area = (M_PI * r * r);
  return area;
}

int main()
{
  float small, big;
  
  printf("Enter a radius:\n");
  scanf("%f", &small);
  
  printf("Enter a greater radius:\n");
  scanf("%f", &big);
  
  for (float r = small; r <= big; r++)
  {
	float compute = areaOfCircle(r);
	printf("A circle of r = %f is has area = %f\n", radius, compute);
  }
}
