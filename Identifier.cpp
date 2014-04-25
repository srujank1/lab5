#include "Identifier.h"

Identifier::Identifier()
{
    //ctor
}

Identifier::~Identifier()
{
    //dtor
}

string Identifier::getIdentifier(){
    return this->id;
}

void Identifier::setIdentifier(string thing){
    this->id=thing;
}
