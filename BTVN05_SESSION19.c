#include <stdio.h>

int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 3, 4};
    int n = 4;
    int result = compareArrays(a, b, n);
    printf("Ket qua: %d\n", result);

    return 0;
}

