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

    SECTION( "with small square number" )
    {
        REQUIRE(math_util->IsSquare(1) == true);
    }
    SECTION( "with big square number" )
    {
        REQUIRE(math_util->IsSquare(9801) == true);
    }
    SECTION( "with non-square positive number")
    {
        REQUIRE(math_util->IsSquare(3) == false);

    }
    SECTION( "with 0")
    {
        REQUIRE(math_util->IsSquare(0) == true);

    }
     SECTION( "with negative number ")
    {
        REQUIRE(math_util->IsSquare(-25) == false);

    }
}

TEST_CASE("Testing function GetDigit")
{
    Math* math_util = new Math();
    SECTION("with valid input and the ones place ")
    {
        REQUIRE(math_util->GetDigit(17,1) == 7);

    }
    SECTION("with valid input and the tens place ")
    {
        REQUIRE(math_util->GetDigit(17,10) == 1);

    }
    SECTION("with valid input and the hundreds place ")
    {
        REQUIRE(math_util->GetDigit(317,100) == 3);

    }
    SECTION("with valid input and the thousands place ")
    {
        REQUIRE(math_util->GetDigit(4317,1000) == 4);

    }
    SECTION("with valid input and the ten thousands place ")
    {
        REQUIRE(math_util->GetDigit(94317,10000) == 9);

    }
    SECTION("with invalid input")
    {
        REQUIRE_THROWS_AS(math_util->GetDigit(17,1000), std::invalid_argument);
    }
}
