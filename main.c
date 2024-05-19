#include <stdio.h>

#define N      10   /* N=2*3*4*5*7*9*11*13 */

double soma(double x[], int n); /* funcao que soma os elementos de um vector */

double v[N];
double S;


int main()
{
    int i;

    printf("\nA iniciar a tarefa principal.\n");
    for(i=0; i<N; i++)  /* inicializar vector com numeros naturais 1,..., N */
        v[i]= i+1;
    S= soma(v,N);
    printf(" Soma= %.0lf\n",S);
    printf("A terminar a tarefa principal.\n\n");
    return 0;
}

double soma(double x[], int n)
{
    int i;
    double s=0;
    for(i=0; i<n; i++)
        s = s+ x[i];
    return s;
}