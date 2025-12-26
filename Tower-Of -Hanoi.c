#include <stdio.h>

void tower(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        printf("%c -> %c\n", source, destination);
        return;
    }

    tower(n - 1, source, auxiliary, destination);
    printf("%c -> %c\n", source, destination);
    tower(n - 1, auxiliary, destination, source);
}

int main()
{
    int a;
    printf("Enter the Disk Number: ");
    scanf("%d", &a);

    tower(a, 'A', 'B', 'C');
    return 0;
}
