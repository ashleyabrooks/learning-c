#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;

    // \n is important because otherwise the line will end with a % sign
    printf("You are %d miles away.\n", distance); 
    printf("HELLO HOW ARE YOU\n");

    return 0; // The program still works if you delete this line. 
}