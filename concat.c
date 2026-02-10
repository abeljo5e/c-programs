#include <stdio.h>

int main() {
    int n, i = 0, j = 0;

    char a[100], b[100];

    printf("Enter first string: ");
    fgets(a,sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b,sizeof(b), stdin);

    while (a[i] != '\0') {
        if (a[i] == '\n') {
            a[i] = '\0';
            break;
        }
        i++;
    }

    while (b[j] != '\0' && b[j] != '\n') {
        a[i++] = b[j++];
    }

    a[i] = '\0';

    printf("Concatenated string = %s\n", a);
    return 0;
}
