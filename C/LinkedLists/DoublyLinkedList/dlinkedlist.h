#include "dnode.h"

/* Structure for Doubly Linked List */
struct DLinkedList {
    struct dnode *head;  // first element
    struct dnode *tail;  // last element
    int size;            // list size
};

/* Create and returns empty doubly linked list */
struct DLinkedList *create(void);

void append(struct DLinkedList *list, struct dnode *n);

void printList(struct DLinkedList *list);
