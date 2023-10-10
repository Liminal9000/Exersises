#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 60;
    float b = 2.5;
    const int c = 25;
    a -= 20;
    b ++;
    float d = (float) (a/b)+c;

    printf("%.14f\n", d );
    printf("%d", a<=d );

    return 0;
}
