#include <stdio.h>

int main() {
    int a;
    int b;
    int temp;       // A temporary variable is needed for swapping

    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
