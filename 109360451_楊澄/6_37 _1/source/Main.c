#include <stdio.h>
#include <string.h>
#include <string.h>


int sort(const int array[],int size);

int main(void)
{
    int a[100] = { 0 };
    int a1[100] = { 0 };
    printf("請輸入元素個數(1-100之間):");
    int size;
    scanf("%d", &size);
    printf("陣列元素:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    a1[100] = sort(a, size);
    printf("Ths max value in the array is %d", a1[n]);

   

    system("pause");
    return 0;
}

int sort(const int array[],int size)
{
    int a1[100] = { 0 };
    for (int i = 0; i < size; i++)
    {
        a1[i] = array[i];
    }
    int tmp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a1[j] > a1[j + 1])
            {
                tmp = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = tmp;
            }
        }
    }
    return a1;
}
