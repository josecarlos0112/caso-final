//
// Created by vital on 31/10/2023.
//

#include <sstream>
#include "../../OneDrive/Documentos/GitHub/caso-final/tokenizer.h"

Tokens tokenize(const std::string& input) {
    Tokens tokens;
    std::string token;
    std::istringstream stream(input);

    while (stream >> token) {
        tokens.push_back(token);
    }

    return tokens;
}



