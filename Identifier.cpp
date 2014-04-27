#include "Identifier.h"
#include <cstdlib>

Identifier::Identifier()
{
    setLeftChild(NULL);
    setRightChild(NULL);
    list = NULL;
}

Identifier::~Identifier()
{
    //What code do I need here to free memory
    LineNumberList *root = getLineNumberList();
    LineNumberList *tmp = root;

    while (root != NULL)
    {
        tmp = tmp->getNextLineNumber();
        delete root;
        root = tmp;
    }
    if (this->getType() == STRING_LIT)
    {
        free(this->literal.stringLiteral);
    }
}

char* Identifier::getIdentifier(){
    return this->id;
}

void Identifier::setIdentifier(char* thing){
    this->id=thing;
}
