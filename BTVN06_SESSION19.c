#include <stdio.h>

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
    printf("Mang B sau khi sao chep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", src[i]);
    }
}

int main() {
    int n = 5;
    int A[] = {10, 20, 30, 40, 50};
    int B[5];
    copyArray(A, B, n);

    return 0;
}
