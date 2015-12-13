#ifndef PA_ADT_H
#define PA_ADT_H



/**
* @brief PA_ADT_node is a linked list. It is generic, the data inside of it represents a void pointer.
 *
 * @param void *data = the data represented by the node
 * @param PA_ADT_node *next = The next node structure that is in the list
 *
 */
typedef struct PA_ADT_node{
    void *data;
   struct PA_ADT_node *next;
} PA_ADT_node;
/**
* @brief PA_ADT_tuplei is a structure containing 2 integer variables.
 *
 * @param int data1
 * @param int data2
 *
 */
typedef struct PA_ADT_tuplei{
    int data1;
    int data2;

} PA_ADT_tuplei;


/** @brief
 * Tuple functions
 */
PA_ADT_tuplei newTuplei(int a,int b);



/** @brief
 * Node functions
 */
PA_ADT_node initializeNode(void*data);

void createNode(PA_ADT_node *node, void* data);
void addToNode(PA_ADT_node *node,PA_ADT_node **pnext);
int length(PA_ADT_node *node);
struct PA_ADT_node *findLastChild(PA_ADT_node *node);

#endif // PA_ADT_H
