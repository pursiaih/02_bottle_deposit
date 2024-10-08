//file: main.c
//author: Hannu Pursiainen
//project: 02_bottle_deposit
//date: Saturday,5 October 2024, 16.19.36
//Main function for bottle deposit program. Contains only menu to handle project. Created by if else statements.
//#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 80
#define MAGICLOOP 1

//FUNCTIONS
//Removing '\n' from string
char *removeNL(char *str){
    int len = 0;
    len = strlen(str);
    if(str[len-1] == '\n'){
        str[len-1] = '\0';
    }
    return str;
}

//AND HERE IS THE MAIN FUNCTION
int main(void){
    char buffer[MAXLENGTH];
    
    printf("COMMAND> ");
    fgets(buffer, MAXLENGTH, stdin);
    
    while(MAGICLOOP){
        if(strcmp(removeNL(buffer), "item") == 0){
            printf("create new entry.\n");
        }
        else if(strcmp(removeNL(buffer), "deposit") == 0){
            printf("Calculating total value of bottle deposit and amount of items.\n");
        }
        else if(strcmp(removeNL(buffer), "quit") == 0){
            printf("Terminating program.\nPlease wait!\n");
            break;
        }
        else{
            printf("ERROR: Unknown command.\nPlease try again.\n");
        }
        printf("COMMAND> ");
        fgets(buffer, MAXLENGTH, stdin);
    }

    printf("Program terminated!\nHave a nice day!\n");
    return 0;
}