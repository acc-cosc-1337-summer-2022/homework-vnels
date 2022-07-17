#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content")
{
	string dna1 = "AGCTATAG";
	string dna2 = "CGCTATAG";
	REQUIRE(get_gc_content(dna1) == .375);
	REQUIRE(get_gc_content(dna2) == .50);

}

TEST_CASE("Verify get_dna_compliment")
{
	string dna1 = "AAAACCCGGT";
	string dna2 = "CCCGGAAAAT";
	REQUIRE(get_dna_compliment(dna1) == "ACCGGGTTTT");
	REQUIRE(get_dna_compliment(dna2) == "ATTTTCCGGG");
}

TEST_CASE("Verify reverse_string")
{
	string dna1 = "AGCTATAG";
	string dna2 = "CGCTATAG";
	REQUIRE(reverse_string(dna1) == "GATATCGA");
	REQUIRE(reverse_string(dna2) == "GATATCGC");
}

