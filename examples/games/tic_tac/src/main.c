#include "app.h"
#define SIZE 3
// X, O

#define EMPTY_CHAR '#'
int main()
{
    
    srand(time(NULL));

    char board[SIZE][SIZE] = {
        { EMPTY_CHAR, EMPTY_CHAR, EMPTY_CHAR },
        { EMPTY_CHAR, EMPTY_CHAR, EMPTY_CHAR },
        { EMPTY_CHAR, EMPTY_CHAR, EMPTY_CHAR },
    };

    char signs[2] = { 'X', 'O' };

    int user_sign = -1;

    do
    {
        printf("Choose your letter (X [0] or O [1]):");

        int ret = scanf("%d", &user_sign);

        if (ret != 1 || user_sign != 0 && user_sign != 1)
        {
            printf("Incorrect select sign. Please try again\n");
            char c = 0;

            while((c = getchar()) != '\n' && c != EOF) {}
            
            continue;
        }

        break;
    } while (1);

    //Computer select its sign

    int comp_sign = user_sign == 0 ? 1 : 0;

    PRINT_BOARD(board, SIZE)

    while (1)
    {
        printf("Place your sign into position:");

        int i, j;

        int ret = scanf("%d %d", &i, &j);

        if (ret != 2 || !CHECK_RANGE(i, SIZE) || !CHECK_RANGE(j, SIZE) || !IS_CELL_EMPTY(board, i, j, EMPTY_CHAR))
        {
            printf("Incorrect position. Please try again\n");
            continue;
        }

        board[i][j] = signs[user_sign];

        PRINT_BOARD(board, SIZE)

        BREAK_IF_WIN(board, SIZE, signs[user_sign], "You're winner!!!")
        
        BREAK_IF_NO_WINNER(board, SIZE, EMPTY_CHAR, "No winner!!!")

        do
        {
            i = rand() % SIZE;
            j = rand() % SIZE;

            if (!IS_CELL_EMPTY(board, i, j, EMPTY_CHAR))
            {
                continue;
            }

            break;
        } while (1);

        printf("My step:\n");

        board[i][j] = signs[comp_sign];

        PRINT_BOARD(board, SIZE)

        BREAK_IF_WIN(board, SIZE, signs[comp_sign], "Computer is winner!!!")

        BREAK_IF_NO_WINNER(board, SIZE, EMPTY_CHAR, "No winner!!!")
    }

    return 0;
}
