#include <stdio.h>
#include <stdlib.h> // required in order to use rand()
#include <time.h>
#include "random.h"

void rand_string(char* s, size_t size) {
    char alphabet[] = "qwertyuiopasdfghjklzxcvbnm";
    for (size_t i = 0; i < size; i++) {
        int letter = rand() % (int)(sizeof(alphabet) - 1); // subtracting 1 accounts for strings ending with '\0'
        s[i] = alphabet[letter];
    }
}