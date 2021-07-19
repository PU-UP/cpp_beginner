#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    std::chrono::duration<float> duration;
    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        std::cout << duration.count()*1000 << " ms" << std::endl;
    }

};

void Function1()
{
    Timer timer;
    for (int i=0;i<100;i++)
        std::cout << i << std::endl;
    std::cout << "Here is function 1" << std::endl;
}

void Function2()
{
    Timer timer;
    for (int i=0;i>-100;i--)
        std::cout << i << "\n";
    std::cout << "Here is function 2\n";
}



int main()
{
    // std::thread t1(Function1);
    // Function2();
    // t1.join();
    Function2();
    Function1();
}