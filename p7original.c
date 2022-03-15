#include<stdio.h>
typedef struct_triangle
{
  float base,altitude,area;
}triangle;
triangle input_triangle()
{
  triangle t;
  printf("enter the base,altitude of a triangle:\n");
  scanf("%f %f ",&t.base,&t.altitude)
    return t;
}
void find_area(triangle*t)
{
  t->area=0.5*(t->base)*(t->altitude);
}
void output(triangle t)
{
  printf("the area of triangle with base=%0.3f & altitude = %0.3f is %0.3f ",t.base,t.altitude,t.area);
}
int main()
{
  triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}