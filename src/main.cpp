#include <iostream>
#include <string>
#include <vector>

#include "cpp-template.h"

auto function() -> int { return 'c'; }

int main() {
  std::cout << function() << '\n';

  cpp_template();

  std::vector<std::string> vec;
  vec.push_back("test_package");

  cpp_template_print_vector(vec);
}
