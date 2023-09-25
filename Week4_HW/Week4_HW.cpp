#include <iostream>
#include <random>
#include <functional>

using namespace std;

class TicTacToe
{
public:
    // TTT board, empty by default
    char board[3][3] =
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    // used for keeping track what's in each space, and what value each player has
    enum Entry
    {
        EMPTY = ' ',
        PLAYER_ONE = 'x',
        PLAYER_TWO = 'o'
    };

    enum Direction
    {
        HORIZONTAL = 0,
        VERTICAL = 1,
        DIAGONAL = 2
    };

    // has the board been completely filled?
    bool isFull()
    {
        bool result = true;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == Entry::EMPTY)
                    result = false;
            }
        }
        return result;
    }

    // has someone won?
    bool isVictory(Entry e)
    {
        // first row
        if (board[0][0] == (char)e && board[0][1] == (char)e && board[0][2] == (char)e) { return true; }
        // second row
        else if (board[1][0] == (char)e && board[1][1] == (char)e && board[1][2] == (char)e) { return true; }
        // third row
        else if (board[2][0] == (char)e && board[2][1] == (char)e && board[2][2] == (char)e) { return true; }
        // first col
        else if (board[0][0] == (char)e && board[1][0] == (char)e && board[2][0] == (char)e) { return true; }
        // second col
        else if (board[0][1] == (char)e && board[1][1] == (char)e && board[2][1] == (char)e) { return true; }
        // third col
        else if (board[0][2] == (char)e && board[1][2] == (char)e && board[2][2] == (char)e) { return true; }
        // diagonal 1
        else if (board[0][0] == (char)e && board[1][1] == (char)e && board[2][2] == (char)e) { return true; }
        // diagonal 2
        else if (board[0][2] == (char)e && board[1][1] == (char)e && board[2][0] == (char)e) { return true; }

        return false;
    }

    /*char* winningMove(Entry e)
    {
        int winningRow;
        int winningCol;

        for (int i = 0; i < getSize(); i++)
        {
            if (canWin(e, i, 0, winningRow, winningCol, Direction::HORIZONTAL))
                return board[winningRow][winningCol];
            if (canWin(e, 0, i, winningRow, winningCol, Direction::VERTICAL))
                return board[winningRow][winningCol];
        }
        if (canWin(e, 0, 0, winningRow, winningCol, Direction::DIAGONAL))
            return board[winningRow][winningCol];
        if (canWin(e, 2, 0, winningRow, winningCol, Direction::DIAGONAL))
            return board[winningRow][winningCol];
        
        return nullptr;
    }*/

    // determines whether a player is one move away from winning
    bool canWin(Entry e, int startingRow, int startingCol, int& winningRow, int& winningCol, Direction d)
    {
        int filledCount = 0;
        int emptyCount = 0;
        bool foundWinningSpace = false;

        switch (d)
        {
        case Direction::HORIZONTAL:
            for (int i = startingCol; i < getSize(); i++)
            {
                if (board[startingRow][i] == (char)e)
                    filledCount++;
                else if (board[startingRow][i] == ' ')
                {
                    emptyCount++;
                    winningRow = startingRow;
                    winningCol = i;
                    //cout << "Set move choice for row " << startingRow << "\n";
                }
            }
            if (filledCount == 2 && emptyCount == 1)
                foundWinningSpace = true;
            break;
        case Direction::VERTICAL:
            for (int i = startingRow; i < getSize(); i++)
            {
                if (board[i][startingCol] == (char)e)
                    filledCount++;
                else if (board[i][startingCol] == ' ')
                {
                    emptyCount++;
                    winningRow = i;
                    winningCol = startingCol;
                    //cout << "Set move choice for col " << startingCol << "\n";
                }
            }
            if (filledCount == 2 && emptyCount == 1)
                foundWinningSpace = true;
            break;
        case Direction::DIAGONAL:
            if (startingRow == 0 && startingCol == 0)
            {
                for (int i = startingRow; i < getSize(); i++)
                {
                    if (board[i][i] == (char)e)
                        filledCount++;
                    else if (board[i][i] == ' ')
                    {
                        emptyCount++;
                        winningRow = i;
                        winningCol = i;
                    }
                }
            }
            else
            {
                int col = 0;
                for (int i = startingRow; i >= 0; i--)
                {
                    if (board[i][col] == (char)e)
                        filledCount++;
                    else if (board[i][col] == ' ')
                    {
                        emptyCount++;
                        winningRow = i;
                        winningCol = col;
                    }
                    col++;
                }
            }

            if (filledCount == 2 && emptyCount == 1)
                foundWinningSpace = true;
            break;
        default:
            break;
        }
        return foundWinningSpace;
    }

    // return size of the board; mostly just in case I wanted to make the board expandable
    int getSize()
    {
        return 3;
    }

    void dump()
    {
        cout << "----------------------------------------" << endl << endl;
        for (int i = 0; i < getSize(); i++)
        {
            for (int j = 0; j < getSize(); j++)
            {
                cout << " | " << board[i][j] << " | ";
            }

            cout << endl;
        }
        cout << "----------------------------------------" << endl << endl;
    }
};

bool getHumanMove(int maxValue, TicTacToe::Entry human, TicTacToe& t);
bool getComputerMove(TicTacToe::Entry computer, TicTacToe::Entry human, TicTacToe& t);

