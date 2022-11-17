/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[10][10], i, j, m=11, n, h, g, p;
    while (m<=0 || m>10)
    {
    scanf ("%d", &m);
    }
    while (n<=0 || n>10)
    {
    scanf ("%d", &n);
    }
    for (i=1; i<=m; i++)
    {
        for (p=1; p<=n; p++)
        {
            scanf ("%d" ,&matriz[i][p]);
        }
    }
    for (i=1; i<=m; i++)
    {
        printf ("linha %d: ", i);
        for (p=1; p<=n; p++)
        {
            if (p==1)
            {
            printf (" %d", matriz[i][p]);
            }
            else
            {
            printf (",%d\n",matriz[i][p]);
            }
        }
    }
    

    return 0;
}
