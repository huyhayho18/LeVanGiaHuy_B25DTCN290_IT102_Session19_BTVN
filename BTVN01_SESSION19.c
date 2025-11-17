#include <stdio.h>

void findMax(int *arr, int n) {
	int max = *(arr), i;
	for (i = 0; i < n; i++) {
		if (max < *(arr + i)) {
			max = *(arr + i);
		}
	}
	printf ("So lon nhat la: %d", max);
}

int main () {
	
	int n = 6;
	int arr[] = {1,2,3,4,5,6};
	findMax(arr, n);
		
	return 0;
}
