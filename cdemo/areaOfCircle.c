#include <stdio.h>

float areaOfCircle(float r)
{
	float area = 3.14*r*r;
	return area;
}

int main()
{

float radius = 3.5;
while (radius <= 12.5)
{
	float area = areaOfCircle(radius);
	printf("A circle of radius %f has an area of about %f\n", radius, area);
	radius++;

}

}

