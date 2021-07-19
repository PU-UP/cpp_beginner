#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

enum method{
 M1=1,M2,M3,M4
};

void printResult(const std::vector<int>& v,const method& mode)
{
    std::cout << "Method " << mode << ": " << std::endl;
    for(int value:v)
    {
        std::cout << value << " ";
    }
    std::cout << "\n\n";
}

int main()
{
    // Default sort
    std::vector<int> v1 = {5,6,2,0,9};
    std::sort(v1.begin(),v1.end());
    printResult(v1,M1);

    // Use functional
    std::vector<int> v2 = {5,6,2,0,9};
    std::sort(v2.begin(),v2.end(),std::greater<int>());
    printResult(v2,M2);


    // Using lambda, return a bool. True---a in the front, False---b in the front !!!
    std::vector<int> v3 = {5,6,2,0,9};
    std::sort(v3.begin(),v3.end(),[](int a,int b){
            return a>b;
    });
    printResult(v3,M3);

    std::vector<int> v4 = {5,6,2,0,9};
    std::sort(v4.begin(),v4.end(),[](int a,int b){
            if (a==0)
                return false;
            if (b==0)
                return true;
            return a<b;
    });
    printResult(v4,M4);

}