#include <stdio.h>

int largest(int a[], int n) {
    if (n == 1)
        return a[0];
    
    int max = largest(a, n - 1);
    
    return (a[n - 1] > max) ? a[n - 1] : max;
}

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max = largest(a, n);
    
    printf("Largest element: %d\n", max);
    
    return 0;
}
