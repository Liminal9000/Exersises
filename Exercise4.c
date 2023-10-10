#include <stdio.h>

int main()
{
    const int x = 5;
    int y = 24;
    y += 6;
    int z = x * y;
    printf("%d*%d=%d", x,y,z);

    return 0;
}
