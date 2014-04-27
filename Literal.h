#ifndef LITERAL_H
#define LITERAL_H

template < typename T>

class Literal : public Token
{
    private:
        T literal;
    public:
        Literal(T lit)
        {
            setLiteral(T);
        }
        ~Literal()
        {

        }
        void setLiteral(T lit)
        {
            literal = lit;
        }
        T getLit()
        {
            return literal;
        }

        virtual void print()=0;

};

#endif // LITERAL_H
