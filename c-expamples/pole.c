#include <stdio.h>

void bubleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j+1] < arr[j]) {
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main() {
	int arr[] = {10, 11, 29, 5, 1, 8, 20, 9, 25, 30, 66, 55};
	int velikost = sizeof(arr)/sizeof(arr[0]);
	//printf("%i \n",velikost);  
	bubleSort(arr, velikost);
	
	int loop;
	for(loop = 0; loop < velikost; loop++)
		printf("%d ", arr[loop]);

	return 0;
}
