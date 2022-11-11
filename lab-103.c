#include <stdio.h>
#include <math.h>

// Function for getting distance between two points
float distance(int N[], int M[])
{
    float result = sqrt(pow(N[1] - M[1], 2) + pow(N[2] - M[2], 2) + pow(N[3] - M[3], 2));
    return result;
}

// main function
void main()
{
    // Arrays holding position values of each point
    int O[3] = {0, 0, 0};
    int A[3] = {2, 5, 31};
    int B[3] = {1, 2, 9};
    int C[3] = {0, 7, 27};
    int D[3] = {1, 8, 10};

    float AOB = distance(A, O) + distance(B, O);
    float COD = distance(C, O) + distance(D, O);

    if (AOB < COD)
    {
        printf("AOB is shorter.\n");
    }
    else if (AOB > COD)
    {
        printf("COD is shorter.\n");
    }
    else
    {
        printf("AOB is equal to COD.\n");
    }
}
