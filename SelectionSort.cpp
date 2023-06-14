#include <iostream>

void selection_sort(int arr[], int n) {
	int i, j, min;
	for (i = 0; i < n-1; i++) {
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min]) {
			min = j;
		}
		int key = arr[min];
		arr[min] = arr[i];
		arr[i] = key;
	}
}
int main() {
	int arr[] = {86, 23, 42, 14, 65, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	selection_sort(arr, n);
	
	std::cout << "Sorted array: " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << std::endl;
	}
	return 0;
} 
