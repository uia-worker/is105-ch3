#include <stdio.h>
int main( VOID ) {

    FILE * fpointer = fopen("employees.txt", "w"); // also try "a" for append
    fprintf(fpointer, "employee");
    fclose(fpointer);

}
