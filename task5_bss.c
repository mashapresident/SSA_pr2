#include <stdio.h>
int large_array[1000000]; 

int main() {
    printf(".bss segment -> %lu bytes\n", sizeof(large_array));
    return 0;
}
