#include <stdio.h>

int main()
{
    char str[100];
    int j, i = 0, flag = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        i++;
    }

    for (j = 0; j < i / 2; j++)
    {
        if (str[j] != str[i - j - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("The given string is a Palindrome.\n");
    }
    else
    {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}
