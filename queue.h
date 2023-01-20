//
// Created by oscar anton on 20/01/2023.
//

#ifndef TEST_QUEUE_H
#define TEST_QUEUE_H

// Définition du type Boolean
typedef enum {
    false,
    true
} Bool;

// Définition d'une file
typedef struct QueueElement {
    int value;
    struct QueueElement *next;
} QueueElement, *Queue;

// Paramètre de la file
static QueueElement *first = NULL;
static QueueElement *last = NULL;
static int nb_element = 0;

// Prototype
Bool is_empty_queue(void);

int length_queue(void);

int queue_first(void);

int queue_last(void);

void print_queue(void);

void push_queue(int x);

void pop_queue(void);

void clear_queue(void);

#endif //TEST_QUEUE_H
