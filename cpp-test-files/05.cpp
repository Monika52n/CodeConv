//Sztring
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

class StringUtils {
public:
    static std::string reverse(const std::string& input) {
        std::string result = input;
        std::reverse(result.begin(), result.end());
        return result;
    }

    static std::string toLowerCase(const std::string& input) {
        std::string result = input;
        std::transform(result.begin(), result.end(), result.begin(),
                       [](unsigned char c) { return std::tolower(c); });
        return result;
    }

    static std::string toUpperCase(const std::string& input) {
        std::string result = input;
        std::transform(result.begin(), result.end(), result.begin(),
                       [](unsigned char c) { return std::toupper(c); });
        return result;
    }
};