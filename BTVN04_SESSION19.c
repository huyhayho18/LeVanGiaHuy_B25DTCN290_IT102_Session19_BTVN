#include <stdio.h>

void countValue(int *arr, int n, int x) {
	int found = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            printf("Phan tu %d tai vi tri %d\n", x, i);
            found = 1;
        }
    }
    if (!found) {
		printf("Khong tim thay phan tu %d trong mang\n", x);
	}
}

int main () {
	
	int n = 6, x;
	printf ("Nhap so can tim kiem: ");
	scanf ("%d",&x);
	int arr[] = {1,2,3,4,5,6};
	countValue(arr, n, x);
	
	return 0;
}
