#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));
    printf("points:\t");
    for (int i = 2; i <=12; i++)
    {
        printf( "%4d\t", i );
    }
    printf("\n");
    int dices_counter[11] = {NULL};
    int dice1[6] = {1,2,3,4,5,6};
    int dice2[6] = {1,2,3,4,5,6};
 
    for (int i = 0; i < 36000; i++)
    {
        int x = rand() % 6;
        int y = rand() % 6;
        int point = dice1[x] + dice1[y];

        //printf("%d %d %d\n", x,y,point);
        dices_counter[point-2] += 1;

    }
    printf("times:\t");
    for (int j = 0; j < 11; j++)
    {
        printf("%4d\t", dices_counter[j]);
    }
    system("pause");
    return 0;
}