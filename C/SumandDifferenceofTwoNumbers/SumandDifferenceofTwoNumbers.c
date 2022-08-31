#include <stdio.h>

void sum_diff_int_int(int left_int, int right_int) {
    printf("%d %d\n", left_int + right_int, left_int - right_int);
}

void sum_diff_float_float(float left_float, float right_float) {
    printf("%.1f %.1f\n", left_float + right_float, left_float - right_float);
}

int main() {
    int left_int, right_int;
    float left_float, right_float;
    scanf("%d %d", &left_int, &right_int);
    scanf("%f %f", &left_float, &right_float);
    sum_diff_int_int(left_int, right_int);
    sum_diff_float_float(left_float, right_float);
    return 0;
}