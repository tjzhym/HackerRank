#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char input[1001];
    int frequency[10];
    memset(frequency, 0, sizeof(int) * 10);
    scanf("%s", input);
    for (int index = 0; input[index] != '\0'; ++index) {
        if (isdigit(input[index])) {
            ++frequency[input[index] - '0'];
        }
    }
    for (int number = 0; number < 10; ++number) {
        printf("%d ", frequency[number]);
    }
    return 0;
}
