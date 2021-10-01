#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    long int i = 0;
    for(i=0; i < 65540; i++) {
        int pid = fork();
        if ( pid == 0 ) {
            printf("j : %d, pid : %d\n", i, getpid());
            exit(0);
        }
        else if (pid < 0) {
            exit(-1);
        }
    }
    return 0;
}