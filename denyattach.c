#include <sys/types.h>
#include <sys/ptrace.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    if (argc > 1) {
        ptrace(PT_DENY_ATTACH, 0, 0, 0);
        execvp(*(argv + 1), argv + 1);
        printf("Error: Failed to invoke %s: %d\n", *(argv + 1), errno);
    }
    printf("Usage: %s <program> [<args> ...]\n", *argv);
    return 1;
}
