/*Array and pointers
  Oct. 5th-7th, Giulia B.

  Bouble sort and merge sort
*/

#include <stdio.h>

#define SIZE 8

void swap(int *i, int *j);

void print_array(int how_many, int data[], char *str);

void bubble(int data[], int how_many);

void merge(int a[], int b[], int c[], int how_many);

void merge_sort_binary_size(int data[], int how_many);


int main(void){

    int grades[SIZE] = {99, 82, 74, 85, 92, 67, 76, 49};

    print_array(SIZE, grades, "My grages:\n");
    printf("\n--------------------\n");
    //bubble(grades, SIZE);
    merge_sort_binary_size(grades, SIZE);
    print_array(SIZE, grades, "\nMy sorted grages:\n");
    printf("\n\n");  

    return 0;
}

void print_array(int how_many, int data[], char *str){

    printf("%s", str);
    
    for(int i = 0; i < how_many; i++){
        printf("%d \t", data[i]);
    }    
}

void swap(int *p_i, int *p_j){
    
    int k = *p_i;
    
    *p_i = *p_j;
    *p_j = k;    
}

void bubble(int data[], int how_many){

    int go_on;

    for(int i = 0; i < how_many; i++){

        for(int j = (how_many -1); j > i; j--){

            if(data[j-1]>data[j]){
                swap(&data[j-1], &data[j]);
            }
        }
    }
}

void merge(int a[], int b[], int c[], int how_many){
    // a nd b have same lenght
    int i =0, j = 0, k = 0; 
    // here we need them declared outside because we use them in different cicles and can't lose count

    while(i < how_many && j < how_many){
        if (a[i] < b[j]){
            //printf("\n%d < %d, prendo da a %d", a[i], b[j], a[j]);
            c[k] = a[i];
            k += 1;
            i += 1;
        }else{
            //printf("\n%d > %d, prendo da b %d", a[i], b[j], b[j]);
            c[k] = b[j];
            k += 1;
            j += 1;
        }
    }
    while (i < how_many)
    {
        c[k] = a[i];
        k += 1;
        i += 1;
        //printf("\nsto completanto con a");
    }
    while (j < how_many)
    {
        c[k] = b[j];
        k += 1;
        j += 1;
        //printf("\nsto completanto con b");
    }
    
}

void merge_sort_binary_size(int key[], int how_many){
    // key here is an array where the nr of elements are a power of 2
    int j, k;
    int w[how_many];


    for(k = 1; k < how_many; k *= 2){
        for(j = 0; j < how_many-k; j += 2*k){
            //printf("\n--------\n j is %d\n", j);
            merge(key+j,key+j+k, w+j, k);
            //as an array is a starting address and a lenght
            // we can just pass the starting adress ()here using index math
            
            //print_array(2*k, w+j, "\n");
            //printf("\nk is %d", k);
        }
        for( j = 0; j < how_many;j++){
            key[j] = w[j];
        }    

    } 

    
}