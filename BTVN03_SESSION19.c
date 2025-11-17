#include <stdio.h>

void average(int *arr, int n) {
	int sum = 0, i;
	float avg;
	for (i = 0; i < n; i++) {
		sum = sum + *(arr + i);
	}
	avg = (float) sum / n;
	printf ("Gia tri trung binh cua mang: %.2f",avg);
}

int main () {
	
	int n = 6;
	int arr[] = {1,2,3,4,5,6};
	average(arr, n);
	
	return 0;
}
