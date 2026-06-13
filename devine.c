#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototype
int jouer(int secret);

// definition

int jouer(int secret) {
    int essai;
    int tentatives = 0;

    do {
        printf("Ton essai : ");
        scanf("%d", &essai);
        tentatives++;

        if (essai < secret) {
            printf("Trop petit !\n");
        } else if (essai > secret) {
            printf("Trop grand !\n");
        }

    } while (essai != secret);

    printf("Bravo ! Trouvé en %d tentative(s).\n", tentatives);
    return tentatives;
}

// main

int main(void) {
    srand(time(NULL));

    int secret = rand() % 100 + 1;

    printf("=== Devine le nombre (1-100) ===\n");

    jouer(secret);

    return 0;
}