#pragma once

#include "common.hpp"

typedef struct {
	enum {
		// Data Types
		STRING,
		INT,
		FLOAT,
		BOOL,
		CHAR,
		ARRAY,

		// Keywords
		CLASS,
		INTERFACE,
		RECORD,
		UNION,
		VARIANT,
		RUNFILE,
		IMPORT,
		VIRTUAL,
		IF,
		IDENTIFIER_KEY,
		CASE,
		SWITCH,
		WHILE,
		FOR,
		FOREACH,
		AS,
		FUNC,
		DO,
		IS,
		THEN,
		END,
		NOT,
		OR,
		AND,
		INHERITS,
		CONTAINS,

		// Literals
		STRING_LIT,
		CHAR_LIT,
		INT_LIT,
		FLOAT_LIT,

		// Symbols
		PLUS,
		MINUS,
		TIMES,
		DIVIDE,
		PLUS_EQUALS,
		MINUS_EQUALS,
		TIMES_EQUALS,
		DIVIDE_EQUALS,
		EQUALS,
		EQUALS_EQUALS,

		// Miscellaneous
		IDENTIFIER,
	} TokenType;
} ESCtoken;