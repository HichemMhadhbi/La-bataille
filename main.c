#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char J1[100], J2[100];
    int egalites = 0;
    int i;

    printf("La carte de joueur 1 : ");
    scanf("%s", J1);

    printf("La carte de joueur 2 : ");
    scanf("%s", J2);

    for (i = 0; i < strlen(J1); i++) {
        if (J1[i] < 'A' || J1[i] > 'M') {
            printf("Erreur: la chaine J1 contient un caractere invalide '%c'.\n", J1[i]);
            return 1;
        }
    }
    for (i = 0; i < strlen(J2); i++) {
        if (J2[i] < 'A' || J2[i] > 'M') {
            printf("Erreur: la chaine J2 contient un caractere invalide '%c'.\n", J2[i]);
            return 1;
        }
    }

    int len1 = strlen(J1);
    int len2 = strlen(J2);

    int minLen = len1 < len2 ? len1 : len2;

    for (i = 0; i < minLen; i++) {
        if (J1[i] == J2[i]) {
            egalites++;
        } else if (J1[i] < J2[i]) {
            printf("1\n");
            printf("%d\n", egalites);
            return 0;
        } else {
            printf("2\n");
            printf("%d\n", egalites);
            return 0;
        }
    }

    printf("La resultat est : \n");
    if (len1 == len2) {
        printf("=\n");
    } else if (len1 > len2) {
        printf("1\n");
    } else {
        printf("2\n");
    }
    printf("%d\n", egalites);

    return 0;
}
