#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)   // function using pointer
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end)
    {
        if (*start != *end)
            return 0;   // not palindrome

        start++;
        end--;
    }
    return 1;   // palindrome
}

int main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);    // reading string

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
