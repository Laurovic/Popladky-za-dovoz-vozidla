#include <stdio.h>

int main(void) {
    int vykon = 0;

    printf("Kolko ma auto kiloWat?");
    scanf("%i", &vykon);

    if (vykon > 0){
        if (vykon <= 80){
            printf("Poplatok za dovoz je 33€");
        }
        if (vykon > 80 && vykon <= 86){
            printf("Poplatok za dovoz je 90€");
        }
        if (vykon > 86 && vykon <= 92){
            printf("Poplatok za dovoz je 110€");
        }
        if (vykon > 92 && vykon <= 98){
            printf("Poplatok za dovoz je 150€");
        }
        if (vykon > 98 && vykon <= 104){
            printf("Poplatok za dovoz je 210€");
        }
        if (vykon > 104 && vykon <= 110){
            printf("Poplatok za dovoz je 260€");
        }
        if (vykon > 110 && vykon <= 121){
            printf("Poplatok za dovoz je 360€");
        }
        if (vykon > 121 && vykon <= 132){
            printf("Poplatok za dovoz je 530€");
        }
        if (vykon > 132 && vykon <= 143){
            printf("Poplatok za dovoz je 700€");
        }
        if (vykon > 143 && vykon <= 154){
            printf("Poplatok za dovoz je 870€");
        }
        if (vykon > 154 && vykon <= 165){
            printf("Poplatok za dovoz je 1 100€");
        }
        if (vykon > 165 && vykon <= 176){
            printf("Poplatok za dovoz je 1 250€");
        }
        if (vykon > 176 && vykon <= 202){
            printf("Poplatok za dovoz je 1 900€");
        }
        if (vykon > 202 && vykon <= 228){
            printf("Poplatok za dovoz je 2 300€");
        }
        if (vykon > 228 && vykon <= 254){
            printf("Poplatok za dovoz je 2 700€");
        }
        if (vykon > 254){
            printf("Poplatok za dovoz je 3 900€");
        }
    } else {
        printf("Zly vstup");
    }
    return (0);
}