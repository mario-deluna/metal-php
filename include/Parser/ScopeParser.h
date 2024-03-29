#ifndef SCOPEPARSER_H
#define SCOPEPARSER_H

#pragma once

#include "AST/ScopeNode.h"
#include "AST/ASTContext.h"
#include "Parser/ParserPayload.h"

namespace Parser
{
    AST::ScopeNode &parse_scope(Payload &payload);
};



#endif