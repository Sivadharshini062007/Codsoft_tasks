#include <iostream>
using namespace std;

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

void displayBoard()
{
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool checkWin()
{
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;

        if(board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }

    if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;

    if(board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

int main()
{
    int row, col;
    char player = 'X';

    for(int turn = 0; turn < 9; turn++)
    {
        displayBoard();

        cout << "\nPlayer " << player << endl;
        cout << "Enter row (1-3): ";
        cin >> row;
        cout << "Enter column (1-3): ";
        cin >> col;

        row--;
        col--;

        if(board[row][col] == ' ')
        {
            board[row][col] = player;
        }
        else
        {
            cout << "Box already filled! Try again.\n";
            turn--;
            continue;
        }

        if(checkWin())
        {
            displayBoard();
            cout << "\nPlayer " << player << " Wins!" << endl;
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    displayBoard();
    cout << "\nMatch Draw!" << endl;

    return 0;
}
