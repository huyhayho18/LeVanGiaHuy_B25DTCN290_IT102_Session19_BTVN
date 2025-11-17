#include <stdio.h>

void countEvenOdd(int *arr, int n, int *even, int *odd) {
	int i;
	for (i = 0; i < n; i++) {
		if (*(arr + i) % 2 == 0) {
			(*even)++;
		} else {
			(*odd)++;
		}
	}
}

int main () {
	
	int n = 6;
	int arr[] = {1,2,3,4,5,6};
	int even = 0, odd = 0;
	countEvenOdd(arr, n, &even, &odd);
	printf ("So luong cac so le trong mang la: %d\n",odd);
	printf ("So luong cac so chan trong mang la: %d\n",even);
		
	return 0;
}
