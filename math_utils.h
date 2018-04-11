#ifndef _MATH_H_
#define _MATH_H_

#include <vector>

class Math {
public:
  Math();
  static bool IsSquare(int num);
  static int GetDigit(int num, int place);
  static bool EqualParity(int x, int y);
  static bool EqualParity(std::vector<int> nums);

    static double solveQuadratic(int a, int b, int c);
private:
};

#endif  // _MATH_H_
