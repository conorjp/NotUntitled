#include "math_utils.h"
#include <vector>
#include <iostream>
#include <stdexcept>
  
  Math::Math(){

  }

  bool Math::IsSquare(int num) {
    return false;
  }

  int Math::GetDigit(int num, int place) {
    if(place > num){
      throw std::invalid_argument("Invalid input!");
    }
    return 0;
  }

  bool Math::EqualParity(int x, int y) {
    return false;
  }

  bool Math::EqualParity(std::vector<int> nums) {
    return false;
  }
