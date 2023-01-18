#include <stdio.h>
#include <string.h>

// pointeur->champ = X;
// Remplace (*pointeur).champ = X;

// Struct
typedef struct Player {
    signed char username[256];
    int hp;
    int mp;
} Player;

// Enumération
typedef enum MarqueVoiture {
    PEUGEOT, // 0
    NISSAN, // 1
    MERCEDES, // 2
    BMW // 3
} MarqueVoiture;

// Union
union Nombre {
    int entier;
    float decimal;
};

void create_player(Player *p) {
    strcpy(p->username, "Diego");
    p->hp = 100;
    p->mp = 100;
}

int main(void) {

    Player p1 = {"", 0, 0};

    create_player(&p1);

    printf("Nom du joueur -> %s\n", p1.username);
    printf("PV : %d | PM : %d\n", p1.hp, p1.mp);

    MarqueVoiture voiture1 = MERCEDES;

    union Nombre nb1;

    nb1.entier = 4;
    nb1.decimal = 4.8;

    return 0;
}