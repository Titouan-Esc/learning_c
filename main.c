#include <stdio.h>
#include <string.h>

// pointeur->champ = X;
// Remplace (*pointeur).champ = X;

typedef struct Player {
    signed char username[256];
    int hp;
    int mp;
} Player;

void create_player(Player *p) {
    strcpy(p->username, "Diego");
    p->hp = 100;
    p->mp = 100;
}

int main() {

    Player p1 = {"", 0, 0};

    create_player(&p1);

    printf("Nom du joueur -> %s\n", p1.username);
    printf("PV : %d | PM : %d\n", p1.hp, p1.mp);

    return 0;
}