
#include <stdio.h>
#include "question1.h"

int main(){

    int var = 0;

    var = func1();

    printf("number is: %d\n",var);

    return 0;
}

int func1()
{
    return 123;
}