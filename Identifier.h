#ifndef IDENTIFIER_H
#define IDENTIFIER_H
class Token;

class Identifier:public Token
{
    public:
        Identifier();
        virtual ~Identifier();
        void Identifier::setIdentifier(string thing);
        char* Identifier::getIdentifier();
    protected:
    private:
        char* id;
};

#endif // IDENTIFIER_H
