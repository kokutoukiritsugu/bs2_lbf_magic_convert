#include <stdio.h>

int main() {
    unsigned long long i = 0;
    unsigned long long out = 0;

    // read 1 bit to i;
    i = 0x6f;
    out = i;
    if (i > 0x3f) {
        // read 1 bit to i;
        i = 0x9d;
        out += (i - 1) << 6;
        printf("%lld\n", (i - 1) << 6);
        if (i > 0x7f) {
            // read 1 bit to i;
            i = 0x03;
            out += (i - 1) << 13;
            printf("%lld\n", (i - 1) << 13);
        }
    }

    //output*2
    printf("%lld %llx", out * 2, out * 2);

    return 0;
}