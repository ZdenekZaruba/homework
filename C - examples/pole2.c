#include <stdio.h>

int bubleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j+1] < arr[j]) {
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	int loop;
	for(loop = 0; loop < size-1; loop++)
		printf("%d ,", arr[loop]);
	printf("%d", arr[size-1]);
	return 0;

}

int main() {
	int arr[] = {10, 11, 29, 5, 1, 8, 20, 9, 25, 30};
	int velikost = sizeof(arr)/sizeof(arr[0]);
	bubleSort(arr,velikost);
	return 0;
}