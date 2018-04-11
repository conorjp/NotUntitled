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

TEST_CASE("Testing function EqualParity(int x, int y)")
{
    Math* math_util = new Math();
    SECTION("with x and y both even")
    {
        REQUIRE(math_util->EqualParity(2,4) == true);

    }
    SECTION("with x and y both odd ")
    {
        REQUIRE(math_util->EqualParity(1,3) == true);

    }
    SECTION("with x even and y odd ")
    {
        REQUIRE(math_util->EqualParity(2,3) == false);

    }
    SECTION("with x odd and y even")
    {
        REQUIRE(math_util->EqualParity(3,2) == false);

    }
    SECTION("with x = 0 and y even, should be true")
    {
        REQUIRE(math_util->EqualParity(0,2) == true);

    }
    SECTION("with x = 0 and y odd, should be false")
    {
        REQUIRE(math_util->EqualParity(0,3) == false);

    }
}

TEST_CASE("Testing function EqualParity(std::vector<int> nums)")
{
    Math* math_util = new Math();
    SECTION("with empty vector")
    {
        std::vector<int> nums{};
        REQUIRE(math_util->EqualParity(nums) == true);

    }
    SECTION("with vector size of 1")
    {
        std::vector<int> nums{0};
        REQUIRE(math_util->EqualParity(nums) == true);

    }
    SECTION("with vector size of 2 both even")
    {
        std::vector<int> nums{0, 2};
        REQUIRE(math_util->EqualParity(nums) == true);

    }
    SECTION("with vector size of 2 both odd")
    {
        std::vector<int> nums{1, 3};
        REQUIRE(math_util->EqualParity(nums) == true);

    }
    SECTION("with vector size of 2 one even one odd")
    {
        std::vector<int> nums{1, 2};
        REQUIRE(math_util->EqualParity(nums) == false);

    }
    SECTION("with nums full of even numbers")
    {
        std::vector<int> nums{2, 4, 6, 8, 10, 12, 14, 16};
        REQUIRE(math_util->EqualParity(nums) == true);

    }
    SECTION("with nums full of odd numbers")
    {
        std::vector<int> nums{1, 3, 5, 7, 9, 11, 13, 15};
        REQUIRE(math_util->EqualParity(nums) == true);

    }
    SECTION("with nums full of even numbers except last number is odd ")
    {
        std::vector<int> nums{2, 4, 6, 8, 10, 12, 14, 15};
        REQUIRE(math_util->EqualParity(nums) == false);

    }
    SECTION("with nums full of odd numbers except last number is even")
    {
        std::vector<int> nums{1, 3, 5, 7, 9, 11, 13, 16};
        REQUIRE(math_util->EqualParity(nums) == false);
    }
    SECTION("with nums full of even numbers except first number is odd ")
    {
        std::vector<int> nums{1, 4, 6, 8, 10, 12, 14, 16};
        REQUIRE(math_util->EqualParity(nums) == false);

    }
    SECTION("with nums full of odd numbers except first number is even")
    {
        std::vector<int> nums{2, 3, 5, 7, 9, 11, 13, 15};
        REQUIRE(math_util->EqualParity(nums) == false);
    }
    SECTION("with nums full of even numbers except middle number is odd ")
    {
        std::vector<int> nums{2, 4, 6, 11, 10, 12, 14, 16};
        REQUIRE(math_util->EqualParity(nums) == false);

    }
    SECTION("with nums full of odd numbers except middle number is even")
    {
        std::vector<int> nums{1, 3, 5, 7, 8, 11, 13, 15};
        REQUIRE(math_util->EqualParity(nums) == false);
    }
    SECTION("with nums full of the same even number")
    {
        std::vector<int> nums{2,2,2,2,2,2};
        REQUIRE(math_util->EqualParity(nums) == true);
    }
    SECTION("with nums full of the same odd number")
    {
        std::vector<int> nums{1,1,1,1,1,1};
        REQUIRE(math_util->EqualParity(nums) == true);
    }
}
