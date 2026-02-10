#include <stdio.h>

int main() {
    char str[100]; 
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
  
        if (str[i] != str[length - i - 1]) {
            flag = 1; 
            break;    
        }
    }

   
    if (flag == 0) {
        printf("\"%s\" is a palindrome string.\n", str);
    } else {
        printf("\"%s\" is not a palindrome string.\n", str);
    }

    return 0;
}

