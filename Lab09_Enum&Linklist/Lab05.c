#include <stdio.h>
#include <stdlib.h>

typedef struct List {
    int value;
    struct List *next;
} node;

void printList(node *pList) {
    node *current = pList;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

void insertNode(node **pList, int data) {
    node *newNode = (node*) malloc(sizeof(node));
    newNode->value = data;
    newNode->next = NULL;

    if (*pList == NULL || data < (*pList)->value) {
        newNode->next = *pList;
        *pList = newNode;
    } else {
        node *current = *pList;
        while (current->next != NULL && current->next->value < data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

int main() {
    int i, value;
    node *pList=NULL;

    for (i = 0; i < 10; i++) {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }

    printList(pList);


}
