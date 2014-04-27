#ifndef IDENTIFIER_H
#define IDENTIFIER_H
#include "Token.h"
#include <string>

class Identifier:public Token
{
    public:
        Identifier();
        virtual ~Identifier();
        void setIdentifier(string thing);
        string getIdentifier();
        void setLeftChild(Identifier *tok);
        Identifier *getLeftChild();
        void setRightChild(Identifier *tok);
        Identifier *getRightChild();

    protected:
    private:
        string id;
        Identifier *leftChild;
        Identifier *rightChild;
};

#endif // IDENTIFIER_H
