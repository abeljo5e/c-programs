#include <stdio.h>

int main() {
    int n = 50, i = 0, length = 0;

    char str[50];

    printf("Enter string: ");

    fgets(str, n, stdin); 

    while (str[i] != '\0' && str[i] != '\n') {
        length++;
        i++;
    }

    printf("Length of string = %d\n", length);
    return 0;

}
