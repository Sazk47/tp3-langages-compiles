#include <stdio.h>

int  minimum(int a, int b);
int  maximum(int a, int b);
int  valeur_absolue(int x);
int  est_pair(int x);
long factorielle(int n);

int minimum(int a, int b) {
    if (a < b) return a;
    return b;
}

int maximum(int a, int b) {
    if (a > b) return a;
    return b;
}

int valeur_absolue(int x) {
    if (x < 0) return -x;
    return x;
}

int est_pair(int x) {
    if (x % 2 == 0) return 1;
    return 0;
}

long factorielle(int n) {
    long resultat = 1;
    for (int i = 2; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main(void) {
    printf("=== minimum ===\n");
    printf("minimum(3, 7)   = %d\n", minimum(3, 7));
    printf("minimum(10, 2)  = %d\n", minimum(10, 2));
    printf("minimum(5, 5)   = %d\n", minimum(5, 5));

    printf("\n=== maximum ===\n");
    printf("maximum(3, 7)   = %d\n", maximum(3, 7));
    printf("maximum(10, 2)  = %d\n", maximum(10, 2));
    printf("maximum(5, 5)   = %d\n", maximum(5, 5));

    printf("\n=== valeur_absolue ===\n");
    printf("valeur_absolue(8)  = %d\n", valeur_absolue(8));
    printf("valeur_absolue(-8) = %d\n", valeur_absolue(-8));
    printf("valeur_absolue(0)  = %d\n", valeur_absolue(0));

    printf("\n=== est_pair ===\n");
    printf("est_pair(4)  = %d\n", est_pair(4));
    printf("est_pair(7)  = %d\n", est_pair(7));
    printf("est_pair(0)  = %d\n", est_pair(0));

    printf("\n=== factorielle ===\n");
    printf("factorielle(0)  = %ld\n", factorielle(0));
    printf("factorielle(1)  = %ld\n", factorielle(1));
    printf("factorielle(5)  = %ld\n", factorielle(5));
    printf("factorielle(10) = %ld\n", factorielle(10));

    return 0;
}