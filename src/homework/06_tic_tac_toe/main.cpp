#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <iostream>
#include <string>
#include <memory>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	std::unique_ptr<TicTacToe> game;
	string first_player;
	char user_choice = ' ';
	int tic_tac_toe_size = 0;

	do
	{
		cout<<"Do you wish to player Tic Tac Toe 3 or 4?\n";
		cin>>tic_tac_toe_size;
		if(tic_tac_toe_size == 3)
		{
			game = std::make_unique<TicTacToe3>();
		}
		else if(tic_tac_toe_size == 4)
		{
			game = std::make_unique<TicTacToe4>();
		}
		

		cout<<"Enter first player: ";
		cin>>first_player;

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();

		}

		cout<<"\nThe winner is "<<game->get_winner()<<"!!!\n\n";
		cout<<"Play again? \nEnter Y to play again.";
		cin>>user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');
	


	return 0;
}