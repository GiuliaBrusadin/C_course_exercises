/*Lists in C
  Oct. 21st, Giulia B.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct list{int data; struct list *next;} list;

int is_empty(const list*l){return (l == NULL);}

list* create_list(int d){
    list* head = malloc(sizeof(list)); 
    head -> data = d;
    head -> next = NULL;
    return head;
}

list* add_to_front(int d, list* h){
    // the defined type list is actually not a full list, but one element of it (data and address)
    // so, each time we need to create a new add to appent it to the existing list.
    list* head = create_list(d);
    //this elemnet becomes the new head
    head -> next = h;
    return head;
}

list* array_to_list(int d[], int size){
    list* head = create_list(d[0]);
    for(int i = 1; i<size; i++){
        head = add_to_front(d[i], head)
    }
    return head;
}

