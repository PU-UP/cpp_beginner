#include <stdlib.h>
#include <time.h>
#include <iostream>

int main()
{
    // fake random number, repeat itself
    std::cout << rand() << std::endl;

    // random number with seed
    int rand_seed = 5;
    srand(rand_seed);
    std::cout << rand() << std::endl;

    // random with time seed, it will be different since time is different
    srand((unsigned)time(NULL));
    std::cout << rand() << std::endl;
    
    // random in some range
    // [a,b)
    int a = 0;
    int b = 2;
    std::cout << (rand()%(a-b)+a) << std::endl;

    // [a,b]
    std::cout << (rand()%(a-b+1)+a) << std::endl;

    //(a,b]
    std::cout << (rand()%(a-b)+a+1) << std::endl;

    //0-1 float
    std::cout << rand()/double(RAND_MAX) << std::endl;
}