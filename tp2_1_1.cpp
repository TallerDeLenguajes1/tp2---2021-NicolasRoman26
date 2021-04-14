#include <stdio.h>
#define N 4
#define M 5

int main()
{
    int f,c;
    double mt[N][M]=
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for(f = 0; f<N ; f++)
    {
        for(c = 0; c<M ; c++)
        {
            printf("%lf", mt[f][c]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
