#ifndef REAL_H
#define REAL_H
#include "Literal.h"

class Real: public Literal<double>
{
    public:
        Real():Literal <double> (0.0){
            ;
        }
        Real(double d): Literal<double>(d){
            ;
        }
        void print(){
            std::cout<<literal<<std::endl;
        }

};

#endif // REAL_H
