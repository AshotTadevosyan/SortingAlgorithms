#include<iostream>
  
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void ShakerSort(int arr[], int n) { 
	int i, j, k;
	for(i = 0; i < n; i++) { 
		for(j = i+1; j < n; j++) {
			if(arr[j] < arr[j-1]) {
				swap(&arr[j], &arr[j-1]);
			}
		}
		n--; 
 		for(k = n-1; k > i; k--) { 
			if(arr[k] < arr[k-1])
				swap(&arr[k], &arr[k-1]);  
		}
		i++;
	}
}
int main() {
	int arr[] = {86, 23, 42, 14, 65, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	ShakerSort(arr, n);
	
	std::cout << "Sorted array: ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	return 0;
} 

