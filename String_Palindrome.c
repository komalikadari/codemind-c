#include <stdio.h>
#include <string.h>
int main() {
    char string1[20];
    int i, length;
    int flag=0;
    scanf("%s", string1);
    length = strlen(string1);
    for (i = 0; i < length / 2; i++)
    {
        if (string1[i] != string1[length - i - 1]) 
        {
            flag = 1;
            break;
        }
    }
    if (flag) 
    {
        printf("Not Palindrome");
    } 
    else
    {
        printf("Palindrome");
    }
    return 0;
}