#include <stdio.h>

int main() {
    float scores[2][3];  
    float sumMath = 0, sumPhy = 0, sumChem = 0;
    int i;
    for(i = 0; i < 2; i++) {
        printf("Enter scores for Student %d:\n", i+1);

        printf("Math: ");
        scanf("%f", &scores[i][0]);

        printf("Physics: ");
        scanf("%f", &scores[i][1]);

        printf("Chemistry: ");
        scanf("%f", &scores[i][2]);

        sumMath += scores[i][0];
        sumPhy  += scores[i][1];
        sumChem += scores[i][2];
    }
    printf("\nScore Table:\n");
    printf("%-8s %-8s %-8s %-8s\n", "Student", "Math", "Physics", "Chemistry");
    for(i = 0; i < 2; i++) {
        printf("%-8d %-8.2f %-8.2f %-8.2f\n", 
               i+1, scores[i][0], scores[i][1], scores[i][2]);
    }
    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sumMath/2);
    printf("Physics: %.2f\n", sumPhy/2);
    printf("Chemistry: %.2f\n", sumChem/2);
    
    return 0;
}