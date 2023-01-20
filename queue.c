//
// Created by oscar anton on 20/01/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*------------------------------------------------------------*/

Bool is_empty_queue(void) {
    if (first == NULL && last == NULL)
        return true;
    return false;
}

/*------------------------------------------------------------*/

int length_queue(void) {
    return nb_element;
}

/*------------------------------------------------------------*/

int queue_first(void) {
    if (is_empty_queue())
        exit(1);
    return first->value;
}

/*------------------------------------------------------------*/

int queue_last(void) {
    if (is_empty_queue())
        exit(1);
    return last->value;
}

/*------------------------------------------------------------*/

void print_queue(void) {
    if (is_empty_queue()) {
        printf("Rien n'a afficher, la queue est vide\n");
        return;
    }

    QueueElement *temp = first;

    while (temp != NULL) {
        printf("[%d]", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

/*------------------------------------------------------------*/

void push_queue(int x) {
    QueueElement *element;

    element = malloc(sizeof(*element));

    if (element == NULL) {
        fprintf(stderr, "Erreur : allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = NULL;

    if (is_empty_queue()) {
        first = element;
        last = element;
    } else {
        last->next = element;
        last = element;
    }
    nb_element++;
}

/*------------------------------------------------------------*/

void pop_queue(void) {
    if (is_empty_queue()) {
        printf("Rien a retirer, la file est déjà vide\n");
        return;
    }

    QueueElement *temp = first;

    if (first == last) {
        first == NULL;
        last == NULL;
    } else
        first = first->next;

    free(temp);
    nb_element--;
}

/*------------------------------------------------------------*/

void clear_queue(void) {
    if (is_empty_queue()) {
        printf("Rien à vider, la file est déja vide.\n");
        return;
    }

    while (!is_empty_queue())
        pop_queue();
    
}

/*------------------------------------------------------------*/