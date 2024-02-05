#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        fprintf(stderr, "Please enter a positive integer for n\n");
        return 1;
    }

    for (int i = 1; i <= 2 * n; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            perror("Fork failed");
            return 1;
        } else if (pid == 0) {
            // This is the child process
            printf("I am process  %d with pid %d\n", i, getpid());
            exit(0);
        }
    }

    // Wait for all child processes to terminate
    for (int i = 0; i < 2 * n; i++) {
        wait(NULL);
    }

    return 0;
}
