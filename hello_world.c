#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//You may also add more include directives as well.

#define NAME "Brian"

int main(int argc, char const *argv[]) {
    char msg[120];
    sprintf(msg, "CSC 415, This program has been written by %s!", NAME);

	return 0;
}
