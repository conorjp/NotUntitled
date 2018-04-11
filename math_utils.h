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

    static double distance(std::vector<int> p1, std::vector<int> p2);
private:
};

#endif  // _MATH_H_
