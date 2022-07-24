#include <iostream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;

void func3(){
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

void func2(){
    func3();
}

void func1(){
    func2();
}

int main()
{
    func1();
}
