#include <stdio.h>

// prototypes
void   min_max(int tab[], int n, int *pmin, int *pmax);
double moyenne(int tab[], int n);

// definitions

void min_max(int tab[], int n, int *pmin, int *pmax) {
    *pmin = tab[0];
    *pmax = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < *pmin) *pmin = tab[i];
        if (tab[i] > *pmax) *pmax = tab[i];
    }
}

double moyenne(int tab[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += tab[i];
    }
    return total / (double)n;
}

// main

int main(void) {
    int notes[6] = {12, 8, 17, 5, 14, 11};
    int n = 6;

    printf("Notes : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", notes[i]);
    }
    printf("\n\n");

    // min_max pointeurs
    int min, max;
    min_max(notes, n, &min, &max);

    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);
    printf("Moyenne : %.2f\n", moyenne(notes, n));

    return 0;
}