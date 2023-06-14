#include <iostream>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high) {
	int i, j, pivot;
	pivot = arr[high];
	i = (low - 1);
    for (j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quick_sort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		
	    quick_sort(arr, low, pi - 1);
	    quick_sort(arr, pi + 1, high);
	}
}

int main() {
	int arr[] = {43, 24, 82, 92, 14};
	int n = sizeof(arr) / sizeof(arr[1]);
	
	quick_sort(arr, 0, n - 1);
	
	std::cout << "Sorted array: " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	return 0;
}
