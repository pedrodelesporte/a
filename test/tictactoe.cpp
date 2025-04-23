#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void drawBoard(char board[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] >= '1' && board[i][j] <= '9') {
                cout << ' ';
            } else {
                cout << board[i][j];
            }
            if (j < 2) {
                cout << " | ";
            }
        }
        cout << endl;
        if (i<2) {
            cout << "--|---|--" << endl;
        }
    }
    cout << endl;
}

char play(char board [][3], int position, char player) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    if(board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
        return board[row][col];
}

    return 0;
}


char checkWin (char board [][3]) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
                }
        }

    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return 1;
        }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            return 1;
        }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            return 1;
        }
}
    return 0;

}

int main() {

    srand(time(0));

    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    int move = 0;
    int position;
    char currentPlayer = 'X';

    while (move < 9) {
        drawBoard(board);

        char currentPlayer = (move % 2 == 0) ? 'X' : 'O';


        if (currentPlayer == 'X') {
            cout << "Player X, choose a position (1-9): ";
            cin >> position;
        }

        else {

            int row, col;
            do {
                position = rand() % 9 + 1;
                row = (position - 1) / 3;
                col = (position - 1) % 3;
            } while (board[row][col] == 'X' || board[row][col] == 'O');

            cout << "(CPU) Player O chooses position " << position << endl;
        }

        if (position < 1 || position > 9) {
            cout << "Invalid position. Choose a number between 1 and 9." << endl;
            continue;
        }

        if (!play(board, position, currentPlayer)) {
            cout << "Position already taken. Try again!\n" << endl;
            continue;
        }
        if (checkWin(board)) {
            drawBoard(board);
            cout << "Player " << currentPlayer << " won the game!" << endl;
            break;
}
        move++;
    }

    if (move == 9){
       drawBoard(board);
       cout << "Draw!" << endl;

}
    cout << "End of the game!" << endl;

    return 0;
}