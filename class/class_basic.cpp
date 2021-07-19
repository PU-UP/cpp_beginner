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

class Player3: public Entity
{

};

int main()
{
    Entity* e = new Entity();
    Player* p = new Player();
    cout << e->getClassname()<<endl;
    cout << p->getClassname()<<endl;;
    Player3* p3 = new Player3();
    p3->getClassname();

}