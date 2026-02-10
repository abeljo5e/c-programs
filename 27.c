#include <stdio.h>

int main() {
    int size, i, element;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }  
printf("Enter the element to search: ");
scanf("%d", &element);
  for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            break; 
        }
    }
if (i < size) {
        printf("Element %d found at index %d.\n", element, i);
  } else {
        printf("Element %d not found in the array.\n", element);
    }
return 0;
}


