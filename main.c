#include<stdlib.h>
#include<stdio.h>
#include"header/function.h"

int main()
{
    extern int board[];
    int key;
    int turn = X;
    while(1)
    {
        REFRESH;
        draw(board);
        Win(board);
        //Winner(&key);
        if(key == 99)
        {
            break;
        }

        if(turn == X)
        {
            printf("X\n");
            key = select();
            if(board[key] == EMPTY)
            {
                board[key] = X;
                turn = O;
            }
            else
            {
                continue;
            }
        }
        else if(turn == O)
        {
            printf("O\n");
            key = select();
            if(board[key] == EMPTY)
            {
                board[key] = O;
                turn = X;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}