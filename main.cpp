#include <cmath>
#include <iomanip>
#include <iostream>

long double getSqrt(int num, int iterations) {
  long double xprev = 1;
  long double xcurr;
  for (int count = 1; count < iterations; count++) {
    xcurr = 0.5 * (xprev + (num / xprev));
    xprev = xcurr;
  }
  return xcurr;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <number> <iterations>";
    return 1;
  }
  long double num = std::stol(argv[1]);
  long int precision = std::stol(argv[2]);
  std::cout << "Algorithm: " << std::setprecision(precision)
            << getSqrt(num, precision) << std::endl;
  std::cout << "CMath: " << std::setprecision(precision) << std::sqrt(num)
            << std::endl;
  return 0;
}
