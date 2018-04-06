#ifndef _MATH_H_
#define _MATH_H_

#include <vector>

class Math {
public:
  Math();
  static bool IsSquare(int num);
  int GetDigit(int num, int place);
  bool EqualParity(int x, int y);
  bool EqualParity(std::vector<int> nums);
private:
};

#endif  // _MATH_H_
