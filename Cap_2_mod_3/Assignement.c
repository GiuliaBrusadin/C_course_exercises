/*Assignement - module 3 - lists

Giulia B., Oct. 29th 2024

Use the linear linked list code to store a randomly generated set of 100 integers.  
Now write a routine that will rearrange the list in sorted order of these values. 
Note you might want to use bubble sort to do this. 

Print these values in rows of 5 on the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define N 10

typedef struct list{int data; struct list *next;} list;

void rand_generate_array(int data[], int n){
    srand((unsigned)time(NULL)); //initialize rand with current time as seed
    for (int i = 0; i < n; i++){
        data[i] = rand()%201;
    }
}

list* create_list(int d){
    list* head = malloc(sizeof(list)); 
    head -> data = d;
    head -> next = NULL;
    return head;
}

list* add_to_front(int d, list* h){
    list* head = create_list(d);
    //this elemnet becomes the new head
    head -> next = h;
    return head;
}

list* array_to_list(int d[], int size){
    list* head = create_list(d[(size-1)]);
    for(int i = (size-2); i>=0; i--){
        //going through the array back-to-front preserves the elemts' order
        head = add_to_front(d[i], head);
    }
   /*for(int i = 1; i<size; i++){
        head = add_to_front(d[i], head);
    }*/
    return head;
}

void swap(list* h1, list* h2){
    int temp = 0;
    temp = h1 -> data;
    h1 -> data = h2 -> data;
    h2 -> data = temp;
}

void bouble_sort(list *h, int size){
    list* h_next;
    int a, b;
    for(int i = (size-1); i>=0; i--){
        for(int j = 0; j < i; j++){
            h_next = h -> next;
            a = h -> data;
            b = h_next -> data;
            if(a > (h_next -> data)){
                swap(h, h_next);
            }
            h = h -> next;
        }
    }

}

void print_list(list* h, char* title){
    int i = 0;
    printf("\n\n%s\n\n", title);
    while (h != NULL){
        printf("%3d\t", h -> data);
        h = h -> next;
        i++;
        if(i%5 == 0){
            printf("\n");
        }
    }
}

void print_array(int data[], int n){

    printf("\nArray is: \n");

    for(int i = 0; i < n; i++){
        printf("%d \t", data[i]);
    }    
}

int main (){
    list* head = NULL;
    int data[N];
    rand_generate_array(data, N);
    //print_array(data, N);
    head = array_to_list(data, N);
    bouble_sort(head, N);
    print_list(head, "The ordered list is:");

    printf("\n\n");
    return 0;

}

