#include <stdio.h>

int main(void) {
    int note;

    printf("Note (0-20) : ");
    scanf("%d", &note);

    if (note < 0 || note > 20) {
        printf("Note invalide\n");
        return 1;
    }

    if (note >= 16) {
        printf("Mention : Tres bien\n");
    } else if (note >= 14) {
        printf("Mention : Bien\n");
    } else if (note >= 12) {
        printf("Mention : Assez bien\n");
    } else if (note >= 10) {
        printf("Mention : Passable\n");
    } else {
        printf("Mention : Insuffisant\n");
    }

    if (note >= 10) {
        printf("Resultat : Admis\n");
    } else {
        printf("Resultat : Refusé\n");
    }

    return 0;
}