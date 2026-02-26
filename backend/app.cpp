#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    std::string hostname = getenv("HOSTNAME");
    std::cout << "Content-Type: text/plain\n\n";
    std::cout << "Served by backend: " << hostname << std::endl;
    return 0;
}
