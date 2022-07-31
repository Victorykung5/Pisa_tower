#include <stdio.h>
int main()
{
    int a;
    printf("Enter width of tower =");
    scanf("%d", &a);
    if (a < 2)
        printf("ERROR!");
    else
    {
        for (int i = 1; i <= a; i++)
        {
            for (int k = i; k > 0; k--)
            {
                for (int h = 1; h <= i - 1; h++)
                    printf(" ");
                for (int j = 1; j <= a; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
