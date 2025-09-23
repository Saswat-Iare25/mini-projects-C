#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Largest is %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest is %d\n", b);
    else
        printf("Largest is %d\n", c);

    return 0;
}
