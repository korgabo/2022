#include <stdio.h>

int main()
{
    char a='a' /*97*/, b='u' /*117*/, c='_' /*95*/;
    int d = b-a, e = b-c;
    printf("%d%d", d,e/*, e-c/*117-95*/);
}
