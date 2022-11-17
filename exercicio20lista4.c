/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int malha[100][100], m, n, i, j, k,l=0, temp, vet[10000];
  scanf ("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
	    {
	        scanf ("%d", &malha[i][j]);
	        vet[l]=malha[i][j];
	        l++;
	    }
    }
    for (i = 0; i < l; i++)
	{
	    for (j = i + 1; j < l; j++)
	   {
	            if (vet[i] > vet[j])
		        {
		        temp = vet[i];
		        vet[i] = vet[j];
		        vet[j] = temp;
		        }
	        
	    }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
	    {
	        if (vet[0]==malha[i][j])
	        {
	            printf ("%d ", vet[l-1]);
	        }
	        else if (vet[l-1]==malha[i][j])
	        {
	            printf ("%d ", vet[0]);
	        }
	        else
	        {
	        printf ("%d ", malha[i][j]);
	        }
	        if (j==(m-1))
            {
                printf ("\n");
            }
	        
	    }
        
    }
  return 0;
}

