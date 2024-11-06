#include <iostream>
#include <string>

std::string greet(const std::string& name) {
    return "Hello, " + name + "!";
}

int main() {
    std::cout << greet("C++") << std::endl;  // Output: Hello, C++!
    return 0;
}
