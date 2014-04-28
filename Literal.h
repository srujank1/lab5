#ifndef LITERAL_H
#define LITERAL_H
#include "Token.h"
template < typename T>

class Literal:public Token{

    public:
        T literal;
        Literal(T lit)
        {
            this->literal = lit;
        }
        ~Literal()
        {

        }
        void print(){
            std::cout<<literal<<std::endl;
        }
        void setLiteral(T lit)
        {
            literal = lit;
        }
        T *getLiteral()
        {
            return literal;
        }
};

#endif // LITERAL_H
