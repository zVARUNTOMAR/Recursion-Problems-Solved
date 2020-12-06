//Tower of Hanoi using Recursion

#include <stdio.h>

void towerofHanoi(int n, char src, char dest, char helper)
{

    if (n == 0)
    {
        return 0;
    }
    towerofHanoi(n - 1, src, helper, dest);
    printf("Move from %c to %c \n", src, dest);
    towerofHanoi(n - 1, helper, dest, src);
}

int main()
{

    towerofHanoi(3, 'A', 'C', 'B');

    return 0;
}