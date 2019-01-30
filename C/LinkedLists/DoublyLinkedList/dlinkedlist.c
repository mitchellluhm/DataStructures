#include <stdio.h>
#include <stdlib.h>
#include "dlinkedlist.h"

struct DLinkedList *create() {
    struct DLinkedList *dll = (struct DLinkedList *) malloc(sizeof(struct DLinkedList));
    dll->size = 0;
    return dll;
}

void append(struct DLinkedList *list, struct dnode *n) {
    if (list->size == 0) {
	list->head = n;
	list->tail = n;
	list->size = 1;
    } else {
	list->tail->next = n;        // add n to end
	n->previous = list->tail;    // set n's previous
	list->tail = n;              // update tail of list to n
	list->size = list->size + 1; // update size
    }
}

void printList(struct DLinkedList *list) {
    int n = list->size;

    struct dnode *temp = list->head;

    for (int i = 0; i < n; i++) {
	printf("%d | %d\n", i, temp->data);
	temp = temp->next;
    }
}

int main() {
    //struct DLinkedList *dll = (struct DLinkedList *) malloc(sizeof(struct DLinkedList));
    //dll->size = 0;
    struct DLinkedList *dll = create();

    struct dnode *n = (struct dnode *) malloc(sizeof(struct dnode));
    n->data = 5;

    struct dnode *nn = (struct dnode *) malloc(sizeof(struct dnode));
    nn->data = 4;

    struct dnode *nnn = (struct dnode *) malloc(sizeof(struct dnode));
    nnn->data = 3;

    append(dll, n);
    append(dll, nn);
    append(dll, nnn);

    printf("%d, %d, %d\n", dll->head->data, dll->head->next->data, dll->head->next->next->data);
    printList(dll);

    return 0;
}
