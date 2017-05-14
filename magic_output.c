#include <stdio.h>

int main() {
    int in = 0;
    char out = 0;

    in = 0x676f;

    if (in / 8192 <= 0) {
        if (in / 64 <= 0) {
            printf("%x \n", in);
        } else {
            out = in % 64 + 64;
            printf("%x \n", out);
            out = in / 64;
            printf("%x\n", out);
        }
    } else {
        out = (in % 8192 + 8192) % 64 + 64;
        printf("%X\n", out);
        out = in % 8192 / 64 + 128;
        printf("%X\n", out);
        out = in / 8192;
        printf("%X\n", out);
    }

    return 0;
}