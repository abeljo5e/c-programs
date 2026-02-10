#include <stdio.h>
#include <string.h>

int main() {
  
    char str[50]; 
    printf("Enter string: ");
    fgets(str,sizeof(str), stdin); 
    printf("Length of string = %lu\n", strlen(str)-1); 
    return 0;
}

