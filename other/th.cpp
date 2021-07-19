#include<iostream>
#include<thread>

using namespace std;

static bool flag = false;
void do_work()
{
    while(!flag)
    {
        cout << "wait...\n";
    }
}

int main()
{
    thread worker(do_work);
    cin.get();
    flag = true;
    worker.join();
    cout << " finished\n";
    cin.get();
}