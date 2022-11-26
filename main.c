#include <stdio.h>
#include <string.h>

/*
    [Fonctions des chaines]
        strcpy() : copier un string dans un autre
        strlen() : calcule la taille d'un string
        strcmp() : comparer deux string
        strstr() : cherche un string dans un autre
        strchr() : chercher première occurence du caractère
        sprintf() : écrire dans un string
*/

int main() {

    signed char prenom[25] = "Diego";
    signed char stockage[256];

    printf("Ton prénom de base -> %s\n", prenom);

    printf("Changer de prénom ?");
    scanf("%s", stockage);

    strcpy(prenom, stockage);

    printf("Ton nouveau prénom -> %s\n", prenom);

    printf("Ton prenom fait %d de longueur\n", strlen(prenom));



    return 0;
}