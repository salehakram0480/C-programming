#include <stdio.h>

int main(){

    int A, B;

    printf("Enter Value of A: ");
    scanf("%d", &A);

    printf("Enter Value of B: ");
    scanf("%d", &B);

    int x;

    x= A;

    A=B;

    B=x;
    printf("After Swapping: A = %d, B = %d", A, B);

    return 0;
}
