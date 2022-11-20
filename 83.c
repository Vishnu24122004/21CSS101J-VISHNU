#include <stdio.h>
int main() {
    printf("RA2211042010057);
    int x = 24, y = 39, z = 45;
    z = x + y;
    y = z - y;
    x = z - y;
    printf("x = %d y = %d z = %d\n", x, y, z);
    return 0;
}
