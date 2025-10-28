#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s", s);

    if ((s[0] >= 'A' && s[0] <= 'Z') || s[0] == '_')
    {
        printf("%c", s[0]);
    }

    for (int i = 1; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9') ||
            s[i] == '_')
        {
            printf("%c", s[i]);
        }
    }

    printf("\n");

    return 0;
}
