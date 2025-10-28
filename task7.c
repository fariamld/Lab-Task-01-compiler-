#include <stdio.h>
int main()
{
    char s[50];
    char s1[50];

    scanf("%s", s);

    scanf("%s", s1);

    strcat(s, " ");
    strcat(s, s1);

    printf("Full name = %s\n", s);

    return 0;
}
