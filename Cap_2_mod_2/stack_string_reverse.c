/*Pre-processorin C
  Oct. 17th, Giulia B.

Using a stack (struct base) to reverse a string
*/

#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 100
#define EMPTY -1
#define FULL (MAX_LEN-1)

typedef struct {char s[MAX_LEN]; int top;} stack;

void reset(stack *stk){stk -> top = EMPTY;}

void push(char c, stack *stk){
    stk -> top++;
    stk -> s[stk -> top] = c;

}

char pop(stack *stk){return stk -> s[stk -> top--]; } //postfix is evaluated later than ->

char top(const stack *stk){return stk -> s[stk -> top]; }//stack is unchanged

int is_empty(const stack *stk){return (stk -> top == EMPTY); }

int is_full(const stack *stk){return (stk -> top == FULL); }


int main(){

    stack stack_of_char;
    char *str = "I am otto am I";
    char str_back[20];
    int i = 0;
    reset(&stack_of_char);
    printf("The original string is: %s\n", str);
    while(str[i]!='\0'){ // \0 è il carattere che indica la fine di una stringa
        printf("%c\n", str[i]);
        push(str[i], &stack_of_char);
        i++;
    }
    i = 0;

    while (!is_empty(&stack_of_char) && i<20){
        str_back[i] = pop(&stack_of_char);
        i++;
    }
    
    printf("The reversed string is; %s\n\n", str_back);

    return 0;
}
