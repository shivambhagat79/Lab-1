#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c;
    float real_result_1, real_result_2;
    float complex_result_real, complex_result_img;

    printf("Enter a, b and c : \n");
    scanf("%f%f%f", &a, &b, &c);

    float determinent = pow(b, 2) - 4 * a * c;

    if (determinent >= 0)
    {
        real_result_1 = (-b + sqrt(determinent)) / (2 * a);
        real_result_2 = (-b - sqrt(determinent)) / (2 * a);

        printf("root 1 = %f \n root 2 = %f \n", real_result_1, real_result_2);
    }
    else
    {
        complex_result_real = -b / (2 * a);
        complex_result_img = sqrt(-determinent) / (2 * a);

        printf("root 1 = %f + i%f\n", complex_result_real, complex_result_img);
        printf("root 1 = %f - i%f\n", complex_result_real, complex_result_img);
    }
}