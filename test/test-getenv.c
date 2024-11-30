#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]) {
    char *data;
    size_t size = 0;

    if (data = getenv("HTTP_COOKIE"))
        size = strlen(data);

    if (size > 0 && data[0] == 'H')
        if (size > 1 && data[1] == 'I')
            if (size > 2 && data[2] == '!')
                abort();

    return 0;
}
