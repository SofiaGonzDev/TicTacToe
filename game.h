#ifndef GAME_H
#define GAME_H

const int MIN_SIZE = 3;
const int MAX_SIZE = 9;
const int MIN_PLAYERS = 2;
const int MAX_PLAYERS = 5;

void initBoard(int board[MAX_SIZE][MAX_SIZE], int size);
int parseBoard(int board[MAX_SIZE][MAX_SIZE], int size);
bool isValidMove(int board[MAX_SIZE][MAX_SIZE], int size, int m, int n);
void printBoard(int board[MAX_SIZE][MAX_SIZE], int size);
void loopGame(int board[MAX_SIZE][MAX_SIZE], int size, int players);

#endif