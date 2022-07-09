//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    //homework 6
    if(check_column_win() || check_diagonal_win() || check_row_win())
    {
        set_winner();
        return true;
    }

    else if (check_board_full())
    {
        return true;
    }
    else
    {
        return false;
    }

}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(int i = 0; i < pegs.size(); i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

//private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

//homework 6 private
void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }

}

bool TicTacToe::check_column_win()
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

bool TicTacToe::check_row_win()
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

bool TicTacToe::check_diagonal_win()
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