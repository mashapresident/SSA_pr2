#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <stdint.h>
int main(){
    time_t t_max = (time_t)LONG_MAX;
    printf ("max val of time_t -> %ld \n", (long)t_max); 
    printf ("time_t size -> %lu bytes \n", sizeof (time_t)); 
    printf ("system bit rate -> bit \n", sizeof (void *)*8);
    return 0;
}