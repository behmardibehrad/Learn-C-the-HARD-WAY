#include<stdio.h>
#define PI 3.14

int main(int argc, char*argv[])

{

float radius=0;
float circumference=0;
float area=0 ;

printf( "please enter the radius of the circle:");
scanf(" %f", &radius); 

area = PI*radius*radius;


printf( "radius is %.2f \n", radius);
printf( "The area of the circle is %.2f \n", area);
printf( "PI is %.2f \n", PI);

circumference = 2*PI*radius;

printf( "The area of the circle is %.2f \n", area);
printf( "The circumference of the circle is %.2f \n", circumference);

return 0;

}