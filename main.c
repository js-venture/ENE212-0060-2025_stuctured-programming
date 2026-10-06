#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
   // formula for Surface area of sphere is 4*pi*radius^2

   //get the radius
    double radius_of_sphere;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius_of_sphere);

    //calculate the area
    double area = 4.0f * PI * radius_of_sphere * radius_of_sphere;

    //output the result
    printf("The Surface Area is: %.4lf\n", area);

    return 0;
}
