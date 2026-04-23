#include <string_view>

#include "pl/lex/lex.h"

using pl::lex::lex;

int main()
{
    std::string_view source_text;

    lex(source_text);
}