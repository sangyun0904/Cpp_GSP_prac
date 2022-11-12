#include <vector>
#include <iostream>
#include <chrono>
#include <thread>
#include <memory>
#include <mutex>

using namespace std;

const int MaxCount = 150000;
const int ThreadCount = 4;

bool IsPrimeNumber(int number)
{
    if (number == 1)
        return false;
    if (number == 2)
        return true;
    for (int i = 2; i < number - 1; i++)
    {
        if ((number % i) == 0)
            return false;
    }
    return true;
}

void PrintNumbers(const vector<int>& primes)
{
    for (int v : primes)
    {
        cout << v << endl;
    }
}

void main()
{
    int num = 1;
    recursive_mutex num_mutex;

    vector<int> primes;
}