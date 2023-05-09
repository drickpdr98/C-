
#include <iostream>
#include<time.h>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

const int ROWS = 6;
const int COLS = 7;

const char EMPTY = ' ';
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

char board[ROWS][COLS];
char currentPlayer;

void initBoard() {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            board[i][j] = EMPTY;
        }
    }
}

void drawBoard() {
    for (int i = ROWS - 1; i >= 0; --i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "| " << board[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "+";
    for (int j = 0; j < COLS; ++j) {
        cout << "---+";
    }
    cout << endl;
    cout << "  ";
    for (int j = 0; j < COLS; ++j) {
        cout << " " << j + 1 << "  ";
    }
    cout << endl;
}

bool isValidMove(int column) {
    return column >= 0 && column < COLS && board[ROWS - 1][column] == EMPTY;
}

void dropPiece(int column, char piece) {
    for (int i = 0; i < ROWS; ++i) {
        if (board[i][column] == EMPTY) {
            board[i][column] = piece;
            break;
        }
    }
}

bool checkWin(char piece) {
    // Check horizontal
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS - 3; ++j) {
            if (board[i][j] == piece && board[i][j + 1] == piece &&
                board[i][j + 2] == piece && board[i][j + 3] == piece) {
                return true;
            }
        }
    }

    // Check vertical
    for (int i = 0; i < ROWS - 3; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (board[i][j] == piece && board[i + 1][j] == piece &&
                board[i + 2][j] == piece && board[i + 3][j] == piece) {
                return true;
            }
        }
    }

    // Check diagonal (top-left to bottom-right)
    for (int i = 0; i < ROWS - 3; ++i) {
        for (int j = 0; j < COLS - 3; ++j) {
            if (board[i][j] == piece && board[i + 1][j + 1] == piece &&
                board[i + 2][j + 2] == piece && board[i + 3][j + 3] == piece) {
                return true;
            }
        }
    }

    // Check diagonal (bottom

        // Check diagonal (bottom-right to top-left)
    for (int i = 3; i < ROWS; ++i) {
        for (int j = 0; j < COLS - 3; ++j) {
            if (board[i][j] == piece && board[i - 1][j + 1] == piece &&
                board[i - 2][j + 2] == piece && board[i - 3][j + 3] == piece) {
                return true;
            }
        }
    }

    return false;
}

bool isBoardFull() {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (board[i][j] == EMPTY) {
                return false;
            }
        }
    }
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
}

char getPlayerSymbol(char player) {
    return (player == PLAYER1) ? 'X' : 'O';
}

int main() {
    initBoard();
    currentPlayer = PLAYER1;

    while (true) {
        drawBoard();
        int column;
        cout << "Player " << getPlayerSymbol(currentPlayer) << ", choose a column (1-" << COLS << "): ";
        cin >> column;
        column--;  // Adjust column number to zero-based indexing

        if (isValidMove(column)) {
            dropPiece(column, currentPlayer);
            if (checkWin(currentPlayer)) {
                drawBoard();
                cout << "Player " << getPlayerSymbol(currentPlayer) << " wins!" << endl;
                break;
            } else if (isBoardFull()) {
                drawBoard();
                cout << "It's a draw!" << endl;
                break;
            } else {
                switchPlayer();
            }
        } else {
            cout << "Invalid move. Please try again." << endl;
        }
    }

    return 0;
}
