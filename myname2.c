#include <stdio.h>
int main()
{
    int r, c, i, j;
    r = 6, c = 6;
    for (i = 1; i <= r; i++)
    {
        // R

        for (j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || (i <= r / 2 && j == c) || i == r / 2 || (i == 4 && j == 4) || (i == 5 && j == 5) || (i == r && j == c))
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }

        // A

        for (j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r / 2 || j == c)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }

        // H

        for (j = 1; j <= c; j++)
        {
            if (j == 1 || i == r / 2 || j == c)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }

        // U

        for (j = 1; j <= c; j++)
        {
            if (j == 1 || i == r || j == c)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }

        // L

        for (j = 1; j <= c; j++)
        {
            if (j == 1 || i == r)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for (i = 1; i <= r / 2 - 2; i++)
    {
        printf("\n");
    }
    for (i = 1; i <= r; i++)
    {

        // R

        for (j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || (i <= r / 2 && j == c) || i == r / 2 || (i == 4 && j == 4) || (i == 5 && j == 5) || (i == r && j == c))
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }

        // O

        for (j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r || j == c)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }

        // Y

        for (j = 1; j <= c; j++)
        {
            if ((i == 1 && j == 1) || (i <= 1 && j == c) || (i == 2 && j == 2) || (i == 2 && j == 5) || (i == r / 2 && j == c / 2) || (i == r / 2 && j == 4))
            {

                printf("* ");
            }
            else if (i >= r / 2 && j == c / 2)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}