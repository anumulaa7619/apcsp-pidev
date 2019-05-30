#include <stdio.h>
#include <math.h>

float areaOfCircle(float r) 
{
  float area = (M_PI * r * r);
  return area;
}
//This is an function defined before the int main which returns an area using the accurate value of pi for any given radius

int main()
{
  float small, big;	//Here we initialize 2 variables where the code will iterate in between
  
  printf("Enter a radius:\n");
  scanf("%f", &small);			//take user input
  
  printf("Enter a greater radius:\n");
  scanf("%f", &big);			//take user input
  
  for (float r = small; r <= big; r++)		//Interates through the integers in between the 2 inputted values
  {
	float compute = areaOfCircle(r);
	printf("A circle of r = %f is has area = %f\n", radius, compute);
  }
}
