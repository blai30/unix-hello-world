#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//You may also add more include directives as well.

#define NAME "Brian"

int main(int argc, char const *argv[]) {
    char msg[128];
    int bytes_formatted, bytes_written;

    bytes_formatted = sprintf(msg, "CSC 415, This program has been written by %s!\n", NAME);
    if (bytes_formatted < 0) {
        perror("Write has failed");
        return -43;
    }

    bytes_written = write(1, msg, bytes_formatted);
    if (bytes_written < 0) {
        perror("Write has failed");
        return -43;
    }

	return 0;
}
