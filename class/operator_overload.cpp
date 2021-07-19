#include <iostream>
#include <string>


struct Vector2d
{
    float x,y;
    Vector2d(float x, float y ): x(x),y(y){}

    Vector2d operator+(const Vector2d& other) const
    {
        return(Vector2d(x+other.x,y+other.y));
    }
    Vector2d operator*(const Vector2d& other) const
    {
        return(Vector2d(x*other.x,y*other.y));
    } 

    bool operator==(const Vector2d& other)
    {
        return (x ==other.x&&y==other.y);
    }
    bool operator!=(const Vector2d& other)
    {
        return !(*this==other);
    }
};

std::ostream& operator<<(std::ostream& stream,const Vector2d& other)
{
    stream << other.x <<", "<<other.y;
    return stream;
}



int main()
{
    Vector2d pos(2.0f,5.0f);
    Vector2d pos2(5.5f,3.4f);
    Vector2d res = pos*pos2;
    std::cout << res <<std::endl;
    std::cout << "res is not equals to pos: "<<(res!=pos) << std::endl;
    
}