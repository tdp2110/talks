#include <iostream>
#include <vector>

using std::vector;

int main(int const argc, char const **argv) {
  int const index = std::stoi(argv[1]);

  vector<char const *> const secret_words1 = {"shh!", "private_key"};
  vector<char const *> const words = {"hello", "world"};
  vector<char const *> const secret_words = {"private", "social insurance no"};

  std::cout << words[index] << "\n";
}
