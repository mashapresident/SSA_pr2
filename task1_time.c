#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <stdint.h>
int main(){
    time_t time = 0;
    while(time >= 0) time++;
    printf ("max value of time_t -> %ld /n", (long)time); 
    printf ("represent -> %s /n", ctime (&time)); 
    printf ("time_t size -> %lu bytes /n", sizeof (time_t)); 
    printf ("system bit rate -› ", sizeof (void *)*8);
    return 0;
}
