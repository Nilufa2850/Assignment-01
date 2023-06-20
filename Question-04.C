/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/

#include<stdio.h>
int main()
{
    float R , A ;
    printf("Enter the radius of circle : ");
    scanf("%f",&R);
    A = 3.14*R*R;
    printf("Area of circle is A=%f having the radius R=%f",A,R);

    return 0;
}
