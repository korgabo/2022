/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a='a' /*97*/, b='u' /*117*/, c='_' /*95*/;
    int d = b-a, e = b-c;
    printf("%d%d", d,e/*, e-c/*117-95*/);
}