#include <stdio.h>
#include <string.h>

void pass_string_(char* s, long int n)
{
    char* w = "world";
    int i ;
    memcpy(s+6, w, strlen(w));
}
