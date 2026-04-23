#ifndef PL_LEX_LEX_KIND_H
#define PL_LEX_LEX_KIND_H
#include <cstdint>

namespace pl::lex {
enum struct LexemeTag : std::uint8_t {
    None,
    Ident,
    NumberType,
    TextType
};
}
#endif // PL_LEX_LEX_KIND_H