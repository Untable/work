#include<stdio.h>
#include<stdlib.h>

int main()
{
    char * p="helloworld";
    int num = 1;
    for (int i=0; i<num; i++) {
        printf("%c  ",*(p+i));
    }
    return 0;
}
