#include <stdio.h>
#include <time.h>

void date(){
    time_t currentTime;
    time(&currentTime);
    printf( ctime(&currentTime));

}
