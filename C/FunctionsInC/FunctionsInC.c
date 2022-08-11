#include <stdio.h>

int max(const int a, const int b) {
    return a > b ? a : b;
}

int max_of_four(const int a, const int b, const int c, const int d) {
    int temp_max = 0;
    temp_max = max(temp_max, a);
    temp_max = max(temp_max, b);
    temp_max = max(temp_max, c);
    temp_max = max(temp_max, d);
    return temp_max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}