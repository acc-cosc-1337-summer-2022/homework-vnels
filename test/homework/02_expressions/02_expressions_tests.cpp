#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"
#include "multi_assign.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}
*/

TEST_CASE("Verify get_sales_tax_amount")
{
	REQUIRE(get_sales_tax_amount(10) == .675);
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}

TEST_CASE("Verify get_tip_amount")
{
	REQUIRE(get_tip_amount(20,0.15) == 3);
	REQUIRE(get_tip_amount(20,0.20) == 4);
}

