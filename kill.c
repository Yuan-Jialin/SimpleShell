#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

void yjlkill(char argv[]) {
    pid_t pid =atoi(argv) ;
    if(kill(pid, SIGKILL) == -1) {
        perror("kill failed");
    }
    printf("SIGKILL sent to process with PID %d\n", pid);

}