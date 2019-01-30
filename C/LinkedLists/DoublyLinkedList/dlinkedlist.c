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

    printf("-- BEGIN PRINT LIST --\n");
    for (int i = 0; i < n; i++) {
	printf("%d | %d\n", i, temp->data);
	temp = temp->next;
    }
    printf("-- END PRINT LIST --\n");

}

int removeAt(struct DLinkedList *list, int pos) {
    int n = list->size;

    if (n < pos || pos < 0) {
	// not a valid position in the list
	return 0;
    } else if (pos == 0) {
	//remove first element
	struct dnode *temp = list->head->next;
	temp->previous = NULL;
	free(list->head);
	list->head = temp;
	list->size = list->size - 1;
	return 1;
    } else if (pos == n - 1) {
	// remove last element
	struct dnode *temp = list->tail->previous;
	temp->next = NULL;
	free(list->tail);
	list->tail = temp;
	list->size = list->size - 1;
	return 1;
    } else {
	// remove a middle element
	struct dnode *temp = list->head;
	for (int i = 0; i < pos; i++) {
	    temp = temp->next;
	}
	temp->previous->next = temp->next;
	temp->next->previous = temp->previous;
	free(temp);
	list->size = list->size - 1;
	return 1;
    }
    return 0;
}

int replace(struct DLinkedList *list, int pos, struct dnode *nd) {
    int n = list->size;

    if (n < pos || pos < 0) {
	// not a valid position in the list
	return 0;
    } else if (pos == 0) {
	//replace first element
	free(list->head);
	list->head = nd;
	return 1;
    } else if (pos == n - 1) {
	// replace last element
	free(list->tail);
	list->tail = nd;
	return 1;
    } else {
	// replace a middle element
	struct dnode *temp = list->head;
	for (int i = 0; i < pos; i++) {
	    temp = temp->next;
	}
	temp->previous->next = nd;
	temp->next->previous = nd;
	nd->next = temp->next;
	nd->previous = temp->previous;
	free(temp);
	return 1;
    }

    return 0;
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

    struct dnode *nnnn = (struct dnode *) malloc(sizeof(struct dnode));
    nnnn->data = 7;

    append(dll, n);
    append(dll, nn);
    append(dll, nnn);
    replace(dll, 1, nnnn);

    printList(dll);
    removeAt(dll, 2);
    printList(dll);
    nnn = (struct dnode *) malloc(sizeof(struct dnode));
    nnn->data = 3;
    append(dll, nnn);
    removeAt(dll, 1);
    printList(dll);
    nnn = (struct dnode *) malloc(sizeof(struct dnode));
    nnn->data = 3;
    append(dll, nnn);
    removeAt(dll, 0);
    printList(dll);

    return 0;
}
