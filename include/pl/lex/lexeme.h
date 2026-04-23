#ifndef PL_LEX_LEXEME_H
#define PL_LEX_LEXEME_H
#include "lexeme_tag.h"
#include <string_view>

namespace pl::lex {
struct Lexeme final {
    Lexeme(LexemeTag lexeme_tag, std::string_view view)
        : lexeme_tag_(lexeme_tag)
        , view_(view)
    {
    }

    [[nodiscard]] LexemeTag lexeme_tag() const
    {
        return lexeme_tag_;
    }

private:
    LexemeTag lexeme_tag_ = LexemeTag::None;
    std::string_view view_;
};
}
#endif // PL_LEX_LEXEME_H