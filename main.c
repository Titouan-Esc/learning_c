#include <stdio.h>
#include "queue.h"

int main(void) {

    printf("Longeur de la queue : %d\n", length_queue());
    print_queue();

    push_queue(22);
    push_queue(33);
    push_queue(156);
    printf("Longeur de la queue : %d\n", length_queue());
    print_queue();

    pop_queue();
    printf("Longeur de la queue : %d\n", length_queue());
    print_queue();

    clear_queue();
    print_queue();

    return 0;
}