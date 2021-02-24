#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    printf("main %p %p\n", &i, __builtin_frame_address(0));
}
