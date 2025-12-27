#include <stdio.h>

float calculate_year_average(float scores[3][4][5], int year) {
    float sum = 0.0;
    int count = 0;
    int class, subject; 

    for(class = 0; class < 4; class++) {
        for(subject = 0; subject < 5; subject++) {
            sum += scores[year][class][subject];
            count++;
        }
    }
    return sum / count;
}

float find_highest_score(float (*scores)[4][5]) {
    float max = scores[0][0][0];
    int y, c, s;  

    for(y = 0; y < 3; y++) {
        for(c = 0; c < 4; c++) {
            for(s = 0; s < 5; s++) {
                if (scores[y][c][s] > max) {
                    max = scores[y][c][s];
                }
            }
        }
    }
    return max;
}

int main() {
    float scores[3][4][5];  // 3 years, 4 classes, 5 subjects

    int year, class, subject;  


    printf("Enter scores (0-100):\n");
    for(year = 0; year < 3; year++) {
        printf("Year %d (2023 + %d):\n", year + 2023, year);
        for(class = 0; class < 4; class++) {
            printf("  Class %c:\n", 'A' + class);
            for(subject = 0; subject < 5; subject++) {
                printf("    Subject %d: ", subject + 1);
                scanf("%f", &scores[year][class][subject]);
            }
        }
    }

    // ?? ????? ???????
    printf("\n=== All Scores ===\n");
    for(year = 0; year < 3; year++) {
        printf("Year %d:\n", year + 2023);
        for(class = 0; class < 4; class++) {
            printf("  Class %c: ", 'A' + class);
            for(subject = 0; subject < 5; subject++) {
                printf("%.1f ", scores[year][class][subject]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // ????? ????? ?????????
    printf("=== Average Score per Year ===\n");
    for(year = 0; year < 3; year++) {
        printf("Year %d: %.2f\n", year + 2023, calculate_year_average(scores, year));
    }

    // ???????? ?????
    printf("\nHighest score overall: %.1f\n", find_highest_score(scores));

    return 0;
}
