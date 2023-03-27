#include<stdio.h>
#include<stdlib.h>

#define N 5
#define M 7

int main(int argc, char const *argv[])
{
    int i, j;
    int k = 0; 
    int x = 0 ;
    double mt[N][M];
    double *p ;
    p = &mt[0][0] ;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(p) = 1 + rand() % 100;
            printf(" | %.2f | ", (*p));
        }
        printf("\n");
    }
    p = &mt[0][0] ;
    return 0;
}