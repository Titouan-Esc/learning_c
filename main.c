#include <stdio.h>
#include "stack.h"

int main(void) {

    Player p1 = {"Oscar", 22};
    Player p2 = {"Diego", 200};
    Player p3 = {"Joachim", 500};
    Player p4 = {"Gege", 100000000};

    Stack sta = new_stack();
    print_stack(sta);
    printf("Taille de la pile : %d\n", stack_length(sta));

    printf("\n-------------------------------------\n");

    sta = push_stack(sta, p1);
    sta = push_stack(sta, p2);
    sta = push_stack(sta, p3);
    sta = push_stack(sta, p4);
    print_stack(sta);
    printf("Taille de la pile : %d\n", stack_length(sta));

    Player last = top_stack(sta);
    printf("Dernier joueur : %s (%d)\n", last.name, last.level);

    printf("\n-------------------------------------\n");

    sta = pop_stack(sta);
    print_stack(sta);
    printf("Taille de la pile : %d\n", stack_length(sta));

    printf("\n-------------------------------------\n");

    sta = clear_stack(sta);
    print_stack(sta);
    printf("Taille de la pile : %d\n", stack_length(sta));

    return 0;
}