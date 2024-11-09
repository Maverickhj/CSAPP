//
// Created by Maverick on 2022/2/20.
//

#include <fcntl.h>
#include <stdlib.h>

int create(const char *path, mode_t mode);

int main(void) {
    create("/test/txt", O_CREAT);

    exit(0);
}
