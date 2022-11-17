/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int malha[100][100], m, i, j, k, temp, coluna = 0;
  scanf ("%d", &m);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
	    {
	        scanf ("%d", &malha[i][j]);
	    }
    }
    for (k = 0; k < m; k++)
    {
        for (i = 0; i < m; i++)
	    {
	        for (j = i + 1; j < m; j++)
	        {
	            if (malha[i][k] > malha[j][k])
		        {
		        temp = malha[i][k];
		        malha[i][k] = malha[j][k];
		        malha[j][k] = temp;
		        }
	        }
	    }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
	    {
	        printf ("%d ", malha[i][j]);
	        if (j==(m-1))
            {
                printf ("\n");
            }
	        
	    }
        
    }
  return 0;
}
