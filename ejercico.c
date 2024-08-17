
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    printf("Hello World!\n");

    char *str = "Hello World!\n";
    printf("%s", str);
    free(str);
    str = NULL;
    printf("%s", str); // Output: NULL
    printf("%s", str); // Output: NULL
    printf("%s", str);  // Output: NULL

    char *str2 = malloc(sizeof(char) * (strlen("Hello World!\n") + 1));
}