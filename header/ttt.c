#include<stdio.h>
#include<conio.h>
#include"function.h"

int board[] = 
{
    0,1,0,1,0,
    2,3,2,3,2,
    0,1,0,1,0,
    2,3,2,3,2,
    0,1,0,1,0
};

void draw(int* b)
{
    for(int y = 0; y < 5; y++)
    {
        for(int x = 0; x < 5; x++)
        {
            if(b[y * 5 + x] == 0)
            {
                printf("  ");
            }
            else if(b[y * 5 + x] == 1)
            {
                printf(" |");
            }
            else if(b[y * 5 + x] == 2)
            {
                printf(" -");
            }
            else if(b[y * 5 + x] == 3)
            {
                printf(" +");
            }
            else if(b[y * 5 + x] == X)
            {
                printf(" X");
            }
            else if(b[y * 5 + x] == O)
            {
                printf(" O");
            }

        }
        printf("\n");
    }
}

int select()
{
    int number = getch();
    switch(number)
    {
        case 49:    //1
            return 20;
            break;
        case 50:    //2
            return 22;
            break;
        case 51:    //3
            return 24;
            break;
        case 52:    //4
            return 10;
            break;
        case 53:    //5
            return 12;
            break;
        case 54:    //6
            return 14;
            break;  
        case 55:    //7
            return 0;
            break;
        case 56:    //8
            return 2;
            break;
        case 57:    //9
            return 4;
            break;
        case 101:   //e > EXIT
            return 99;
            break;
    }
}

void Winner(int* status)
{
    if(Vx||Hx||Dx)
    {
        *status = 99;
        printf("X WIN\n");
    }
    else if(Vo||Ho||Do)
    {
        *status = 99;
        printf("O WIN\n");
    }
}

