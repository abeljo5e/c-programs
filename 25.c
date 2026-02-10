#include <stdio.h>

int main() {
    int n, i, large;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    
    int arr[n]; 
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    large = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", large);

    return 0;
}

