#ifndef PA_ADT_H
#define PA_ADT_H

typedef struct PA_ADT_node{
    void *data;
   struct PA_ADT_node *next;
} PA_ADT_node;

void createNode(PA_ADT_node *node, void* data);
void addToNode(PA_ADT_node *node,PA_ADT_node *pnext);
int length(PA_ADT_node *node);
struct PA_ADT_node *findLastChild(PA_ADT_node *node);

#endif // PA_ADT_H
