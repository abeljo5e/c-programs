#include <stdio.h>

int main() {
    int n, count_even = 0, count_odd = 0;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n]; 
 printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
 printf("Element %d: ", i + 1);
 scanf("%d", &arr[i]);
 }

for (int i = 0; i < n; i++) {
  if (arr[i] % 2 == 0) {
      count_even++;
    } else {
    count_odd++;
    }
    }

    printf("\nTotal even numbers in the array: %d\n", count_even);
    printf("Total odd numbers in the array: %d\n", count_odd);

    return 0;
}


