#include "data_validation.h"
#include <regex>

bool isValidEmail(const std::string& email) {
    const std::regex pattern(R"([\w\.-]+@[\w\.-]+\.\w+)");
    return std::regex_match(email, pattern);
}

