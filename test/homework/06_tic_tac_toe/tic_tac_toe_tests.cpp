#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("TicTacToe3: Test if game_over returns C if tie")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}
//TEST FIRST PLAYERS ***************************************
TEST_CASE("Test first player set to X")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

//TEST WIN CONDITIONS TIC_TAC_TOE_3 ***************************************

//COLUMNS
TEST_CASE("TicTacToe3: Test win by first column")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->start_game("X");
	game->mark_board(1); // X to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // O to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(4); // X to 4
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // O to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // X to 7

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe3: Test win by second column")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->start_game("X");
	game->mark_board(2); // X to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // X to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // O to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // X to 8

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe3: Test win by third column")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->start_game("X");
	game->mark_board(3); // X to 3
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // O to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // X to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // O to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(9); // X to 9

	REQUIRE(game->game_over() == true);
}

//ROWS
TEST_CASE("TicTacToe3: Test win by first row")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->start_game("X");
	game->mark_board(1); // X to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // O to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // X to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // O to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(3); // X to 3

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe3: Test win by second row")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->start_game("X");
	game->mark_board(4); // X to 4
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // X to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // O to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // X to 6

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe3: Test win by third row")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->start_game("X");
	game->mark_board(7); // X to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // X to 8
	REQUIRE(game->game_over() == false);
	game->mark_board(4); // O to 4
	REQUIRE(game->game_over() == false);
	game->mark_board(9); // X to 9

	REQUIRE(game->game_over() == true);
}

//DIAGONALS
TEST_CASE("TicTacToe3: Test win by diagonal from top left") 
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->start_game("X");
	game->mark_board(1); // X to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // O to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // X to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // O to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(9); // X to 9

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe3: Test win by diagonal from bottom")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe3());

	game->start_game("X");
	game->mark_board(7); // X to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // X to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // O to 8
	REQUIRE(game->game_over() == false);
	game->mark_board(3); // X to 3

	REQUIRE(game->game_over() == true);
}

//TEST WIN CONDITIONS TIC_TAC_TOE_4 ***************************************

//COLUMNS
TEST_CASE("TicTacToe4: Test win by first column")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(1); // X to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // O to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // X to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // O to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(9); // X to 9
	REQUIRE(game->game_over() == false);
	game->mark_board(11); // O to 11
	REQUIRE(game->game_over() == false);
	game->mark_board(13); // X to 13

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe4: Test win by second column")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(2); // X to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // X to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // O to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(10); // X to 10
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // O to 8
	REQUIRE(game->game_over() == false);
	game->mark_board(14); // X to 14

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe4: Test win by third column")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(3); // X to 3
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // O to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // X to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(4); // O to 4
	REQUIRE(game->game_over() == false);
	game->mark_board(11); // X to 11
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // O to 8
	REQUIRE(game->game_over() == false);
	game->mark_board(15); // X to 15

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe4: Test win by fourth column")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(4); // X to 4
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // O to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // X to 8
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // O to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(12); // X to 12
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // O to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(16); // X to 16

	REQUIRE(game->game_over() == true);
}
//ROWS
TEST_CASE("TicTacToe4: Test win by first row")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(1); // X to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(5); // O to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // X to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // O to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(3); // X to 3
	REQUIRE(game->game_over() == false);
	game->mark_board(11); // O to 11
	REQUIRE(game->game_over() == false);
	game->mark_board(4); // X to 3

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe4: Test win by second row")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(5); // X to 5
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // X to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(11); // O to 11
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // X to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(3); // O to 3
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // X to 8

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe4: Test win by third row")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(9); // X to 9
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(10); // X to 10
	REQUIRE(game->game_over() == false);
	game->mark_board(4); // O to 4
	REQUIRE(game->game_over() == false);
	game->mark_board(11); // X to 11
	REQUIRE(game->game_over() == false);
	game->mark_board(3); // O to 3
	REQUIRE(game->game_over() == false);
	game->mark_board(12); // X to 12

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe4: Test win by fourth row")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(13); // X to 13
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(14); // X to 14
	REQUIRE(game->game_over() == false);
	game->mark_board(4); // O to 4
	REQUIRE(game->game_over() == false);
	game->mark_board(15); // X to 15
	REQUIRE(game->game_over() == false);
	game->mark_board(3); // O to 3
	REQUIRE(game->game_over() == false);
	game->mark_board(16); // X to 16

	REQUIRE(game->game_over() == true);
}

//DIAGONALS
TEST_CASE("TicTacToe4: Test win by diagonal from top left") 
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(1); // X to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(2); // O to 2
	REQUIRE(game->game_over() == false);
	game->mark_board(6); // X to 6
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // O to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(11); // X to 11
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // O to 8
	REQUIRE(game->game_over() == false);
	game->mark_board(16); // X to 16

	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe4: Test win by diagonal from bottom")
{
	std::unique_ptr<TicTacToe> game (new TicTacToe4());

	game->start_game("X");
	game->mark_board(13); // X to 13
	REQUIRE(game->game_over() == false);
	game->mark_board(1); // O to 1
	REQUIRE(game->game_over() == false);
	game->mark_board(10); // X to 10
	REQUIRE(game->game_over() == false);
	game->mark_board(8); // O to 8
	REQUIRE(game->game_over() == false);
	game->mark_board(7); // X to 7
	REQUIRE(game->game_over() == false);
	game->mark_board(3); // O to 3
	REQUIRE(game->game_over() == false);
	game->mark_board(4); // X to 4

	REQUIRE(game->game_over() == true);
}