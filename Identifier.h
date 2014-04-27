#ifndef IDENTIFIER_H
#define IDENTIFIER_H
#include "Token.h"

class Identifier:public Token
{
    public:
        Identifier();
        virtual ~Identifier();
        void setIdentifier(char* thing);
        char* getIdentifier();
        void setLeftChild(Token *tok);
        Token *getLeftChild();
        void setRightChild(Token *tok);
        Token *getRightChild();

    protected:
    private:
        char* id;
};

#endif // IDENTIFIER_H
