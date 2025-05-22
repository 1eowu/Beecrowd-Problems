/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
int a, b, c;
int maior;
scanf("%d%d%d", &a, &b, &c);

maior = (a+b+abs(a-b))/2;
maior = (maior+c+abs(maior-c))/2;

printf("%d eh o maior\n", maior);
    
    return 0;
}
