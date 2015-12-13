#include "../Includes/pa_adt.h"
#include "../Includes/Global.h"



/** @brief
 *  newTuplei
 * creates a new Tuplei, the 2 parameters are the 2 variables in the structure
 * @param integer a
 * @param integer b
 * @return Tuplei structure you just created
 *
 */
PA_ADT_tuplei newTuplei(int a,int b){
    PA_ADT_tuplei tup;
    tup.data1 = a;
    tup.data2 = b;

    return tup;
}



PA_ADT_node initializeNode(void*data){

    PA_ADT_node temp;
    temp.data = data;
    return temp;
}


void createNode(PA_ADT_node *node, void* data){
    node->data = data;
}

void addToNode(PA_ADT_node *node,PA_ADT_node **pnext){
    struct PA_ADT_node *nextNode = *pnext;
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
