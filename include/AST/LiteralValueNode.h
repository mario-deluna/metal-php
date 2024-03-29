#ifndef LITERALVALUENODE_H
#define LITERALVALUENODE_H

#pragma once

#include "ASTNode.h"
#include "../Lexer.h"

namespace AST 
{
    class LiteralValueNode : public Node
    {
    public:
        TokenReference literal_token;

        LiteralValueNode(TokenReference literal_token) : 
            literal_token(literal_token)
        {};

        ~LiteralValueNode() {};

        static constexpr NodeType node_type = NodeType::n_literal;

        const std::string literal_type_description();

        const std::string node_description() override {
            return "literal<" + literal_type_description() + ">(" + literal_token.value() + ")";
        }

    private:

    };
};

#endif