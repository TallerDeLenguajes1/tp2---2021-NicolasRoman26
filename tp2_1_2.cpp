#include <stdio.h>
#define N 4
#define M 5

int main()
{
    int f,c;
    double mt[N][M];
    double k=0, *punt_mt;

    punt_mt = &mt[0][0];

    for (f = 0; f < N; f++)
    {
        for (c = 0; c < M; c++)
        {
            *(punt_mt + f * M + c) = k;
            k++;
        }
    }

    for (f = 0; f < N; f++)
    {
        for (c = 0; c < M; c++)
        {
            printf("%3.f", *(punt_mt + f * M + c));
        }
        printf("\n");
    }

    getchar();
    return 0;
}
