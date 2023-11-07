// Dave Javle
// dvjavele@csu.fullerton.edu
// @DaveJavle
// Partners: @KennethCho18

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc <= 1) {
    std::cerr << "Error: No command line arguments provided." << std::endl;
    return 1;
  }

  double sum = 0;
  size_t num_args = arguments.size();
  for (size_t i = 1; i < num_args; ++i) {
    try {
      sum += std::stod(arguments[i]);
    } catch (const std::invalid_argument& e) {
      std::cerr << "Error: Invalid argument '" << arguments[i] << "'."
                << std::endl;
      return 1;
    }
  }

  double average = sum / static_cast<double>(num_args - 1);

  std::cout << "Average = " << average << std::endl;

  return 0;
}
