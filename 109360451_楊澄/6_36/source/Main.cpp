#include <stdio.h>
#include <string.h>

int stringReverse(char* str) {
    int i, j;
    char temp;

    j = strlen(str) - 1;
    for (i = 0; i < j; i++) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    return 0;
}

int main() 
{
    char myString[] = "YangCheng";
    printf("before: %s\n", myString);
    stringReverse(myString);
    printf("after: %s\n", myString);

    return 0;
}
