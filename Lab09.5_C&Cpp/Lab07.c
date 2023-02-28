#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;

void printList(Node **pList) {

    for (int i = 0; i < SIZE ; i++){
        printf("KEY %2d:", i);
        Node* current = pList[i];
        if (current != NULL){
            while (current != NULL) {
                printf(" %d", current->item);
                current = current->next;
            }
            printf("\n");
        } else {
            printf("\n");
        }
    }
}

void add(Node **pList, int item) {
    Node *temp = (Node*) malloc(sizeof(Node));
    temp->item = item;
    int i = item % SIZE;

    if (pList[i] == NULL){
        temp->next = NULL;
    }else {
        temp->next = pList[i];
    }
    
    pList[i] = temp;

}

int main(void) {
    char c;
    int n;
    Node *Key[SIZE] = {NULL};

    while (c != 'q') {
        printf("input> ");
        scanf(" %c", &c);
        if (c == 'a') {
            scanf(" %d", &n);
            add(Key, n);
        } else if (c == 'p') {
            printList(Key);
        }
    }
}