#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc >= 2)
        printf("Hi, %s\n", argv[1]);
    else
        printf("Only 1 argument was passed!\n");
    return 0;
}