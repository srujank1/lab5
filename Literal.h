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
};

#endif // LITERAL_H
