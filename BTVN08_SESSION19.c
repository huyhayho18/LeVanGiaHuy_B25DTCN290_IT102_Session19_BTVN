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

void displayEven(int *array, int size) {
    printf("Cac phan tu chan: ");
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
			printf("%d ", *(array+i));
		}
    }
    printf("\n");
}


int isPrime(int size) {
    if (size < 2) {
		return 0;
	}
    for (int i = 2; i * i <= size; i++) {
        if (size % i == 0) {
			return 0;
		}
    }
    return 1;
}

void displayPrime(int *array, int size) {
    printf("Cac phan tu nguyen to: ");
    for (int i = 0; i < size; i++) {
        if (isPrime(array[i])) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}

void reverseArray(int *array, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = *(array + i);
        *(array + i) = *(array + size - i - 1);
        *(array + size - i - 1) = temp;
    }
    printf("Mang sau khi dao nguoc: ");
}

void sortAscending(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(array+i) > *(array+j)) {
                int temp = *(array+i);
                *(array+i) = *(array+j);
                *(array+j) = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
}

void sortDescending(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(array+i) < *(array+j)) {
                int temp = *(array+i);
                *(array+i) = *(array+j);
                *(array+j) = temp;
            }
        }
    }
    printf("Mang sau khi sap xep giam dan: ");
}

void search(int *array, int size, int x) {
    int found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < size; i++) {
        if (array[i] == x) {
            printf("Phan tu %d tai vi tri %d\n", x, i);
            found = 1;
        }
    }
    if (!found) {
		printf("Khong tim thay phan tu %d trong mang\n", x);
	}
}

int main() {
    int choice, array[MAX], size = 0, x,choice02;
    do {
        printf("+-----------------MENU----------------+\n");
        printf("1. Nhap vao so phan tu va tung phan tu|\n");
        printf("2. Hien thi cac phan tu trong mang    |\n");
        printf("3. In ra cac phan tu chan             |\n");
        printf("4. In ra cac phan tu nguyen to        |\n");
        printf("5. Dao nguoc mang                     |\n");
        printf("6. Sap xep mang                       |\n");
        printf("7. Tim kiem phan tu trong mang        |\n");
        printf("8. Thoat                              |\n");
        printf("+-------------------------------------+\n");
        printf("Lua chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
				enterArray(array, &size); 
				break;
            case 2: 
				printArray(array, size); 
				break;
            case 3: 
				displayEven(array, size); 
				break;
            case 4: 
				displayPrime(array, size);
				break;
            case 5:
				reverseArray(array, size);
			    printArray(array, size);
			    printf ("\n");
			    break;
            case 6:
                printf("Chon kieu sap xep:\n");
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                scanf("%d", &choice02);
                switch (choice02) {
                	case 1:
                		sortAscending(array,size);
                		printArray(array, size);
			    		printf ("\n");
                		break;
                	case 2:
                		sortDescending(array, size);
                		printArray(array, size);
			    		printf ("\n");
                		break;
				}
				break;
			case 7:
				search(array, size, x);
				break;
			case 8:
				printf ("Ket thuc chuong trinh");
				break;
			default:
				printf ("Vui long chon chuc nang tu 1 - 8\n");
				break;
		}
	} while (choice != 8);
	
	return 0;
}
