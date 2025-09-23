#include <stdio.h>

int main() {
    int i;
    printf("Enter a number to start countdown: ");
    scanf("%d", &i);

    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
    printf("Blast off!\n");
    return 0;
}
