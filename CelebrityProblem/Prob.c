#include <stdio.h>

int celebrity(int M[][4], int n)
{
    int candidate = 0;

    // Find a possible celebrity
    for (int i = 1; i < n; i++)

    {
        if (M[candidate][i] == 1)
        {
            candidate = i;
        }
    }

    // Verify the candidate
    for (int i = 0; i < n; i++)
    {
        if (i != candidate)
        {
            if (M[i][candidate] == 0 || M[candidate][i] == 1)
            {
                return -1;
            }
        }
    }

    return candidate;
}

int main()
{
    int M[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0},
        {0, 1, 1, 0}
    };

    int result = celebrity(M, 4);

    if (result == -1)
    {
        printf("No Celebrity\n");
    }
    else
    {
        printf("Celebrity is Person %d\n", result);
    }

    return 0;
}