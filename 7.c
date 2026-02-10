#include <stdio.h>
int main() {
    int num1, num2;
    float average;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    average = (float)(num1 + num2) / 2;
    printf("The average of %d and %d is: %.2f\n", num1, num2, average);
    return 0;
}

