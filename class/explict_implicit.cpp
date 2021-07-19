#include <iostream>

using namespace std;

class Im_plicit
{
    private:
        int m_a;
        char m_c;
    public:
        Im_plicit(const int &a) : m_a(a), m_c('i') {}
        Im_plicit(const char &c) : m_a(0), m_c(c) {}
};

class Em_plicit
{
    private:
        int m_a;
        char m_c;
    public:
        // With explict keyword (Implicit conversion not allowed anymore)
       explicit Em_plicit(const int &a) : m_a(a), m_c('i') {}       
       explicit Em_plicit(const char &c) : m_a(0), m_c(c) {}
};


int main()
{
    // Allow implicit conversion such as auto assign variable type
    Im_plicit im = 10;
    Im_plicit im2 = 'a';

    // Not allow implicit conversion (Make code more clear, better option)
    Em_plicit em(10);
    Em_plicit em2('s');
    // Em_plicit em3 = 10;      // Not allowed anymore
}