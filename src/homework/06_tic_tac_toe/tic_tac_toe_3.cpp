#include "tic_tac_toe_3.h"

bool TicTacToe3::check_column_win()
{
    //COLUMN 1 WIN
    if
    (
        (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
        or
        (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    )
    {
        return true;
    }
    //column 2 win
    else if
    (
        (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
        or
        (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    )
    {
        return true;
    }
    //column 3 win
    else if
    (
        (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
        or
        (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    )
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe3::check_row_win()
{
    //ROW 1 WIN
    if
    (
        (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
        or
        (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    )
    {return true;}

    //ROW 2 WIN
    else if
    (
        (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
        or
        (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    )
    {return true;}

    //ROW 3 WIN
    else if
    (
        (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
        or
        (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    )
    {return true;}

    else
    {return false;}
}

bool TicTacToe3::check_diagonal_win()
{
    //DIAGONAL \ WIN
    if
    (
        (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
        or
        (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    )
    {return true;}

    //DIAGONAL / WIN
    else if
    (
        (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
        or
        (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
    )
    {return true;}

    else {return false;}
}