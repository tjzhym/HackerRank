#include <stdio.h>

int max(int a, int b){
    return (a >= b) ? a : b;
}

void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a + 1; b <= n; ++b) {
            int and_value = a & b;
            if (and_value < k) {
                max_and = max(max_and, and_value);
            }
            int or_value = a | b;
            if (or_value < k) {
                max_or = max(max_or, or_value);
            }
            int xor_value = a ^ b;
            if (xor_value < k) {
                max_xor = max(max_xor, xor_value);
            }
        }
    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
