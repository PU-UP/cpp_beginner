#include<iostream>

// only int, char not float
enum Example
{
  A,B,C,D  
};

int main()
{
    Example val = D;
    if (val==A)
    {
        std::cout << "Val is A " << std::endl;
    }
}