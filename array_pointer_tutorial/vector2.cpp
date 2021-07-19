#include <iostream>
#include <vector>

struct Vertex
{
    float x,y,z;
    Vertex(float x,float y, float z)
    :x(x),y(y),z(z){}
    Vertex(const Vertex& other)
    :x(other.x),y(other.y),z(other.z){
        std::cout << "Copied " << std::endl;
    }
};

int main()
{
    std::vector<Vertex> v3;
    // Method 1
    std::cout << "Method 1" << std::endl;
    v3.push_back(Vertex(1,2,3));
    v3.push_back(Vertex(2,5,6));
    v3.push_back(Vertex(3,3,6));
    v3.clear();

    std::cout << "\nMethod 2" << std::endl;
    v3.reserve(3);
    v3.push_back(Vertex(1,2,3));
    v3.push_back(Vertex(2,5,6));
    v3.push_back(Vertex(3,3,6));
    v3.clear();

    std::cout << "\nMethod 3" << std::endl;
    v3.reserve(3);
    v3.emplace_back(1,2,3);
    v3.emplace_back(2,5,6);
    v3.emplace_back(3,3,6);
    v3.clear();

    std::cout << "\nOther test" << std::endl;
    std::vector<Vertex> v4;
    v4.emplace_back(1,5,2);
    v4.emplace_back(1,5,2);
    v4.emplace_back(1,5,2);
}