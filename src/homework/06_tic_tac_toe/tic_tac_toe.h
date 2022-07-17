//h

#include <string>
#include <vector>
#include <iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    //homework 7
    TicTacToe(int size):pegs(size*size, " "){};

    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;

    //homework 6
    std::string get_winner() const{return winner;}

protected:
    std::vector <std::string> pegs;
    virtual bool check_column_win ();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();


private:
    std::string player;
    void clear_board();
    void set_next_player();
    bool check_board_full();

    //homework 6
    std::string winner = "C";
    void set_winner();


};
#endif