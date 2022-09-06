#include <stdio.h>
#include <stdlib.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    scanf("%d\n", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    int sum = 0;
    for (int index = 0; index < n; ++index) {
        scanf("%d ", &arr[index]);
        sum += arr[index];
    }
    printf("%d\n", sum);
    free(arr);
    return 0;
}