#include <iostream>
#include <sstream>


void splitspace(const std::string& str)
{
    std::stringstream ss(str);
    std::string temstr;

    while(ss)
    {
        ss>>temstr;
        std::cout << temstr << std::endl;
    }
    ss.clear();
}

// to_string
std::string double2string(const double& d)
{
    std::string ret;
    std::stringstream ss;
    ss<<d;
    ss>>ret;
    ss.clear();
    return ret;
}

template<class type_out, class type_in>
type_out convert(const type_in& value)
{
    type_out ret;
    std::stringstream ss;
    ss << value;
    ss >> ret;
    ss.clear();
    return ret;
}

int main()
{
    double a = 2.5;

    std::cout << convert<std::string>(a) << std::endl;
}

