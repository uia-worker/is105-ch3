#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int fd;
    int sz;
    char *c = (char *) calloc(20, sizeof(char)); 

    printf("Hello, IS-105 students!\n");
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]); // fil som jeg skal lese fra
    printf("%s\n", argv[2]); // fil som jeg skal skrive til
    
    fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("feil med lesing av filen"); exit(1); 
    }
    
    sz = read(fd, c, 10);
    printf("Gjorde kall til read(%d, c, 10). Returnerte at %d bytes ble lest.\n", fd, sz);
    c[sz] = '\0';
    printf("Bytes som ble lest var: %s\n", c);

    close(fd);
    fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0) {
        perror("feil med skriving av filen"); exit(1);
    }
    
    sz = write(fd, c, strlen(c));

    close(fd);
    
}
