#include "tic_tac_toe.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = ' ';

	do
	{
		cout<<"Enter first player: ";
		cin>>first_player;

		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();

		}

		cout<<"\nThe winner is "<<game.get_winner()<<"!!!\n\n";
		cout<<"Play again? \nEnter Y to play again.";
		cin>>user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');
	


	return 0;
}