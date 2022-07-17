#include "tic_tac_toe_4.h"

bool TicTacToe4::check_column_win()
{
    //COLUMN 1 WIN
    if
    (
        (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" && pegs[12] == "X")
        or
        (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" && pegs[12] == "O")
    )
    {
        return true;
    }
    //column 2 win
    else if
    (
        (pegs[1] == "X" && pegs[5] == "X" && pegs[9] == "X" && pegs[13] == "X")
        or
        (pegs[1] == "O" && pegs[5] == "O" && pegs[9] == "O" && pegs[13] == "O")
    )
    {
        return true;
    }
    //column 3 win
    else if
    (
        (pegs[2] == "X" && pegs[6] == "X" && pegs[10] == "X" && pegs[14] == "X")
        or
        (pegs[2] == "O" && pegs[6] == "O" && pegs[10] == "O" && pegs[14] == "O")
    )
    {
        return true;
    }
    //column 4 win
    else if
    (
        (pegs[3] == "X" && pegs[7] == "X" && pegs[11] == "X" && pegs[15] == "X")
        or
        (pegs[3] == "O" && pegs[7] == "O" && pegs[11] == "O" && pegs[15] == "O")
    )
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe4::check_row_win()
{
    //ROW 1 WIN
    if
    (
        (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" && pegs[3] == "X")
        or
        (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" && pegs[3] == "O")
    )
    {return true;}

    //ROW 2 WIN
    else if
    (
        (pegs[4] == "X" && pegs[5] == "X" && pegs[6] == "X" && pegs[7] == "X")
        or
        (pegs[4] == "O" && pegs[5] == "O" && pegs[6] == "O" && pegs[7] == "X")
    )
    {return true;}

    //ROW 3 WIN
    else if
    (
        (pegs[8] == "X" && pegs[9] == "X" && pegs[10] == "X" && pegs[11] == "X")
        or
        (pegs[8] == "O" && pegs[9] == "O" && pegs[10] == "O" && pegs[11] == "O")
    )
    {return true;}

    //ROW 4 WIN
    else if
    (
        (pegs[12] == "X" && pegs[13] == "X" && pegs[14] == "X" && pegs[15] == "X")
        or
        (pegs[12] == "O" && pegs[13] == "O" && pegs[14] == "O" && pegs[15] == "O")
    )
    {return true;}

    else
    {return false;}
}

bool TicTacToe4::check_diagonal_win()
{
    //DIAGONAL \ WIN
    if
    (
        (pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X")
        or
        (pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O")
    )
    {return true;}

    //DIAGONAL / WIN
    else if
    (
        (pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X")
        or
        (pegs[3] == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "O")
    )
    {return true;}

    else {return false;}
}