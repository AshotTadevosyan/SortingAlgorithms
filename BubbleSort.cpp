#include <iostream>
#include <ctime>
#include <cstdlib>

void RN(int n, int arr[]) {
	srand(time(NULL));
	rand%
	
}
void bubble_sort(int arr[], int n) {
	int i, j, key;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j+1]) {
				key = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = key;
			}
		}
	}
}

int main() {
	int arr[] = {32, 34, 23, 14, 76};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	bubble_sort(arr, n);
	
	std::cout << "Sorted array: " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << std::endl;
	}
	return 0;
}
