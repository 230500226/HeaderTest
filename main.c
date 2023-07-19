#include <stdio.h>
//local header file 
    //remember to use make or have command add the extra c file manually or automatically with *.c

    //code runner execution map :
    //"code-runner.executorMap": {
    //  "c": "cd $dir ; if ($?) { gcc $fileNameWithoutExt.c -o $fileNameWithoutExt -lpdcurses -DNCURSES_STATIC} ; if ($?) { .\\$fileNameWithoutExt }"
    //}
    // use this when compiling user headers
    // "code-runner.executorMap": {
    //      "c": "cd $dir ; if ($?) { gcc *.c -o $fileNameWithoutExt -lpdcurses -DNCURSES_STATIC} ; if ($?) { .\\$fileNameWithoutExt }"
    //  }

#include "library.h"

int main(){

    int a = 1, b = 2;

    printf("%d\n",add(a,b));
    
    printf("%d\n",sub(a,b));

return 0;}