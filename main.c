#include <stdio.h>
#include <stdlib.h>

/*
 *  sizeof(<donnee>)                        : retourne la taille en octets d'une donnée
 *  malloc(<taille_en_octets>)              : allouer une taille dynamique en mémoire
 *  free(<donnee_alloue>)                   : libère la mémoire alloué dynamiquement
 *  calloc(<donnee>, <taille_en_octets>)    : alloue et initialise tout à 0
 *  realloc(<donne>, <nouvelle_taille>)     : réalloue un espace mémoire
*/

int main(void) {
    int nbPlayer = 0;
    int *arrayNbPlayer = NULL;
    int i;

    printf("Combien de joueur ?");
    scanf("%d", &nbPlayer);

//      malloc
    arrayNbPlayer = malloc(sizeof(int) * nbPlayer);
//      calloc
//    arrayNbPlayer = calloc(nbPlayer, sizeof(int));

    if (arrayNbPlayer == NULL)
        exit(1);

    for (i = 0; i < nbPlayer; i++) {
        printf("Joueur %d -> numéro %d\n", i + 1, i * 3);
        arrayNbPlayer[i] = i * 3;
    }

    for (i = 0; i < nbPlayer; i++) {
        printf("[%d]\n", arrayNbPlayer[i]);
    }
    printf("Adresse de la liste : %p\n", arrayNbPlayer);
    printf("\n-------------------------------------\n");

    nbPlayer = 5;

//    realloc
    arrayNbPlayer = realloc(arrayNbPlayer, nbPlayer * sizeof(int));

    if (arrayNbPlayer == NULL)
        exit(1);

    for (i = 0; i < nbPlayer; i++) {
        printf("Joueur %d -> numéro %d\n", i + 1, i * 3);
        arrayNbPlayer[i] = i * 3;
    }

    for (i = 0; i < nbPlayer; i++) {
        printf("[%d]\n", arrayNbPlayer[i]);
    }
    printf("Adresse de la liste : %p\n", arrayNbPlayer);
    free(arrayNbPlayer);

    return 0;
}