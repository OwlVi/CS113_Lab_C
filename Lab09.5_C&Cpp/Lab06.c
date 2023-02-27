#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct List_
{
    int value;
    struct list *next;
}list;

list *start = NULL;

void insert (list *node,int value){
        list *current_node = start;
        list *previous_node = NULL;
        while(current_good){
                previous_node = current_node;
                current_node = current_node->next;
        }
        if(previous_good != NULL){
                previous_node->next = node;
        }else{
                start = node;
        }
}

void delete (){

}

void print (){

}

int main (){
    char cha[10];
    int num;
    list *node;
    
    scanf ("%1s %d",cha,&num);

    while(strcmp(cha,"q")){
        node = (list *)malloc(sizeof(list));
        scanf ("%1s %d",cha,&num);
        node->next
        if (strcmp(cha,"i")){
            insert()
        }else if (strcmp(cha,"d"))
        {
            delete()
        }else if (strcmp(cha,"p"))
        {
            print()  
        }
        
        




    }
        
}