int main()
{
    TicTacToe t;
    TicTacToe::Entry human = TicTacToe::PLAYER_ONE;
    TicTacToe::Entry computer = TicTacToe::PLAYER_TWO;

    int maxValue = t.getSize();

    cout << "----------------------------------------" << endl;

    cout << "You are '" << (char)human << "', " <<
        "the computer is: '" << (char)computer << "'" << endl;

    cout << "----------------------------------------" << endl << endl;

    // run the game until one player isn't able to go again
    do
    {
        // show board
        t.dump();
    } while (!getHumanMove(maxValue, human, t) && !getComputerMove(computer, human, t));

    t.dump();

    cout << endl;

    if (t.isVictory(human))
        cout << "Human Victory" << endl;

    else if (t.isVictory(computer))
        cout << "Computer Victory" << endl;

    else if (t.isFull())
        cout << "Tie" << endl;

    return(0);
}

static bool getHumanMove(int maxValue, TicTacToe::Entry human, TicTacToe& t)
{
    // check if player is able to move
    if (t.isVictory(t.PLAYER_ONE) || t.isVictory(t.PLAYER_TWO) || t.isFull())
        return true;

    int rowChoice = 0;
    int colChoice = 0;

    do {
        do {

            cout << "Enter column number (x) : 0 ... 2 : ";
            cin >> colChoice;
            cout << endl;

        } while (colChoice > maxValue || colChoice < 0);

        do {

            cout << "Enter row number (y) : 0 ... 2 : ";
            cin >> rowChoice;
            cout << endl;

        } while (rowChoice > maxValue || rowChoice < 0);


        if (t.board[rowChoice][colChoice] == t.EMPTY)
        {
            t.board[rowChoice][colChoice] = (char)human;

            return false;
        }
        else
        {
            cout << "Not a valid option! Please try again..." << endl;
        }
    } while (t.board[rowChoice][colChoice] != t.EMPTY);

    // move complete
    return false;
}

static bool getComputerMove(TicTacToe::Entry computer, TicTacToe::Entry human, TicTacToe& t)
{
    // check if computer is able to move
    if (t.isVictory(t.PLAYER_ONE) || t.isVictory(t.PLAYER_TWO) || t.isFull())
        return true;

    // handle computer's move

    int rowChoice = 0;
    int colChoice = 0;

    do {
        // if the computer can win this turn, do it
        bool foundMove = false;

        while (true)
        {
            for (int i = 0; i < t.getSize(); i++)
            {
                if (t.canWin(computer, i, 0, rowChoice, colChoice, t.HORIZONTAL))
                {
                    cout << "Horizontal move.\n";
                    foundMove = true;
                    break;
                }
                if (t.canWin(computer, 0, i, rowChoice, colChoice, t.VERTICAL))
                {
                    cout << "Vertical move.\n";
                    foundMove = true;
                    break;
                }
            }
            if (foundMove)
                break;
            if (t.canWin(computer, 0, 0, rowChoice, colChoice, t.DIAGONAL))
            {
                cout << "Diagonal move.\n";
                foundMove = true;
                break;
            }
            if (t.canWin(computer, 2, 0, rowChoice, colChoice, t.DIAGONAL))
            {
                cout << "Diagonal move.\n";
                foundMove = true;
                break;
            }
            break;
        }
        if (foundMove)
        {
            t.board[rowChoice][colChoice] = (char)computer;
            cout << "Found winning move.\n";

            return false;
        }

        // if the player can win in their next move, block them
        foundMove = false;

        while (true)
        {
            for (int i = 0; i < t.getSize(); i++)
            {
                if (t.canWin(human, i, 0, rowChoice, colChoice, t.HORIZONTAL))
                {
                    cout << "Horizontal move.\n";
                    foundMove = true;
                    break;
                }
                if (t.canWin(human, 0, i, rowChoice, colChoice, t.VERTICAL))
                {
                    cout << "Vertical move.\n";
                    foundMove = true;
                    break;
                }
            }
            if (foundMove)
                break;
            if (t.canWin(human, 0, 0, rowChoice, colChoice, t.DIAGONAL))
            {
                cout << "Diagonal move.\n";
                foundMove = true;
                break;
            }
            if (t.canWin(human, 2, 0, rowChoice, colChoice, t.DIAGONAL))
            {
                cout << "Diagonal move.\n";
                foundMove = true;
                break;
            }
            break;
        }
        if (foundMove)
        {
            t.board[rowChoice][colChoice] = (char)computer;
            cout << "Blocked player win.\n";

            return false;
        }

        // if the center square is open, take it
        if (t.board[1][1] == t.EMPTY)
        {
            t.board[1][1] = (char)computer;
            cout << "Claimed center square.\n";

            return false;
        }

        // if any corner square is open, choose one at random
        if (t.board[0][0] == t.EMPTY || t.board[2][0] == t.EMPTY || t.board[0][2] == t.EMPTY || t.board[2][2] == t.EMPTY)
        {
            auto randomGen = bind(uniform_int_distribution<>(0, 1), default_random_engine());
            while (true)
            {
                // since randomGen can only be 0 or 1, multiplying by 2 will result in either 0 or 2
                // doesn't randomize properly, but it's not a huge deal
                rowChoice = randomGen() * 2;
                colChoice = randomGen() * 2;

                if (t.board[rowChoice][colChoice] == t.EMPTY)
                {
                    t.board[rowChoice][colChoice] = (char)computer;
                    cout << "Claimed random corner square.\n";

                    return false;
                }
            }
        }

        // choose a space at random
        while (true)
        {
            do {
                rowChoice = rand() % ((t.getSize() - 0) + 1) + 0;

            } while (rowChoice > t.getSize() || rowChoice < 0);

            do {
                colChoice = rand() % ((t.getSize() - 0) + 1) + 0;

            } while (colChoice > t.getSize() || colChoice < 0);

            if (t.board[rowChoice][colChoice] == t.EMPTY)
            {
                t.board[rowChoice][colChoice] = (char)computer;
                cout << "Moved randomly.\n";

                return false;
            }
        }

    } while (t.board[rowChoice][colChoice] != t.EMPTY);

    // move complete
    return false;
}