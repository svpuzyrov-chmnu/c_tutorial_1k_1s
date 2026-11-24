#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define CHECK_RANGE(i, size) ((i) >= 0 && (i) < (size))

#define IS_CELL_EMPTY(m, i, j, empty_char) (m[i][j] == (empty_char))

#define PRINT_BOARD(m, size) \
for (int i = 0; i < size; ++i) \
{ \
  for (int j = 0; j < size; ++j) \
  {\
     printf("%2c", m[i][j]); \
  } \
  printf("\n"); \
}


#define BREAK_IF_WIN(board, size, sign, win_message) \
{ \
int counter[4] = { 0 }; \
for (int i = 0; i < size; ++i) \
{ \
    if (board[i][i] == sign) \
    { \
        ++counter[0]; \
    } \
    if (board[i][size - i - 1] == sign) \
    { \
        ++counter[1]; \
    } \
    if (board[size / 2][i] == sign) \
    {\
        ++counter[2];\
    }\
    if (board[i][size / 2] == sign) \
    {\
        ++counter[3]; \
    }\
}\
int is_win = 0;\
for (int i = 0; !is_win && i < sizeof(counter) / sizeof(counter[0]); ++i)\
{\
    is_win = (counter[i] == 3);\
}\
if (is_win)\
{\
    printf(win_message);\
    break;\
}\
}

#define BREAK_IF_NO_WINNER(board, size, empty_char, message) \
{ \
int empty_cells = 0;\
for (int i = 0; i < size; ++i) \
{ \
   for (int j = 0; j < size; ++j) \
   { \
      empty_cells = (board[i][j] == (empty_char)) ? ++empty_cells: empty_cells; \
   } \
} \
if (empty_cells == 0)\
{\
    printf(message);\
    break;\
}\
}