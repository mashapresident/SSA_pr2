#include <stdio.h>
#include <stdlib.h>
int data = 0;
int bss; 
void increase_stack_top();
void text(){}

int main(){
    int local;
    int i; // var for stacks top tracking
    char *heap = (char *)malloc (10);
    if (!heap){
        return 1;
    }
    printf ("local →> %p\n", (void *)&local); 
    printf ("text -> %p\n",(void *)&text);
    printf ("data -> %p",  (void *)&data);
    printf ("bss -> %p\n", (void *)&bss);
    printf ("mallocs memory address -> %p\n", (void *)heap);
    printf ("stack top address -> %p\n", &i); 
    increase_stack_top();
    free (heap);
    return 0;
}
void increase_stack_top(){
    int arr [1000];
    printf ("stack top after increasing -> %p\n",&arr );
}