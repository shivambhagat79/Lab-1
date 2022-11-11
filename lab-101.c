#include <stdio.h>
#include <math.h>

void main()
{
    float x, y, z;
    printf("Enter three numbers:\n");
    scanf("%f%f%f", &x, &y, &z);

    float result = pow(x, 3) + y - z * x / z;

    printf("result : %f \n", result);
}
