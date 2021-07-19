#include <iostream>
#include <cstring>
#include <string>
int main(){
    using namespace std;

    struct fruit{
        string name;
        double price;
    };
    int a[5];
    cout << "size: " << sizeof (double) <<endl;

    union id{
        int id_num;
        char id_char[10];
    };

    id person_A;
    person_A.id_num = 20023;

    enum manyFruit{apple,banana,orange};
    manyFruit example;
    example = banana;
    int example2 = banana + orange;
    cout << "magic banana: " << example2 << endl;

    char cat[6] = {'a','l','i','c','e','\0'}; // a string
    cout << cat << endl;
    char animal[] = "I am a human";
    cout << animal << endl;
    cout << "sadf " << strlen(animal) << endl;
    char pw[] = "start:12345";
    pw[5] = '\0';
    cout << pw << endl;
    pw[5] = '-';
    cout << pw << endl;
    char name[20];
    //cin.get(name,20).get();
    //cout << name << endl;
    string str1;
    fruit f1 = {"apple",30.6};
    cout << "the price of " << f1.name << "is " << f1.price << endl;
}