#include <stdio.h>
#include <string.h>
#include <string.h>

int linearsearch(const int array[], int key, int size);

int main(void)
{
    int a[100] = { 0 };
    int a1[100] = { 0 };
    printf("�п�J�����Ӽ�(1-100����):");
    int elements;
    scanf("%d", &elements);
    printf("�}�C����:");
    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n�쥻���}�C:\n");
    for (int i = 0; i < elements; i++)
    {
        printf("%d ", a[i]);
    }

    //("\n�Ƨǫ᪺�}�C:\n");
    for (int i = 0; i < elements; i++)
    {
        a1[i] = a[i];
    }
    int tmp;
    for (int i = 0; i < elements - 1; i++)
    {
        for (int j = 0; j < elements - 1; j++)
        {
            if (a1[j] < a1[j + 1])
            {
                tmp = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = tmp;
            }
        }
    }

    printf("\n�Ƨǫ᪺�}�C:\n");
    for (int i = 0; i < elements; i++)
    {
        printf("%d ", a1[i]);
    }

    printf("\nThs max value in the array is %d", a1[0]);

    system("pause");
    return 0;
}

int linearsearch(const int array[], int key, int size)
{
    int n;
    for (n = 0; n < size; n++)
    {
        if (array[n] == key)
        {
            return n;
        }
    }
    return -1;
}