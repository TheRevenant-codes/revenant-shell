#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <direct.h>
void banner() {
    printf("=========================================\n");
    printf("   REVENANT SHELL v1.0                  \n");
    printf("   Your Voice, My Blueprint             \n");
    printf("   Type 'exit' to quit                  \n");
    printf("=========================================\n");
}

int main() {
    char input[100];

    banner();

    while (1) {
        printf("REVENANT> ");
        fgets(input, 100, stdin);

        if (strcmp(input, "exit\n") == 0) {
            printf("Goodbye.\n");
            break;
        }

        char command[120];
    
    if (strcmp(input, "help\n") == 0) {
    printf("Commands:\n");
    printf("  cd <path>  - change directory\n");
    printf("  dir        - list files\n");
    printf("  echo <msg> - print message\n");
    printf("  exit       - quit shell\n");
    continue;
}

        if(strncmp(input,"cd ",3)==0){
        input[strcspn(input,"\n")]=0;
        if(chdir(input+3)!=0){
        printf("REVENANT:cd:no such directory\n");
        }
        continue;
        }

        snprintf(command, sizeof(command), "cmd /c %s 2>nul", input);
        int result = system(command);

        if (result != 0) {
            printf("REVENANT: command not found\n");
        }
    }

    return 0;
}