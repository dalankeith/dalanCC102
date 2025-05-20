#include <stdio.h>

int main() {
    int i;
    int n = 21; 
    int first = 0, second = 1, next;

    printf("Kassandra Kieth Dalan\n", n);
    printf("Student ID , 23-00256\n", n);

    for (i = 0; i < n; i++) {
        if (i == 0) {
            next = 0;
        } else if (i == 1) {
            next = 1;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}
