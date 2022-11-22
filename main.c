#include <stdio.h>

#define SIZE_TAB 5

int * creer_tableau(void);
void afficher_tableau(int tab[], int taille);

int main() {
    int * tableau = creer_tableau();

    afficher_tableau(tableau, SIZE_TAB);

    return 0;
}

int * creer_tableau(void) {
    static int tableau_entier[5];

    for (int i = 0; i < 5; ++i) {
        tableau_entier[i] = i * 3;
    }

    return tableau_entier;
}

void afficher_tableau(int tab[], int taille) {
    for (int i = 0; i < taille; ++i) {
        printf("[%d]", tab[i]);
    }
}