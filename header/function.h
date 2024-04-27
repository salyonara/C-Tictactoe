#ifndef FUNCTION_H
#define FUNCTION_H

#define REFRESH system("cls")
#define X 4
#define O 5
#define EMPTY 0

void draw(int*);    //DONE
int select();   
void Winner(int*);

/*These are the winning hands Vx,Hx and Dx. Vx > VerticalX moves, Hx > HorizontalX moves and Dx > DiagonalX moves*/
#define Vx board[0] == X && board[10] == X && board[20] == X || board[2] == X && board[12] == X && board[22] == X || board[4] == X && board[14] == X && board[24] == X
#define Hx board[0] == X && board[2] == X && board[4] == X || board[10] == X && board[12] == X && board[14] == X || board[20] == X && board[22] == X && board[24] == X
#define Dx board[0] == X && board[12] == X && board[24] == X || board[4] == X && board[12] == X && board[20] == X
/*These are the winning hands Vo,Ho and Do. Vo > VerticalO moves, Ho > HorizontalO moves and Do > DiagonalO moves*/
#define Vo board[0] == O && board[10] == O && board[20] == O || board[2] == O && board[12] == O && board[22] == O || board[4] == O && board[14] == O && board[24] == O
#define Ho board[0] == O && board[2] == O && board[4] == O || board[10] == O && board[12] == O && board[14] == O || board[20] == O && board[22] == O && board[24] == O
#define Do board[0] == O && board[12] == O && board[24] == O || board[4] == O && board[12] == O && board[20] == O
#endif
