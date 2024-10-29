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
        head = add_to_front(d[i], head);
    }
    return head;
}

void print_list(list *h, char *title){
    printf("%s\n", title);size-1)
    while (h != NULL){
        printf("%d :", h -> data);
        h = h -> next;
    }
}

int count_list(list *h){
    int counter = 0;
    while (h != NULL){
        counter ++;
        h = h -> next;
    }
    return counter;
}

void concatenate_list(list* h1, list* h2){
    //empty list 1
    if(h1 == NULL){h1 = h2;}
    //other cases
    if(h1 -> next == NULL){
        h1 -> next = h2;
    }else{
        concatenate_list(h1 -> next, h2);
    }

}

int main(){
    //list list_of_int; 
    list* head_1 = NULL;
    list* head_2 = NULL;
    int data_1 [6] = {2, 3, 5, 7, 8, 9};
    int data_2 [4] = {11, 12, 13, 15};
    int counter;
    head_1 = array_to_list(data_1, 6);
    head_2 = array_to_list(data_2, 4);
    print_list(head_1, "list of integers");
    printf("\nThere are %d elements in this list\n", count_list(head_1));
    print_list(head_2, "list of integers");
    printf("\nThere are %d elements in this list \n", count_list(head_2));
    concatenate_list(head_1, head_2);
    print_list(head_1, "Concatenated list");
    printf("\n\n");

    return 0;
}

