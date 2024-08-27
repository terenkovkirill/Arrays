#include <TXLib.h>
#include <stdio.h>
#include <math.h>

int data[5][4] = {{11, 12, 13, 14},
                  {21, 22, 23, 24},
                  {31, 32, 33, 34},
                  {41, 42, 43, 44},
                  {51, 52, 53, 54}};

void Print (int data[][4])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)

            printf("data[%d][%d] = %d \n", i, j, *(data + 4*i +j));
    }
}
