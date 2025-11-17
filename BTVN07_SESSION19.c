#include <stdio.h>
#define MAX 100

void enterArray(int *array, int *size) {
	printf ("Nhap so phan tu cua mang: ");
	scanf ("%d",size);
	if (*size <= 0 || *size > MAX) {
		printf ("So phan tu khong hop le");
		return;
	}
	for (int i = 0; i < *size; i++) {
		printf ("array[%d] = ", i);
		scanf ("%d",(array+i));
	}
}

void printArray(int *array, int size) {
	if (size == 0) {
		printf ("Mang rong");
		return;
	}
	printf("Cac phan tu trong mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void lengthArray(int *array, int *size) {
	if (size == 0) {
		printf ("Mang rong");
		return;
	}
	printf ("Do dai cua mang la: %d\n",*size);
}

void sum(int *array, int size) {
	if (size == 0) {
        printf("Mang rong\n");
        return;
    }
	int sum = 0, i;
	for (i = 0; i < size; i++) {
		sum = sum + *(array + i);
	}
	printf ("Tong cua mang la: %d",sum);
}

void maxArray(int *array, int size) {
    if (size == 0) {
        printf("Mang rong\n");
        return;
    }
    int max = *(array);
    for (int i = 0; i < size; i++) {
        if (*(array+i) > max) {
			max = *(array+i);
		}
    }
    printf("Phan tu lon nhat: %d\n", max);
}

int main () {
	
	int choice, array[MAX], size;
	do {
		printf ("+-----------------MENU----------------+\n");
		printf ("1.Nhap vao so phan tu va tung phan tu |\n");
		printf ("2.Hien thi cac phan tu trong mang     |\n");
		printf ("3.Tinh do dai mang                    |\n");
		printf ("4.Tong cac phan tu trong mang         |\n");
		printf ("5.Hien thi phan tu lon nhat trong mang|\n");
		printf ("6.Thoat                               |\n");
		printf ("+-------------------------------------+\n");
		printf ("Lua chon chuc nang: ");
		scanf ("%d",&choice);
		switch (choice) {
			case 1:
				enterArray(array,&size);
				break;
			case 2:
				printArray(array, size);
				break;
			case 3:
				lengthArray(array, &size);
				break;
			case 4:
				sum(array, size);
				break;
			case 5:
				maxArray(array, size);
				break;
			case 6:
				printf ("Ket thuc chuong trinh");
				break;
			default:
				printf ("Vui long chon chuc nang tu 1 - 6\n");
				break;
		}
	} while (choice != 6);
	
	return 0;
}



