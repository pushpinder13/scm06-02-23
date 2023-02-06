// ygkhvkvkbvhjblhbljknb

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value.\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 2)
    {
        for (int j = 1; j <= n; j = j + 2)
        {
            if (i >= j) //change in sign (<) will change the output.
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
