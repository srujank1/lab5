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
        void setLeftChild(Identifier *tok);
        Identifier *getLeftChild();
        void setRightChild(Identifier *tok);
        Identifier *getRightChild();

    protected:
    private:
        char* id;
        Identifier *leftChild;
        Identifier *rightChild;
};

#endif // IDENTIFIER_H
