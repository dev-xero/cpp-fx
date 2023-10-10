#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const char* api_key = std::getenv("API_KEY");

    if (api_key != nullptr) {
        std::cout << "API KEY PROVIDED" << std::endl;
    } else {
        std::cerr << "API KEY NOT SET" << std::endl;
        return 1;
    }

    return 0;
}