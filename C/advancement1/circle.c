#include <stdio.h>

int main()
{
    float pie = 3.14;
    float r;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    
    float area = pie * r * r;
    printf("The area of the circle is %f", area);
    
    return 0;
}