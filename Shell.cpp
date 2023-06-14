#include <iostream>

void shellSort(int arr[], int n) {
	int i, j, temp, gap;
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
	int arr[] = {86, 23, 42, 14, 65, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	shellSort(arr, n);
	
	std::cout << "Sorted array: " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << std::endl;
	}
	return 0;
} 
