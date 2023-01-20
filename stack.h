//
// Created by oscar anton on 19/01/2023.
//

#ifndef __TEST__STACK__H
#define __TEST__STACK__H

// type boolean
typedef enum {
    false,
    true
} Bool;

typedef struct Player {
    char name[25];
    int level;
} Player;

// Définition d'une pile
// Double notation :
//          - StackElement
//          - *Stack
typedef struct StackElement {
    Player pp;
    struct StackElement *next;
} StackElement, *Stack;

// Prototype des fonctions
Stack new_stack(void);

Bool is_empty_stack(Stack st);

Stack push_stack(Stack st, Player p);

Stack clear_stack(Stack st);

void print_stack(Stack st);

Stack pop_stack(Stack st);

Player top_stack(Stack st);

int stack_length(Stack st);

#endif //__TEST__STACK__H
