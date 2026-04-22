#ifndef PL_LEX_H
#define PL_LEX_H
#include <string_view>

namespace pl::lex {
void lex(std::string_view source_text);
}
#endif // PL_LEX_H