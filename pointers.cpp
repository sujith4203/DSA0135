#include<stdio.h>
#define PI 3.14

int main()
{
  float radius, Area;
  float *Radiusptr, *Areaptr;

  Radiusptr= &radius;
  Areaptr=&Area;

  printf("Please enter the radius of Circle: ");
  scanf("%f",Radiusptr);

  *Areaptr = PI*(*Radiusptr)*(*Radiusptr);

  printf("The Area of Cicle with radius %.3f = %.3f\n", *Radiusptr, *Areaptr);

  return 0;
}
