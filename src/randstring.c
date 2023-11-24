#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char* argv[]) {
    int length = 33;
    srand(time(NULL));
    char str[length];
    for (int i = 0; i < length; i++) {
        str[i] = rand() % (122 - 97 + 1) + 97;
    }
    str[32] = 0;
    printf("%s\n", str);
    return 0;
}