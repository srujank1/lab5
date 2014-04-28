#ifndef STRING_H
#define STRING_H
#include "Literal.h"

class String: public Literal<string>
{
    public:
        String():Literal<string> ("")
        {

        }
        String(string d): Literal<string>(d){

        }
        void print()
        {

        }

};

#endif // STRING_H
