#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}