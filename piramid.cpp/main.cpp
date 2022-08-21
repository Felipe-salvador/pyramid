#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reight, row, spaces, coluna;

    do
    {
        printf("Enter height here: ");
        scanf("%d", &reight);
    }
    while (reight < 1 || reight > 8);

    for (row = 0; row < reight; row++)
    {
        for (spaces = 0; spaces < reight - row; spaces++)
        {
            printf(" ");
        }
        for (coluna = 0; coluna < row; coluna++)
        {
            printf("#");
        }
        printf("  ");

        for (coluna = 0; coluna < row; coluna++)
        {
            printf("#");
        }
        printf("\n");

    }

    return 0;
}
