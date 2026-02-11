#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int start = 0;
    int end;
    int flag = 1;   // 1 means palindrome, 0 means not

    // take input from user
    printf("Enter a word: ");
    scanf("%s", word);

    end = strlen(word) - 1;

    // check characters from both sides
    while (start < end)
    {
        if (word[start] != word[end])
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}