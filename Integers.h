#ifndef INTEGERS_H
#define INTEGERS_H
#include "Literal.h"

class Integers: public Literal<int>
{
   public:
        Integers():Literal <int> (0){
            ;
        }
        Integers(int d): Literal<int>(d){
            ;
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

#endif // INTEGERS_H
