//TUTORIAL: How to use stftime() function to create timestamp
#include <stdio.h>
#include <time.h>

#define LENGTHOFTIME 80

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    char timestamp[LENGTHOFTIME];
    
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(timestamp, LENGTHOFTIME, "%Y%m%d%H%M%S", timeinfo);
    
    printf("Timestamp is: %s\n", timestamp);

    return 0;
}