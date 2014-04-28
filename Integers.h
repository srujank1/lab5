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
    
};

#endif // INTEGERS_H
