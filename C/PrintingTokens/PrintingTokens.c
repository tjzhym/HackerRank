#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char* s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for (size_t index = 0; s[index] != '\0'; ++index) {
        if (s[index] == ' ') {
            printf("\n");
        }
        else {
            printf("%c", s[index]);
        }
    }
    return 0;
}