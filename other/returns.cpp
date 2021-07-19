#include <iostream>
#include <string>
#include <tuple>
#include <array>

// Method 1: tuples
std::pair<std::string,int> func(int a)
{
    int secValue = a;
    std::string firValue = "Hello";

    return std::make_pair(firValue,secValue);
}

// Method 2: consider output element as function parameter
void func2(int a,std::string& outs,int& outi)
{
    outi = a;
    outs = "Hello";
}

// Method 3: struct
struct outstr
{
    std::string s;
    int i;
};

outstr func3(int a)
{
    int secValue = a;
    std::string firValue = "Hello";
    return {firValue,secValue};
}

// array 
std::string* func4(int a)
{
    std::string ret = std::to_string(a);
    return new std::string[2]{"string",ret};
}

std::array<std::string,2> func5(int a)
{
    std::array<std::string,2> results;
    results[0] = std::to_string(a);
    results[1] = "hello";
    return results;
}

int main()
{
    // Tuple
    auto result = func(10);
    std::cout << "First: " << std::get<0>(result) << std::endl;
    std::cout << "Second " << std::get<1>(result) << std::endl;

    // Method 2 
    std::string s1;
    int i1;
    func2(30,s1,i1);

    // struct
    auto result2 = func3(20);
    std::cout << "First: " << result2.s << std::endl;
    std::cout << "Second " << result2.i << std::endl;
}

