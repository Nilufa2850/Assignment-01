/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.*/

#include<stdio.h>
int main()
{
    float radius , area ;
    printf("Enter the radius of circle : ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("Area of the circle is : %f",area);

    return 0;
}
