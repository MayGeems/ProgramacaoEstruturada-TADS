#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preenche(int A[4][4])
{
    int i, j;
    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            A[i][j] = rand() % 10 + 1;
        }
    }
}

void transposta(int A[4][4], int A_t[4][4])
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            A_t[j][i] = A[i][j];
        }
    }
}

int mostra(int A[4][4], int A_t[4][4])
{
    int i, j;

    printf("Matriz:");
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
    }

    printf("\n\nMatriz transposta:");
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            printf("%d ", A_t[i][j]);
        }
    }
}

int main()
{
    int A[4][4], A_t[4][4];

    preenche(A);
    transposta(A, A_t);
    mostra(A, A_t);
}