#include "math_utils.h"
#include <math.h>
#include <sstream>
#include <string>

bool Math::IsSquare(int num) {
  if(num < 0){ return false; } // No negativity
  int root = round(sqrt(num));
  return (num == root * root); // Re-square and compare
}

int Math::GetDigit(int num, int place){
  if ( num < place ) { throw std::invalid_argument("Invalid input!");}
  return std::to_string(num)[std::to_string(num).length()-std::to_string(place).length()] - '0';
}

bool Math::EqualParity(int x, int y) {
  if(x % 2 == 0){ return (y % 2 == 0); } // Both even
  else{ return (y % 2 != 0); }  // Both odd
}

bool Math::EqualParity(std::vector<int> nums) {
  return false;
}
