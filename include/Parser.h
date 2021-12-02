#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <iostream>

#include "Lexer.h"

using namespace std;

// Define the keywords of the language
void defineLanguageElements();

// Find the operator index of a nested expression
vector<int> findOperatorIndex(vector<Token>);


int chosenOperatorIndex(vector<int>, vector<Token>);


vector<vector<Token>> separateExpression(int, vector<Token>);


vector<Token> appendTokens(vector<Token> , vector<Token> , vector<Token> );

vector<Token> discardParen(vector<Token>);

vector<Token> orderTokens(vector<Token>, vector<Token>,vector<Token>);

// Look up a token in the defined keywords for the language to check if it is valid
bool keywordDefined(Token&, int offset);

// Parse the syntax re-grouping/re-ordering tokens into streams of statements
vector<Token>* parser(vector<Token>*);

#endif // PARSER_H