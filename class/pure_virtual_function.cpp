#include <iostream>
#include <string>

using namespace std;

class printable                                 // Interface (pure virtual function) 
{
    public:
        virtual string getClassname() = 0;  
};

class Entity: public printable
{
    public:
        string getClassname() override {return "Entity";}
};

class Player: public Entity
{
    public:
        string getClassname() override {return "Player";}
};

void printfunc(printable* obj)
{
    cout << obj->getClassname() << endl;                    // Interface usage
}

int main()
{
    Entity* e = new Entity();
    Player* p = new Player();
    printfunc(e);
    printfunc(p);


}