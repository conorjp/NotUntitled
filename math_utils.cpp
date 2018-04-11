/*
Arnab Purkayastha, Conor Parrish,
David Persico, Kathryn Osborn & Nathane Carmine
PE14: Version Control 
*/


#include "math_utils.h"
#include <math.h>
#include <sstream>
#include <string>

Math::Math(){

}

/*
* IsSquare(int num)
* Returns true if input num is a square value
* @param num The number that is being tested for square
* @return bool If num is square
*/
bool Math::IsSquare(int num) {
  if(num < 0){ return false; } // No negativity
  int root = round(sqrt(num));
  return (num == root * root); // Re-square and compare
}

/*
* GetDigit(int num, int place)
* Returns the digit at the place specified in the number
* the place must be a power of ten
* @param num The number from which you are finding the digit
* @param place The place in the number to get the digit from
* @return int digit from the number
*/
int Math::GetDigit(int num, int place){
  if ( num < place ) { throw std::invalid_argument("Invalid input!");}
  // covert num to a string, index to the correct char, covert to int with - '0'
  return std::to_string(num)[std::to_string(num).length()-std::to_string(place).length()] - '0';
}

/*
* EqualParity(int x, int y)
* Checks if two numbers are both odd or both even
* (have the same parity)
* @param x First number to check for parity
* @param y Second number to check for parity
* @return bool Whether the two numbers have equal parity
*/
bool Math::EqualParity(int x, int y) {
  if(x % 2 == 0){ return (y % 2 == 0); } // Both even
  else{ return (y % 2 != 0); }  // Both odd
}

/*
* EqualParity(std::vector<int> nums)
* Checks if a list of numbers are all odd or all even
* (have the same parity)
* @param nums A vector of numbers to check for parity
* @return bool Whether the list of numbers have equal parity
*/
bool Math::EqualParity(std::vector<int> nums) {
  return false;
}
