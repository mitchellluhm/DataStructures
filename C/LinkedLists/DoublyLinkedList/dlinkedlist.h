#include "dnode.h"

/* Structure for Doubly Linked List */
struct DLinkedList {
    struct dnode *head;  // first element
    struct dnode *tail;  // last element
    int size;            // list size
};

/* Create and returns empty doubly linked list */
struct DLinkedList *create(void);

/* Append node to end of the list */
void append(struct DLinkedList *list, struct dnode *n);

/* Print all items in the list */
void printList(struct DLinkedList *list);

/* Remove node at position pos */
int removeAt(struct DLinkedList *list, int pos);

/* Replace node at position pos with input node n */
int replace(struct DLinkedList *list, int pos, struct dnode *nd);
