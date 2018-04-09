/*
Arnab Purkayastha, Conor Parrish,
David Persico, Kathryn Osborn & Nathane Carmine
PE14: Version Control
Tests for the Math Class 
*/


#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "math_utils.h"
#include <iostream>
#include <vector>



TEST_CASE ( "Testing function IsSquare()")
{
    Math* math_util = new Math();

  SECTION( "with square number" )
    {
        REQUIRE(math_util->IsSquare(1) == true);


    }
  SECTION( "with non-square number")
    {
        REQUIRE(math_util->IsSquare(3) == false);

     }
}

TEST_CASE("Testing function GetDigit")
{
    Math* math_util = new Math();
    SECTION("with valid input")
    {
        REQUIRE(math_util->GetDigit(17,1) == 7);

    }
    SECTION("with invalid input")
    {
        REQUIRE_THROWS_AS(math_util->GetDigit(17,1000), std::invalid_argument);
    }
}
