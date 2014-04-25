#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <strings>


class Identifier:public Token
{
    public:
        Identifier();
        virtual ~Identifier();
        void setIdentifier(string thing);
        string getIdentifier();
    protected:
    private:
        string id;
};

#endif // IDENTIFIER_H
