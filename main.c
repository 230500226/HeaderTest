#include <stdio.h>
//local header file 
    //remember to use make or have command add the extra c file manually or automatically with *.c
#include "library.h"

int main(){

    int a = 1, b = 2;

    printf("%d\n",add(a,b));
    printf("%d\n",sub(a,b));

return 0;}