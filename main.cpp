#include <iostream>
#include <cstdlib>
#include "curl/include/curl/curl.h"

using namespace std;

int main()
{
    const char* api_key = std::getenv("API_KEY");

    if (api_key != nullptr)
    {
        std::cout << "API KEY PROVIDED" << std::endl;
    } 
    else 
    {
        std::cerr << "API KEY NOT SET" << std::endl;
        return 1;
    }

    CURL* curl = curl_easy_init();
    if (!curl)
    {
        std::cerr << "Failed to initialize cURL." << std::endl;
        return 1;
    }

    return 0;
}
