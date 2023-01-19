#include <stdio.h>
#include <stdlib.h>

/*
 *  fopen(<fichier>, <mode_ouverture>)  : ouvre un fichier
 *                  - r (lecture seule, doit exister)
 *                  - w (écriture seule)
 *                  - a (ajout fin de fichier)
 *                  - r+ (lecture/écriture, doit exister)
 *                  - w+ (lecture/écriture, supprime le contenu)
 *                  - a+ (ajout lecture/écriture, fin de fichier)
 *
 *  fclose(<fichier>)   : fermer un fichier ouvert
 *  feof(<fichier>)      : tester la fin d'un fichier
 *
 *  [LECTURE]
 *  fgetc(<fichier>)                                : lire un caractère
 *  fgets(<chaine>, <taille_chaine>, <fichier>)     : lit une ligne
 *  fscanf(<fichier>, <format>, ...)                : lit un texte formaté
 *
 *  [ECRITURE]
 *  fputc(<caractère>, <fichier>)                   : écrit un caractère
 *  fputs(<chaine>, <fichier>)                      : écrit une chaine de caractère
 *  fprintf(<fichier>, <format>, ...)               : écrit un texte format
 *
 *  [POSITIONNEMENT]
 *  ftell(<fichier>)                                : retourne une position curseur dans le fichier
 *  fseek(<fichier>, <deplacement>, <origine>)      : déplace le curseur
 *                                  - SEEK_SET (début du fichier)
 *                                  - SEEK_CUR (position courant)
 *                                  - SEEK_END (fin du fichier)
 *  rewind(<fichier>                                : réinitialise la position du curseur
*/

int main(void) {

    FILE *fichier = fopen("/Users/titouanescorneboueu/Documents/learning_c/data.txt", "w+");
    signed char text[256];
    char pseudo[] = "Oscar";
    int age = 22;
    int year = 2000;

    if (fichier == NULL) {
        printf("Can't open file\n");
        exit(1);
    }

//    Ecriture du fichier
    fprintf(fichier, "%s %d %d", pseudo, age, year);

//    Lecture du fichier
    fscanf(fichier, "%s %d %d", &text, &age, &year);

    printf("Name : %s\n", text);
    printf("Age : %d\n", age);
    printf("Year : %d\n", year);

    fclose(fichier);
    return 0;
}