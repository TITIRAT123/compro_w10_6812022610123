#include <stdio.h>

int main() {
    int n, i;
    float score, sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter %d student scores (one per line):\n", n);

    for(i = 1; i <= n; i++) {
        printf("Score %d: ", i);
        scanf("%f", &score);
        sum += score;
    }

    average = sum / n;

    printf("\nNumber of students = %d\n", n);
    printf("Average score = %.2f\n", average);

    return 0;
}