#include <iostream>

void insertion_sort(int arr[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
		  arr[j+1] = arr[j];
		  j--;
	    }
		arr[j+1] = key;
	}
}

int main() {
	int arr[] = {86, 23, 42, 14, 65, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	insertion_sort(arr, n);
	
	std::cout << "Sorted array: " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << std::endl;
	}
	return 0;
} 
