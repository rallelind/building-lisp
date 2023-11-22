#include <stdio.h>
#include <stdlib.h>

/* To target apple __APPLE__ and linux __linux__ */
#ifdef _WIN32
#include <string.h>

static char* buffer = [2048];

char* read_line(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin)
    char* cpy = malloc(strlen(buffer)+1)
    strcpy(cpy, buffer)
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

void add_history(char* unused) {}

#else
#include <stdio.h>
#include <stdlib.h>
#endif

#include <editline/readline.h>

int main(int argc, char** argv) {
    puts("Lispy version 0.0.0.1");
    puts("Press Ctrl+c to exit");

    while(1) {
        /* Output our prompt */
        char* input = readline("lispy: ");

        add_history(input);

        printf("Your input: %s\n", input);

        free(input);
    }

    return 0;
}