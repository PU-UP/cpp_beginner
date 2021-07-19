//Copy takes time, reduce as much as possible
# include <iostream>
# include <cstring>

// Copy constructor
class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* s)
    {
        m_Size = strlen(s);
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer,s,m_Size);
        m_Buffer[m_Size] =0;
    }
    ~String()
    {
        delete[] m_Buffer;
    }
    String(const String& other):m_Size(other.m_Size) 
    {
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer,other.m_Buffer,m_Size);
    }
    
    char& operator[](const unsigned int& index)
    {
        return m_Buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& os, const String& s);
};

std::ostream& operator<<(std::ostream& os, const String& s)
{
    std::cout << s.m_Buffer;
    return os;
}



int main()
{
    String s = "Jimmy";
    String s2 = s;
    std::cout << s2 << std::endl;
}