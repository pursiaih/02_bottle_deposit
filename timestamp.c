//TUTORIAL: How to use stftime() function to create timestamp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTHOFTIME 80

char *newTimestamp(char *ntmstamp){
    ntmstamp = malloc(LENGTHOFTIME * sizeof(char));
    
    if(ntmstamp == NULL){
        printf("ERROR: Unable to allocate memory!\n");
        exit(0);
    }
    return ntmstamp;
}

void createTimestamp() {
    time_t rawtime;
    struct tm *timeinfo;
    char *timestamp;
    
    timestamp = newTimestamp(timestamp);
    
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(timestamp, LENGTHOFTIME, "%Y%m%d%H%M%S", timeinfo);
    
    printf("Timestamp is: %s\n", timestamp);
}