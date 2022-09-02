#include <stdio.h>

void PrintParity(int number) {
    if (number % 2 == 0) {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }
}

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    const char DIGIT_STRING[9][6] = { "one", "two", "three", "four", "five",
                                     "six", "seven", "eight", "nine" };
    for (int number = a; number < b + 1; ++number) {
        if (number > 0 && number < 10) {
            printf("%s\n", DIGIT_STRING[number - 1]);
        }
        else {
            PrintParity(number);
        }
    }
    return 0;
}