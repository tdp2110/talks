#include <cstdio>
#include <string>

int main(int const argc, char const** argv)
{
    int const index = std::stoi(argv[1]);
    printf("%s\n", argv[index]);
}
