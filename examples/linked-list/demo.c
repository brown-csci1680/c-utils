#include <stdio.h>
#include <stdlib.h>
#include "../../list.h"

struct nodes {
    int val;
    list_link_t linker;
};

int main () {

    list_t my_list;
    list_init(&my_list);

    struct nodes *curr_node_1;
    curr_node_1 = malloc(sizeof(struct nodes));
    curr_node_1->val = 1;
    list_insert_tail(&my_list, &curr_node_1->linker);

    struct nodes *curr_node_2;
    curr_node_2 = malloc(sizeof(struct nodes));
    curr_node_2->val = 2;
    list_insert_tail(&my_list, &curr_node_2->linker);

    struct nodes *temp;
    list_iterate_begin(&my_list, temp, struct nodes, linker) {
        printf("%d\n", temp->val);
    } list_iterate_end();

    return 0;

}
