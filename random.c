#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char* s, size_t size) {
    char alphabet[] = "qwertyuiopasdfghjklzxcvbnm";
    for (size_t i = 0; i < size; i++) {
        int letter = rand() % (int)(sizeof(alphabet) - 1);
        s[i] = alphabet[letter];
    }
}

/*
int main() {
    char alpha[] = "qwertyuiopasdfghjklzxcvbnm";
    printf("%d", (int)(sizeof(alpha) - 1));

    return 0;
}
*/