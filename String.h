#ifndef STRING_H
#define STRING_H
#include <string>
#include "Literal.h"

class String: public Literal<std::string>
{
    public:
        String():Literal<std::string> (""){
            ;
        }
        String(std::string d): Literal<std::string>(d){
            ;
        }
        void print(){
            std::cout<<literal<<std::endl;
        }


};

#endif // STRING_H
