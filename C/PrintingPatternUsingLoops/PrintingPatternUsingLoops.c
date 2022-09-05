#include <stdio.h>

int min(int a, int b) {
    return a <= b ? a : b;
}

void PrintPattern(int n) {
    int size = 2 * n - 1;
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            int minimum = min(row, col);
            minimum = min(minimum, size - 1 - row);
            minimum = min(minimum, size - 1 - col);
            printf("%d ", n - minimum);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    PrintPattern(n);
    return 0;
}
