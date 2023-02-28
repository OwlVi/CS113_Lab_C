#include <stdio.h>
#include <stdlib.h>

typedef struct List {
    int value;
    struct List *next;
} node;

void printList(node *pList) {
    node *current = pList;
    if (current == NULL){
        printf("[ ]");
    }else{
        printf("[ ");
        while (current != NULL) {
            printf("%d ", current->value);
            current = current->next;
        }
        printf("]");
    }
    printf("\n");
}

void insert(node **pList, int value) {
    node *newNode = (node*) malloc(sizeof(node));
    newNode->value = value;
    newNode->next = NULL;

    if (*pList == NULL || value < (*pList)->value) {
        newNode->next = *pList;
        *pList = newNode;
    } else {
        node *current = *pList;
        while (current->next != NULL && current->next->value < value) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void delete(node **pList, int value){
    if (*pList != NULL){
        node *current = *pList;
        node *previous = NULL;

        while (current != NULL) {
            if (current->value == value) {
                if (previous == NULL) {
                    *pList = current->next;
                    free(current);
                    current = *pList;
                }else{
                    previous->next = current->next;
                    free(current);
                    current = previous->next;
                }
            }else{
                previous = current;
                current = current->next;
            }
        }
    }
}

int main() {
    int i, n;
    char c;
    node *pList=NULL;

    while (c != 'q')
    {   
        printf("input> ");
        scanf(" %c", &c);
         if (c == 'i') {
            scanf(" %d", &n);
            insert(&pList, n);
        }  else if (c == 'd') {
            scanf(" %d", &n);
            delete(&pList, n);
        }else if (c == 'p') {
            printList(pList);
        }
    }
}
