#ifndef LITERAL_H
#define LITERAL_H
template < typename T>

class Literal : public Token{
{
    private: 
        T literal; 
    public:
        Literal(T lit);
        ~Literal();
        void setLiteral(T lit);
        T getLit();
        
        vritual void print()=0; 
    
};

#endif // LITERAL_H
