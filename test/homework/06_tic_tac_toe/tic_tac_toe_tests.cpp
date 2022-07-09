#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if game_over returns C if tie")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}
//TEST FIRST PLAYERS ***************************************
TEST_CASE("Test first player set to X")
{
	TicTacToe game1;
	game1.start_game("X");
	REQUIRE(game1.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe game2;
	game2.start_game("O");
	REQUIRE(game2.get_player() == "O");
}

//TEST WIN CONDITIONS ***************************************

//COLUMNS
TEST_CASE("Test win by first column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1); // X to 1
	game.mark_board(2); // O to 2
	game.mark_board(4); // X to 4
	game.mark_board(6); // O to 6
	game.mark_board(7); // X to 7

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2); // X to 2
	game.mark_board(1); // O to 1
	game.mark_board(5); // X to 5
	game.mark_board(6); // O to 6
	game.mark_board(8); // X to 8

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(3); // X to 3
	game.mark_board(2); // O to 2
	game.mark_board(6); // X to 6
	game.mark_board(7); // O to 7
	game.mark_board(9); // X to 9

	REQUIRE(game.game_over() == true);
}

//ROWS
TEST_CASE("Test win by first row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1); // X to 1
	game.mark_board(5); // O to 5
	game.mark_board(2); // X to 2
	game.mark_board(6); // O to 6
	game.mark_board(3); // X to 3

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(4); // X to 4
	game.mark_board(1); // O to 1
	game.mark_board(5); // X to 5
	game.mark_board(7); // O to 7
	game.mark_board(6); // X to 6

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7); // X to 7
	game.mark_board(1); // O to 1
	game.mark_board(8); // X to 8
	game.mark_board(4); // O to 4
	game.mark_board(9); // X to 9

	REQUIRE(game.game_over() == true);
}

//DIAGONALS
TEST_CASE("Test win by diagonal from top left") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1); // X to 1
	game.mark_board(2); // O to 2
	game.mark_board(5); // X to 5
	game.mark_board(7); // O to 7
	game.mark_board(9); // X to 9

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by diagonal from bottom")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7); // X to 7
	game.mark_board(1); // O to 1
	game.mark_board(5); // X to 5
	game.mark_board(8); // O to 8
	game.mark_board(3); // X to 3

	REQUIRE(game.game_over() == true);
}