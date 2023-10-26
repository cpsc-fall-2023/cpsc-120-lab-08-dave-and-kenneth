// Dave Javle
// dvjavele@csu.fullerton.edu
// @DaveJavle
// Partners: @KennethCho18

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0.0;
  size_t arg_size = arguments.size();
  for (size_t i = 1; i < arg_size; ++i) {
    sum += std::stod(arguments[i]);
  }

  double average = sum / static_cast<double>(arguments.size() - 1);

  std::cout << "average = " << average << std::endl;

  return 0;
}
