#include <iostream>
#include <string>


int main() {
    char const* ptr = nullptr;
    {
        std::string const s = std::string{"hello world!!!!!!!!!00000000000000000000000"};
        ptr = s.data();
    }
    std::cout << *ptr << "\n";
}
