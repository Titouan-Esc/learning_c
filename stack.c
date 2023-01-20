#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

Stack new_stack(void) {
    return NULL;
}

/*----------------------------------------------------*/

Bool is_empty_stack(Stack st) {
    if (st == NULL)
        return true;
    return false;
}

/*----------------------------------------------------*/

Stack push_stack(Stack st, Player p) {
    StackElement *element;

    element = malloc(sizeof(*element));

    if (element == NULL) {
        fprintf(stderr, "Problème allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }

    strcpy(element->pp.name, p.name);
    element->pp.level = p.level;
    element->next = st;

    return element;
}

/*----------------------------------------------------*/

Stack clear_stack(Stack st) {
//    StackElement *element;
//
//    if (is_empty_stack(st))
//        return new_stack();
//
//    element = st->next;
//    free(st);
//
//    return clear_stack(element);
    while (!is_empty_stack(st))
        st = pop_stack(st);

    return new_stack();
}

/*----------------------------------------------------*/

void print_stack(Stack sta) {
    if (is_empty_stack(sta)) {
        printf("Rien à afficher, la pile est vide\n");
        return;
    }

    while (!is_empty_stack(sta)) {
        printf("[%s - niveau %d]\n", sta->pp.name, sta->pp.level);
        sta = sta->next;
    }
}

/*----------------------------------------------------*/

Stack pop_stack(Stack st) {
    StackElement *element;

    if (is_empty_stack(st))
        return new_stack();

    element = st->next;
    free(st);

    return element;
}

/*----------------------------------------------------*/

Player top_stack(Stack st) {
    if (is_empty_stack(st)) {
        printf("Aucun sommet, la pile est vide.\n");
        exit(EXIT_FAILURE);
    }
    return st->pp;
}

/*----------------------------------------------------*/

int stack_length(Stack st) {
    int length = 0;

    while (!is_empty_stack(st)) {
        length++;
        st = st->next;
    }

    return length;
}