#include <stdio.h>
#include <stdlib.h>
#include<iostream> 

int main(void)
{
    char *p = (char*)malloc(1);
    *p = 'a'; 

    char c = *p; 

    printf("\n [%c]\n",c);
    delete p;
    return 0;
}

