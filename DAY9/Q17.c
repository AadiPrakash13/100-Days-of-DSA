#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int i;

    printf("Enter string: ");
    scanf("%s", text);

    printf("Mirror output: ");
    for (i = strlen(text) - 1; i >= 0; i--)
    {
        printf("%c", text[i]);
    }

    return 0;
}