#include <iostream>
#include <vector>

int main(int const argc, char const **argv) {
  int const index = std::stoi(argv[1]);

  std::vector<char const *> const secret_words1 = {"shh!", "private_key"};
  std::vector<char const *> const words = {"hello", "world"};
  std::vector<char const *> const secret_words = {"private",
                                                  "social insurance no"};

  std::cout << words[index] << "\n";
}
