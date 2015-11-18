#include "../Includes/pa_adt.h"
#include "../Includes/Global.h"

void createNode(PA_ADT_node *node, void* data){
    node->data = data;
}


void addToNode(PA_ADT_node *node,PA_ADT_node **pnext){
    struct PA_ADT_node *nextNode =
    findLastChild(node)->next = nextNode;
}

int length(PA_ADT_node *node){
    struct PA_ADT_node *current = node;

int count = 0;
while (current != NULL) {
count++;
current = current->next;
}
return count;
}

struct PA_ADT_node *findLastChild(PA_ADT_node *node){
    while(node != NULL){
        node = node->next;
    }
    return node;
};
