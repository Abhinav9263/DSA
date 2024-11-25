#include <stdio.h>


int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;       
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;  
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
      
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high); 
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("Shorting given array using Bubble Short Algorithm \n\n");
int n;
printf("Enter the number of Array element : ");
scanf("%d",&n);
int arr[n];
printf ("Emter Array element : ");
for (int i =0;i<n;i++){
	scanf("%d",&arr[i]);
}

    printf("Original array: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

