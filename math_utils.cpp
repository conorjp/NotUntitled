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
bool Math::IsSquare(int num) {
  if(num < 0){ return false; } // No negativity
  int root = round(sqrt(num));
  return (num == root * root); // Re-square and compare
}

int Math::GetDigit(int num, int place){
  if ( num < place ) { throw std::invalid_argument("Invalid input!");}
  // covert num to a string, index to the correct char, covert to int with - '0'
  return std::to_string(num)[std::to_string(num).length()-std::to_string(place).length()] - '0';
}
bool Math::EqualParity(int x, int y) {
  if(x % 2 == 0){ return (y % 2 == 0); } // Both even
  else{ return (y % 2 != 0); }  // Both odd
}

bool Math::EqualParity(std::vector<int> nums) {
  // Return true if there are none or one items in nums
  if (nums.size() < 2) return true;
  // Return Math::EqualParity(int, int) if there are only two
  if (nums.size() == 2) return Math::EqualParity(nums[0], nums[1]);
  // Else, go through entire nums vector
  int prev_num = nums[0]; // Set first previous num to first item in nums
  // For each num in nums:
  for (auto const& num: nums) {
    // Compare it to the previous num using EqualParity(int, int)
    // If EqualParity(int, int) returns false, return false in this EqualParity
    if (!Math::EqualParity(prev_num, num)) return false;
    prev_num = num; // else, set prev_num to the current num and continue looping
  }
  // Return true if no parity mismatches were found
  return true;
}
